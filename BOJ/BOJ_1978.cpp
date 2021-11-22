#include <bits/stdc++.h>
using namespace std;

bool prime(int n) //소수
{
    if(n<2) return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(prime(m)) cnt++;
    }
    cout<<cnt;
    return 0;
}