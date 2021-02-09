#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void display()
{
    cout<<"Recursive Function"<<endl;
    display();
}
int main() {
    // function call
    display();

    return 0;
}
