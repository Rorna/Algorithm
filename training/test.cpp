#include <bits/stdc++.h>

using namespace std;
int a[8]; //자릿수
int b[2]={1, 1}; //비교 배열
int s=0;
int cnt=0; //자릿수확인 변수
int solution(int num) 
{
    int answer;
    int num1=num;
    while(num!=0) //거꾸로임, 자릿수와 각 자릿수 배열에 대입
    {
        a[s]=num%10;
        num/=10;
        s++;
        cnt++;
    }

        if(cnt==2)//두자릿수일경우
        {
            if(num1%2==0)
            {
                answer=num1;
                //break;
            }
            else num1++;
        }

        else
        {
            int half=cnt/2;
            for(int i=0; i<half; i++) b[0]*=a[i];//앞 배열
            for(int i=half; half<cnt; half++) b[1]*=a[half]; //뒷 배열
            //while(b[0]!=b[1]) b[0]++;
            //cout<<b[1];
        }
        cout<<answer;
    
    return answer;
}
int main(){
    solution(21);
}