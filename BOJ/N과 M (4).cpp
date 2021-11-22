// BOJ 15652
// https://www.acmicpc.net/problem/15652
// 중복허용
#include <bits/stdc++.h>
using namespace std;
int a[10];

void go(int index, int start, int n, int m)
{
    if(index==m)
    {
        for(int i=0; i<m; i++)
        {
            cout<<a[i];
            if(i!=m-1) cout<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=start; i<=n; i++)
    {
        a[index]=i;
        go(index+1, i, n, m); //중복허용하므로 i+1이 아닌 i로 해야함, 그래야 루프마다 처음부터 다시 시작하지
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    go(0, 1, n, m);
    return 0;
}