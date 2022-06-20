#include <iostream>



class Box{
    private:
    double height, width, depth;

    public:
    // constructors //
    Box();
    Box(double, double, double);
    Box(const Box&);
    // inline destructor //
    ~Box(){std::cout << "Destructor Called!" << std::endl;};
    // setter methods //
    void setHeight(const double);
    void setWidth(const double);
    void setDepth(const double);
    // getter methods //
    double getHeight() const;
    double getWidth() const;
    double getDepth() const;
    // service methods //
    void print() const;
    void print_loop(Box*, int) const;
    void print_volume(Box*, int) const;
};