/*          
		
		                  ------------->RECTANGLE
		AREA-------------|
		                  ------------->CIRCLE--------->RING


Area is the parent class... Rectangle and circle inherit area and are therefore
child classes of area. Ring inherits circle therefore is the child of circle and
the grandchild of area.



*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "square.h"
 
const int num_obj = 6;
int main() {
	/*a statically allocated array of the type area
	is being declared with size of 6*/
	Area *list[num_obj];						// (1)

	// index declared and initialized to zero 
	int index = 0;								// (2)

	// variable declared and initialized to zero... will store commutative area
	double sum_area = 0.0;						// (3)

	cout << "Creating Ring: ";
	// Ring created with color blue, radius 5 and inner radius 2 
	Ring blue_ring("BLUE", 5, 2);				// (4)

	double sum_perimeter = 0.0;

	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Square: ";
	Square violet_square("VIOLET", 4);
	/* all 6 elements of list initialized */
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_square;
	
	// looping over list, getting color of each element and calculating area //
	while (index < num_obj) {					// (7)
		(list[index])->getColor();				
		// calculating area and adding it to the commutative area variable //
		double area = list[index]->calcArea();// (8)
		sum_area += area;

		double perimeter = list[index++] -> calcPerimeter();
		sum_perimeter += perimeter;
	}

	// printing the commutative area variable //
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)


	cout << "The total perimeter is "
			<< sum_perimeter << " units" << endl;
	return 0;
}
