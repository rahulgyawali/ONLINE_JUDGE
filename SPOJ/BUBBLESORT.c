#include <stdio.h>
#include <stdlib.h>



int  merge (int a[],int left[],int right[],int nl,int nr)
{
	int i,j,k,c;
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
int  mergesort(int a[],int n) 
{
	if (n < 2) {
		
		return 0;
		
	} else {
		
		int mid = n/2;
		int left[mid];
		int right[n-mid];
		int i;
		int x;
		int y;
		int z;
		
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
    int n;
    int i;
    int t;
    int u;
    int z;
    
    scanf("%d",&t);
    
    u = t;
    
    while (t--) {
    	
    	scanf("%d",&n);
    
    	int a[n];
    	int p;
    	
    
    	for (i = 0; i < n; i++) {
    	
    		scanf("%d",&a[i]);
    	}
    
    	p = mergesort(a,n);
    	
    	z = u - t;
    	
    	p = p%10000007;
		
		printf("Case %d: %d\n",z,p);
    }
    return 0;
}

