//BOJ 11057
// https://www.acmicpc.net/problem/1309
#include <bits/stdc++.h>
using namespace std;
const long long mod = 10007LL;

int d[1001][10]; //d[i][j] -> 길이가 i이고 끝자리 수가 j인 오르막수의 수
//점화식: d[i][j] += d[i-1][k], 0<=k<=j
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0; i<=9; i++) d[1][i] = 1; //길이가 1인 수들은 모두 오름차수

    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<=9; j++)
        {
            for(int k=0; k<=j; k++)
            {
                d[i][j] += d[i-1][k];
                d[i][j] %= mod;
            }
        }
    }

    long long ans =0;
    for(int i=0; i<10; i++) ans+= d[n][i]; //길이 n이고 끝자리수 0~9까지의 오름차수의 개수 모두 더함
    ans %= mod;

    cout<<ans<<'\n';
    return 0;

}
