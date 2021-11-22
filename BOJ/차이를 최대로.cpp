// BOJ 10819
// https://www.acmicpc.net/problem/10819
/*
    풀이 방법(범위가 얼마 안되서 모두 다 구하기로 함)
    1. 우선 정렬함, 전부 다 구하려면 맨 첫 순열부터 구해야하므로
        그리고 매 순열마다 최댓값을 구함(calculate 함수 작성)
    2. 계산값과 ans(목표)값을 서로 비교해서 큰놈을 ans에 대입
    3. next_permutaion함수를 이용하여 다음 함수가 있으면 다음 함수 계산
    4. 반복
*/
#include <bits/stdc++.h>
using namespace std;

int calculate(vector<int> &a) //각 요소마다 뺀값의 절대값들을 더함
{
    int sum=0;
    for(int i=1; i<a.size(); i++)
        sum+=abs(a[i]-a[i-1]);
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    int ans=0;

    do
    {
        //for(int i=0; i<n; i++) cout<<a[i]<<' '; // 테스트 출력용
        //cout<<'\n';
        int temp=calculate(a);
        ans=max(ans, temp);
        //cout<<"temp: "<<temp<<'\n';
    } while (next_permutation(a.begin(), a.end()));

    cout<<ans<<'\n';
    return 0;
    
}