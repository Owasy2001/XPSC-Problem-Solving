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
    int n;
    cin>>n;
    int a[n];
    int b[n];
    map<int,int>map;
    vector<int>one;
    vector<int>zero;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        map[a[i]]=i;
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero.push_back(a[i]);
            
        }
        else one.push_back(a[i]);
    }
    sort(zero.begin(),zero.end(),greater<int>());
    sort(one.begin(),one.end(),greater<int>());
    sort(a,a+n);
    reverse(a,a+n);
   
    int i;

    for( i=0;i<one.size();i++)
    {
        b[map[one[i]]]=a[i];
    }
    for(int j=0;j<zero.size();j++)
    {
        b[map[zero[j]]]=a[i];
        i++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    }
    
    
    
    return 0;
}