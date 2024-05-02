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
	
	int mMaxSize;
	std::vector<Item> mItems;
	int mGold;

public:
	/*
	* TODO: Write a default constructor
	* ======================================
	* By default, it should:
	* - Assigns the mMaxSize to 10,
	* - Assign mItems to a new vector of Items with mMaxSize as the size
	* - Set mGold to 50.
	*/
	
	Inventory(){
		mMaxSize = 10;
		mItems = std::vector<Item>(mMaxSize);
		mGold = 50;
	}

	// TODO: Create a Getter and a Setter for the mGold field named "GetGold" and "SetGold"

	// Getters
	int GetGold(){
		return mGold;
	}

	// Setters
	void SetGold(int gold){
		mGold = gold;
	}

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

	bool AddItem(Item item){
		bool foundDefault = false;
		// Iterate through the mItems vector
		
		for (int i = 0; i < mItems.size(); i++) {		// Check for first default item in Items
			if (mItems[i].GetName() == "") {
				mItems[i] = item;								// Sets currentItem to item from param
				foundDefault = true;							// Shows we found a default item
				break;												// Ensures that we only find the first default
			}
			else {
				foundDefault = false;						// Shows there was no default items in vector
			}
		}
		return foundDefault;
	}

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

	bool RemoveItem(std::string itemName){
		bool matchFound = false;
		// Iterates through the mItems vector
		for(Item currentItem : mItems){
			// Checks for the first item with a match of name
			if(currentItem.GetName() == itemName){
				currentItem = Item();			// Sets currentItem to default
				matchFound = true;			// Shows we found a match 
				break;					// Ensures only the first match is found
			}
			else{
				matchFound = false;			// Shows we found no matches
			}
		}
		return matchFound;
	}

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

	Item GetItem(std::string itemName){
		Item returnItem = Item();
		// Iterates through mItems vector
		for(Item currentItem : mItems){
			if(currentItem.GetName() == itemName){		// Checks for a match name between currentItem and itemName
				returnItem = currentItem;		// Sets the return Item to matched item
				break;					// Ensures that only the first match is returned
			}
									// No need for else statment since returnItem defaults to default Item
		}
		return returnItem;
	}

	// TODO: Uncomment the following code:
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
};
