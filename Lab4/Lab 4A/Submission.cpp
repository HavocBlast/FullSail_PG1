#include <string>
#include <iostream>

// TODO: Uncomment this line after you create your MathOperator enum
#define MATH_OPERATOR

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
	enum MathOperator {
		Add = 0,
		Subtract = 1,
		Multiply = 2,
		Divide = 3,
		Modulo = 4,
	};

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
		MathOperator operation;

		switch (input)
		{
		case 0:
			operation = MathOperator::Add;
			break;
		case 1:
			operation = MathOperator::Subtract;
			break;
		case 2:
			operation = MathOperator::Multiply;
			break;
		case 3:
			operation = MathOperator::Divide;
			break;
		case 4:
			operation = MathOperator::Modulo;
			break;
		default:
			break;
		}
		
        return operation;
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
		// Declares int variable for the result of the below operation
		int result;

		// Switch statement will take the operation param and select the case that is true 
		// The corresponding operation will be executed and the result will be returned.
		// If no valid operation
		switch (operation)
		{
		case 0:
			result = number1 + number2;
			break;
		case 1:
			result = number1 - number2;
			break;
		case 2:
			result = number1 * number2;
			break;
		case 3:
			result = number1 / number2;
			break;
		case 4:
			number1 % number2;
			break;
		default: // catch incase user picks a number outside the valid selection
			cout << "Please enter a valid operation." << endl;
			break;
		}
        return result;
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
		// Placeholder for result of the if statement to be used to returned
		std::string result;

		if ( input == true){ // Sets result as "Proven" if input = true
			result = "Proven";
		}
		else { // Sets result as "Denied" if the input is anything but true
			result = "Denied";
		}

        return result;
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
		// Initializes variable to be returned after the operation is completed
		double result;

		switch (kiloToLb) { // switch statement completes the operation that user chooses based on the args
			case true:
				result = input * 2.2; // conversion for kgs to lbs
				break;
			case false:
				result = input * 0.45; // conversion for lbs to kgs
				break;
			default:
				cout << "Please select either \"true\" or \"false\"" << endl;
		}

        return result;
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
		std::string requiredAction;

		switch (input) { // Switch used to set requireAction variable based on the arguement from Test5 function
			case 1:
				requiredAction = "Verbal Reprimand";
				break;
			case 2:
				requiredAction = "Formal Reprimand";
				break;
			case 3:
				requiredAction = "Suspension";
				break;
			case 4:
				requiredAction = "Termination";
				break;
			default:
				std::cout << "Please select a vaild Infraction Severity" << std::endl;
		}
		//returns the string associated with the correct case from the switch statement
        return requiredAction;
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
		// Initialize variable so it can be returned 
		bool isLeapYear;

		if (year % 4 != 0) { // checks to see if the modulo is not 0 to show that the year is not divisible bt 4
			if (year % 400 == 0) {
				isLeapYear = true;
			}
			else {
				isLeapYear = false;
			}
		}
		else if (year % 4 == 0 && year % 100 != 0) { // checks to see if the year is divisable by 4 but not by 100 using the modulo
			isLeapYear = true;
		}
		
        return isLeapYear;
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
		bool isRightTriangle;

		// used a Ternary Operator since the conditional is simply checking if the sume of a & b = c
		a + b == c ? isRightTriangle = true : isRightTriangle = false;

        return isRightTriangle;
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
		char letterGrade;

		if (grade >= 90 && grade <= 100) {
			letterGrade = 'A';
		}
		else if (grade >= 80 && grade < 90)
		{
			letterGrade = 'B';
		}
		else if (grade >= 73 && grade < 80)
		{
			letterGrade = 'C';
		}
		else if (grade >= 70 && grade < 73)
		{
			letterGrade = 'D';
		}
		else if (grade >= 0 && grade < 70)
		{
			letterGrade = 'F';
		}
		else if (grade < 0 || grade > 100)
		{
			letterGrade = '?';
		}

        return letterGrade;
    }
};