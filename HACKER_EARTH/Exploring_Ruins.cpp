#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string s;
    
    int i;
    int j;
    cin>>s;
    
    for (i = 0;i < s.length();i++) {
        
        if (s[i] == '?') {
            
            	if (s[i+1] == 'a') {
                
                	s[i] = 'b';
                
            	} else if (s[i+1] == 'b') {

			if (s[i-1] == 'a') {
		
				s[i] = 'b';

			}else {
                
                	s[i] = 'a';
                	}

              	} else if (i == 0 ) {

			s[i] = 'a';
	   
	 	} else if ((i+1 == s.length())) {
	
	                if (s[i-1] == 'a') {
		
                	    s[i] = 'b';

              	        }else if (s[i-1] == 'b') {

                   	     s[i] = 'a';
                	}

	        } else if (s[i+1] == '?') {
        	        
              		  if (s[i-1] == 'a') {   
                
                   		 s[i] = 'b';
                
              		  }else if (s[i-1] == 'b') {
                    
                  		  s[i] = 'a';
                	  }
          	}
    	    
     	}
    }
    
    cout<<s<<endl;
    
    
    return 0;
}

