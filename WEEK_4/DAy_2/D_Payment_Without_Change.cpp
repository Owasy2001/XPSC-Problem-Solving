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
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        int max_a=min(a,s/n)*n;
        int max_b=s-max_a;
        if(max_b<=b)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}