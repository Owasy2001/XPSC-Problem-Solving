#include <bits/stdc++.h>
using namespace std;

int main() {
int q;
cin>>q;
while(q--)
{
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans += max(0LL, v[i] - i);
    }
    cout<<ans<<endl;
}

}
