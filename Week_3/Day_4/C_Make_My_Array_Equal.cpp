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
        //map<int,set<int> > mp;
       

        int n;
        cin>>n;
         vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(int i=0;i<=n/2;i++)
        {
            for(int j=n-1;j>n/2;j--)
            {
                if(v[i]!=v[j])
                {
                    v[i]=v[i]+v[j];
                    break;
                }
            }

        }
        int a=v[0];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==a)
            {
                c++;
            }
            cout<<v[i]<<" ";
        }
        // if(v.size()==c) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        
        
    }
    return 0;
}