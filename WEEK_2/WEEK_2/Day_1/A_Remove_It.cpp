#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        if(j!=x)
        {
            v.push_back(j);
        }
    }
    for( auto val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}