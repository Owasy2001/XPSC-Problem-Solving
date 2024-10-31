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
        string s;
        cin>>s;
     
        
        
            bool found = false;
            for (int i = 0; i < s.size()-1; i++) 
            {
                cout<<s[i];
                if (!found && s[i] == s[i + 1]) 
                {
                    if(s[i]!='z')cout<<char(s[i]+1);
                    else cout<<'a';
                    found=true;
                }
            }
             
            if(found)cout<<s[s.size()-1]<<endl;
            if(!found && s[s.size()-1]!='z')cout<<s[s.size()-1]<<char(s[s.size()-1]+1)<<endl;
            else if(!found)cout<<s[s.size()-1]<<'a'<<endl;
        }
   
    

     
        
    return 0;
}