#include <bits/stdc++.h>
using namespace std;

void print(stack<char> &s) //참조자
{
    while (!s.empty()) //빌 때까지 출력
    {
        cout << s.top();
        s.pop();
    }
}
//<만나면 tag변수 true, true인동안 >나올 때까지 글자들 스택에 안쌓이고 출력만함
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    getline(cin, str);
    bool tag = false;
    stack<char> s;

    for (char ch : str) 
    {
        if (ch == '<') 
        {
            print(s);
            tag = true;
            cout << ch;
        } 
        else if (ch == '>') 
        {
            tag = false;
            cout << ch; //>출력
        } 
        else if (tag) //true일 경우, <내부의 글자 출력, >나올때까지
        {
            cout << ch; 
        } 
        else 
        {
            if (ch == ' ') 
            {
                print(s);
                cout << ch;
            } 
            else 
            {
                s.push(ch);
            }
        }
    }
    print(s);
    cout << '\n';
    return 0;
}