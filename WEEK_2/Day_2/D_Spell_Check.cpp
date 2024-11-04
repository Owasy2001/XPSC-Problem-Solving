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
        int n;
        cin>>n;
        string s1="Timur";
        string s;
        cin>>s;
       int c=0;
       if(n==5)
       {
        sort(s1.begin(),s1.end());
        sort(s.begin(),s.end());  
        
        if(s==s1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       }
       else cout<<"NO"<<endl;

        
    }
    
    return 0;
}