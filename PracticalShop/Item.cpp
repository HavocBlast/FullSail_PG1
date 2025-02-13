#include <string>

class Item
{
	/* TODO: Create an Item class
	* ===================================
	* The class should contain 2 data members:
	* - A string called name
	* - An int called cost.
	*
	* This class should have a default constructor
	* that sets name to "" and cost to 0.
	*
	* It should also have an overloaded constructor
	* that accepts 2 parameters:
	* - A string
	* - An int.
	*
	* Write getters/accessors for each data member.
	* They should be called GetName and GetCost.
	*
	* Write setters/mutators for each data member.
	* They should be called SetName and SetCost.
	*/
	
	std::string name;
	int cost;

public:
	// Default constructor
	Item(){
		name = "";
		cost = 0;
	}
	//overloaded constructor
	Item(std::string name, int cost){
		this->name = name;
		this->cost = cost;
	}

	// Getters
	std::string GetName(){
		return name;
	}

	int GetCost(){
		return cost;
	}

	// Setters
	void SetName(std::string name){
		this->name = name;
	}

	void SetCost(int cost){
		this->cost = cost;
	}
};
