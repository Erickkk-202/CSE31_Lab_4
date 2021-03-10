#include <stdio.h>
#include <malloc.h>

void printArray(int**, int);

int main(){
	int i = 0, j = 0, n = 5;
	int **arr = (int**)malloc(n * sizeof(int*));

	// (3) Add your code to complete allocating and initializing the 2-D array here. The content should be all 0.

	for(i=0;i<n;i++){
		*(arr+i)=(int*)malloc(n * sizeof(int));
		for(j=0;j<n;j++){
			*(*(arr+i)+j) = 0;
			//printf("**arr[%d]= %d\n",i, *(*(arr+i)+j));
		}
	}

    // This will print out your array
	printArray(arr, n);

    // (6) Add your code to make arr a diagonal matrix
    for(i = 0; i < n; i++){
		*(*(arr + i) + i) = i+1;
	}

	
	
	// (7) Call printArray to print array
    printArray(arr, n);
	return 0;
}

void printArray(int ** array, int size){
    // (5) Implement your printArr here:
	int i;
	int n = size;
	int j;
	for(i=0;i<n;i++){
		//*(array+i)=(int*)malloc(n * sizeof(int*));
		for(j=0;j<n;j++){
			//*(*(array+i)+j) = 0;
			printf("%d ", *(*(array+i)+j));
		}
		printf("\n");
	}
	printf("\n\n");
}