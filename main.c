#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=32;
	int num;
	int trial=0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &num);
		
		
		//decision (low/high) (wrong answer)
		if(num>answer)
			printf("Low\n");
		else if(num<answer)
			printf("High\n");
			
		trial+=1;
	}
	while (num!=answer); //loop condition : answer is equal to num??
	
	printf("Congratulation!\n");
	printf("trials: %d\n", trial);
	
	return 0;
}
