// BOJ 6064
// https://www.acmicpc.net/problem/6064
// 나머지 정리를 이용하여 구함
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int m, n, x, y;
        cin>>m>>n>>x>>y;
        //나머지 정리를 이용하기 위해 1을 빼줌
        x-=1;
        y-=1;
        bool ok=false; //카잉 달력으로 표현 되는지 여부
        for(int k=x; k<(n*m); k+=m) //m만큼 건너뛰며 검사, k는 몇 번째 해인지 나타냄
        {
            if(k%n==y) //x는 고정시킬 수 있으니 y값만 비교
            {
                cout<<k+1<<'\n'; //아까 1 뺐으니 다시 더함
                ok=true;
                break;
            }
        }
        if(!ok) cout<<-1<<'\n'; //안되면 -1
    }
    return 0;
}