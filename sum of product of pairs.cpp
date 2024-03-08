// Problem: C - Sum of product of pairs
// Contest: AtCoder - AtCoder Beginner Contest 177
// URL: https://atcoder.jp/contests/abc177/tasks/abc177_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod=1e9+7;

void solve() {
	ll n;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++)cin>>a[i];
	vector<ll>suff(n,0);
	suff[n-1]=a[n-1];
	for(ll i=n-2;i>=0;i--){
		suff[i]+=suff[i+1] + a[i];
		suff[i]%=mod;
	}	
	ll ans=0;
	for(ll i=0;i<n-1;i++){
		ans+=a[i]*suff[i+1];  //v[i]=A1 suff[i+1]=A2....An;
		ans%=mod;
	}
	cout<<ans<<"\n";
	
	
		
	
	
}
 
int main() {
	solve();
} 