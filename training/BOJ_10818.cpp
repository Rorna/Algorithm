#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    int min=1000000, max=-1000000;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x<min) min=x;
        if(x>max) max=x;
    }
    cout<<min<<' '<<max;
}