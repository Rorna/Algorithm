#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int freq[26]={};
    string s;
    cin>>s;
    for(auto c:s)//c 변수 생성, s만큼 반복-> string c:s//c는 뭐지
    {
        freq[c-'a']++; //if c='b ,'a'=97이면 freq[1]
    }
    for(int i=0; i<26; i++)
    {
        cout<<freq[i]<<' ';
    }
    
}