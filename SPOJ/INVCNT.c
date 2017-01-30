#include <stdio.h>
#include <stdlib.h>



long long int  merge (long long int a[],long long int left[],long long int right[],long long int nl,long long int nr)
{
	long long int i,j,k,c;
	i = j = k = 0;
	
	c = 0;
	
	while (i < nl && j <nr) {
		
		if (left[i] < right[j]) {
			
			a[k++] = left[i++];
			
		} else if (right[j] < left[i]) {
			
			a[k++] = right[j++];
			c = c + (nl - i);
		}
		
	}
	
	while (i < nl)
		a[k++] = left[i++];
		
	while (j < nr)
		a[k++] = right[j++];
		
	return c;	
	
}
long long int mergesort(long long int a[],long long int n) 
{
	if (n < 2) {
		
		return 0;
		
	} else {
		
		long long int mid = n/2;
		long long int left[mid];
		long long int right[n-mid];
		long long int i;
		long long int x;
		long long int y;
		long long int z;
		
		for (i = 0;i < mid; i++)
			left[i] = a[i];
			
		for (i = mid;i < n; i++)
			right[i - mid] = a[i];
		
		x = mergesort(left,mid);
		y = mergesort(right,n-mid);
		z = merge(a,left,right,mid,n-mid);
		
		return x+y+z;
	}
	
}

int main()
{
    	long long int n;
    	long long int i;
    	long long int t;
    	char x;
    
    	scanf("%lld",&t);
	printf("\n");	   
 
	while (t--) {	

		scanf("%lld",&n);

		if (n == 0) { 
				
			printf("0\n");			
			continue;
		}

    		long long int a[n];
    		long long int p;
    
    		for (i = 0; i < n; i++) {
    	
    			scanf("%lld",&a[i]);
    		}
    
    		p = mergesort(a,n);
    
    		printf("%lld\n",p);
		printf("\n");
		//x = getchar();
	}
    
    	return 0;
}

