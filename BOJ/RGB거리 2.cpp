//BOJ 17404
// https://www.acmicpc.net/problem/17404

#include <bits/stdc++.h>
using namespace std;
int d[1001][3];
int a[1001][3];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=1; i<=n; i++) 
    {
        for(int j=0; j<3; j++) cin>>a[i][j];
    }

    int ans = 1000*1000+1;

    for(int k=0; k<=2; k++) //1번색의 집 고정 1번 집의 색=k
    {
        for(int j=0; j<=2; j++)
        {
            //1번 집의 색이 k일때
            if(j==k) d[1][j] = a[1][j];
            else d[1][j] = 1000*1000+1;
        }
    
        for(int i=2; i<=n; i++)
        {
            d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
            d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
            d[i][2] = min(d[i-1][0], d[i-1][1]) + a[i][2];
        }

        for(int j=0; j<=2; j++) //j는 n번집의 색
        {
            if(j==k) continue;
            ans = min(ans, d[n][j]);
        }
    }
    cout<<ans<<'\n';
    return 0;
}