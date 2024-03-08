#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    	ll n,a,q,read=0,f=0;
    	cin>>n>>a>>q;
    	
    	string s;
    	cin>>s;
    	
    	if(n==a){
    		cout<<"YES"<<endl;
    		continue;
    	}
    	read=a;
    	for(ll i=0;i<q;i++){
    		if(s[i]=='+'){
    			read++;
    			a++;
    			
    		}
    		else{
    			a--;
    		}
    		if(read==a){
    			f=1;
    			break;
    		}
    	}
    	if(f==1){
    		cout<<"YES"<<endl;
    	}
    	else if(a>=n){
    		cout<<"MAYBE"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    	
    	
    }
}