// BOJ 15649
// https://www.acmicpc.net/problem/15649
#include <bits/stdc++.h>
using namespace std;
bool c[10]; //숫자 사용 여부 배열, 중복 없이 0-9, 썼으면 true 아니면 false
int a[10]; //결과 출력용 배열 0-9

void go(int index, int n, int m) //index번째를 채우려고 한다, 재귀함수
{
    if(index==m) //탈출조건, 출력, m은 가장 마지막 칸 의미
    {
        for(int i=0; i<m; i++)
        {
            cout<<a[i];
            if(i!=m-1) cout<<' '; //끝자리까지 도달하면 띄어쓰기 안씀
        }
        cout<<'\n';
        return; 
    }

    for(int i=1; i<=n; i++)
    {
        if(c[i]) continue; //중복체크, 썼으면 건너뜀
        c[i]=true; a[index]=i;
        go(index+1, n, m); //다음번째
        c[i]=false; //다 완성했으면 초기화 시킴
    }
}
//go(0, m, n) 가장 먼저 호출해야하는 수
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; //n=수의 범위, m=개수
    cin>>n>>m;
    go(0, n, m);
    return 0;
}