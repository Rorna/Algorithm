#include <bits/stdc++.h>
using namespace std;
//배열 최댓값
int main()
{
    int n, max=0;
    double avg, sum=0;
    double arr[1000]={0, };
    cin>>n;

    for(int i=0; i<n; i++) 
    {
        cin>>arr[i];
        if(max<arr[i]) max=arr[i];
    }

    for(int i=0; i<n; i++) arr[i]=arr[i]/max*100;
    for(int i=0; i<n; i++) sum+=arr[i];

    avg=sum/n;
    cout<<avg;
    
    return 0;
}