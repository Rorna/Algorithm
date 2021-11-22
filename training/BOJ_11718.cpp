#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);// 이거 추가하면 cout 가장 늦게 나옴
    cin.tie(0); //나중에 설명 참조

    string s;
    while(true)
    {
        getline(cin, s);
        if(s=="") break;// 아무것도 입력되지 않음
        cout<<s<<'\n';
    }
    
}