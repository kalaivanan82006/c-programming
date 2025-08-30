#include<stdio.h>
int main()
{
	char a[50];
	printf("entre the msg:");
	scanf("%[^\n]s",&a);
	printf("%s",a);
	return 0;
}