#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int ans=INT_MAX;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=m;j++)
	        {
	            int v=(2*(i+j));
	            int dif=abs(v-k);
	            ans=min(ans,dif);
	        }
	    }
	    cout<<ans<<endl;
	}

}
