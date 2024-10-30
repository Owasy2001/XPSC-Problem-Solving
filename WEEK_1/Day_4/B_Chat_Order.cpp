#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    
    
    string a[q];
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
    }
    set<string>s;
    for(int i=q-1;i>=0;i--)
    {
        if(s.count(a[i])>0)continue;
        cout<<a[i]<<endl;
        s.insert(a[i]);
        
    }

    return 0;
}