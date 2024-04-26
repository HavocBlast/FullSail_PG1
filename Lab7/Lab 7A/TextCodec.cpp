#define TEXT_CODEC
#include <string>

class TextCodec {
	// Member fields
	short int offset;
public:
	// Constructor
	TextCodec(short int offset) {							// Constructor that sets offset field value
		this->offset = offset;
	}
	
	// Member methods
	std::string Encode(std::string message) {		// Loops through the string and creates a new string and adds an offset to the ASCII value for the char returns
		std::string result = message;						// set result to equal message

		for (int i = 0; i < message.length(); i++) {
			result[i] = (char)(result[i] + offset);			// adds offset to the ASCII value of the char in result 
		}
		return result;
	}

	std::string Decode(std::string message) {
		std::string result = message;						// Sets result to equal message

		for (int i = 0; i < message.length(); i++)		// Loops through the result string and  removes the offset
		{
			result[i] = (char)(result[i] - offset);
		}
		return result;
	}
};