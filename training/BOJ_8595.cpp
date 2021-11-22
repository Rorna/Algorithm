#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;// 단어의 길이
    cin>>n;

    vector<string> v;
    string s;
    cin>>s;
    for(auto& i:s) //s크기만큼 i가 순회, &라서 실제로 값을 바꿈
    {
        if(!(i>='0' && i<='9')) i=' '; //문자면 공백으로 바꿔버림
    }

    stringstream stream;
    stream.str(s);

    while(stream>>s)
    {
        while(s.size()>1 && s[0] == '0') s.erase(0,1); //0이상 1미만 삭제 002등 방지
        v.push_back(s);
    }
    //sum 하기 위해 벡터를 int형으로 변환후 배열에 arr에 삽입
    int arr[5000000]={0, };
    for(int i=0; i<v.size(); i++)
    {  
        arr[i]=stoi(v[i]);
    }

    //sum
    int sum=0;
    for(int i=0; i<v.size(); i++) sum+=arr[i];
    cout<<sum<<'\n';
}