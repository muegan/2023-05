#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("input a number: ");
	scanf("%d", &num);
	
	if (num >= 0)
		printf("절댓값은 %d입니다.", num);
	else
		printf("절댓값은 %d입니다.", -num);
		
		
	return 0;
}
