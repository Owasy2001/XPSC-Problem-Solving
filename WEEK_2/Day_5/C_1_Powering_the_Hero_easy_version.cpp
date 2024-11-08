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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        long long ans=0;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                if(pq.empty()) continue;
                ans+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}