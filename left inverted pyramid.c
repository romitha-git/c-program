#include <stdio.h>
int main()
{
	int rows;
	printf("Number of rows: ");
	scanf("%d",&rows);

	for (int i = 0; i <=rows; i++){
		for (int j = 0; j <= rows-i; j++) {
			printf("*");
		
		}
		printf("\n");
	}
	}
