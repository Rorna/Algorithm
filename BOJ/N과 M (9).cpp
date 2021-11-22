// BOJ 15663
// https://www.acmicpc.net/problem/15663
// 모든 수열을 구한 다음, 중복을 제거하는 방식으로
// 5번 +중복제거
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
int check[10]; //여기서부터는 중복 횟수까지 체크해야하므로 bool이 아니라 int

void dfs(int index, int n, int m)
{
    if(index==m)
    {
        for(int i=0; i<m; i++) cout<<num[a[i]]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(check[i]>0) //중복 제거, 쓴 횟수만큼 check에 기록
        {
            check[i]-=1;
            a[index]=i;
            dfs(index+1, n, m);
            check[i]+=1;
        }
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
    int x=temp[0]; //x는 num배열에 넣으려는 값
    int c=1; //사용 횟수

    for(int i=1; i<n; i++)
    {
        if(x==temp[i]) c+=1; //여러번 사용했으면 c++
        else
        {
            num[k]=x; //num에 값 입력
            check[k]=c; //횟수 입력
            k+=1; //인덱스++
            x=temp[i]; //임시 배열의 다음 값을 x에 넣음
            c=1; //횟수 1
        }
    }
    //마지막 값 입력
    num[k] = x;
    check[k] = c;
    //n = k+1; //이건 왜? 
    dfs(0, n, m);
    return 0;
}