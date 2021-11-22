#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, num=0, sum=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'O')
            {
                num+=1;
                sum+=num;
            }
            if(s[i] == 'X') num=0;//X만나면 num을 0으로 초기화하여 새로 시작하도록 함
        }
        cout<<sum<<'\n';
        sum=0; //sum 초기화
        num=0; //num 초기화
    }
}