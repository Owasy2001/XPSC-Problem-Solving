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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
         if (n <= 3) {
            cout << 0 << endl;
            continue;
        }

        int case1 = v[n - 1] - v[2];     
        int case2 = v[n - 3] - v[0];     
        int case3 = v[n - 2] - v[1];
        int result = min({case1, case2, case3});
        cout<<result<<endl; 

    }
    return 0;
}