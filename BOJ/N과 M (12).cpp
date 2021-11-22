// BOJ 15666
// https://www.acmicpc.net/problem/15666
// n과m (10)에서 dfs함수 for문에서 if문만 삭제함, 중복이라서
// check가 의미가 있나?
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
int check[10];

void dfs(int index, int start, int n, int m)
{
    if(index==m)
    {
        for(int i=0; i<m; i++)
        {
            cout<<num[a[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=start; i<n; i++) //n과m (10)에서 여기 if문만 삭제함, 중복이라
    {
        check[i]-=1;
        a[index]=i;
        dfs(index+1, i, n, m);
        check[i]+=1;

    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    int tmp[10]; //임시배열

    for(int i=0; i<n; i++) cin>>tmp[i]; //임시배열에 삽입
    sort(tmp, tmp+n);
    //tmp에서 num으로 값 옮김+ 사용 횟수도 입력
    //맨 처음
    int x=tmp[0]; //x는 num배열에 넣으려는 값
    int c=1;
    int k=0; //num의 인덱스
    //나머지
    for(int i=1; i<n; i++)
    {
        if(x==tmp[i]) c+=1;
        else
        {
            num[k]=x;
            check[k]=c;
            k++;
            x=tmp[i];
            c=1;
        }
    }
    //마지막 값
    num[k]=x;
    check[k]=c;
    n = k+1; //이놈 없으면 이상한 값 하나 생김
    /*  이놈의 역할은 중복인놈을 하나로 취급하여 n을 새로 정의
        처음에 n을 4로 하고 9 9 9 1이면 n은 2로 취급
        또 4로 하고 9 9 9 9이면 n은 1로 취급
        여기서는 있으나 마나
    */
    dfs(0, 0, n, m);
    return 0;

}