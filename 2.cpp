#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;

  while (t--)
  {
      int n,m,k,h;
      cin>>n>>m>>k>>h;

      vector<int>v(n);
      for(auto &x : v){
        cin>>x;

      }
      int cnt=0;
      for(auto &x : v){
        int diff=abs(h-x);
        if(diff%k){
          continue;
        }
        if(diff>=k && diff <=(m-1)*k){
          cnt++;
        }
      }
      cout<<cnt<<endl;
  }
  
return 0;
}