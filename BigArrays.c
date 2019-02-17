/* Alexander Wuerz */
#include <stdio.h>
#include <stdlib.h>

/* Create a global array outside of main
 * which will be on the Static memory. */
//int stat[2305000000000000000]; // OK 
//int stat[2306000000000000000]; // NOT OK
int stat[2000000000]; // OK 


int main()
{
	int scN = 2000000; // OK
	int hpN = 99999999; 
	/* Create an array inside main which 
	 * will be on the Stack memory. */
	int stac[scN]; 

	/* Create an array using malloc which 
	 * will be on the Heap memory. */ 
	int* hp = (int*) malloc(hpN * sizeof(int));
	
	printf("Static array address: %p\n", (void*)stat);
	printf("Stack array address: %p\n", (void*)stac);
	printf("Heap array address: %p\n", (void*)hp);

	return 0; 
}
