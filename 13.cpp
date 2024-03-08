#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
	ll n;
	cin>>n;
	
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]!=n){
		cout<<"NO"<<endl;
		return ;
		
	}
	vector<int>b(n);
	int first=n-1;
	for(int i=0;i<n;i++){
		int val=i+1;
		while(a[first] < val){
			first--;
		}
		b[i]=first+1;
		
	}
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			cout<<"NO"<<endl;
			return;
		}
		
	}
	cout<<"YES"<<endl;
	
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
}