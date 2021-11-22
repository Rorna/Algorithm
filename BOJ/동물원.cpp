//BOJ 1309
// https://www.acmicpc.net/problem/1309

#include <bits/stdc++.h>
using namespace std;

const int mod = 9901;
int d[100001][3]; //n번째 줄, 0~2 -> 0:n번 줄에 배치 안함 1: n번 줄의 왼쪽에만 배치 2: n번 줄의 오른쪽에만 배치

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    d[0][0] = 1; //초기값
    for(int i=1; i<=n; i++) //% 9901 -> 오버플로우 막기위해 두번해줌
    {
        d[i][0] = (d[i-1][0] + d[i-1][1] + d[i-1][2])% 9901;
        d[i][1] = (d[i-1][0] + d[i-1][2])% 9901;
        d[i][2] = (d[i-1][0] + d[i-1][1])% 9901;
    }
    int ans = d[n][0]+ d[n][1]+d[n][2];
    //ans %= mod;
    cout<<ans%mod<<'\n';
    return 0;
}