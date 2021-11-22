//BOJ 10844
#include <bits/stdc++.h>
using namespace std;

long long d[101][10];
long long mod = 1000000000;

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=9; i++) //1-9까지
    {
        d[1][i] = 1;
    }
    for (int i=2; i<=n; i++) 
    {
        for (int j=0; j<=9; j++) 
        {
            d[i][j] = 0;
            if (j-1 >= 0)//예외처리, 0이면 -1이 나오면 안됨 
            {
                d[i][j] += d[i-1][j-1];
            }
            if (j+1 <= 9)//예외처리, 9이면 +1을 하면 자릿수가 올라가므로 안됨
            {
                d[i][j] += d[i-1][j+1];
            }
            d[i][j] %= mod;
        }
    }
    long long ans = 0;
    for (int i=0; i<=9; i++) 
    {
        ans += d[n][i];
    }
    ans %= mod;
    cout << ans << '\n';
    return 0;
}