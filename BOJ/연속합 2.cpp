//BOJ 13398
// https://www.acmicpc.net/problem/13398
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);// 배열
    vector<int> d(n);// i번째 수로 끝나는 가장 큰 연속합
    vector<int> dr(n); //i번째 수에서 시작하는 최대 연속합

    for(int i=0; i<n; i++) cin>>a[i];//배열 채우기

    for(int i=0; i<n; i++)
    {
        d[i]=a[i]; //연속하지 않은 경우
        if(i==0) continue; // 0번째수는 앞의 수가 없으니 그냥 건너뜀
        if(d[i-1]+a[i] > d[i]) //연속하는 경우가 연속하지 않은 경우보다 클 경우 
            d[i] = d[i-1]+a[i];
    }

    for(int i=n-1; i>=0; i--) //반대방향
    {
        dr[i] = a[i]; //연속하지 않은 경우
        if(i == n-1) continue;
        if(dr[i] < dr[i+1] +a[i]) //앞의 수와 뒤의 수가 연속하는지
            dr[i] = dr[i+1] + a[i];
    }

    //수를 제거하지 않아도 되니 일단 그거를 상정하고 ans 구함
    int ans = d[0];
    for(int i=1; i<n; i++)
    {
        if(ans<d[i]) ans = d[i];
    }

    //수를 제거했을 때, ans와 비교
    for(int i=1; i<n-1; i++) //첫번째수부터 n-2번째 수까지 각각의 수를 제거, 모든 정답을 비교, 큰수로 바꿈
    {
        if(ans < d[i-1] + dr[i+1])
            ans = d[i-1] + dr[i+1];
    }

    cout<<ans<<'\n';
    return 0;
}