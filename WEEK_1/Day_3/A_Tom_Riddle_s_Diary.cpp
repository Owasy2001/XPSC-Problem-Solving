#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    set<string>st;
    while(n--)
    {
        string s;
        cin>>s;
        if(st.find(s)!=st.end())
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            st.insert(s);
            cout<<"NO"<<endl;
        }
    }
    return 0;
}