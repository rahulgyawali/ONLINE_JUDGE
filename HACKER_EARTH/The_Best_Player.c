#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Fan {
    
    char name[1000];
    long int quote;
};

void SORT(struct Fan arr[],long int start,long int end)
{
	long int i;
	long int j;
	long int temp;
	char dummy[1000];
	
	for (i = 0; i < end - 1; i++) {

		for (j = 0; j < end - i - 1; j++) {
				
			if (arr[j].quote > arr[j+1].quote) {

				temp = arr[j].quote;
				arr[j].quote = arr[j+1].quote;
				arr[j+1].quote = temp;
	
	
				strcpy(dummy,arr[j].name);
				strcpy(arr[j].name,arr[j+1].name);	
				strcpy(arr[j+1].name,dummy);		
			}
		}
	}

	for (i = 0; i < end - 1; i++) {

		for (j = 0; j < end - i -1; j++) {

			if ((strcmp(arr[j].name,arr[j+1].name) < 0)&&(arr[j+1].quote == arr[j].quote)) {
		
				strcpy(dummy,arr[j].name);
                                strcpy(arr[j].name,arr[j+1].name);
                                strcpy(arr[j+1].name,dummy);  

			}
		}
	}

}

int main()
{
    long int N;
    long int T;
    long int i;
    long int x;
    
    scanf("%ld %ld",&N,&T);
    
    struct Fan arr[N];
    
    for (i = 0; i < N; i++) {
        
        scanf("%s",arr[i].name);
        scanf("%ld",&arr[i].quote);
        
    }

    SORT(arr,0,N);
   
    
    for (i = 0; i < T; i++) {
        
            printf("%s\n",arr[N-1-i].name);
    }
        
    
    return 0;
}

