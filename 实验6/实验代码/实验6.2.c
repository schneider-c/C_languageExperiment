#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* del(char* s)
{
	int j = 0, k = 0;
	for (j = k = 0; s[j] != '\0'; j++)
		if (s[j] != '*')
			s[k++] = s[j];
	s[k] = '\0';
	int i = 0;
	for (i = 0; i < k; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	return s;
}
int main()
{
	char a[80];
	gets(a);
	del(a);
	puts(a);
}
