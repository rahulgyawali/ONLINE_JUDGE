//FIND THE NO. OF PAIRS WHOSE DIFFERENCE IS EQUAL TO SUM
//USED MAP

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <utility>

using namespace std;
 
void findPair(long long int arr[], long long int n, long long int sum)
{
    
    map<long long int, long long int> map;
 
    long long int i;
    long long int count;
 
    count = 0;
	
    for (i = 0; i < n; i++) {
	    
        map[arr[i]] = i;					//Map the Values 
    }
 
    for (i = 0; i < n; i++) {    

	count = count + map.count(arr[i]+sum);			//Count No.s whose value is Equal to ( No. + Sum )
	   
    }

    cout <<count<<endl;
}

int main()
{
    	long long int n;
	long long int sum;
	long long int i;

	cin>>n>>sum;
	
	long long int arr[n];	
	
	for (i = 0; i < n; i++) {
		
	 	cin>>arr[i];
	}
	
	findPair(arr, n, sum);
	
 	return 0;
}
