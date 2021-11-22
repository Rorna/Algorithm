#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[26];
    for(int i=0; i<26; i++) a[i]=-1;
    
    string s;
    cin>>s;
    
    for(int j=0; j<s.size(); j++)
    {
        if(a[(int)s[j]-97]!=-1) continue; //알파벳 중복일 경우 처리
        a[(int)s[j]-97]=j; //a의 아스키코드 값 97
    }
    for(int i=0; i<26; i++) cout<<a[i]<<' ';
    return 0;
}