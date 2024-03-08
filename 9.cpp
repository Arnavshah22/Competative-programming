#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int>a(n),b,c;
        int mx=0;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==mx)c.push_back(a[i]);
            else b.push_back(a[i]);

        }
        if(b.size() && c.size() > 0){
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto x : b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(auto x : c){
                cout<<x<<" "<<endl;

            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
    
return 0;
}