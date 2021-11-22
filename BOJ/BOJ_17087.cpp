#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) //gcd, 유클리드 호제법
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s, f=0; //n은 동생의 수, s는 수빈의 위치, f는 처음 비교값
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
    {
        int d; //동생들의 위치
        cin>>d;
        int dis=max(s, d) - min(s, d);//음수 방지, 수빈과 동생들의 위치를 구함
        v[i] = dis; //저장
    }

    f=v[0];//처음 값은 처음 값

    for(int i=1; i<n; i++) //동생거리가 2 4 8일때 2와4, 2와8비교
    {
        f=gcd(f, v[i]);
    }
    cout<<f<<'\n';

    
}