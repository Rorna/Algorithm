#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; //m=자릿수
    int h=0; //임시변수
    int cnt=0; //횟수
    cin>>n;

    if(n==0)
    {
        cout<<1;
        return 0;
    } 

    h=n;
    while(1)
    {
        if(h<10) //한자릿수일 경우 앞에 0을 더함
        {

            m=(h/10)+(h%10);
            if(m>=10) m%=10;
            h=(m*10)+m;
            cnt++;
            if(n==h) break;
        }
        else //h>=10
        {
            m=(h/10)+(h%10);
            if(m>=10) m%=10;
            h=((h%10)*10)+m;
            cnt++;
            if(n==h) break;
        }
    }
    cout<<cnt;
}