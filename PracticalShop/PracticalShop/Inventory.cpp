#include "Console.h"
#include "Item.cpp"
#include <vector>

class Inventory
{
	/*
	 * TODO: Define three member fields
     * =================================
     * - An int called mMaxSize
     * - An vector of Items called mItems
	 * - An int called mGold
	 */


public:
	/*
	 * TODO: Write a default constructor
	 * ======================================
	 * By default, it should:
	 * - Assigns the mMaxSize to 10,
	 * - Assign mItems to a new vector of Items with mMaxSize as the size
	 * - Set mGold to 50.
	 */


	// TODO: Create a Getter and a Setter for the mGold field named "GetGold" and "SetGold"


	/* TODO: Write a method called AddItem
	 * ======================================
	 * The method should return a bool returns
	 * a bool and takes an Item parameter.
     *
     * This method should iterate through the
     * mItems vector, looking for any vector element
     * that is default.
     *
     * If a default Item is found, it should assign
     * that vector element to the Item passed in and
     * return true. Otherwise it should return false.
	 */


	/* TODO: Write a method called RemoveItem
	 * ==========================================
	 * This method should return a bool and takes
	 * a string parameter.
	 *
	 * This method should iterate through the
	 * mItems vector, looking for an Item that
	 * has the same name as the parameter.
	 *
	 * If it finds a match it should set that
	 * element of the mItems vector to a default
	 * item and return true. Otherwise return false.
	 */


	/* TODO: Write a method called GetItem
	 *=======================================
	 * This method should return an Item and takes
	 * a string parameter.
	 *
	 * This method should iterate through the mItems
	 * vector, looking for an Item that has the same
	 * name as the parameter.
	 *
	 * If it finds a match it should return that element
	 * of the mItems vector. Otherwise return a default item.
	 */


// TODO: Uncomment the following code:
	/*
	void DisplayInventory(int x, int y)
	{
	    Console::SetCursorPosition(x, ++y);
	    Console::Write("Item Name");
	    Console::SetCursorPosition(x + 17, y);
	    Console::Write("Item Cost");

	    for (int i = 0; i < mMaxSize; i++)
	    {
	        if (!mItems[i].GetName().empty())
	        {
	            Console::SetCursorPosition(x, ++y);
	            Console::Write(mItems[i].GetName());
	            Console::SetCursorPosition(x + 17, y);
	            Console::Write(std::to_string(mItems[i].GetCost()));
	        }
	    }

	    y += 2;
	    Console::SetCursorPosition(x, ++y);
	    Console::Write("Gold on hand:");
	    Console::SetCursorPosition(x+17, y);
	    Console::Write(std::to_string(mGold));
	}
	*/
};