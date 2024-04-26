#define BOOK

#include <string>

class Book {
	// Fields
	std::string title;
	std::string author;

	public:
	// Constructor
	Book() {
		title = "Moby-Dick";									// Sets fields if no args present
		author = "Herman Melville";
	}

	Book(std::string title, std::string author) {
		this->title = title;
		this->author = author;								// Sets the field based on the args
	}

	// Member Methods

		std::string GetAuthor() {							// Returns author
			return author;
		}

		std::string GetTitle() {								// Returns title
			return title;
		}
};