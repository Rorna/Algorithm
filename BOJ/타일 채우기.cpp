// BOJ 2133
// https://www.acmicpc.net/problem/2133
#include <bits/stdc++.h>
using namespace std;
long long d[31];

int main()
{
    int n;
    d[0] = 1;
    for(int i=2; i<=n; i+=2)
    {
        d[i] = d[i-2]*3; //초기값
        for (int j=i-4; j>=0; j-=2) d[i] += d[j]*2;
    }
    cout<<d[n]<<'\n';
    return 0;
}