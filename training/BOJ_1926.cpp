#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502];
bool vis[502][502];
int n, m; //열과 행
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for(int i=0; i<n; i++) //그림 그리기
    {
        for(int j=0; j<m; j++)
        {
            cin>>board[i][j];
        }
    }

    int mx=0; //그림의 최댓값 가장 넓은 그림의 넓이
    int num=0; //그림의 수

    //이중 for문 돌면서 원소 하나하나 탐색 i,j가 bfs의 시작점이 될 수 있는지 확인
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(board[i][j]==0 || vis[i][j]) continue; //빨간색이거나 이미 방문했으면 제외
            num++;
            queue<pair<int, int>> Q;
            vis[i][j]=1;
            Q.push({i, j});
            int area = 0; //그림의 넓이
            //시작점 찾으면 탐색 시작
            while(!Q.empty()) //bfs 탐색
            {
                //area 증가시키고 pop
                area++;
                pair<int, int> cur=Q.front(); Q.pop();

                for(int dir=0; dir<4; dir++)
                {
                    int nx=cur.X + dx[dir];
                    int ny=cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 ||ny >=m) continue;
                    if(vis[nx][ny] || board[nx][ny]!=1) continue;
                    vis[nx][ny] =1;
                    Q.push({nx, ny});
                }
            }
            mx=max(mx, area); //둘 중 큰 것 반환
        }
    }
    cout<<num<<'\n'<<mx;
}