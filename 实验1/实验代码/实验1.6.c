#include<stdio.h>
int main()
{
	int score1 = 0, score2 = 0, score3 = 0, score4 = 0;
	scanf("%d%d%d%d", &score1, &score2, &score3, &score4);
	int sum = 0;
	sum = score1 + score2 + score3 + score4;
	float average = 0;
	average = (float)sum / 4;
	printf("%d %.2f", sum, average);

	return 0;
}