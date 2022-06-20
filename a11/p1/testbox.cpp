/*CH230 a11p1
  Muaaz Rajput
  murajput@jacobs-university.de
  */

#include <iostream>
#include "Box.h"

using namespace std;

int main(){
    Box *boxes;
    int n, i;
    double height, width, depth;

    cout << "Enter number of elements: ";
    cin >> n;   

    boxes = new Box[2*n]; // dynamic allocation //

    // populate array of boxes by setting value of each property //
    for (i = 0; i < n; i++){
        cout << "Enter Height: ";
        cin >> height;
        boxes[i].setHeight(height);

        cout << "Enter Width: ";
        cin >> width;
        boxes[i].setWidth(width);
        
        cout << "Enter Depth: ";
        cin >> depth;
        boxes[i].setDepth(depth);

        cout << endl;        
    }
    
    // create copies of n boxes into remaining positions using copy constructor //
    for (i = 0; i < n; i++){
        boxes[i + n] = Box(boxes[i]);
    }

    boxes -> print_loop(boxes, n);
    boxes -> print_volume(boxes, n);

    delete [] boxes; // deallocation

}