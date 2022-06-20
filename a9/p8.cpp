/*CH-230 a9p8
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>

// function prototypes //
void deallocate(int *data);
void subtract_max(int *data, int n);

using namespace std;

int main(){
    int *a, n, i;
    
    // get input for size of array and dynamically allocate it //
    cin >> n;
    a = new int[n];

    // populate array //
    for (i = 0; i < n; i++){
        cin >> a[i];
    }

    /* print array before and after the function
        call to find and subtract max element */
    cout << "Before Subtracting:" << endl;
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    subtract_max(a, n);

    cout << "After Subtracting:" << endl;
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    deallocate(a); // deallocate array //
    return 0;
}


void subtract_max(int *data, int n){
    int i, max = data[0];

    // find max value in array //
    for (i = 0; i < n; i++){
        if (data[i] > max)
            max = data[i];
    }

    // subtract max value from each element in array //
    for (i = 0; i < n; i++){
        data[i] = data[i] - max;
    }

}


void deallocate(int *data){
    delete [] data; // deallocate the memory allocated to array //
}