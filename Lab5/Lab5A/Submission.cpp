#include <vector>
#include <string>
using namespace std;

class Submission
{
public:
    /*
     * This lab is NOT interactive - that means there should be no
     * calls to the Console class (no Write/WriteLine/ReadLine/ReadKey)
     *
     * You cannot use multiple return statements any of these methods.
     * Additionally the use of var is not permitted
     *
    */

    // Test 1 – How many multiples
    // ============================
    // Given three integers, start, end and factor, using a loop, count how 
    // multiples of factor occur between start and end (inclusive)
    //
    // Example input:
    // - 14, 51, 6
    // 
    // Expected output:
    // - 6
    static int Test1(int start, int end, int factor)
    {
        int multiple = 0;

        for (int i = start; i <= end; i++)  // For loops that goes through all numbers from start to end
        {
            if (i % factor == 0)            // Checks to see if i is a equally divisable by the factor
            {
                multiple++;                 // If a multiple of the factor then add one to multiple total
            }  
        }
        return multiple;
    }

    // Test 2 - Factorial
    // ===================
    // Given an int, number, calculate the factorial for number. A factorial 
    // is the result of multiplying all integers between 1 and the target 
    // (number) (so 3 factorial, 3!, is 3 X 2 X 1 = 6)
	//
    // Example input:
    // - 6
    //
    // Expected output:
    // - 720
	static int Test2(int number)
	{
        int factorial = 1;

        for (int i = number; i > 0; i--) {  // loops through all numbers from number to 1
            factorial *= i;                 // Multiplies i to the previous product and assigns the new product to factorial
        }

        return factorial;                   // Returns the factorial
	}

    // Test 3 - Raise to a power
    // =============================
    // Given two integers, root and exponent, use a loop to raise root to 
    // exponent. You are not allowed to use pow() to compute the answer – 
    // you must use a loop. Additionally, exponent will be greater than or 
    // equal to 0 (no negative exponents)
    //
    // Example input:
    // - 5, 2
    //
    // Expected output:
    // - 25
    static int Test3(int root, int exponent)
    {
        int total = 1;

        for (int i = exponent; i > 0; i--) {    // iterates through exponents from exponent to 1
            total *= root;                      // multiplies root by the product of previous roots and assigns
        }
        return total;                           // returns the product of the roots for the given exponent
    }

    // Test 4 - Consumable
    // =====================
    // Given two integers (onHand and consume) that represent the amount of
    // an on - hand resource(onHand) and the amount of the help that is
    // consumed per cycle (think a time period). Determine how
    // many cycles (time periods) are before the on-hand amount is empty.
    //
    // For example, if you have 7 eggs (onHand) and use 2 egg per day(consume),
    // determine when you expect to run out of eggs (3 days). Return the
    // number representing when the on-hand amount reaches 0 without
    // consuming more than is available.
    //
    // Example input:
    // - 25, 4
    //
    // Expected output:
    // - 6
    static int Test4(int onHand, int consume)
    {
        int cycles = 0;

        while (onHand >= consume)   // Checks to make sure we have enough onHand to consume
        {                           // Will continue to iterate till not enough left to fully consume
            onHand -= consume;      // consumes a portion of onHand based on consume amount
            cycles++;               // Adds an additional cycle once amount is consumed
        }

        return cycles;              // returns
    }

    // Test 5 - Prime number
    // =======================
    // Given an integer, number, determine if number is a prime number. Recall 
    // prime numbers are numbers that are divisible on by 1 and themselves. 
    // By definition negative values, 0 and 1 are not prime numbers (2 is 
    // the smallest prime number). If number is prime, return true, 
    // otherwise return false.
    //
    // Example input:
    // - 3
    //
    // Expected output:
    // - true
    static bool Test5(int number)
    {
        int factors = 0;
        bool isPrime = false;

        for (int i = number; i > 0; i--) {                              // Iterates through all the number between number and 1
            if (number % i == 0) {                                      // checks to see if number is divisable by the index
                factors++;                                              // If divisable than add one to factors
            }
        }

        factors == 2 && number > 0 ? isPrime = true : isPrime = false;  // If factors for number equals 2 and it is a natual number then it is prime

        return isPrime;
    }

    // Test 6 - Build a string
    // =========================
    // Given a char, starter, and an integer, number, create a string that is made
    // up of starter and the next number of characters (in order).
    //
    // Example input:
    // - A, 5
    //
    // Expected output:
    // - ABCDE
    static string Test6(char starter, int number)
    {
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        string substring = "";
        int initialIndex = 0;
        int index = 0;

        // iterate through alphabet to find the index of starter in the alphabet
        while (alphabet[initialIndex] != starter) {
            initialIndex++;    // Keeps moving to the next index of alphabet
        }

        index = initialIndex;   // sets index to the location of the starter

        do {                                        // adds the starter char to the string
            substring += alphabet[index];           // adds the next character to the string of previous characters
            index++;
        } while (index < initialIndex + number );   // makes sure that the loop stops when it gets to the index needed from the number

        return substring;
    }

    // Test 7
    // ==================================
    // Given two integers, factor and qty, find the first qty multiples of 
    // factor (including factor as the first multiple) and add each to 
    // a string (separate each multiple with a single space).
    //
    // Tips:
    // - You will need to use the std::to_string() method in order
    //   to convert integer values into strings.
    // - Pay close attention to the expected output as it may contain
    //   extra spaces.
    // - The expected output is shown with quotation marks to mimic a string.
    //   You do not need to (read: should not) add quotation marks to your results.
    //
    // References:
    // - https://cplusplus.com/reference/string/to_string/
    // - https://www.geeksforgeeks.org/stdto_string-in-cpp/
    //
    // Example input:
    // - 7, 4
    //
    // Expected output:
    // - "7 14 21 28 "
    static string Test7(int factor, int qty)
    {
        string output = "";
        int index = 1;

        while (index <= qty) {                          // Checks to make sure index doesn't exceed the qty of multiples
            output += to_string(factor * index) + " ";  // outputs a string that created by the converted product of factor & index and adding trailing space
            index++;                                    // increments index to continue to the next multiple
        }
        return output;
    }

    // Test 8 – Sum of values
    // =======================
    // Given two integers, start and end, find the sum of all values between 
    // start and end (inclusive).
    //
    // Example input:
    // - 11, 19
    //
    // Expected output:
    // - 135
    static int Test8(int start, int end)
    {
        int total = 0;                          // Placeholder for total from range of values

        for (int i = start; i <= end; i++) {    // illiterates through all the numbers between start and end inclusively
            total += i;                         // add the number to the running total 
        }
        return total;                           // Returns the total
    }
};