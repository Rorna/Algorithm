// https://yabmoons.tistory.com/100?category=838490

#include <bits/stdc++.h>
using namespace std;
//다섯개 숫자중 세개 뽑기
int arr[5];
bool check[5];
vector<int> v;

void Print()
{
    for(int i=0; i<v.size(); i++)
    {
        if(check[i]==true) cout<<v[i]<<' ';
    }
    cout<<'\n';
}

void dfs(int cnt)
{
    if(cnt==3) //탈출조건
    {
        //조합과 달리 check[i]==true if문이 없는 이유는
        //있으면 수가 제대로 안나옴
        for(int i=0; i<v.size(); i++) cout<<v[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=0; i<5; i++)
    {
        if(check[i]==true) continue;
        check[i]=true;
        v.push_back(arr[i]);
        dfs(cnt+1);
        v.pop_back();
        check[i]=false;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<5; i++) arr[i]=i+1;
    dfs(0);
    return 0;
}
