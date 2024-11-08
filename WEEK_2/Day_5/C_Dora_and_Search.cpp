#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        int left=0;
        int right=n-1;
        while(1)
        {
        int mx=*s.begin();
        int mn=*s.rbegin();
        int f=0;
        if(mn==v[left] || mx==v[left])
        {
            s.erase(v[left]);
            left++;
            f=1;
        }

        if(mx==v[right] || mn==v[right])
        {
            s.erase(v[right]);
            right--;
            f=1;
        }
        if(f==0 ||left>right)break;

        }
        if(left>right) cout<<-1;
        else cout<<left+1<<" "<<right+1;
        
        cout<<endl;
    }
    return 0;
}