#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, max=1;
    cin>>n;
    if(n==0) max=1;
    else for(int i=1; i<=n; i++) max*=i;
    cout<<max;
}