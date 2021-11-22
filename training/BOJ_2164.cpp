#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    queue<int> Q;
    for(int i=1; i<=n; i++) Q.push(i);

    while(Q.size()>1)
    {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    cout<<Q.front()<<'\n';
}

/*
 1 2 3 4 5
 front = 1 
 back = 5
 pop() -> 2 3 4 5
 pop 할 때 front값 바뀜
*/