#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    long long ans=0;
    multiset<int>ml;
    while(r<n)
    {
        ml.insert(a[r]);
        int  mx=*ml.rbegin(), mn=*ml.begin();
        if(mx-mn<=k)
        {
            ans+=(r-l+1);
        }
        else{
            while(l<=r)
            {
                mx=*ml.rbegin(), mn=*ml.begin();
                if(mx-mn<=k)break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            mx=*ml.rbegin(), mn=*ml.begin();
            if(mx-mn<=k)
        {
            ans+=(r-l+1);
        }
        }
        r++;

    }
    cout<<ans<<endl;
    return 0;
}