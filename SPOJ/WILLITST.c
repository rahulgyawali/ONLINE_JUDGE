#include <stdio.h>
#include <stdlib.h>

int main()
{

	long long int x;
	int t;
	scanf("%lld",&x);
	
	t = (x && !(x & (x - 1)));

	if (t == 1) {
		
		printf("TAK\n");

	} else {

		printf("NIE\n");
	} 

}

