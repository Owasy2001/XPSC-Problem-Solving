#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    int ans=0;
	     bool b=true;
	    while(b)
	    {
	        b=false;
	        for(int i=0;i<n-1;i++)
	        {
	            if(v[i]<v[i+1])
	            {
	                v[i]=v[i+1];
	                b=true;
	            }
	        }
	         if (b) ans++;
	    }
	    cout<<ans<<endl;
	}

}
