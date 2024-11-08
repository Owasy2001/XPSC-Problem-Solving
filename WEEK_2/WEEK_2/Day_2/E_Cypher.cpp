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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            int v;
            cin>>v;
            for(int j=0;j<v;j++)
            {
                char c;
                cin>>c;
                  
                    if( c=='U')
                    {
                       ar[i] = (ar[i] - 1 + 10) % 10; 
                    }
                     if(c=='D')
                    {
                        ar[i] = (ar[i] + 1) % 10;
                    }
            }
            
        }
        
        for(auto val:ar)
            {
                cout<<val<<" ";
            }
            cout<<endl;
    }
    return 0;
}