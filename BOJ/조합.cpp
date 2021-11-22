/*
    조합에서는 중복을 체크하는 배열이 필요하다.
    123과 321은 같은 것으로 보기 때문이다.
    조합을 구현할 때에는 재귀로, 두 두가지 매개변수가 필요하다.
    첫번재는 idx: 시작점을 결정해주는 변수로 idx를 시작점으로 삼는 순간, 
    idx이전에 나온 원소는 쳐다보지 않는다.
    두번째는 cnt: 우리가 뽑은 원소의 개수를 결정해주는 변수이다. 현재 뽑은 
    원소의 개수가 우리가 최종적으로 뽑고자 하는 원소의 개수일 경우 출력

    여기서는 배열의 길이 5에 각각 1부터 5까지 들어있다.
    이 중에서 세개를 뽑는다.

    구현 루틴
    즉 5개(1,2,3,4,5) 중에 3개를 뽑는다면...
    제일 먼저 1을 뽑아 !, 그 다음 원소로 뽑을 것을 결정해 ! 2를 뽑았으면 
    1, 2는 쳐다보지 말고 3,4,5 중에서 고른다 !
    1 다음에 3을 뽑았다 ? 그럼 3보다 작은 원소인 1,2 는 쳐다도 보지말고 
    4, 5 중에서만 골라 ! 이런식으로 구현되는 것이다.
*/
// https://yabmoons.tistory.com/99
#include <bits/stdc++.h>
using namespace std;

int arr[5];
bool check[5]; //중복허용 방지 배열, 조합이므로 중복된 수의 사용은 안됨, 123 321 같음

void com(int idx, int cnt)
{
    if(cnt==3) //출력
    {
        for(int i=0; i<5; i++) 
        {
            if(check[i]==true) cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return; //함수 종료
    }

    for(int i=idx; i<5; i++)
    {
        if(check[i]==true) continue;
        check[i]=true;
        com(i, cnt+1); //i가 아닌 idx를 넣으면 같은수만 반복됨
        check[i]=false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<5; i++) arr[i]=i+1;
    //idx가 0이라는 말은 숫자가 0이라는게 아니라 0번째를 의미
    com(0,0); //0번째부터 시작
    return 0;
}