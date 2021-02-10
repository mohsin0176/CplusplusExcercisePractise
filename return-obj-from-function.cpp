#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class student
{
  public:
    double m1,m2;
};

student create()
{
    student s;
    s.m1=10;
    s.m2=20;
    cout<<s.m1;
    cout<<s.m2;
    return s;
}

int main()
{
    student s1;
    s1=create();
    return 0;
}
