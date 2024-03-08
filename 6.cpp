    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long 
    void solve(){
        
            int n;
            cin>>n;

        vector<ll>arr(n);
        int mx=arr[0];


        for(int i=0;i<n;i++){
            cin>>arr[i];
            
            mx < arr[i]?mx=arr[i]:mx;
        }
        sort(arr. begin(),arr.end());
        
            vector<ll>b;
            vector<ll>c;

            
            for(int i=0;i<n;i++){
                if(arr[i]==mx){
                c.push_back(arr[i]);

                }
                else{
                    b.push_back(arr[i]);

                }
            }

            if(b.size()==0)cout<<-1<<endl;
            else{
                cout<<b.size()<<" "<<c.size()<<endl;
                for(int i=0;i<n;i++){
                    cout<<b[i]<<" "<<endl;
                
                }
                for(int i=0;i<n;i++){
                    cout<<c[i]<<endl;
                }
            }





    }
    int main(){
        int  t;
        cin>>t;

        while (t--)
        {
            solve();

        }
        
    return 0;
    }