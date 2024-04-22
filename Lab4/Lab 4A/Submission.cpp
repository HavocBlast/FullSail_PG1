#include <string>

// TODO: Uncomment this line after you create your MathOperator enum
// #define MATH_OPERATOR

using namespace std;

/*
* This lab is NOT interactive - that means there should be no
* calls to the Console class (no cout/cin)
*
*
* This is Lab 4 - it is intended for you to demonstrate your
* understanding of selection statements (if and switch). This means
* you are required to use either a switch or if statement for all
* Test solutions (Test6 is an exception to this rule). For Test6, you
* are permitted to simply 'pass through' the value returned by the
* Equals method.
*
*
* Note: Once you have completed your MathOperator enum, uncomment the
* definition on line 4 in order to run Tests 1 and 2.
*
* Additional reminders. In PG1:
*      1. Methods are not permitted to use more than 1 return statement
*      2. You are not allowed to use the Convert class
*      3. You are not allowed to use var in place of a known data type
*/


// Before beginning Tests 1 and 2, you need to define an enum named
// MathOperator with five values: Add, Subtract, Multiply, Divide and
// Modulo.


class Submission
{



public: // <----- Your enumerator must be below this line

	// TODO: CREATE YOUR ENUMERATOR HERE

#ifdef MATH_OPERATOR
	/* TODO: Test 1 - Create an enum
	* =================================
	 * Create an enumerator named MathOperator five values (in order):
	 * Add, Subtract, Multiply, Divide and Modulo.
	 *
	 * After creating the enum, you are to return a MathOperator
	 * value based on the value of the parameter provided:
	 *
	 * 0 = MathOperator.Add
	 * 1 = MathOperator.Subtract
	 * 2 = MathOperator.Multiply
	 * 3 = MathOperator.Divide
	 * 4 = MathOperator.Modulo
	 *
	 * Tips:
	 * - You do not need to worry about/handle any other possible
	 *   input values (the only values passed to the method
	 *   will be 0, 1, 2, 3 or 4)
	*/

	static MathOperator Test1(int input)
    {
        return MathOperator::Modulo;
    }

    /* TODO: Test 2
	* =====================
	* Use the MathOperator enum you developed for Test1 to decide what
	* operation to perform on the two int values provided. Return the result of
	* performing the indicated operation on the int values.
	*
	* Example input:
	* - 5
	* - 2
	* - MathOperator.Add
	*
	* Expected output:
	* - 7
	*/
    static int Test2(int number1, int number2, MathOperator operation)
    {
        return 0;
    }
#endif

    /* TODO: Test 3
	* ==================
	* Given a bool parameter, return a string indicating
    * the related term. When the bool is true return "Proven", 
    * when the bool is false return "Denied".
    *
    * Tips:
    * - Again remember all identifiers are case sensitive.
	* - The case of your response must match exactly.
	*
	* Example input:
	* - true
	*
	* Expected output:
	* - "Proven"
	*/

    static string Test3(bool input)
    {
        return "";
    }

    /* TODO: Test 4
    * ==================
    * Given a weight in either kilograms or pounds and a bool,
    * you will either convert kilograms to pounds (when the
    * bool is true) or pounds to kilograms (when the bool is false).
    *
    * Tips: 
    *  - The conversions are:
    *    1 kg = 2.2 lb
    *    1 lb = 0.45 kg
    *
    * Example input:
    * - 2.75
    * - true
    *
    * Expected output:
    * - 6.05
    */
    static double Test4(double input, bool kiloToLb)
    {
        return 0;
    }

    /* TODO: Test 5
	* ==================
	* Given an int that represents the severity of an employee infraction,
	* return the associated action required as a string.
	*
	*   Infraction Severity            Required Action
	*         Level 1                   Verbal Reprimand
	*         Level 2                   Formal Reprimand
	*         Level 3                   Suspension
	*         Level 4                   Termination
	*
	*  Tips:
	*  - Keep in mind, action required must be spelled correctly
	*    (exactly as above)
	*
	* Example input:
    * - 3
    *
    * Expected output:
    * - "Suspension"
	*/

    static string Test5(int input)
    {
        return "";
    }

    /* TODO: Test 6
	* ==================
	* Given an integer variable year, determine if the year is
	* a leap year. If it is, return true, otherwise return false.
	*
	* Tips:
	* - A leap year is a year visible by 4, but not divisible by 100.
	* - However, years divisible by 400 are also consider to be leap years.
	*
	* Example input:
	* - 1979
	*
	* Example output:
	* - false
	*/

    static bool Test6(int year)
    {
        return false;
    }

	/* TODO: Test 7
    * ==================
    * Given the three sides of a Triangle, determine if the triangle
    * is a Right Triangle. A triangle where the sum of the squares
    * of the two shortest sides (a and b) is equal to the square of
    * longest side (c) is a 'Right' triangle. The third parameter
    * (c) will always be the longest side given.
    */
    static bool Test7(int a, int b, int c)
    {
        return false;
    }

    /* TODO: Test 8
	* ==================
	* Given the grade variable, which indicates a student's numeric grade,
	* determine which letter grade they should receive. Return the proper
	* letter (char) as the result of this test. Do not worry about rounding
	* the grade. Use the following table to indicate which letter corresponds
	* to provided grades.
	*
	* Remember only one return statement is allowed
	*   >= 90 and <= 100 	'A'
	*   >= 80 and< 90 	    'B'
	*   >= 73 and< 80    	'C'
	*   >= 70 and< 73 	    'D'
	*   >= 0 and< 70 	    'F'
	*   < 0 or> 100 	    '?'
	*
	* Tips:
	* - Use if and if-else for this test
	*
	* Example input:
	* - 80.5
	*
	* Example output:
	* - 'B'
    */
    static char Test8(double grade)
    {
        return '~';
    }
};