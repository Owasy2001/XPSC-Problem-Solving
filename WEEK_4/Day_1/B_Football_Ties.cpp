#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<a%3<<endl;
    else
    cout<<b%3<<endl;
   
    }
    
    return 0; 
}