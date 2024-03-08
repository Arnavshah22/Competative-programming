#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        string s;           // -> s==))()
        cin>>s;

        int n=s.size();

        string a="";
        string b="";

        a.push_back('(');

        while (a.size() < 2*n)
        {  
            if(a.back()=='(') a.push_back(')');        
            else  a.push_back('(');             // //a=()()()()
             

        }
        while (b.size() < n) b.push_back('(');
        while(b.size() < 2*n) b.push_back(')');              //b=(((())))

        if(a.find(s)==string::npos){
            cout<<"YES"<<endl<<a<<endl;
        }
        else if(b.find(s)==string::npos){
            cout<<"YES"<<endl<<b<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
       
        
        

    }
    
return 0;
}