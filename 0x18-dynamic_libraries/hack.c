#include "main.h"

int rand(void)
{
	static int counter = 0;
	int desired_numbers[] = {9, 8, 10, 24, 75, 9};
	int num_of_numbers = sizeof(desired_numbers) / sizeof(desired_numbers[0]);

	int index = counter % num_of_numbers;
	counter++;

	return desired_numbers[index];
}
