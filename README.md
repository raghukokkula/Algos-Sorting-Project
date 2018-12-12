# Algos_sorting_project

OBJECTIVE:

Write a program to rearrange a given 'r * c' (r - rows, c - columns) matrix as follows:
- each row is sorted in non-decreasing order
- each column is sorted in non-decreasing order

 

PROCESSING:

You will perform the required sorted output of the matrix by two methods:

Method 1:
Take all the 'r*c' elements in an array, sort it, then output row-wise (column-wise will also work!) as a 'r*c' matrix.

Method 2:
Sort each row separately one-by-one.
Then, sort each column separately one-by-one.
Output this matrix.

 

Sorting Method:
Use QuickSort. You need to keep track of how many element comparisons your algorithm is making (i.e., how many times you are using the black box). This does NOT include comparisons you make for a loop variable (like i < n), or any assignments you make, or loop increments (like i++), etc. Only element comparisons must be counted, i.e., when you compare an array element with another array element, (like A[i] <= A[j]), etc.
The Partition method must do the partitioning In-Place. In addition, the Partition method written by you must make exactly (<size of current working array> - 1) (i.e., (right - left) in the variables used in lecture notes) array element comparisons per call, for the actual partitioning. Comparisons you make for choosing a better pivot (like median of 3 elements) are extra - but they must be counted as well.
The program should output the sorted array and output the total number of element comparisons taken.

 

INPUT:

You can assume the array elements will be integers.

Read the input matrix from a file named "input.txt".
This file will have the matrix elements separated ONLY by "space" and "end of line (newline)" characters.
The first line will have the number of rows and columns (separated by space).
Thereafter, each line will contain the elements of a row (separated by space).
For example:

5 7
14 51 17 28 31 1 2
2 2 2 2 2 2 2
8 5 9 2 1 18 19
1 2 3 4 5 6 7
9 8 7 6 5 4 3

No other characters will be present in the file.
Note that your program must NOT take command line inputs.

 

OUTPUT(S):

Your program will generate 2 output files:

<your login>_1.txt:
output the matrix for method 1 (keep same format as the input)
output the total number of comparisons taken
<your login>_2.txt:
output the matrix for method 2 (keep same format as the input)
output the total number of comparisons taken

For example, mine will be sadasis_1.txt and sadasis_2.txt.

Note that the output should be reasonably formatted for easy readability.
