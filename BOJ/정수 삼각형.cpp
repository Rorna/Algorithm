// BOJ 1932
// https://www.acmicpc.net/problem/1932
#include<bits/stdc++.h>
using namespace std;

long long a[501][501];
long long d[501][501]; //d[i][j] = i행 j열이 선택되었을 때 최대합

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cin>>a[i][j];
        }
    }
    d[0][0]=a[0][0]; //초기값 설정
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(d[i][j] < d[i-1][j]+a[i][j]) d[i][j] = d[i-1][j]+a[i][j]; //오른쪽에서 오는놈
            if(d[i][j] < d[i-1][j-1]+a[i][j]) d[i][j] = d[i-1][j-1]+a[i][j]; //왼쪽에서 오는 놈
        }
    }
    //ans는 삼각형의 제일 마지막 줄에서 최대합이 되는놈 찾음
    int ans = d[n-1][0];
    for (int i=0; i<n; i++) 
    {
        if (ans < d[n-1][i]) ans = d[n-1][i]; //ans 바로 옆 놈과 비교
    }
    cout << ans << '\n';
    return 0;

}