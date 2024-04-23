#include "Utility.h"
#include <string>
#include <iostream>
#include "ResultsLib.h"
#pragma comment (lib, "ResultsLibD.lib")

bool Utility::mGoodRead = true;

bool Utility::IsReadGood() {
	return mGoodRead;
}


int Utility::ReadInt() {
	std::string raw = "";
	int result = 0;
	
	try {
		getline(std::cin, raw);
		result = std::stoi(raw);
		mGoodRead = true;
	}
	catch (...) {
		mGoodRead = false;
	}

	return result;
}

void Utility::CleanUp()
{
	results::Log("output.log", {"PracticalHighScoreTable.cpp"});
}
