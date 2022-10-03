#include<bits/stdc++.h>
#define mod 1000000000 // 10^9 mod 
#define ull unsigned long long // for long integers
using namespace std;

ull ncr[1000][1000]; // matrix of 10^3 and 10^3
ull nCr(ull n, ull r) 
{
    if(r == 0 || n == r) // 10c0 = 1 10c10= 
        return ncr[n][r] = 1;
    if(r == 1)
        return ncr[n][r] = n;
    if(ncr[n][r])
        return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r) + nCr(n-1,r-1))%mod;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        for(ull i = 0; i <= n; i++)
        {
            cout<<nCr(n,i)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
