#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum=0;
    int n=0;
    while(cin>>n) sum+=n; //�Է� ���� ������ ��� �Է¹ޱ�
    cout<<sum<<'\n';
    return 0;
}
