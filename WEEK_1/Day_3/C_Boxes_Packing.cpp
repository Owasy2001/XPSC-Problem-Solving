#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int max_v=INT_MIN;
    int max_k;
    for(auto it :mp)
    {
        if(it.second>max_v)
        {
            max_v=it.second;
            max_k=it.first;
        }
    }
    cout<<max_v<<endl;
    return 0;
}