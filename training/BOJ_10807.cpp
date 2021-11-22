#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[100]={};
    int n, v;
    int cnt=0;// 초기화 안하면 쓰레기값 나옴

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cin>>v;

    for(int j=0; j<n; j++)
    {
        if(arr[j]==v)
            cnt+=1;
    }

    cout<<cnt;

}