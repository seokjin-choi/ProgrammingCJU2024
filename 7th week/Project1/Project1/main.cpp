#include <stdio.h>
#include <string.h>

void change_word(char* start, char* end)
{
	while (start < end)
	{
		char temp;
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main(void)
{
	char input[100];
	
	printf("Enter a string: ");

	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';

	printf("Before removing newline: \"%s\"\n", input);
	
	char* start = input;
	char* end;
	while (*start)
	{
		end = start;
		while (*end && *end != ' ')
		{
			end++;
		}
		change_word(start, end - 1);
		start = end;

		while (*start == ' ')
		{
			start++;
		}
	}

	printf("After removing newline: %s\n", input);
	
	return 0;
}