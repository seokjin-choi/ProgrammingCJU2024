#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define SUBJECTS 4

typedef enum
{
	KOREAN,
	ENGLISH,
	MATH,
	SCIENCE,
	SUBJECT_COUNT
}Subjects;

typedef struct
{
	char name[50];
	int id;
	int scores[SUBJECT_COUNT];
	float average;
	int class_rank;
	int total_rank;
}Student;

void read_file(const char* filename, Student students[], int* count)
{
	FILE* file = fopen(filename, "r");
	if (!file)
	{
		printf("Error opening file: %s\n", filename);
		exit(1);
	}
	while (fscanf(file, "%s %d %d %d %d %d",
		students[*count].name, &students[*count].id,
		&students[*count].scores[KOREAN], &students[*count].scores[ENGLISH],
		&students[*count].scores[MATH], &students[*count].scores[SCIENCE]) != EOF) {
		(*count)++;
	}

	fclose(file);
}

void calculate_average(Student students[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int total = 0;
		for (int j = 0; j < SUBJECTS; j++)
		{
			total += students[i].scores[j];
		}
		students[i].average = total / (float)SUBJECTS;
	}
}
void calculate_rank(Student students[], int count)
{
	qsort(students, count, sizeof(Student), compare_by_average);
	for (int i = 0; i < count; i++)
	{
		students[i].class_rank = i + 1;
	}
}
void write_file(const char* filename, Student students[], int count)
{
	FILE* file = fopen(filename, "w");
	if (!file)
	{
		printf("Error writing to file:%s\n", filename);
		exit(1);
	}
	fprintf(file, "ID\tName\tKorean\tEnglish\tMath\tScience\tAverage\tClass Rank\n");
	for (int i = 0; i < count; i++)
	{
		fprintf(file, "%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t%d\n",
			students[i].id, students[i].name,
			students[i].scores[KOREAN], students[i].scores[ENGLISH],
			students[i].scores[MATH], students[i].scores[SCIENCE],
			students[i].average, students[i].class_rank);
	}
	fclose(file);
}
float calculate_class_average(Student students[], int count)
{
	float total = 0;
	for (int i = 0; i < count; i++) {
		total += students[i].average;
	}
	return total / count;
}

int compare_by_average(const void* a, const void* b)
{
	float avg_a = ((Student*)a)->average;
	float avg_b = ((Student*)b)->average;
	if (avg_a > avg_b) return -1;
	if (avg_a < avg_b) return 1;
	return 0;
}


int main(void)
{

	return 0;
}