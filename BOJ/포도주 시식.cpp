//BOJ 2156
// https://www.acmicpc.net/problem/2156
#include <bits/stdc++.h>
using namespace std;

long long a[10001];
long long d[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    //초기값 설정
    d[1]=a[1];
    d[2]=a[1] + a[2];

    for(int i=3; i<=n; i++)
    {
        d[i] =d[i-1]; //0번 연속해서 마신 포도주
        if(d[i] < d[i-2] + a[i]) d[i] = d[i-2] + a[i]; //1번 연속해서 마신 포도주
        if(d[i] < d[i-3] + a[i] + a[i-1]) d[i] = d[i-3] + a[i] + a[i-1]; //2번 연속해서 마신 포도주
    }
    cout<<d[n]<<'\n';
    return 0;
    
}