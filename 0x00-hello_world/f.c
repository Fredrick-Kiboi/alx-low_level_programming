#include <stdio.h>

int main()
{
	FILE *fp = fopen("output.txt", "w");
	if (fp == NULL)
	{
		fprintf(stderr,"Error: Could not open this particular file.\n");
		return (1);
	}
	fprintf(fp, "This is the text that am printing.\n");
	fclose(fp);
	return (0);
}
