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
        string s;
        cin>>s;
        int c=0;
        if(s.size()>1)
        {
            for(int i=0;i<n;i++)
        {
            if (s[i]=='1')
            {
                c++;
                while (i<n && s[i]=='1')
                {
                    i++;
                }
                
            }
           
        }
        cout<<c<<endl;
        
    }
    else cout<<0<<endl;

        }
        
    return 0;
}