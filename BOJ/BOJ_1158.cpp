#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;
    queue<int> q;
    for(int i=1; i<=n; i++) q.push(i);
    cout<<'<';

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            q.push(q.front()); // 1 2 3 4 5 6 7 -> 1 2 3 4 5 6 7 1
            q.pop();// 2 3 4 5 6 7 1 
        }
        cout<<q.front()<<", ";
        q.pop();

    }
    cout<<q.front()<<'>'<<'\n';
    return 0;
}