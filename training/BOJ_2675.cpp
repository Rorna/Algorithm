#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        int cnt;
        cin>>cnt;
        string s;
        cin>>s;
        for(int j=0; j<s.size(); j++)
        {
            for(int i=0; i<cnt; i++) cout<<s[j];
        }
        cout<<'\n';
    }
    return 0;
}