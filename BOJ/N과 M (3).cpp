// BOJ 15651
// https://www.acmicpc.net/problem/15651
// 여기선 중복 허용이라 check배열이 필요 없음
#include <bits/stdc++.h>
using namespace std;
int a[10];

void go(int index, int n, int m)
{
    if(index==m) //탈출조건
    {
        for(int i=0; i<m; i++) //출력
        {
            cout<<a[i];
            if(i!=m-1) cout<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=1; i<=n; i++)
    {
        a[index]=i;
        go(index+1, n, m);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    go(0, n, m);
    return 0;
}