// BOJ 11055
// https://www.acmicpc.net/problem/11055
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> d(n);
    for(int i=0; i<n; i++)
    {
        d[i] = a[i];
        for(int j=0; j<i; j++)
        {
            for(int j=0; j<i; j++)
            {
                if(a[j]<a[i]&& d[i] < d[j] + a[i] ) d[i] =d[j]+a[i]; //a[j]<a[i] -> 증가하는 부분 수열이기 때문에
            }
        }
    }
    cout<<*max_element(d.begin(),d.end()) << '\n'; //d벡터 값들 중 최대값 반환
    return 0;

}