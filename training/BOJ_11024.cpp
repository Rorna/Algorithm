#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum=0;
    int n=0;
    int cnt;
    cin>>cnt;

    while(cnt--)
    {
        while (getc(stdin) == ' '); 
        {
            //if(n=='\0') break;
            sum+=n; //�Է� ���� ������ ��� �Է¹ޱ�
            cout<<sum<<'\n';
            if(n=='\0') break;
        }
        //cout<<sum<<'\n';
        //sum=0;
    }
    
    return 0;
}