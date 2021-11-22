//BOJ 9095
#include <bits/stdc++.h>
using namespace std;
//o+o+...+o =N일 때 마지막 수에 주목, 마지막에 올수 있는 수는 n-1, n-2, n-3
int d[11];//n을 1 2 3의 합으로 나타내는 방법의 수
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
        for(int j=4; j<=n; j++)
        {
            d[j]=d[j-1]+d[j-2]+d[j-3];//점화식
        }
        cout<<d[n]<<'\n';
    }
    return 0;
}