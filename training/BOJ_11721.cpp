#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; //배열처럼 쓸 수 있음
    cin>>s;

    for(int i=1; i<=s.size(); i++)
    {
        if(i%10==0) //10의 배수
        {
            if(i==0) cout<<s[i-1]; //인데 사실 인덱스는 0부터 시작하므로 -1함
            else cout<<s[i-1]<<'\n';
        }
        else cout<<s[i-1];
    }
}