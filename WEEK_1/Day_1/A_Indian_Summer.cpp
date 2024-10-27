#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    cin.ignore();
    set<string>st;
    while(t--)
    {
        string s;
        getline(cin,s);
        
        st.insert(s);
    }
    int c=0;
    for(auto it=st.begin();it!=st.end();it++)
    {
        c++;
    }
    cout<<c <<endl;

    return 0;
}