#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, c;
    double avg, th, sum=0, cnt=0;
    int arr[1000]={0, };
    cin>>c;
    while(c--)
    {
        cin>>n;
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n; i++) sum+=arr[i];
        avg=sum/n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>avg) cnt++; 
        }
        th=(cnt/n)*100;

        //자릿수 고정
        cout<<fixed;
        cout.precision(3); //소수점 뒤 세자리까지 출력
        cout<<th<<'%'<<'\n';

        //초기화
        avg=0; sum=0; th=0; cnt=0;
        
    }
    return 0;
}