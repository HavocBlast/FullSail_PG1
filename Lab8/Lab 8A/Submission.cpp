#include "Student.cpp"
#include <string>
#include <vector>

/*
 * Complete the Student class before attempting to complete any of Tests
 * 
 * Notes:
 * 
 * -	Identifiers (method names and variables) are case sensitive. For example,
 *      SetIdNumber is not the same as SetIDNumber. If a specific name is provided, 
 *      you must use the exact name provided.\
 * -	For Tests 4 and 5, before attempting to access a Student class method from 
 *      an array element, you must ensure the array element contains a Student 
 *      object. If the element is null and you attempt to call a member method, the 
 *      program will throw an Exception and crash. To verify the element is not 
 *      empty, compare the element to null � if the element is not null, then it 
 *      contains a valid Student object.
 *       
*/

class Submission
{

public:
    static vector<Student> enrollment;

    /* TODO: Test 1 - Member fields and Constructors
     * =========================================
     * For this test you will add member fields and constructors to the Student class.
     *
     * The private member fields to add are a string to represent a last name, a string
     * to represent a first name and an int to represent an identification number.
     *
     * You will provide the default (no parameter) constructor and one overloaded constructor.
     * - The default constructor will set last and first names to empty strings ("") and set
     *   the id number to 1000000 (1 million).
     * - The overloaded constructor that will accept two strings (last name, first name) and
     *   one int (id number) and update the member fields the received values.
     *
     * After making the specified additions in the Student class, create and then return a
     * new Student object using the provided parameters.
     *
     * Tips:
     * - The application will not compile until the Test 1 and 2 are both completed.
     */
    static Student Test1(string last, string first, int idNo)
    {
        return Student(last, first, idNo);		// Instantiates object using constructor with params
    }

    /* TODO: Test 2 - Getters and Setters
	 * =========================================
	 * For this test, you must add public getters and setters for the Student class
	 * member fields.
	 *
	 * The methods must be named:
	 * - GetFirstName
	 * - GetLastName
	 * - GetIDNumber
	 * - SetFirstName
	 * - SetLastName
	 * - SetIDNumber
	 *
	 * After making the specified additions in the Student class, create and then
	 * return a new Student object using the default constructor.
	 *
	 * Tips:
	 * - The application will not compile until the Test 1 and 2 are both completed.
	 * - Note: Identifiers (method names and variables) are case-sensitive. For example,
	 *   SetIdNumber is not the same as SetIDNumber. If a specific name is provided,
	 *   you must use the exact name provided.
	 */
    static Student Test2()
    {
		Student student1;		// Instantiates Student object with default constructor
        return student1;
    }

	/* TODO: Test 3 - Insert into collection
	 * =========================================
	 * Given a student object, enrolled, and a vector of students,
	 * search the students vector to find an open space. If an
	 * opening is located, place the enrolled student into that
	 * position and return true. If no openings are found, return
	 * false.
	 *
	 * Tips:
	 * - An open space is identified by locating a space with a "default"
	 *   student.
	 * - "Default" students will always have an ID number of 1000000
	 * - As this a boolean true, the value displayed in the console may not
	 *   accurately represent your points for this test.
	 */
    static bool Test3(vector<Student> students, Student enrolled)
    {
		bool emptyFound = false;
		for (Student student : students) {													
			if (student.GetIDNumber() == 1000000) {			// Checks for empty slots by finding the first default id
				// student.SetFirstName(enrolled.GetFirstName());
				// student.SetLastName(enrolled.GetLastName());			// Could do it this way
				// student.SetIDNumber(enrolled.GetIDNumber());
				student = enrolled;				// But this is simple and would work even when we add fields later
				emptyFound = true;				//	Shows we found an empty slot 
				break;									// Allows us to leave the loop once we find the first empty slot
			}
			else {
				emptyFound = false;										// Shows that all slots are filled
			}
		}
		return emptyFound;
    }

	/* TODO: Test 4 - Remove from collection
	 * =========================================
	 * Given an integer idNumber and a vector of students,
	 * search the students vector for a student whose ID number
	 * matches the idNumber parameter. If the ID number is found
	 * replace the student in that position with a student created
	 * using the default constructor and return true. If no student
	 * with the given ID number is found, return false.
	 *
	 * Tips:
	 * - As this a boolean true, the value displayed in the console may not
	 *   accurately represent your points for this test.
	 */
	static bool Test4(int idNumber, vector<Student> students)
    {
		bool studentFound = false;
		Student defaultStudent;												// Instantiates object with default constructor
		for (int i = 0; i < students.size(); i++) {							// Loops through all the students in vector
			if (students[i].GetIDNumber() == idNumber) {			// checks to see if the current student has the same id as in method arguments
				students[i] = defaultStudent;								// if the same then assigns the default student to location
				studentFound = true;											// sets student found to true
				break;																	// breaks to make sure this stops after finding the first student that matches
			}
			else {
				studentFound = false;											// If no student found with that id then sets to false
			}
		}
		return studentFound;													// returns if student with matching id is found
    }

	/* TODO: Test 5 - Retrieve from collection
	 * =========================================
	 * Given an integer idNumber and a vector of students,
	 * search the students vector for the first student whose ID number
	 * matches the idNumber parameter. If the ID number is found,
	 * return the student with that ID number. If no student with
	 * that ID number is found, return a student created with the
	 * default constructor.
	 *
	 * Tips:
	 * - Given the nature of the returned result, the value displayed
	 *   in the console may not accurately represent your points for
	 *   this test.
	 */
    static Student Test5(int idNumber, vector<Student> students)
    {
		Student currentStudent;																	// Instantiates student object with default constructor
		for (Student student : students) {														// Loops through all the students in vector
			if (student.GetIDNumber() == idNumber) {									// checks to see if the student in current location matches given id
				currentStudent = student;														// If match found then sets currentStudent to the student found at location in vector
				break;																						// Breaks to stop after finding first match
			}
		}
        return currentStudent;																		// returns either default student or the student with matched id
    }
};