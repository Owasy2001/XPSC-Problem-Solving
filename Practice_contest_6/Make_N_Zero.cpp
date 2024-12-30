#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(t%3==0 || t%4==0|| (n %7 == 0))
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
