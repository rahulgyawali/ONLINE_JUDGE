#include <bits/stdc++.h>

using namespace std;

void separateNumbers(string s)
{
    if(s.size() ==1) {
        cout<<"NO"<<endl;
        return;
    }
    if(s[0] == '0') {
        cout<<"NO"<<endl;
        return;
    }
    
    int i;
    string temp;
    int y;
    long int q;
    int k;

    for(i=1; i <= s.size()/2 ; ++i) {

        vector<long int>num;
        string finale;
        
        temp = s.substr(0,i);
        num.push_back(stol(temp));
            
        finale = finale + temp;
           
        while(finale.size() < s.size()) {
          
                q = num.back()+1;
                num.push_back(q);
                finale+=to_string(num.back());
                
        }
        if (finale == s ) {

            cout<<"YES"<<" "<<num[0]<<endl;
            return;
        }

    }

     cout<<"NO"<<endl;
    return; 
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        separateNumbers(s);
    }
    return 0;
}
