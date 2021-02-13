#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{

public:

      friend class B;
};
class B
{
public:

      int func(A &a)
      {
          return 0;
      }
};



int main()
{
    A a;
    B b;
    b.func(a);
    return 0;
}
