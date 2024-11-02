#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    
    int ar[n];
    long long sum=0;
    int min_odd = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
       if (ar[i] % 2 != 0) 
       {
        min_odd = min(min_odd, ar[i]);
       }
        
        
    }
    
    if(sum%2!=0)
    {
        sum=sum-min_odd;

    }
    
        cout<<sum;
  
    

    return 0;
}