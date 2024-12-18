#include <stdio.h>

int main(void)
{
	FILE* fp;


	fopen_s(&fp, "C:\\Users\\qweop\\Downloads\\test_read.txt", "w");
	if (fp == NULL)
	{
		printf("Cannot open file..please check the file path..\n");
		return 1;
	}

	char str[] = "banana";
	int i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);
	return 0;

}