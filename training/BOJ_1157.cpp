#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[26]={0, };
    int max=0;
    int cnt=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if((int)s[i]>=65 && (int)s[i]<=90) //대문자
        {
            a[(int)s[i]-65]+=1;
        }
        else //소문자 97~122
        {
            a[(int)s[i]-97]+=1;
        }
    }

    for(int j=0; j<26; j++) if(max<a[j]) max=a[j]; //최대값
    for(int i=0; i<26; i++) if(max==a[i]) cnt++; //중복일 경우 cnt++

    if(cnt>1) cout<<'?'; //중복이면
    else
    {
        for(int j=0; j<26; j++) //중복 아닌애들 출력
        {
            if(max==a[j]) cout<<(char)(j+65); //대문자 출력
        }
    }
}