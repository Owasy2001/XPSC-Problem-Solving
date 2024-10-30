#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    map<string,int>mp;
    while(q--)
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]=1;
        }
        else
        {
            int val=mp[s];
            string s1=s+to_string(val);

            cout<<s1<<endl;
            mp[s]=val+1;

        }
        
    }
    
   
    return 0;
}