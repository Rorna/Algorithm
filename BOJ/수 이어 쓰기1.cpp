// BOJ 1748
// https://www.acmicpc.net/problem/1748
// 직접 수를 만들기보다는 자릿수를 각 자릿수 마다 계산
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    long long ans=0;
    //len=자릿수, start=1,10,100... end=9,99,999,9999...
    for(int start=1, len=1; start<=n; start*=10, len++)
    {
        int end=start*10-1;
        if(end>n) end=n; //예외처리,예를 들어 n이 120일때는 end=n
        ans+=(long long)(end-start+1)*len; //9*1, 99*2, 999*3...
    }
    cout<<ans<<'\n';
    return 0;
}