#include <bits/stdc++.h>
using namespace std;
//전략: 셀프넘버가 아닌애들을 구한 후에 그것들의 인덱스 값을 참으로 변경
//그 후에 배열이 0인애들이 셀프넘버이므로 그것들을 출력
int a[10001];

int sum(int n)
{  
    int sum=n; //자기 자신 먼저 더해줌
    while(1) //각 자리수의 숫자를 더해야하므로 1의 자리를 계속 더해줌
    {
        if(n==0) break; //0이되면 break
        sum+=n%10; //1의 자리 더해주기
        n/=10; //한자리씩 없애기
    }
    return sum;
}
int main()
{
    for(int i=0; i<10000; i++)
    {
        int idx=sum(i);
        if(idx<=10001) a[idx]=true; //셀프넘버 아닌 수 true로 변경
    }
    for(int i=0; i<10000; i++)
    {
        if(!a[i]) cout<<i<<'\n'; //0값들 출력
    }
    return 0;
}