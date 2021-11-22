#include <bits/stdc++.h>
using namespace std;

int d[11];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    d[0]=1;
    for(int i=1; i<=10; i++)
    {
        if(i-1>=0) d[i]+=d[i-1];
        if(i-2>=0) d[i]+=d[i-2];
        if(i-3>=0) d[i]+=d[i-3];
    }
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        cout<<d[m]<<'\n';
    }
    return 0;
}