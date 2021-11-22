#include <bits/stdc++.h>
using namespace std;
int a[3];

int han(int n)
{
    int cnt=0;
    if(n<100) return n;
    if(n>=100)
    {
        for(int i=100; i<=n; i++)
        {
            int tmp=i;
            for(int j=0; j<4; j++)
            {
                a[j]=tmp%10;
                tmp/=10;
            }
            if(i<=999) if(a[0]-a[1] == a[1]-a[2]) cnt++;//1000일때는 실행 x
        }
        return 99+cnt;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cout<<han(n);
    return 0;
}