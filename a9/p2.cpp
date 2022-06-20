/*CH-230 a9p2
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>

int main(){
    int n, i;
    double x;
    std::string s;
    std::cin >> n;
    std::cin >> x;
    getchar(); // getchar to remove \n from input stream //
    std::getline(std::cin, s); // use getline to get string with spaces //

    // forloop to print output n times //
    for(i = 0; i < n; i++)
        std::cout << s << " : " << x << std::endl;

    return 0;

}