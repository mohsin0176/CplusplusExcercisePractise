#include <iostream>
using namespace std;

int main() {
    // declare an int pointer
    int *pointInt=NULL;

    // declare a float pointer
    float *pointFloat=NULL;

    // dynamically allocate memory
    pointInt = new int(25);
    pointFloat = new float(45.45);

    // assigning value to the memory
    //*pointInt = 45;
    //*pointFloat = 45.45;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;

    return 0;
}
