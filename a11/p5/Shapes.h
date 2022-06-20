/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
        std::string getName() const; // gets name
        void setName(std::string); // sets name
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&); // copy constructor
		void move(double, double);	// moves the shape, i.e. it modifies it center
        double get_x_coord() const; // gets x coord
        double get_y_coord() const; // gets y coord
        void set_center(double, double); // sets center coords
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon(); // default constructor
		RegularPolygon(const RegularPolygon&); // copy constructor
        int get_Edges() const; // gets number of edges
        void set_Edges(int); // sets number of edges
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double); // parametric constructor
		Circle(); // default constructor
		Circle(const Circle&); // copy constructor
        double get_Radius() const; // gets radius
        void set_Radius(double); // sets radius
        double Perimeter() const; // returns perimeter
        double Area() const; // returns area
};

class Rectangle : public RegularPolygon{
    private:
    double width;
    double height;

    public:
    Rectangle(); // default constructor
    Rectangle(const Rectangle&); // copy constructor
    Rectangle(const std::string&, double, double, double, double); // parametric constructor
    void setWidth(double); // sets width
    void setHeight(double); // sets height
    double getWidth() const; // gets width
    double getHeight() const; // gets height
    double Perimeter() const; // returns perimeter
    double Area() const; // returns area
};
    
class Square : public Rectangle{
    private:
    double side;

    public:
    Square(); // default constructor
    Square(const Square&); // copy constructor
    Square(const std::string&, double, double, double); // parametric constructor
    void setSide(double); // sets side
    double getSide() const; // gets side
    double Perimeter() const; // returns perimeter
    double Area() const; // returns area
};
#endif