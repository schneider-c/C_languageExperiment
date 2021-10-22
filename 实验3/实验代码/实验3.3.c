#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int randomNumber = 0;
	srand((unsigned)time(NULL));
	randomNumber = rand() % 101;
	printf("%d\n", randomNumber);
	int count = 0;
	while (1)
	{
		int guess = 0;
		int error = 2;
		printf("time%d:", count + 1);
		scanf("%d", &guess);
		count = count + 1;
		if (guess > randomNumber) error = 1;
		else if (guess < randomNumber) error = -1;
		else error = 0;
		if (count == 5)
		{
			printf("you guess wrong");
			break;
		}
		else 
		{
			if(error==1) printf("it is bigger than result,try again\n");
			if (error == -1)printf("it is smaller than result,try again\n");
			if (error == 0)
			{
				printf("RIGHT! you guessed it %d times", count);
				break;
			}
		}
		
	}
	return 0;
}