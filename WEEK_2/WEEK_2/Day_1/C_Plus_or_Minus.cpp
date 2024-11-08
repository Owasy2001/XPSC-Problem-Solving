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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+"<<endl;
        }
        else if(a-b==c)
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}