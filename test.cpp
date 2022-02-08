#include "pch.h"
#include "functions.h"



TEST(lab2, find) {
	int arr[] = { 4,5,6,7 };
	EXPECT_EQ(find(4, arr, 3), -1);
	EXPECT_EQ(find(4, arr, 5), 1);
}
TEST(lab2, find2ndLargest) {
	int arr[] = { 4,6,3,7 };
	EXPECT_EQ(find2ndLargest(4, arr), 6);
	int arr2[] = { 6,6,7,7 };
	EXPECT_EQ(find2ndLargest(4, arr2), 6);

}
TEST(lab2, find2ndLargestNotThere) {

	int arr[] = { 6,6,6,6 };
	EXPECT_EQ(find2ndLargest(4, arr), -1);
}
TEST(lab2, copyArraytoArray) {
	int arr1[4] = { 4,6,3,7 };
	int arr2[4];
	copyArraytoArray(4, arr1, arr2);
	for (int i = 0; i < 4; i++)
	{
		EXPECT_EQ(arr1[i], arr2[i]);
	}

}
TEST(lab2, insertElementInserted) {
	int arr[6] = { 4,6,3,7 };
	int expectedResult[6] = { 4,9,6,3,7 };
	int size = 6;
	int count = 4;

	insertElement(size, count, arr, 9, 1);

	EXPECT_EQ(count, 5);
	EXPECT_EQ(size, 6);
	for (int i = 0; i < count; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}


}
TEST(lab2, insertElementFull) {
	int arr[6] = { 4,6,3,7 ,2,5 };
	int expectedResult[6] = { 4,6,3,7,2,5 };
	int size = 6;
	int count = 6;

	insertElement(size, count, arr, 4, 1);

	EXPECT_EQ(count, 6);
	EXPECT_EQ(size, 6);
	for (int i = 0; i < count; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}


}
TEST(lab2, insertElementOutsideSize) {
	int arr[6] = { 4,6,3,7 };
	int expectedResult[6] = { 4,6,3,7 };
	int size = 6;
	int count = 4;

	insertElement(size, count, arr, 4, 10);
	EXPECT_EQ(count, 4);
	EXPECT_EQ(size, 6);

	for (int i = 0; i < count; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}

}
TEST(lab2, deleteElement) {
	int arr[6] = { 4,6,3,7 };
	int expectedResult[6] = { 4,3,7 };
	int size = 6;
	int count = 4;

	deleteElement(size, count, arr, 1);

	EXPECT_EQ(count, 3);
	EXPECT_EQ(size, 6);
	for (int i = 0; i < count; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}


}
TEST(lab2, deleteElementEmpty) {
	int arr[6] = { 4,6,3,7,2,2 };
	int expectedResult[6] = { 4,6,3,7,2,2 };
	int size = 6;
	int count = 0;

	deleteElement(size, count, arr, 1);

	EXPECT_EQ(count, 0);
	EXPECT_EQ(size, 6);
	for (int i = 0; i < count; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}


}
TEST(lab2, frequencyCount) {
	int arr[] = { 3,6,3,3,7 };
	EXPECT_EQ(frequencyCount(5, arr, 3), 3);
	int arr2[] = { 4,6,6,7 };
	EXPECT_EQ(frequencyCount(4, arr2, 8), 0);
}
TEST(lab2, countDuplicates) {
	int arr[] = { 11,6,8,3,7 };
	EXPECT_EQ(countDuplicates(5, arr), 0);
	int arr1[] = { 3,6,8,3,7 };
	EXPECT_EQ(countDuplicates(5, arr1), 1);
	int arr2[] = { 4,6,6,7,8,4,8 };
	EXPECT_EQ(countDuplicates(7, arr2), 3);
}
TEST(lab2, reverse)
{
	int arr[4] = { 4,6,3,7 };
	int expectedResult[4] = { 7,3,6,4 };
	reverse(4, arr);
	for (int i = 0; i < 4; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}

}
TEST(lab2, rotatLeft)
{
	int arr[4] = { 4,6,3,7 };
	int expectedResult[4] = { 6,3,7,4 };
	rotateLeft(4, arr);
	for (int i = 0; i < 4; i++)
	{
		EXPECT_EQ(arr[i], expectedResult[i]);
	}

}

TEST(lab2, twoMovies) {
	int arr[4] = { 4,6,3,7 };


	EXPECT_TRUE(twoMovies(9, arr, 4));
	EXPECT_FALSE(twoMovies(20, arr, 4));

}


TEST(lab2, wordCounter) {
	char arr[20] = { "  hat  1d  boat a  " };

	EXPECT_EQ(wordCounter(20, arr), 3);
	char arr1[20] = { " ha2t  1d  boat a  " };


	EXPECT_EQ(wordCounter(20, arr1), 2);



}