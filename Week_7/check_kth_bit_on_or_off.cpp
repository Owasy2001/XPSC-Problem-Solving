#include<bits/stdc++.h>
using namespace std;
int check_kth_bit_on_or_off(int n,int k)
{
    return ( n >> k ) & 1;
}
void print_bit_on_or_off(int n)
{
    for(int k=30;k>=0;k--)
    {
        if(check_kth_bit_on_or_off(n,k))
        {
            cout<<1<<" ";
        }
        else{
            cout<< 0<<" ";
        }
    }
}

int turn_on_kth_bit(int n,int k)
{
   return (n|1<<k) ;
}
int turn_off_kth_bit(int n,int k)
{
   return (n&(~(1<<k))) ;
}

int toggle_kth_bit(int n,int k )
{
    return(n^(1<<k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout<<check_kth_bit_on_or_off(45,4)<<endl;
    print_bit_on_or_off(45);
    cout<<endl;
    cout<<turn_on_kth_bit(45,4);
    return 0;
}