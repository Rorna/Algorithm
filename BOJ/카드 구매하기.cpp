//BOJ 11052
#include <bits/stdc++.h>
using namespace std;

int d[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> a(n+1);

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            d[i] = max(d[i],d[i-j]+a[j]);
    }
    cout<<d[n];
    return 0;
}