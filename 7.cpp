#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;

    while (t--)
    {
        ll a,b,c;

        cin>>a>>b>>c;
       
        if(c%2==0){
            if(a > b){
                cout<<"First"<<endl;

            }
            else{
                cout<<"Second"<<endl;
            }
        }
        else{
            if(a>=b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }


        
    }
    
return 0;
}