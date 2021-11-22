#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum=0;
    int n=0;
    while(cin>>n) sum+=n; //입력 없을 때까지 계속 입력받기
    cout<<sum<<'\n';
    return 0;
}
