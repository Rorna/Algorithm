#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sum=0;
    char c; //문자연속으로 한글자씩 받기 때문에 char가 적합

    cin>>n;
    while(n--)
    {
        cin>>c;
        sum+=(c-'0'); //마지막 '0' 빼줌
    }
    cout<<sum<<'\n';
}