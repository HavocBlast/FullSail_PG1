#include <string>
#include <vector>

using namespace std;

class Submission
{
public:

	/* TODO: Test 1
	* ========================
	* Given an array of integers, and an integer index, 
	* return the item at the given index of the array.
	* 
	* Example input:
	* - [ 2, 4, 6, 8, 10 ]
	* - 3
	* 
	* Example output:
	* - 8
	*/
	static int Test1(int numbers[], int index)
	{
		return 0;
	}

	/* TODO: Test 2
	* ========================
	* Given an array of integers, and an integer index,
	* replace the item at the given index with a 0.
	*
	* Tips:
	* - This method has a void return type. This is 
	*   because arrays are a reference-type variable, 
	*   meaning that any changes made to the array within
	*   the method will also be made to the original array
	*   outside of the method.
	* 
	* Example input:
	* - [ 2, 4, 6, 8, 10 ]
	* - 3
	*
	* Example output:
	* - [ 2, 4, 6, 0, 10 ]
	*/
	static void Test2(int numbers[5], int index)
	{

	}

	/* TODO: Test 3
	* ========================
	* Given a vector of strings, determine whether or
	* not the vector contains duplicate strings. If it
	* does, return true. Otherwise, return false.
	*
	* Example input:
	* - { "Mario", "Mario", "Miss Fortune", "Echo" }
	*
	* Example output:
	* - true
	*/
	static bool Test3(vector<string> names) {
		return false;
	}


	/* TODO: Test 4
	* ========================
	* Given an vector of integers, and an integer index,
	* return the item at the given index of the array using
	* the at() method.
	*
	* Example input:
	* - { 2, 4, 6, 8, 10 }
	* - 3
	*
	* Example output:
	* - 8
	*/
	static int Test4(vector<int> numbers, int index)
	{
		return 0;
	}

	/* TODO: Test 5
	* ========================
	* Given 5 integers, place each into an integer vector 
	* using the push_back() method and return the created 
	* vector.
	*
	* Example input:
	* - 5
	* - 7
	* - 9
	* - 10
	* - 15
	* 
	* Example output:
	* - { 5, 7, 8, 10, 15 }
	*/
	static vector<int> Test5(int number1, int number2, int number3, int number4, int number5)
	{
		return {};
	}

	/* TODO: Test 6
	* ========================
	* Given 4 strings, place each into a string vector
	* in order without using the push_back() method and 
	* return the created vector.
	*
	* Example input:
	* - Mario
	* - Master Chief
	* - Tracer
	* - Ezio Auditore
	*
	* Example output:
	* - { "Tracer", "Mario", "Ezio Auditore", "Master Chief" }
	*/
	static vector<string> Test6(string word2, string word4, string word1, string word3)
	{
		return {};
	}

	/* TODO: Test 7
	* ========================
	* Convert a given char array into an integer vector
	*
	* Tips:
	* - DO NOT use a null terminator here.
	*   instead, assume the size of the array will always
	*   only hold 5 characters.
	*
	* Example input:
	* -  [ t, c, q, v, j ]
	*
	* Example output:
	* - { 116, 99, 113, 118, 106 }
	*/
	static vector<int> Test7(char letters[])
	{
		return {};
	}
	
	/* TODO: Test 8
	* ========================
	* Given an array of capital letters,
	* change the array so that every other
	* letter is lowercase.
	* 
	* Tips:
	* - There are several solutions to this
	*   test. For example, one involves subtraction
	*   while another requires using the tolower() method.
	*   You may use either solution.
	* - DO NOT use a null terminator here.
	*   instead, assume the size of the array will always
	*   only hold 5 characters.
	* 
	* References:
	* - https://cplusplus.com/reference/locale/tolower/
	* - https://www.geeksforgeeks.org/tolower-function-in-cpp/
	*
	* Example input:
	* - [ L, V, F, D, C ]
	*
	* Example output:
	* - [ L, v, F, d, C ]
	*/
	static void Test8(char letters[])
	{

	}

	/* TODO: Test 9
	* ========================
	* Given 3 integer vectors, return a single 2D vector.
	*
	* Example input:
	* - [ 4, 0, 9, 7, 6 ]
	* - [ 43, 31, 48, 29, 40 ]
	* - [ 2, 5, 5, 2, 1 ]
	*
	* Example output:
	* - 4 43 2
	*   0 31 5
	*   9 48 5
	*   7 29 2
	*   6 40 1
	*/
	static vector<vector<int>> Test9(vector<int> mins, vector<int> maxes, vector<int> seeds)
	{
		return {};
	}

	/* TODO: Test 10
	* ========================
	* Given a 2D vector int integers, 
	* return a new 2D vector transposed.
	*
	* Example input:
	* - 5 1 5
	*   4 9 6
	*
	* Example output:
	* - 5 4
	*   1 9
	*   5 6
	*/
	static vector<vector<int>> Test10(vector<vector<int>> numbers)
	{
		return {};
	}
};