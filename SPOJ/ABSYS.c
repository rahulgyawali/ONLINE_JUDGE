#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	long long int t;
	int i;
	int p;
	int k;
	int j;
	int u;
	char op1[100];
	char op2[100];	
	char result[100];
	char a;
	char b;
	char f;
	
	scanf("%lld",&t);
	printf("\n");

	while (t--) {

		scanf("%s",op1);
		scanf("%c",&f);
		scanf("%c",&f);	
		scanf("%c",&f);
		scanf("%s",op2);
		scanf("%c",&f);
		scanf("%c",&f);	
		scanf("%c",&f);		
		scanf("%s",result);
						
		for (i = 0; (op1[i]!='\0') || (op2[i]!='\0') || (result[i]!='\0');i++) {
			
			if (op1[i] == 'm') {
			
				int u;
				int k = atoi((op2));
				int j = atoi((result));
				u  = j - k;
				
				printf("%d + %d = %d\n",u,k,j);
				
				break;
				
			} else if (op2[i] == 'm') {

				int u = atoi((op1));
				int k ;
				int j = atoi((result));
				k = j - u;
				
				printf("%d + %d = %d\n",u,k,j);
				break;

			}else if (result[i] == 'm') {
			
				int u = atoi((op1));
				int k = atoi((op2));
				int j;
				j= k+u;
				
				printf("%d + %d = %d\n",u,k,j);
				break;					
			}		
		}
	
		printf("\n");	
	
	}
	
	return 0;
}


