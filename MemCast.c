#include <stdio.h>

int main(){
	int i;
	int four_ints[4];
	char* four_c;

	for(i = 0; i < 4; i++)
        four_ints[i] = 2;

	printf("%x\n", four_ints[0]);
	
    four_c = (char*)four_ints;

	for(i = 0; i < 4; i++)
        four_c[i] = 'A' + i; // ASCII value of 'A' is 65 or 0x41 in Hex.
    
    // Add your code for the exercises here:
	printf("%x\n", four_ints[1] );

// print the values of four_ints and four_c in hex
printf("print the elements of four_c in hex\n");
	for(i=0;i<4;i++){
		printf("%x\n", four_c[i]);
	}

	printf("print the elements of four_ints in hex\n");
		for(i=0;i<4;i++){
		printf("%x\n", four_ints[i]);
	}

	// #6
		for(i=0;i<4;i++){
		printf("values and address of four_c are %x,  %p\n", four_c[i], &four_c[i]);
	}

		for(i=0;i<4;i++){
		printf("values and address of four_ints are %x,  %p\n",four_ints[i], &four_ints[i]);
	}

	for(i = 0; i < 4; i++)
		{
			printf("Address of four_c[%d]: %p\n",i,&four_c[i]);
			printf("Address of four_c[%d]: %x\n",i,four_c[i]);
		}


	
	return 0;
}