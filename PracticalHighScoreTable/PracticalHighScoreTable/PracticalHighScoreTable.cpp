#include <iostream>
#include <vector>
#include "Utility.h"
#include <string>

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

void PrintVector(std::vector<int> scores) {
    for (int score : scores) {
        std::cout << score << std::endl;
    }
}

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

    bool goodInput = Utility::IsReadGood();                                                             // sets goodInput to true or false based on ReadInt()                        
    int number = 0;

    std::cout << "How many high scores do you want? ";
    number = Utility::ReadInt();                                                                                // function to check that the input it a valid int and then sets number to equal the returned int

   while (!goodInput ||  number < 1) {                                                                      // keeps asking for amount of scores until user inputs a number over 0 and a valid int
       std::cout << "please enter a valid positive whole number!" << std::endl;
       std::cout << "How many high scores do you want? ";
       number = Utility::ReadInt();                                                                             // function to check that the input it a valid int and then sets number to equal the returned int
    }

    // TODO: Define an vector of ints, which will hold the high scores.
    //       Make the vector the exact size indicated by the user above.

   std::vector<int> scores(number);

    // TODO: Ask the user for each high score, and read in their inputs.
    //       Make sure to read in as many high scores are in the vector.
    //       If the high score vector is size 5, then read in 5 inputs.
    //       You DO NOT NEED to support error checking for each score;
    //       assume each input will be an integer.

   int index = 0;
   while (index < scores.size()) {                                          // will keep asking for scores until enough scores are created to fill the vector
       int score = 0;
       std::cout << "What score would you like to enter? ";
       std::cin >> score;
       scores.at(index) = score;                                            // sets the score entered in the appropriate index of vector based on the order received
       index++;                                                                     // increments the index to more to the next score 
   }

    // TODO: Uncomment the following lines

    std::cout << "\n" << "High Scores - Unsorted" << std::endl;

    // TODO: Call **your** PrintVector method (which you must write
    //       above - it's a separate TODO before the main() method)
    //       passing the vector of high scores.

    PrintVector(scores);                                                                                            // prints the unsorted scores since the scores haven't been sorted yet

    // TODO: Call the SortVectorHighToLow method (already written above so
    //       don't attempt to change/re-write it). Pass the vector of high 
    //       scores, to sort them.

    SortVectorHighToLow(scores);                                                                    

    // TODO: Uncomment the following line

    std::cout << "\n" << "High Scores - Sorted" << std::endl;

    // TODO: Call **your** PrintVector method (which you must write above)
    //       passing the vector of high scores.

    PrintVector(scores);                                                                                            // Prints sorted scores since ran after the SortVectorHighToLow() was ran

    std::cout << "Press any key to exit . . . " << std::endl;
    std::cin.get();
}