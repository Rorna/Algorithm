#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    int sum=0;
    int day_month[]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //상수로 sun=0, 등등
    const char* day[]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    cin>>x>>y;
    //합을 구한다음 7로 나눈 나머지의 값에 따라 요일 할당
    for(int i=1; i<x; i++)
    {
        sum+=day_month[i-1];
    }
    sum+=y;
    cout<<day[sum%7]<<'\n';

}