// BOJ 15656
// https://www.acmicpc.net/problem/15656
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
bool check[10];

void dfs(int index, int n, int m)
{
    if(index==m)
    {
        for(int i=0; i<m; i++)
        {
            cout<<num[a[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=0; i<n; i++) //왜 범위가? -> n개의 수 중에서 뽑는것이므로 n을 넘으면 안됨
    {
        //if(check[i]) continue; 중복 여부
        check[i]=true; a[index]=i;
        dfs(index+1, n, m);
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
    dfs(0, n, m);
    return 0;
}