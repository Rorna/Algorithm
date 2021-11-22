#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[10]={0, }; //0~9자릿수 배열
    int a, b, c, mul=0;
    
    cin>>a;
    cin>>b;
    cin>>c;

    mul=a*b*c;
    /*
        자릿수 나누기, 1의 자리수부터 시작
        자릿수를 나눈후, 각 해당 값에 대한 자릿수 배열의 인덱스의 값을 +1하면 
        각각 숫자가 몇 번씩 쓰였는지 알 수 있음.
        예를 들어 12일때 12%10은 2이므로 arr[2]를 +1 하게 됨.
    */
    //정수를 자릿수에 따라 쪼개야할 때는 10으로 나눗셈/나머지연산을 하면 간단하게 처리할 수 있다.
    while(mul!=0)
    {
        arr[mul%10]++;
        mul/=10;
    }

    for(int j=0; j<10; j++)
    {
        cout<<arr[j]<<'\n';
    }

}