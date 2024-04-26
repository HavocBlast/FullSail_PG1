#include <string>

using namespace std;

class Student
{
    std::string lastName;
    std::string firstName;  
    int id;

public:
    Student() {
        lastName = "";
        firstName = "";
        id = 1000000;
    }

    Student(std::string lastName, std::string firstName, int id) {
        this->lastName = lastName;
        this->firstName = firstName;       
        this->id = id;
    }

    // Getters
    std::string GetFirstName() {
        return firstName;
    }

    std::string GetLastName() {
        return lastName;
    }

    int GetIDNumber() {
        return id;
    }

    // Setters
    void SetFirstName(std::string firstName) {
        this->firstName = firstName;
    }

    void SetLastName(std::string lastName) {
        this->lastName = lastName;
    }

    void SetIDNumber(int id) {
        this->id = id;
    }

    // NOTE: The student class continues beneath this line. DO NOT close the Student
    //       class code block prematurely by adding an extra closing curly bracket.

    /* ================================================================================
     *
     * DO NOT ALTER ANYTHING BENEATH THIS LINE.
     *
     * DOING SO MAY CAUSE ISSUES WITHIN YOUR CODE.
     *
     * IF YOU ARE EXPERIENCING ERRORS IN THIS CLASS,
     * AND YOU HAVE NOT ALTERED THIS CLASS, THE ISSUES
     * EXIST WITHIN YOUR CODE. NOT HERE.
     *
     *                             ▒▒████
     *                             ████████
     *                           ██████████
     *                           ████▒▒██████
     *                         ██████    ████▒▒
     *                         ████      ▒▒████
     *                       ██████        ██████
     *                     ▒▒████    ████    ████
     *                     ████▒▒  ████████  ██████
     *                   ██████    ████████    ████
     *                   ████░░    ████████    ██████
     *                 ██████      ████████      ████▒▒
     *               ░░████        ████████      ▒▒████
     *               ██████        ████████        ██████
     *             ▒▒████          ████████          ████
     *             ████▒▒          ██████▒▒          ██████
     *           ██████              ████              ████
     *           ████                ████              ██████
     *         ██████                ████                ████▒▒
     *       ░░████                                      ▒▒████
     *       ████▓▓                                        ██████
     *     ▒▒████                    ████                    ████
     *     ████▒▒                  ████████                  ██████
     *   ██████                      ▒▒▒▒                      ████░░
     *   ████                                                  ▒▒████
     * ██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒██████
     * ████████████████████████████████████████████████████████████████
     * ▓▓████████████████████████████████████████████████████████████▓▓
     *
     *
     */

	string ToString()
	{
		return "ID #: " + to_string(GetIDNumber()) + "\tName: " + GetLastName() + ", " + GetFirstName();
	}
};