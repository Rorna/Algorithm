//BOJ 15988
// https://www.acmicpc.net/problem/15988

#include <bits/stdc++.h>
using namespace std;
long long d[1000001];
const long long mod = 1000000009LL; //const랑 뒤에 LL 안붙이면 시간 초과 뜸

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    d[1]=1;
    d[2]=2;
    d[3]=4;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        for(int j=4; j<=1000000; j++)
        {
            d[j]=d[j-1]+d[j-2]+d[j-3];//점화식
            d[j] %= mod;
        }
        cout<<d[n]<<'\n';
    } 
    return 0;
}