#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
    {
       cin>>v[i];
    }
    
    

    long long sum=0;
    long long sum1=0;

    int left=0;
    int right=n-1;


    for(long long i=0;i<n;i++)
    {
        long long s;
        if(v[left]>v[right])
        {
            s=v[left];
            left++;
        }
        else{
            s=v[right];
            right--;
        }
        if(i%2==0)sum=sum+s;
        
        else sum1=sum1+s;
    }
    cout<<sum << " " <<sum1;
    return 0;
}