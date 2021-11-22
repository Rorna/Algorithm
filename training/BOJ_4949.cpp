#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(true)
    {
        string a;
        getline(cin, a);
        if(a==".") break;
        stack<char> s;
        bool isvalid=true;//균형 변수
        for(auto c: a)
        {
            if(c=='(' || c=='[') s.push(c);
            else if(c==')') 
            {
                if(s.empty() || s.top() != '(')//비었거나 끝이 (가 아니면
                {
                    isvalid=false;//균형이 잡히지 않았다.
                    break;
                }
                s.pop();//짝이 맞다면
            }
            else if(c==']')
            {
                if(s.empty() || s.top() != '[')
                {
                    isvalid=false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) isvalid=false;
        if(isvalid) cout<<"yes\n";
        else cout<<"no\n";
    }

}