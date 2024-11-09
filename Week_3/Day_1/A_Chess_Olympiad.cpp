#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin>>x>>y>>z;
    double point = x*1.0+y*.5;
    int game =4;
    int rgame = game-(x+y+z);
    double opp=(z*1.0)+(y*.5);

    point+= rgame*1.0;

    if(point>opp) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}