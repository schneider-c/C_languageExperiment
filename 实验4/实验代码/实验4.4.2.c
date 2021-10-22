#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char s1[20] = { 'h','e','l','l','o',',' };
	char s2[20] = { 'w','o','r','l','d','!' };
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	while (s2[i] != '\0')
	{
		
		s1[n1] = s2[i];
		n1 = n1 + 1;
		i = i + 1;
	}
	puts(s1);
}