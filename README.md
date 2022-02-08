# Google-Test-Template

Testing "Google Test" Project template which can be found in Visual Studio and solving many tasks.


# Tasks: 

1) Create a "Google Test" Project in Visual Studio. 
2) Create test.cpp for testing methods.        
3) Create functions.h
4) Write following methods to functions.h :

4.1) Method that finds an element in an array and prints out the index where it was found and -1 if it was not found. <br/>
4.2) Method that finds and returns the second largest element in an array of positive integer, returns -1 if it can’t find one. <br/>
4.3) Method that copies all elements from an arr1 to  arr2. Both arrays are the same size.<br/>
4.4) Method that is able to insert an element in an array at a specified position. <br/>
4.5) Method that is able to insert an element at a particular index in the array and shift the elements further in the array to the right. Use a variable called count to <br/>
track the number of elements in the array. The count must not exceed the size of the array. Return true if an element was inserted, otherwise return false. <br/>
4.6) Method that deletes an element from an array of size 12 at specified position. The elements higher in the array are shifted to the left one position. Use a variable <br/>
called count to track the number of elements in the array. The count cannot exceed the size of the array. Return true if an element was deleted, otherwise return false. <br/>
4.7) Method to count the frequency of an element in an array. <br/>
4.8) Method to count total number of duplicate elements in an array. <br/>
4.9) Method to find the reverse of an array.You must only declare and use 1 array <br/>
4.1.1) Method to left rotate an array by one position. Note: the first element is rotated to the end of the array <br/>

5) Solve next problem: <br/>
You've built an inflight entertainment system with on-demand movie streaming. 
Users on longer flights like to start a second movie right when their first one ends, 
but they complain that the plane usually lands before they can see the ending.
So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.
The function takes an integer flightLength(in minutes) and an array of integers movieLengths(in minutes) 
and returns a boolean indicating whether there are two numbers in movieLengths whose sum equals flightLength.
When building your function :
Assume your users will watch exactly two movies
Don't make your users watch the same movie twice

6) Extend functions.h with method that takes as input an array of chars, and return the number of separate words, where a word is one or more characters separated by spaces. Your program should only count as words groups of characters in the ranges A..Z and a..z.
