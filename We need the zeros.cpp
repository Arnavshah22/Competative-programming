#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int res=0;
	for(int i=0;i<n;++i)
	{
		int a;
		cin>>a;
		res^=a;
	}
	if(n%2)
	{
		cout<<res<<'\n';
	}
	else
	{
		if(!res) cout<<'0'<<'\n';
		else cout<<"-1"<<'\n';
	}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
    	solve();
    }
    return 0;
}