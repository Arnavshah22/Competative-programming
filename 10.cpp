#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;

   while (t--)
   {
      int n,m,k;
      cin>>n>>m>>k;

      int x,y;
      cin>>x>>y;
      string ans="YES";


      for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;

        if((x+y)%2==(a+b)%2){
           ans="NO";
        }
      }
      cout<<ans<<endl;
       

   }
   

   
        

      


       



    
    
return 0;
}