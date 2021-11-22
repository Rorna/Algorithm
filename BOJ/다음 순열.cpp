// BOJ 10972
// https://www.acmicpc.net/problem/10972
#include <bits/stdc++.h>
using namespace std;

int a[10001];

bool next_permutation(vector<int> &a, int n) //다음순열이 있는지 구분하는 함수, 있으면 바꾸고나서 true 반환, 없으면 false 반환
{
    int i=n-1; //맨 뒤에서부터 시작
    while(i>0 && a[i-1]>=a[i]) i-=1; //맨처음이 아니라면 계속 줄여나감
    if(i<=0) return false; //마지막 순열이면 리턴
    int j=n-1; //j는 바꿀놈
    while(a[j]<=a[i-1]) j-=1; //a[j]가 a[i-1] 보다 커질 때까지 반복해서 j를 앞으로 보냄
    swap(a[i-1], a[j]); //a[j]가 a[i-1] 보다 커지면 스왑
    j=n-1; //다시 j의 위치를 초기화

    while(i<j) //a[i]부터 순열을 뒤집음
    {
        swap(a[i], a[j]);
        i+=1;
        j-=1;
    }
    //순열을 바꾸고나서 true 반환
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    if(next_permutation(a, n))
    {
        for(int i=0; i<n; i++) cout<<a[i]<<' ';
    }
    else
    {
        cout<<"-1"<<'\n';
    }
    return 0;
}