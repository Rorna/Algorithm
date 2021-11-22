//BOJ 16194
#include <bits/stdc++.h>
using namespace std;

//int d[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> a(n+1);
    vector<int> d(n+1);
    d[0]=0;
    for(int i=1; i<=n; i++) d[i]=-1; //초기화
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            //d[i] == -1->이거 안넣으면 -1이 변경되지 않아서 최소값 계속 -1로 나옴
            if(d[i] == -1 ||d[i]> d[n-i]+a[i]) d[i]=d[i-j]+a[j];
        }
    }
    cout<<d[n];
    return 0;
}