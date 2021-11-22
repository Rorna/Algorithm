//BOJ 2193
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    long long d[100][2] = {};
    d[1][0] = 0;
    d[1][1] = 1;

    for(int i=2; i<=n; i++)
    {
        d[i][0] = d[i-1][0] + d[i-1][1]; //끝자리 0일 때 1,0올 수 있음
        d[i][1] = d[i-1][0]; //끝자리 1일 때 0만 올 수 있음
    }
    cout<<d[n][0] + d[n][1];
    return 0;
}
//http://melonicedlatte.com/algorithm/2018/11/19/233532.html