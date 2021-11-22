//BOJ 2306
// https://www.acmicpc.net/problem/2309
// 아홉명의 키를 모두 더한 후, 두명을 뺐을 때 100이 나와야함
#include <bits/stdc++.h>
using namespace std;
int a[9];
int n = 9;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        sum+=a[i]; //9명 키의 합
    }
    sort(a, a+n); //a~a+n 까지 오름차순

    //전체 합에서 두 수를 빼면 100이 됨을 이용
    //하나하나 넣어가며 실행
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(sum-(a[i]+a[j]) == 100)
            {
                for(int k=0; k<n; k++)//출력부분
                {
                    
                    if(i == k || j == k) continue; //i와 j는 빼야함->얘네를 빼서 100이 나왔으므로
                    cout<<a[k]<<'\n';
                }
                return 0; //이 부분 없으면 정답이 여러개일 때, 정답을 모두 구해서 시간이 오래 걸림
            }
        }
    }
}