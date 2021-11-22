#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int a[3], b[3];
    cin>>n>>m;

    for(int i=0; i<3; i++)
    {
        a[i]=n%10;
        b[i]=m%10;
        m/=10;
        n/=10;
    }
    
    n=100*a[0]+10*a[1]+a[2];
    m=100*b[0]+10*b[1]+b[2];

    if(n>m) cout<<n;
    else cout<<m;

    return 0;

}