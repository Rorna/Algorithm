// BOJ 10974
// https://www.acmicpc.net/problem/10974
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) a[i]=i+1;
    do //일단 출력
    {
        for(int i=0; i<n; i++) cout<<a[i]<<' ';
        cout<<'\n';
    } 
    while (next_permutation(a.begin(), a.end())); //내장함수
    return 0;

}