    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,b,c,h;
        cin>>n>>b>>c>>h;

        int ans=2*min(b,min(c,h));

        if(b > c){
            ans+=2*min(b-c,h);
            
        }
        else{
            ans+=2*min(c-b,h);
            
            

        }
        cout<<ans<<endl;


    }
    

    return 0;
    }