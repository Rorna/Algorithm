#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[1000]={0, };
    int n, cnt=0;
    
    for(int i=0; i<10; i++)
    {
        cin>>n;
        if(arr[n%42] == 1) cnt--; //중복이라면 -1
        arr[n%42]=1; //ex) n=42, arr[0] = 1
        cnt++;
    }
    cout<<cnt;
    return 0;
}