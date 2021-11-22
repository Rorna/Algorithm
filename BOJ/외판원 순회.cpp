// BOJ 10971
// https://www.acmicpc.net/problem/10971
// 전체를 다구함
#include <bits/stdc++.h>
using namespace std;
int w[20][20]; //w[i][j] -> 도시 i에서 j로 가기 위한 비용

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) cin>>w[i][j];
    }
    vector<int> d(n); //방문 순서를 넣기 위한 배열
    for(int i=0; i<n; i++) d[i]=i;

    int ans=2147483647; //일부러 제일 큰 수로 지정

    do
    {
        bool ok= true;
        int sum=0;

        for(int i=0; i<n-1; i++) //
        {
            if(w[d[i]][d[i+1]] == 0) ok=false; //다음 도시가 갈 수 없으면 false
            else
            {
                sum+=w[d[i]][d[i+1]];
            }
            
        }
        if(ok && w[d[n-1]][d[0]] != 0) //여기서도 갈 수 있는지 확인(w[d[n-1]][d[0]] != 0)하고 위에서도 갈 수 있는지 확인(ok)
        {
            sum+=w[d[n-1]][d[0]]; 
            if(ans>sum) ans=sum;
        }
    } while(next_permutation(d.begin(), d.end()));
    cout<<ans<<'\n';
    return 0;
}