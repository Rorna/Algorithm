#include <bits/stdc++.h>
using namespace std;

int a[1000];
int d[1000];
int v[1000];

void go(int p) //재귀
{
    // ? -> ? -> ... a[v[p]] -> a[p]
    // ---------------------
    //        go(v[p]);
    if (p == -1) return ; //앞에 아무것도 없으면 -1, 시작부분은 아무것도 없으니까 예외처리로 그냥 리턴
    go(v[p]);
    cout << a[p] << ' ';
}
int main() 
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) 
    {
        d[i] = 1;
        v[i] = -1;
        for (int j=0; j<i; j++) 
        {
            if (a[j] < a[i] && d[i] < d[j]+1) 
            {
                d[i] = d[j]+1;
                v[i] = j;
            }
        }
    }
    int ans = d[0];// 가장 긴 증가하는 부분 수열의 길이
    int p = 0;
    for (int i=0; i<n; i++) 
    {
        if (ans < d[i]) 
        {
            ans = d[i];
            p = i;
        }
    }
    cout << ans << '\n';
    go(p);
    cout << '\n';
    return 0;
}
// https://yabmoons.tistory.com/578