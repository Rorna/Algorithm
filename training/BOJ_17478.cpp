#include <bits/stdc++.h>
using namespace std;

int num=0;
void underbar(int num)
{
    for(int i=0; i<num; i++) cout<<"____";
}
void recursion(int n)
{
    if(n == 0)
    {   
        underbar(num);
        cout<<"\"����Լ��� ������?\"\n";
        underbar(num);
        cout <<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        underbar(num);
        cout<<"��� �亯�Ͽ���."<<'\n';
        num--;
        return;
    }
    underbar(num);
    cout<<"\"����Լ��� ������?\"\n";
    underbar(num);
    cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    underbar(num);
    cout<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    underbar(num);
    cout<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    num++;
    recursion(n-1);
    underbar(num);
    cout<<"��� �亯�Ͽ���.\n";
    num--;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<'\n';
    recursion(n);
    return 0;

}