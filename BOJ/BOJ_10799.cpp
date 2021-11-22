#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt=0;
    string str;
    cin>>str;
    stack<char> s;
    
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '(') s.push(str[i]);
        else // ) 일 때
        {
            s.pop();
            if(str[i-1] == '(') cnt += s.size(); //레이저면 스택의 크기는 레이저가 자르는 쇠막대의 수와 같으므로 크기를 더함
            else cnt++; //아닐경우 쇠막대이므로 +1
        }
    }
    cout<<cnt;
    return 0;
}