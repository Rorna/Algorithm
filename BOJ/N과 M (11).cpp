// BOJ 15665
// https://www.acmicpc.net/problem/15665
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
int check[10];

void dfs(int index, int n, int m)
{
    if(index==m) //출력
    {
        for(int i=0; i<m; i++)
        {
            cout<<num[a[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=0; i<n; i++)
    {
        check[i]=true;
        a[index]=i;
        dfs(index+1, n, m);
        check[i]=false;
    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;

    //임시배열 사용, 이 배열에 사용 횟수를 체크함
    int temp[10];
    //임시 배열에 값을 넣음
    for(int i=0; i<n; i++) cin>>temp[i];
    sort(temp, temp+n);

    int k=0; //num의 인덱스
    for(int i=0; i<n; i++)
    {
        if(i>0 && temp[i]==temp[i-1]) continue; //같은수일경우 넘어감
        num[k++]=temp[i];
    }
    n=k;
    dfs(0, n, m);
    return 0;
}