#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

    int left =0;
    int right=n-1;
    
    while(left<n && s[left]=='W')
    {
        left++;
    }

    while(right>=0 && s[right]=='W')
    {
        right--;
    }

    int count=right-left+1;
    cout<<count<<endl;
    }
    
    

    return 0;
}