//BOJ 9465
// https://www.acmicpc.net/problem/9465
#include <bits/stdc++.h>
using namespace std;

long long a[100001][2]; //[100000][1];
long long d[100001][3]; //d[i][j]: 2xi에서 얻을 수 있는 최대 점수, i번 열에서 뜯는 스티커는 j. j는 0,1,2로 각각 뜯지 않음, 윗쪽 뜯음, 아랫쪽 뜯음을 의미

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        //순서대로 행단위 채우기
        for(int i=1; i<=n; i++) cin>>a[i][0];
        for(int i=1; i<=n; i++) cin>>a[i][1];

        d[0][0] = d[0][1] = d[0][2] = 0; //초기값 설정

        for(int i=1; i<=n; i++)
        {
            d[i][0] = max({d[i-1][0], d[i-1][1], d[i-1][2]}); //세개 이상 인자로 전달하려면 {} 써서 묶어야함
            d[i][1] = max(d[i-1][0], d[i-1][2]) +a[i][0];//둘중 큰놈 더하기 남은 놈(a[i][0]), d[i][1]에서 1이므로 윗쪽을 뜯음 그래서 a[i][0](윗쪽) 더해야함
            d[i][2] = max(d[i-1][0], d[i-1][1]) +a[i][1];//둘중 큰놈 더하기 남은 놈(a[i][1]), 
        }

        long long ans = max({d[n][0], d[n][1], d[n][2]}); //여기도 마찬가지
        cout<<ans<<'\n';
    }
    return 0;
}