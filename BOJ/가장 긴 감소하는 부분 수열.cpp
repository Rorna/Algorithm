// BOJ 11722
// https://www.acmicpc.net/problem/11722
#include <bits/stdc++.h>
using namespace std;
int d[1001]; //a[i]에서 끝나는 가장 긴 감소하는 부분 수열의 길이
int a[1001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
    {
        d[i]=1; //초기값 설정 어느 위치던 처음 값은 1
        for(int j=1; j<=i; j++)
        {
            if(a[j]> a[i] && d[i] <d[j] + 1) //a[j]가 a[i]보다 뒤에 앞에 있음
            {
                d[i] = d[j] +1;
            }
        }
    }
    //가장 긴 부분 수열 찾는 연산
    int ans = d[1];
    for(int i=2; i<=n; i++)
    {
        if(ans<d[i]) ans = d[i];
    }
    cout<<ans<<'\n';
    return 0;

}