//BOJ 11053
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> d(n);
    for(int i=0; i<n; i++)
    {
        d[i] = 1;// 최소 길이=1로 임시로 정함, 나중에 더 큰 놈이 나오면 값이 변경됨
        for(int j=0; j<i; j++)
        {
            if(a[j]<a[i]&& d[j] +1 >d[i]) d[i] =d[j]+1; //a[j]<a[i] -> 증가하는 부분 수열이기 때문에
        }
    }
    cout<<*max_element(d.begin(),d.end()) << '\n'; //d벡터 값들 중 최대값 반환
    return 0;

}
//https://yabmoons.tistory.com/516