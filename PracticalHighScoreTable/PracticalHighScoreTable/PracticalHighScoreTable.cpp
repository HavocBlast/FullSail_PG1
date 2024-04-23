#include <iostream>
#include <vector>
#include "Utility.h"

/// <summary>
/// This procedure takes an vector of ints and sorts them in place.
/// After a call to this procedure the vector of ints passed in will be
/// sorted from highest to lowest.
/// </summary>
/// <param name="numbers">an array of ints to sort</param>
void SortVectorHighToLow(std::vector<int>& numbers) {
    int tmp;

    for (int i = 1; i < numbers.size(); i++)
    {
        for (int j = i; j > 0 && numbers[j] > numbers[j - 1]; j--)
        {
            tmp = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = tmp;
        }
    }
}


// TODO: Create your own PrintVector method that will display the contents of
//       a given vector to the console.

int main()
{
    Utility::CleanUp();
    // TODO: Ask the user how many high scores they want.
    //       Then read in their input.
    //
    // ====> Support error checking (input validation).
    //
    //       **************************************************************
    //       ***********                                        ***********
    //       ***********     The stoi() method                  ***********
    //       ***********     DOES NOT VALIDATE INPUT            ***********
    //       ***********                                        ***********
    //       **************************************************************
    //
    // ====> The user should only be able to input a POSITIVE
    //       integer value (greater than 0).
    //       To validate the user input, use the provided Utility methods 
    //       as outlined within the Practical Overview video.



    // TODO: Define an vector of ints, which will hold the high scores.
    //       Make the vector the exact size indicated by the user above.

    // TODO: Ask the user for each high score, and read in their inputs.
    //       Make sure to read in as many high scores are in the vector.
    //       If the high score vector is size 5, then read in 5 inputs.
    //       You DO NOT NEED to support error checking for each score;
    //       assume each input will be an integer.


    // TODO: Uncomment the following lines
    // std::cout << "\n" << "High Scores - Unsorted" << std::endl;

    // TODO: Call **your** PrintVector method (which you must write
    //       above - it's a separate TODO before the main() method)
    //       passing the vector of high scores.


    // TODO: Call the SortVectorHighToLow method (already written above so
    //       don't attempt to change/re-write it). Pass the vector of high 
    //       scores, to sort them.


    // TODO: Uncomment the following line
    // std::cout << "\n" << "High Scores - Sorted" << std::endl;

    // TODO: Call **your** PrintVector method (which you must write above)
    //       passing the vector of high scores.

    std::cout << "Press any key to exit . . . " << std::endl;
    std::cin.get();
}