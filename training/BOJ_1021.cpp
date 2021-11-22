#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int n, m, num, avg, cur, cnt=0;
    cin>>n>>m;

    for(int i=1; i<=n; i++) DQ.push_back(i); //덱 생성 및 초기화

    while(m--)
    {
        cin>>num;
        for(int i=0; i< DQ.size(); i++)
        {
            if(DQ[i]==num)
            {
                cur=i;
                break;
            }
        }

        if(cur<DQ.size()-cur)
        {
            while(1)
            {
                if(DQ.front() == num)
                {
                    DQ.pop_front();
                    break;
                }
                ++cnt;
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
        }
        else
        {
            while(1)
            {
                if(DQ.front()==num)
                {
                    DQ.pop_front();
                    break;
                }
                ++cnt;
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
        }

        
    }
    cout<<cnt;
}