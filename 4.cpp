#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       if(is_sorted(arr,arr+n)){
         cout<<"0"<<endl;
         continue;

       }
       int t=-1;
       for(int i=n-1;i>=0;i--){
       if(arr[i]>=arr[i-1])continue;
        else {
            t=i;
            break;
        }

       }
       int ans=*max_element(arr,arr + t);
       cout<<ans<<endl;
    


    }
    
return 0;

}