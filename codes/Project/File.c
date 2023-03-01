#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[10];
	FILE *fp;
	printf("\n Enter file name \n");
	scanf("%[^\n]",name);
	fp = fopen(name,"w");
	if(fp == NULL)
	{
		printf("\n file not created sucessfully\n");
		exit(1);
	}
	printf("\n File created successfully\n");
}


