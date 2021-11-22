// BOJ 15663
// https://www.acmicpc.net/problem/15663
// ��� ������ ���� ����, �ߺ��� �����ϴ� �������
// 5�� +�ߺ�����
#include <bits/stdc++.h>
using namespace std;

int a[10];
int num[10];
int check[10]; //���⼭���ʹ� �ߺ� Ƚ������ üũ�ؾ��ϹǷ� bool�� �ƴ϶� int

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
        if(check[i]>0) //�ߺ� ����, �� Ƚ����ŭ check�� ���
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

    //�ӽù迭 ���, �� �迭�� ��� Ƚ���� üũ��
    int temp[10];
    //�ӽ� �迭�� ���� ����
    for(int i=0; i<n; i++) cin>>temp[i];
    sort(temp, temp+n);

    int k=0; //num�� �ε���
    int x=temp[0]; //x�� num�迭�� �������� ��
    int c=1; //��� Ƚ��

    for(int i=1; i<n; i++)
    {
        if(x==temp[i]) c+=1; //������ ��������� c++
        else
        {
            num[k]=x; //num�� �� �Է�
            check[k]=c; //Ƚ�� �Է�
            k+=1; //�ε���++
            x=temp[i]; //�ӽ� �迭�� ���� ���� x�� ����
            c=1; //Ƚ�� 1
        }
    }
    //������ �� �Է�
    num[k] = x;
    check[k] = c;
    //n = k+1; //�̰� ��? 
    dfs(0, n, m);
    return 0;
}