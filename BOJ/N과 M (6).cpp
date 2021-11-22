// BOJ 15655
// https://www.acmicpc.net/problem/15655
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
bool check[10];

void go(int index, int start, int n, int m) //start는 index 다음 놈, 범위는 index~n까지가 아닌 start~ n까지가 됨
{
    if(index==m) //출력
    {
        for(int i=0; i<m; i++)
        {
            cout<<num[a[i]];
            cout<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=start; i<n; i++) //i<=n이 되면 다음 수는 아직 안채워진, 즉 0이나옴
    {
        if(check[i]) continue;
        check[i]=true; a[index]=i;
        go(index+1, i+1, n, m);
        check[i]=false;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>num[i];
    sort(num, num+n);
    go(0, 0, n, m);
    return 0;
}