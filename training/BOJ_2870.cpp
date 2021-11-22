#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string> v;
    while(n--)
    {
        string s; 
        cin>>s;
        for(auto& i:s) //s크기만큼 i가 순회
        {
            if(!(i>='0' && i<='9')) i=' '; //문자면 공백으로 바꿔버림
        }
        
        stringstream stream;
        stream.str(s);

        while(stream>>s) //입력 끝날때까지 반복
        {
            while(s.size()>1 && s[0] == '0') s.erase(0,1); //0이상 1미만 삭제 002등 방지
            v.push_back(s);
        }
    }
    
    sort(v.begin(), v.end(), [&](string a, string b) 
    {
		if (a.size() != b.size()) return a.size() < b.size();
		return a < b;
	});


    int arr[105]={0, };
    for(int i=0; i<v.size(); i++)
    {  
        arr[i]=stoi(v[i]);
    }
    //sum
    int sum=0;
    for(int i=0; i<v.size(); i++) sum+=arr[i];
    cout<<sum<<'\n';
    
    //for(auto i: v) cout<<i<<'\n';
}