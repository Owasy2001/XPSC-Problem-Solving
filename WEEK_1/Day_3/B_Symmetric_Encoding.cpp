#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    
    while(q--)
    {
    map<char,char>mp;
    set<char>s;
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        for(int i=0;i<n;i++)
        {
            s.insert(s1[i]);
        }
        auto rit =s.rbegin();
        for(auto it=s.begin();it!=s.end();it++)
        {
            mp[*it]=*rit;
            ++rit;
        }
        for(int i=0;i<n;i++)
        {
            cout<<mp[s1[i]];
        }

    cout<<endl;
        
        
    }
    return 0;
}