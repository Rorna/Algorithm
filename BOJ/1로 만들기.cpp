//BOJ 1463
#include <bits/stdc++.h>
using namespace std;

int d[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    d[1]=0;
    int n;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        d[i]=d[i-1]+1; //일단 -1 수행
        if(i%2 == 0) d[i] = min(d[i], d[i/2]+1);// -1 뺀놈이랑 /2한놈 중 작은놈 삽입
        if(i%3 == 0) d[i] = min(d[i], d[i/3]+1);// -1 뺀놈이랑 /3한놈 중 작은놈 삽입
    }
    cout<<d[n];
    return 0;
}