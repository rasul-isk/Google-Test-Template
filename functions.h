//Assignment No.:	Lab 2
//Student Name:		Rasul Iskandarov
//Student Number:	C00246498
//Date:				29/10/2021

#pragma once


int find(int size, int arr[], int toFind)
{
	for (int index = 0; index < size; index++) {
		if (arr[index] == toFind) {
			return index;
		}
	}
	return -1;
}

int find2ndLargest(int size, int arr[])
{
	int largest = -1;
	int secLargest = -1;
	for (int index = 0; index < size; index++) {
		if (largest < arr[index]) {
			largest = arr[index];
		}
	}
	for (int count = 0; count < size; count++) {
		if (secLargest < arr[count] && arr[count] != largest)
		{
			secLargest = arr[count];
		}
	}
	if (secLargest != -1) {
		return secLargest;
	}
	else {
		return -1;
	}
}

void copyArraytoArray(int size, int arr1[], int arr2[])
{
	for (int index = 0; index < size; index++) {
		arr2[index] = arr1[index];
	}
	return;
}

bool insertElement(int& size, int& count, int arr[], int elementToInsert, int insertIndex)
{
	if (count < size && insertIndex <= count && count > 0) {
		for (int index = count; index > insertIndex; index--) {
			arr[index] = arr[index - 1];
		}
		arr[insertIndex] = elementToInsert;
		count++;
		return true;
	}

	return false;
}

bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{
	if (deleteIndex < count && deleteIndex >= 0 && count > 0) {
		for (int index = deleteIndex; index < count - 1; index++) {
			arr[index] = arr[index + 1];
		}
		arr[count - 1] = 0;
		count--;
		return true;
	}
	return false;
}

int frequencyCount(int size, int arr[], int value)
{
	int count = 0;
	for (int index = 0; index < size; index++) {
		if (arr[index] == value) {
			count++;
		}
	}
	return count;
}

int countDuplicates(int size, int arr[])
{
	int count = 0;
	for (int element = 0; element < size; element++) {

		for (int check = element + 1; check < size; check++) {
			if (arr[element] == arr[check]) {
				count++;
			}
		}
	}
	return count;
}

void reverse(int size, int arr[])
{
	int operations = 0;
	int start = 0, end = size - 1;

	if (size % 2 == 0) {
		operations = size / 2;
	}
	else {
		operations = size / 2 + 1;
	}

	while (operations)
	{
		if (start < end) {
			int temp = arr[end];
			arr[end] = arr[start];
			arr[start] = temp;
		}
		operations--;
		start++;
		end--;
	}
	return;
}

int rotateLeft(int size, int arr[])
{
	int temp = arr[0];
	for (int index = 0; index < size - 1; index++) {
		arr[index] = arr[index + 1];
	}
	arr[size - 1] = temp;

	return -1;
}

bool twoMovies(int flightLength, int mov[], int size)
{
	for (int movie = 0; movie < size; movie++) {
		for (int movie2 = 0; movie2 < size; movie2++) {
			if (movie != movie2 && (mov[movie] + mov[movie2]) == flightLength) {
				return true;
			}
		}
	}
	return false;
}

int wordCounter(int size, char characters[])
{
	int count = 0;
	int charIndex = 1;

	while (charIndex < size - 1)
	{
		if (characters[charIndex - 1] == ' ' && ((characters[charIndex] < 91 && characters[charIndex] > 64) || (characters[charIndex] < 123 && characters[charIndex] > 96)))
		{
			while (true)
			{
				if (characters[charIndex] <= 64 || (characters[charIndex] <= 96 && characters[charIndex] >= 91) || characters[charIndex] >= 123)
				{
					charIndex++;
					break;
				}
				else if (characters[charIndex + 1] == ' ')
				{
					charIndex++;
					count++;
					break;
				}
				else {
					charIndex++;
				}
			}
		}
		else
		{
			charIndex++;
		}
	}

	return count;
}