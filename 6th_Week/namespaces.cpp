#include <iostream>

namespace Microsoft
{
	namespace Geometry
	{
		const double PI = 3.14159;

		double Area(double r)
		{
			return PI*(r*r);
		}
	}
		
}

int main()
{
	double radius = 2.5;
	double area = Microsoft::Geometry::Area(radius);

	std::cout << area << std::endl;
	return 0;

}



