// BOJ 10973
// https://www.acmicpc.net/problem/10973
// 다음 순열에 대해 부등호만 바꿔주면 됨
#include <bits/stdc++.h>
using namespace std;

bool prev_permutation(vector<int> &a, int n)
{
    int i=n-1;
    while(i>0 && a[i-1]<=a[i]) i-=1;
    if(i<=0) return false;
    int j=n-1;
    while(a[j]>=a[i-1]) j-=1;
    swap(a[i-1], a[j]);
    j=n-1;
    while(i<j)
    {
        swap(a[i], a[j]);
        i+=1;
        j-=1;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    if(prev_permutation(a, n))
    {
        for(int i=0; i<n; i++) cout<<a[i]<<' ';
    }
    else
    {
        cout<<"-1"<<'\n';
    }

    return 0;
    
}