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
        unordered_map<int,int>ms;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ms[x]++;
        }
        int max_freq=0;
        for(auto val:ms)
        {
            max_freq=max(max_freq,val.second);
        }
        if(max_freq<=n/2)
        {
            cout<<n%2<<endl;
        }
        else 
        {
            cout<<2 * max_freq - n << endl;
        }
    }
    
    return 0;
}