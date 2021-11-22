// BOJ 15650
// https://www.acmicpc.net/problem/15650
#include <bits/stdc++.h>
using namespace std;
bool c[10]; int a[10];

void go(int index, int start, int n, int m)
{
    if(index==m) //출력함수
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
        if(c[i]) continue;
        c[i]=true; a[index]=i;
        go(index+1, i+1, n, m); //i+1이 중요, 다음에 올 수는 i+1~N 사이에서 안쓰인 숫자이다.
        c[i]=false; //초기화
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    go(0, 1, n, m); //index는 0, start는 1부터
    return 0;
}