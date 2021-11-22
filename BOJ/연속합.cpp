//BOJ1912
// https://www.acmicpc.net/problem/1912
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);// 배열
    vector<int> d(n);// i번째 수로 끝나는 가장 큰 연속합

    for(int i=0; i<n; i++) cin>>a[i];//배열 채우기

    for(int i=0; i<n; i++)
    {
        d[i]=a[i]; //연속하지 않은 경우
        if(i==0) continue; // 0번째수는 앞의 수가 없으니 그냥 건너뜀
        if(d[i-1]+a[i] > d[i]) //연속하는 경우가 연속하지 않은 경우보다 클 경우 
            d[i] = d[i-1]+a[i];
    }

    //최댓값 출력
    cout<<*max_element(d.begin(),d.end());
}
/*
vector 최댓값

vector<int>v;
*max_element(v.begin(), v.end()); // 최대값
*min_element(v.begin(), v.end()); // 최소값

벡터의 begin(), end()를 forward iterator, last iterator로 입력한다면 벡터의 최대값, 최소값을 출력할 수 있다.

max_element, min_element의 리턴값은 포인터이므로 값을 출력하기 위해 '*'를 사용한다.
*/