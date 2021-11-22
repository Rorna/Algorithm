// BOJ 15654
// https://www.acmicpc.net/problem/15654
// 오름차순 정렬
#include <bits/stdc++.h>
using namespace std;

int a[10]; //<N까지인데 n이 최대 8이므로 넉넉잡아 10으로함
bool check[10];
int num[10];

void go(int index, int n, int m) //n은 개수, m은 몇개 뽑을 지 ex) n=4, m=2면 4개 수중에서 2개 뽑음
{
    if(index==m) //출력
    {
        for(int i=0; i<m; i++)
        {
            cout<<num[a[i]]; cout<<' '; //a[i]는 num배열의 인덱스를 나타냄
            //ex) num이 1 7 8 9이고 (7,1)을 뽑는다고 하면 a[0]=1, a[1]=0이 됨
            //참고로 a배열은 a[m]까지만 채워짐
            //if(i!=m-1) cout<<' '; -> 굳이 딱 끝에 맞게 띄어쓰기 하게 안해도 됨
        }
        cout<<'\n';
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(check[i]) continue;
        check[i]=true; a[index]=i; //이제보니 여기도 이해가 안가네
        go(index+1, n, m);
        check[i]=false;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>num[i]; //이전에 1부터 n까지가 아닌, 수를 직접 입력 받아서 그 수들중에서 뽑는 것으로 바뀜
    sort(num, num+n); //0~n까지 오름차순 정렬
    go(0, n, m);
    return 0;
}