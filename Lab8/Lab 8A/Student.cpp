#include <string>

using namespace std;

class Student
{


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