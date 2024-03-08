
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        string s;
        cin>>s;
 
        s = "0" + s;
        int n = s.size();
        int k = n;
 
        for (int i=n-1; i>=0; i--)
        {
            if (s[i] >= '5')
            {
                s[i] = '0';
                k = i;
                int j = i - 1;
 
                while(s[j] == '9')
                {
                    s[j] = '0';
                    j--;
                }
 
                s[j]++;
            }
        }
 
        for(int i=k;i<n; i++)
            s[i] = '0';
 
        if(s[0] == '0')
            s = s.substr(1);
 
        cout<<s<<endl;
    }
}
 