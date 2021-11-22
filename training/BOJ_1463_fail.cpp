#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, num=0;
    cin>>x;
    while(x)
    {
        if(x==1) 
        {
            cout<<num;
            break;
        }
        if(x%3==0)
        {
            x/=3;
            num++;
        }
        else if(x%2==0)
        {
            x/=2;
            num++;
        }
        else 
        {
            x-=1;
            num++;
        }
    }
}