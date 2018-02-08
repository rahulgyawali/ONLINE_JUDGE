#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,q,t,x;
    
    cin>>n;
    
    priority_queue<int> w;
    
    while(n--) {
        cin>>x;
        w.push(x);
    }
    
    cin>>q;
    
    while(q--) {
        
        cin>>t;
        
        if(t== 1) {
            cin>>x; 
            w.push(x);
            
        }else{
            
            cout<<w.top()<<endl;
        }
    }
    
    return 0;
}
