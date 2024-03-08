#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    int cnt=0;
    long long sum=0;

   for(auto x : v){
      if(x==1){
        cnt++;
      }
      sum+=x;
   }
   sum-=n;
   if(sum>=cnt){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}
int main(){
    int t;
    cin>>t;

    while (t--)
    {
       solve();
    }
    

    

return 0;
}