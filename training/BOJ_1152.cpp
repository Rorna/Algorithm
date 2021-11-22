#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt=0;

    string s;
    getline(cin, s); //공백 받으려면 getline
    //if(s[0] == ' ') cnt=0;
    for(int i=0; i<s.size(); i++) 
    {
        if(s[i] == ' ') cnt++; //공백 만나면 ++
    }
    if(s[0] == ' ') cnt--; //처음 공백이면 --
    if(s[0] != ' ') cnt++;
    if(s[0]=='\0') cnt=0; //enter
    cout<<cnt;
}