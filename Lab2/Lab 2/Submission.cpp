#include <string>
#pragma warning(disable:4244)

using namespace std;

class Submission {
public:

	/* Test 3
	 * =========
	 * Given a string, using the stoi() method, convert the string 
	 * to an integer. Return the integer.
	*/
	static int Test3(string input) {

		// placeholder for result
		int result = 0;

		// convert input from a string to an integer using the stoi() method and assign to result
		result = stoi(input);

		// return result
		return result;
	}

	/* Test 4
	 * =========
	 * Given a string, using the stod() method, convert the string
	 * to a double. Return the double.
	*/
	static double Test4(string input) {

		// placeholder for result
		double result = 0.0;

		// convert input from a string to a double using stod() method and assign to result
		result = stod(input);

		// return result
		return result;
	}

	/* Test 5
	 * =========
	 * Given a string, using the stof() method, convert the string
	 * to a float. Return the float.
	*/
	static float Test5(string input) {

		// placeholder for result
		float result = 0.0f;

		// convert input from a string to a float using the stof() method and assign to result
		result = stof(input);

		// return result
		return result;
	}

	/* Test 6
	 * =========
	 * Given a string, using the stoul() method, convert the string
	 * to an unsigned integer. Return the unsigned integer.
	*/
	static unsigned int Test6(string input) {

		// placeholder for result
		unsigned int result = 0;

		// convert input from a string to an unsigned int using the stoul() method and assign to result
		result = stoul(input);

		// return result
		return result;
	}

	/* Test 7
	 * =========
	 * Given a string, using the stoull() method, convert the string
	 * to an unsigned long. Return the unsigned long.
	*/
	static unsigned long Test7(string input) {
		
		// placeholder for result
		unsigned long result = 0;

		// convert input from a string to an unsigned long using the stoull() method and assign to result
		result = stoull(input);

		// return result
		return result;
	}

	/* Test 8
	 * =========
	 * Given a double, using a cast, convert the double
	 * to a float. Return the float.
	*/
	static float Test8(double input) {
		
		// placeholder for result
		float result = 0.0;

		// convert input from a double to a float using a cast and assign to result
		result = (float) input;

		// return result
		return result;
	}

	/* Test 9
	 * =========
	 * Given a float, using a cast, convert the float
	 * to an integer. Return the integer.
	*/
	static int Test9(float input) {

		// placeholder for result
		int result = 0;

		// convert input from a float to an integer using a cast and assign to result
		result = (int) input;

		// return result
		return result;
	}

	/* Test 10
	 * =========
	 * Given an integer, convert the integer
	 * to a string using the to_string() method.
	 *
	 * Return the string.
	 *
	 * References:
	 * - https://cplusplus.com/reference/string/to_string/
	 * - https://www.geeksforgeeks.org/stdto_string-in-cpp/
	*/
	static string Test10(int input) {

		// placeholder for result
		string result = "";

		// convert input from an integer to a string using to_string() method and assign to result
		result = to_string(input);

		// return result
		return result;
	}
};