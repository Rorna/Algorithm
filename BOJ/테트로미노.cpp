// BOJ 14500
// https://www.acmicpc.net/problem/14500
#include <bits/stdc++.h>
using namespace std;
int a[500][500];

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++) cin >> a[i][j];
    }

    int ans = 0; //최대값
    //싹다 해봄, 회전, 대칭도 허용되므로 19가지 블록 사용 가능
    //테트로미노 속 숫자들의 최대값을 알아보는 문제이므로 최대 범위 내의 테트로미노의 위치를 삽입
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++) 
        {
            if (j+3 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i][j+3]; //1*4
                if (ans < temp) ans = temp;
            }
            if (i+3 < n) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+3][j]; //4*1
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+1][j+2]; //2*2
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+2][j]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+2]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j-1 >= 0) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j-1]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i-1 >= 0 && j+2 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i-1][j+2]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j+1]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+2][j+1]; //ㄴ자
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+1 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1]; //ㄱ자
                if (ans < temp) ans = temp;
            }
            if (i-1 >= 0 && j+2 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i-1][j+1] + a[i-1][j+2]; //번개
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+2][j+1]; //번개
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+1][j+2]; //번개
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j-1 >= 0) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j-1] + a[i+2][j-1]; //번개
                if (ans < temp) ans = temp;
            }
            //뻐큐모양 위아래 ㅏ ㅓ
            if (j+2 < m) 
            {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2];
                if (i-1 >= 0) //ㅓ
                {
                    int temp2 = temp + a[i-1][j+1];
                    if (ans < temp2) ans = temp2;
                }
                if (i+1 < n) //ㅏ
                {
                    int temp2 = temp + a[i+1][j+1];
                    if (ans < temp2) ans = temp2;
                }
            }
            //뻐큐모양 왼쪽 오른쪽 ㅗ ㅜ, 일자부분이라는 공통적인 부분을 공유하므로 묶어서 처리
            if (i+2 < n) 
            {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j];
                if (j+1 < m) 
                {
                    int temp2 = temp + a[i+1][j+1]; //ㅗ
                    if (ans < temp2) ans = temp2;
                }
                if (j-1 >= 0) 
                {
                    int temp2 = temp + a[i+1][j-1]; //ㅜ
                    if (ans < temp2) ans = temp2;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}