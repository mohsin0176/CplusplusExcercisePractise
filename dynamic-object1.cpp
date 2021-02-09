#include <iostream>
using namespace std;

class Student {
    int result;
public:
    Student():result(5.00){this->result=result;}
    void print()
    {
        cout<<result<<endl;
    }
};

int main() {

    Student *ptr=new Student();
    ptr->print();
    delete ptr;

    return 0;
}
