#include "Math.h"

// the prototypes exist in the header file and not here
// we use the scope resolution to say that this member function
// belongs to the Math class

Math::Math()
{

}

Math::~Math()
{

}

int Math::pow(int base, int exp)
{
	int result = 1;

	for (int i = 0; i < exp; i++)
	{
			result = result * base;
	}

	return result;
}




