#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    
    for(int i=1;a*i<=c;i++)
    {
        
        
            sum=sum+b;
        
    }
    cout<<sum;
    return 0;
}