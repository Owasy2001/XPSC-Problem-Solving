#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;
    int found=false;
    for(int i=1;i<=1000;i++)
    {
        int v=c*i;
        if(a<=v && v<=b)
        {
            cout<<v<<endl;
            found=true;
            break;
        }

    }
    
    if(!found) cout<<-1;
    
    return 0;
}