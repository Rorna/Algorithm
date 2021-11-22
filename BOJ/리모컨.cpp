// BOJ 1107
// https://www.acmicpc.net/problem/1107
#include <bits/stdc++.h>
using namespace std;

bool broken[10]; //망가진 번호 입력 1~9, 고장나 있으면 true, 아니면 false
//이동할 채널로 이동할 수 있는지 검사하는 함수
// c로 이동할 수 있으면 버튼을 눌러야 하는 횟수 리턴 없으면 0리턴
int possible(int c) //c-> 이동할 채널
{
    if(c == 0) //예외처리
    {
        if(broken[0]) return 0; // 이동할 채널이 0이고 망가진 번호가 0번이면 0리턴, 이동할 필요가 없으므로
        else return 1;
    }
    int cnt=0; //버튼을 눌러야 하는 횟수
    while(c>0) //자릿수별로 10 나눈 나머지 이용, c에 포함되어있는 숫자 중 고장난 버튼이 있는지 확인
    {
        if(broken[c%10]) return 0;
        cnt+=1;
        c/=10;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; //이동하려는 채널
    cin>>n;
    int m; //고장난 버튼 개수
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        broken[x] = true;
    }

    int ans = n-100; //+ - 버튼으로만 이동할때 횟수, 초기채널 100이므로 -100 
    if(ans<0) ans=-ans; //5번으로 이동하려면 95

    for(int i=0; i<=1000000; i++) //모든 채널 다구함
    {
        int c=i;
        int cnt = possible(c);
        if(cnt>0) //목표채널 누를 수 있을때, +-몇번 눌러야 하는지 계산
        {
            //press: +나 -누른 횟수
            int press=c-n; //+ , 예를 들어 5457로 가야하는데 c가 5455면 press는 2, 즉 -던 +던 2번 눌러야 5457이 된다는 것을 의미
            if(press<0) press=-press; //-
            if(ans>cnt+press) ans = cnt+press; //최소값 구하기, +-버튼만으로 구한 횟수가 버튼+ (+-)버튼눌러서 구한 횟수보다 크다면
        }
    }
    cout<<ans<<'\n';
    return 0;

}