#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long row1=min(a,m);
        long long row2=min(b,m);

        long long r=m-row1;
        long long g=m-row2;
        long long v = min(c, r + g);
        long long ans = row1 + row2 + v;
        cout<<ans<<endl;

    }

    return 0;
}