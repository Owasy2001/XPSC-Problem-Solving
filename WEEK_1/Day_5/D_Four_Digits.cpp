#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<char>v;
    for(int i=0;i<4;i++)
    {
        int a=n%10;
        n=n/10;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());
    for(int val:v)
    {
        cout<<val;
    }
    
    return 0;
}