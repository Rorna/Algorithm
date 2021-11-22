#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[50][50]={0,};
bool vis[50][50]={0,};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n, m;
int k; //배추 개수
int x, y;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        while(k--) //배추 위치 입력
        {
            cin>>x>>y;
            board[x][y]=1;
        }
        int num=0; // 배추 영역 수 = 지렁이 수
        //시작지점 탐색
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==0 || vis[i][j]) continue; //배추 없거나 이미 방문했으면 넘어감
                num++;
                queue<pair<int, int>> Q;
                vis[i][j]=1;
                Q.push({i, j});
                //큐가 빌때까지 반복
                while(!Q.empty())
                {
                    pair<int, int> cur=Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++)
                    {
                        int nx=cur.X + dx[dir];
                        int ny=cur.Y + dy[dir];
                        if(nx<0 || ny>=n ||ny<0 ||ny>=m) continue; //영역을 벗어나면 넘어감
                        if(vis[nx][ny]|| board[nx][ny] != 1) continue; //이미 방문했거나 빈 영역이면 넘어감
                        vis[nx][ny] =1;
                        Q.push({nx, ny});

                    }
                }

            }
        }
        cout<<num<<'\n';
    }
}
