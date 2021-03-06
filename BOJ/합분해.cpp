//BOJ 2225
#include <bits/stdc++.h>
using namespace std;
long long d[201][201];
//D[K][L] = D[K-1][N-L]

long long mod=1000000000;

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;
    d[0][0]=1LL;

    for(int i=1; i<=k; i++)
    {
        for(int j=0; j<=n; j++)
        {
            for(int l=0; l<=j; l++)
            {
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }
    cout<<d[k][n];
    return 0;

}