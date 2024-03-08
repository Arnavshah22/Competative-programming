#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
using namespace std;

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    
    if(k==1){
        cout<<"NO\n";
        return;
    }
    
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<"\n";
        for(ll i=0;i<n;i++)
        cout<<"1 ";
        cout<<"\n";
        return;
    }
    
    
    if(n%2 && k==2){
        cout<<"NO\n";
        return;
    }
    
    if(n%2==0){
        cout<<"YES\n";
        cout<<(n/2)<<"\n";
        for(ll i=0;i<(n/2);i++){
            cout<<"2 ";
        }
        cout<<"\n";
        return;
    }
    
    ll tot=(n/2);
    
    cout<<"YES\n";
    cout<<tot<<"\n";
    
    for(ll i=0;i<(n/2-1);i++)
    cout<<"2 ";
    
    cout<<"3 ";
    cout<<"\n";
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t=1;
    cin>>t;
    
    while(t--)
    solve();
}