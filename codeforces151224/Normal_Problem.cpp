#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        string s,b="";
        cin>>s;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='p')b+='q';
            else if(s[i]=='q')b+='p';
            else b+='w';
        }
        cout<<b<<endl;
    }

    return 0;
}