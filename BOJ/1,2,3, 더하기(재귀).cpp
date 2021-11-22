// BOJ 9095
// https://www.acmicpc.net/problem/9095
#include <bits/stdc++.h>
using namespace std;

/*
    재귀함수 로직
    1. 어딘가까지의 합을 먼저 구해놓음
    2. 그 후 여기서 새로운 수를 썼을 때 합이 어떻게 변하는지를 기록하면서 재귀함수를 만듬
*/
int go(int sum, int goal)
{
    if(sum>goal) return 0; //탈출 조건
    if(sum==goal) return 1; //찾으면 1 리턴, 횟수
    int now=0; //횟수들의 총 합
    for(int i=1; i<=3; i++) //1더했을때, 2더했을때, 3더했을때 각각 재귀 호출
    {
        now+=go(sum+i, goal);
    }
    return now;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n>0)
    {
        int a;
        cin>>a;
        cout<<go(0, a)<<'\n';
        n--;
    }
    return 0;

}