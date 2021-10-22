#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20] = { 'h','e','l','l','o',',' };
	char s2[20] = { 'w','o','r','l','d','!' };
	strcat(s1, s2);
	puts(s1);
}