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
        string s,s1;
        cin>>s>>s1;
        bool ans=true;

        for(int i=0;i<n;i++)
        {
            if((s[i]== 'G' || s[i]== 'B') && (s1[i]== 'G' || s1[i]== 'B'))
            {
                continue;
            }
            if(s[i]!=s1[i])
            {
                ans=false;
                break;
            }
        }
         if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}