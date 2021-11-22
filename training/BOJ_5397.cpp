#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; //test case count
    cin>>n;

    while(n--)
    {
        list<char> L; //create list
        auto t=L.begin(); //iterator is begin

        string s;
        cin>>s;
        
        //string을 리스트에 삽입
        for(int i=0; i<s.length(); i++) //입력한 문자 길이만큼 반복 string을 배열 처럼 쓸 수 있구나
        {
            if(s[i]=='<')
            {
                if(t==L.begin()) continue;// 더이상 왼쪽으로 갈 수 없으므로 continue
                t--;//그게 아니라면 커서 위치 왼쪽으로
            }
            else if(s[i]=='>')
            {
                if(t==L.end()) continue;
                t++;
            }
            else if(s[i]=='-')
            {
                if(t==L.begin()) continue;//t가 시작값이라는 것은 값이 없다는 소리이므로 삭제할 필요 없음
                t--;//우선 t를 감소 시킴, 이걸 안쓰면 위치 다음 것이 삭제됨
                t=L.erase(t);
            }
            else
            {
                L.insert(t, s[i]);//t의 위치에 s[i] 삽입
            }
            
        }
        for(auto a:L) 
        {
            cout<<a;
        }
        cout<<'\n';
    }



}