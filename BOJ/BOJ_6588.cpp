#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
int prime[MAX]; //소수 저장
int pn; //소수의 개수
bool check[MAX+1]; //지워졌으면 true

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //미리 소수 연산 작업
    for(int i=2; i<=MAX; i++)
    {
        if(check[i] == false) //지워지지 않았으면 소수
        {
            prime[pn++] = i;
            for(int j=i+i; j<=MAX; j+=i) //i가 2면 2의 배수 싹다 지움
            {
                check[j] = true; //지워졌음을 표시
            }
        }
    }
    while(true)
    {
        int n;
        cin>>n;
        if(n == 0) break;
        for(int i=1; i<pn; i++) //소수의 개수만큼 반복
        {
            /*
            n=a+b이고 a,b가 소수일때 n-b가 소수인지 검사, 
            check가 false라는 것은 지워지지 않음, 곧 소수라는 것을 의미
            n-b가 소수이면 n=a+b가 성립되므로 출력
            */
            if(check[n-prime[i]] == false) 
            {
                cout<<n<<"="<<prime[i]<<"+"<<n-prime[i]<<'\n';
                break;
            }
        }

    }
    return 0;
}