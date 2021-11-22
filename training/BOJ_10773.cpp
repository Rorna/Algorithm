#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n, sum=0;
    stack<int> S;
    cin>>k;
    while(k--)
    {
        cin>>n;
        if(n==0)
        {
            if(S.empty()) S.push(0); //비었으면 0넣음
            else S.pop(); //아니면 삭제
        }
        else S.push(n);
    }
    while(S.empty()!=1) //empty함수가 1이 아닐 때, 즉 비어있지 않을 때 실행, 스택에 있는 값들 총 합
    {
        sum+=S.top();
        S.pop();
    }
    cout<<sum<<'\n';
}