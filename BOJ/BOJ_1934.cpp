#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,cnt;
    cin>>cnt;

    while(cnt--)
    {
        cin>>n>>m;
        cout<<(n*m)/gcd(n,m)<<'\n';
    }
    return 0;
}