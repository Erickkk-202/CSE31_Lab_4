
#include <stdio.h>
#include <malloc.h>

int** matMult(int **a, int **b, int size){
	// (4) Implement your matrix multiplication here. You will need to create a new matrix to store the product.
	int i,j;
	int **matC = (int**)malloc(size* sizeof(int*));	
	//initalize matC
	for (i=0;i<size; i++){
		*(matC +i)= (int*)malloc (size* sizeof(int*));
		for(j=0; j<size; j++){
			*(*(matC+i)+j) =0;
			for (int k=0; k<size; k++){
				*(*(matC+i)+j) = (*(*(matC+i)+j)) + (*(*(a+i)+k)) * (*(*(b+k)+j));// 
			}
		}
	}
/* int sum ;
//get the product of the two matrix
	for (i=0;i<size; i++){
		
		for (j=0; j<size; j++){
			sum =0;
			for(int k=0; k<size;k++){
				sum = sum + *(a+i) + *(b+j);
			}
			*(*(matC+i)+j)= *(*(a+i)+j) * *(*(b+j)+i);// mult column by row
		}
	} */
	//return new matrix 
	return matC;
}

void printArray(int **arr, int n){
	// (2) Implement your printArray function here
	int i;
	int size = n;//size
	int j;
	for(i=0;i<size;i++){
		//*(array+i)=(int*)malloc(n * sizeof(int*));
		for(j=0;j<size;j++){
			//*(*(arr+i)+j) = 0;
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
	printf("\n\n");

}

int main() {
	int n = 3;//0
	int **matA, **matB, **matC;
	// (1) Define 2 (n x n) arrays (matrices). 
	int i = 0, j = 0;
	//int size = 5;

	//create n x n
	matA = (int**)malloc(n * sizeof(int*));

	//intilaze memory in matA
	for(i=0;i<n;i++){
		*(matA+i)=(int*)malloc(n * sizeof(int));

		for(j=0;j<n;j++){
			*(*(matA+i)+j) = i;//all varibles are going to be i
			//printf("**arr[%d]= %d\n",i, *(*(arr+i)+j));
		}
	}

	//create 2nd n x n
	
	matB = (int**)malloc(n * sizeof(int*));


	//initallize matB
	for(i=0;i<n;i++){
		*(matB+i)=(int*)malloc(n * sizeof(int));

		for(j=0;j<n;j++){
			//scanf("%d",&(*(*(matB+i)+j)));
			*(*(matB+i)+j) = i;//all varibles are going to be i
			//printf("**arr[%d]= %d\n",i, *(*(arr+i)+j));
		}
	}

	



	// (3) Call printArray to print out the 2 arrays here.
	printArray(matA, n);
	printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	matC= matMult(matA, matB, n);
	
	// (6) Call printArray to print out resulting array here.
	printArray(matC, n);


    return 0;
}