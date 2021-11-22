// BOJ 15657
// https://www.acmicpc.net/problem/15657
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
bool check[10];

void dfs(int index, int start, int n, int m)
{
    if(index==m) //출력
    {
        for(int i=0; i<m; i++)
        {
            cout<<num[a[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=start; i<n; i++)
    {
        //if(check[i]==true) continue;
        check[i]=true; a[index]=i;
        dfs(index+1, i, n, m);
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
    dfs(0, 0, n, m);
    return 0;
}