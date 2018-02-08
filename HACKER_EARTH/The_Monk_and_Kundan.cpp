#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,sum,j;
    string x,temp;
    
    
    string a = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char,int> mp;
    for(i = 0; i < a.size(); i++) {
        mp[a[i]] =  i;
        
    }
    
    cin>>t;
    getline(cin,x);
    while(t--) {
        
        getline(cin,x);
         
        n = 0;
        j = 0;
        sum = 0;
        
        for(i = 0; i < x.size(); i++) {
        
           if(x[i] == ' ') {
               j=0;
               n++;
               continue;
           }else{
               
               sum = sum + mp[x[i]]+j;
               j++;
           }
        
        }
        
        sum = sum*(n+1); 
        cout<<sum<<endl;
    }
    return 0;
}
