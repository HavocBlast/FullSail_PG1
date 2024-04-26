#define SHAPE

class Circle{
	// Member Fields
	int mXPos;
	int mYPos;
	int mRadius;
	
public:

	// Constructor
	Circle(int xPos, int yPos, int radius) {		// Constructs instance of Circle and sets member fields
		mXPos = xPos;
		mYPos = yPos;
		mRadius = radius;
	}

	// Member Functions
	int GetX() {
		return mXPos;
	}

	int GetY() {
		return mYPos;
	}

	int GetRadius() {
		return mRadius;
	}

	float GetArea() {
		return 3.14f * mRadius * mRadius;		// Calculates the area using the formula 3.14r²
	}

	float GetCircumference() {
		return 2.0f * 3.14f * mRadius;				// Calculates the circumference with formula 2(3.14)r
	}

	int GetDiameter() {									// Calculates the diameter by doubling radius
		return mRadius * 2;
	}
};