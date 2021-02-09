#include <iostream>
using namespace std;

int main() {

    int *ptr=NULL;
    ptr =new int(15);
    cout<<*ptr;
    delete ptr;

    return 0;
}
