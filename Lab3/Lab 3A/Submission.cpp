#include <math.h>
#include <string>
#define TEST6
#define TEST7
#define TEST8
#define TEST9
#define TEST10


/*  Instructions
* ========================
* Each method below will be called within a separate "Test" class.
* These methods will be passed several random values as arguments.
*
* Read the instructions for each test and complete
* the method so that it outputs the expected result.
*
* Tips:
* - For this lab, do not override the value provided as a parameter
* 
* - Do not alter any of the given code unless specifically told otherwise.
* - Make sure to run your application regularly to make sure you're receiving
*   the expect output.
* 
* - Syntax errors (red squiggly lines) indicate an error that will prevent your
*   code from building and running. Even if it seems as if your application is
*   running, Visual Studio is simply showing your the last "working" version
*   of your code.
*/

class Submission {
public:
    /* Test 1
* ==================
* Given an integer parameter "years", return the
* given value convert into days.
*
* Example input:
* - 5
*
* Expected output:
* - 1,825
*/
    static int Test1(int years)
    {
        // placeholder for days
        int days = 0;

        // takes input of years and multiplies by number of days in a year (365) and assigns to days
        days = years * 365;

        // returns days
        return days;
    }

    /* Test 2
    * ==================
    * Given two double parameters "number1" and "number2, return the
    * value of number1 divided by number2.
    *
    * Example input:
    * - 5.00
    * - 2.00
    *
    * Expected output:
    * - 2.50
    */
    static double Test2(double number1, double number2)
    { 
        // placeholder for result
        double result = 0.0;

        // divides number1 by number2 and assigns to result
        result = number1 / number2 ;

        // returns result
        return result;
    }

    /* Test 3
    * ==================
    * Given two integer parameters "number1" and "number2, return the
    * value of the remainder of number1 divided by number2.
    *
    *
    * Example input:
    * - 7
    * - 2
    *
    * Expected output:
    * - 1
    */
    static int Test3(int number1, int number2)
    {
        // placeholder for result
        int result = 0;
        
        // finds the remainder of dividing number1 by number2 by using the modulus operator and assigning to result
        result = number1 % number2;

        // returns result
        return result;
    }

    /* Test 4
    * ==================
    * Given a double parameter "input", find square root
    * of the input value using the sqrt() method,
    * then return the result converted float by using a cast.
    *
    * References:
    * - https://www.geeksforgeeks.org/sqrt-sqrtl-sqrtf-cpp/
    * - https://cplusplus.com/reference/cmath/sqrt/
    * - https://www.geeksforgeeks.org/type-conversion-in-c/
    *
    * Example input:
    * - 36
    *
    * Expected output:
    * - 6
    */
    static float Test4(double input)
    {
        // placeholders for result & converted
        double result = 0.0;

        // finds the square root of the input using the sqrt() method and casts to a float
        result = (float) sqrt(input);

        // returns converted
        return result;
    }

    /* Test 5
    * ==================
    * Given two integer parameters "number" and "power",
    * return the value of number raised to power by using the
    * pow() method.
    *
    * References:
    * - https://cplusplus.com/reference/cmath/pow/
    * - https://www.geeksforgeeks.org/power-function-c-cpp/
    *
    * Example input:
    * - 5
    * - 2
    *
    * Expected output:
    * - 25
    */
    static double Test5(int number, int power)
    {
        // placeholder for result
        double result = 0.0;

        // calculates number raised to the power of power and assigns to result
        result = pow(number, power);

        // returns result
        return result;
    }

    /* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   IMPORTANT   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    * ============================================================================================
    * From this point on, you will need to create your own methods.
    *
    * ALL of the methods must use the following keywords:
    * - public: the access for the method must be set to public
    * - static: the access for the method must also be static
    *
    * See the above methods for an example.
    *
    * Once the method has been created, locate and uncomment the
    * corresponding line at the top of the Submission.cpp file.
    *
    * DO NOT alter any other part of the file as this could cause
    * unexpected output and would be considered academic dishonesty.
    * ============================================================================================
    * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   IMPORTANT   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    */

    /* Test 6
    * ==================
    * Create a method named "Test6" that accepts three string parameters.
    * Return the value of all three parameters combined to form a question.
    *
    * Tips:
    * - You may use either concatenation or interpolation to complete this.
    * - Pay attention to the output of the console to make sure your are providing
    *   the expected result.
    *
    * Example input:
    * - "Hey,"
    * - "what's up"
    * - "man"
    *
    * Expected output:
    * - "Hey, what's up man?"
    */

    static std::string Test6(std::string input1, std::string input2, std::string input3)
    {
        // placeholder for message
        std::string message = "";

        // create message using conatenation to combine three string and turn into a question
        message = input1 + " " + input2 + " " + input3 +"?";

        return message;
    }

    /* Test 7
    * ==================
    * Create a method named "Test7" that accepts one double parameter.
    * Return the value of the double parameter converted
    * to a float by using a cast.
    *
    * References:
    * - https://www.geeksforgeeks.org/type-conversion-in-c/
    *
    * Example input:
    * - 5.25
    *
    * Expected output:
    * - 5.25f
    */

    static float Test7(double number)
    {
        // placeholder for result
        float result = 0.0;

        // converts input from a double to a float by casting and assigning to result
        result = (float) number;

        // returns result
        return result;
    }

    /* Test 8
    * ==================
    * Create a method named "Test8" that accepts three double parameters.
    * Return a double value that contains the average of the three double parameters.
    *
    * Example input:
    * - 25.0
    * - 45.0
    * - 65.0
    *
    * Expected output:
    * - 45.0
    */

    static double Test8(double number1, double number2, double number3)
    {
        // placeholder for average
        double average = 0;

        // calculates the average of three input numbers
        average = (number1 + number2 + number3) / 3;

        // returns average
        return average;
    }

    /* Test 9
    * ==================
    * Create a method named "Test9" that accepts two double parameters named "triBase" and "triHeight".
    * Using the given values for base and height, determine the area of a triangle and return the
    * result as a double.
    *
    * Tips:
    * - The formula for the area of a triangle is 1/2 * base * height.
    * - This solution should not require any type of conversion.
    *
    * References:
    * - https://www.cuemath.com/measurement/area-of-triangle/
    *
    * Example input:
    * - 10, 7
    *
    * Expected output:
    * - 35
    */

    static double Test9(double triBase, double triHeight)
    {
        // placeholder for area
        double area = 0;

        // finds the area of a triangle using the params triBase and triHeight
        area = 0.5 * triBase * triHeight;

        // returns area
        return area;
    }

    /* Test 10
    * ==================
    * Create an overload for Test2 that accepts 3 double values, instead of 2.
    * Return the value of number1 divided by number2 divided by number3.
    *
    * Tips:
    * - Remember that a method overload is a different version of a method
    *   that has the same identifier but accepts different parameters,
    *   has a different return type, or both.
    *
    * References:
    * - https://www.geeksforgeeks.org/function-overloading-c/
    * - https://learn.microsoft.com/en-us/cpp/cpp/function-overloading?view=msvc-170
    *
    * Example input:
    * - 5.0
    * - 2.0
    * - 6.0
    *
    * Expected output:
    * - 4.167
    */

    static double Test2(double number1, double number2, double number3)
    {
        // placeholder for result
        double result = 0.0;

        // divides number1 by number 2 and then divides by number3 and assigns the value to result
        result = number1 / number2 / number3;

        // returns result
        return result;
    }
};
