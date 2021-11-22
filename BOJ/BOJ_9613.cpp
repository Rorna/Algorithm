#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int a[111];
        for(int i=0; i<m; i++) cin>>a[i];
        
        long long sum=0;

        for(int i=0; i<m-1; i++)
        {
            for(int j=i+1; j<m; j++) sum+=gcd(a[i], a[j]);
        }
        cout<<sum<<'\n';
        
    }
    return 0;
}
