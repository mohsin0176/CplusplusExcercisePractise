

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class B
{

public:
void print()
{cout<<"Base Function";}

};

class D:public B
{

public:
void print()
{cout<<"Derived Function";}

};

int main()
{
D d1;
d1.print();
d1.B::print();
return 0;
}
