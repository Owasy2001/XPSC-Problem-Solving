#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    while(n--)
    {
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;
    }
    while(m--)
    {
        string a,ib;
        cin>>a>>ib;
        string ip = ib.substr(0, ib.size() - 1);

        auto it=mp.find(ip);
        if(it!=mp.end())
        {
            cout<<a<<" "<<ib<<" #"<<it->second<<endl;
        }
    }
    return 0;
}