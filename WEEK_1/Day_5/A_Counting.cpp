#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
   
    if(b>a)
    {
         int ans=(b-a)+1;
         cout<<ans;
    }
    else cout<<0;
    return 0;
}