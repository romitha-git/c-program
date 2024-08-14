#include <stdio.h>
int main()
{
	int rows;
	printf("Number of rows: ");
	scanf("%d",&rows);

	for (int i = 0; i <=rows; i++){
		for (int j = 1; j <= i; j++) {
			printf("*");
		
		}
		printf("\n");
	}
	}
