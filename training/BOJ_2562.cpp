#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    int max=0;
    for(int i=0; i<9; i++) //삽입연산
    {
        cin>>arr[i];
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<'\n';
    for(int i=0; i<9; i++)
    {
        if(max == arr[i]) cout<<i+1;
    }
    return 0;

}