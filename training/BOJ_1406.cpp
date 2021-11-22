#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string init;
    cin>>init;
    list<char> L;// 리스트 생성
    for(auto c:init) L.push_back(c);//L 끝에 c를 추가한다.
    auto cursor=L.end(); //cursor는 L의 끝을 표식하는 반복자이다. iterator
    int q;
    cin>>q;
    
    while(q--)
    {
        char op;
        cin>>op;
        if(op=='P')
        {
            char add;
            cin>>add;
            L.insert(cursor, add);//cursor 부분에 add값 추가
        }
        else if(op=='L')
        {
            if(cursor!=L.begin()) cursor--; //커서 왼쪽으로 한칸 옮김
        }
        else if(op=='D')
        {
            if(cursor!=L.end()) cursor++;// 커서 오른쪽으로 한칸 옮김
        }
        else
        {
            if(cursor!=L.begin())
            {
                cursor--;
                cursor=L.erase(cursor);
            }
        }
        
    }
    for(auto c:L) cout<<c;
}