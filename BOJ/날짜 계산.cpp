// BOJ 1476
// https://www.acmicpc.net/problem/1476
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool run=true; //while 실행 여부
    int e,s,m; //준규 년도
    int cnt=1; //우리 년도
    cin>>e>>s>>m;

    if(e==s==m==1)
    {
        cout<<1<<'\n'; // exception
        return 0;
    }

    int e1=1, s1=1, m1=1; //얘네들이 반복문 돎, 얘네랑 e s m 비교, 같으면 cnt 출력

    while(run)
    {
        if(e1==e && s1==s && m1==m) //같으면
        {
            run=false;
            cout<<cnt<<'\n';
        }

        //값 증가
        e1++, s1++, m1++; 
        cnt++;

        //범위를 넘어서면 초기값으로 바꿔줌
        if(e1==16) e1=1; //e가 처음부터 15일수 있으니
        if(s1==29) s1=1;
        if(m1==20) m1=1;
    }
    return 0;

}   