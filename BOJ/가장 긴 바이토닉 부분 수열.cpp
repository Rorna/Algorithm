// BOJ 11054
// https://www.acmicpc.net/problem/11054
//바이토닉은 증가 부분 수열과 감소 부분 수열을 합치면 됨
#include <bits/stdc++.h>
using namespace std;

int a[1001];
int d[1001]; //i번째에서 끝나는 증가하는 부분 수열
int d2[1001]; //i번째에서 끝나는 감소하는 부분 수열

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    //증가
    for(int i=0; i<n; i++)
    {
        d[i] = 1; //초기값
        for(int j=0; j<i; j++)
        {
            if(a[j]<a[i] && d[j] +1 > d[i]) d[i] = d[j] +1;
        }
    }
    //감소
    for(int i=n-1; i>=0; i--) //거꾸로
    {
        d2[i] = 1;
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j] && d2[j]+1 > d2[i]) d2[i] =d2[j] +1;
        }
    }

    //합침
    int ans= 0;
    for(int i=0; i<n; i++)
    {
        if(ans<d[i]+d2[i]-1) ans = d[i]+d2[i]-1;
    }

    cout<<ans<<'\n';
    return 0;
}