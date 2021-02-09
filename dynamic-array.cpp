#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float *ptr=NULL;
    ptr = new float[num];


    cout << "Enter GPA of students." << endl;
    for (int i = 0; i <= num; ++i) {
        cout << "Student" << i  << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i <= num; ++i) {
        cout << "Student" << i  << " :" << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete [] ptr;

    return 0;
}
