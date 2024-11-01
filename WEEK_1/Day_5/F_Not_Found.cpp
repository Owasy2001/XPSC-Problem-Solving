#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    
    set<char>st;
    char c;
    int found =false;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    for(auto it='a';it<='z';it++)
    {
        if(st.find(it)==st.end())

        {
            found=true;
            c=it;
            break;
        }
        
        
    }
    if(found) cout<<c<<endl;
    else cout<<"None"<<endl;
    return 0;
}