#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class student
{
      public:

    int age;
    int weight;

    student(int a,int w)
    {
        age=a;
        weight=w;
    }
};
    int print(student m)
    {
        cout<<"Age is\t:"<<m.age<<endl<<"Weight is\t:"<<m.weight<<endl;
    }

int main()
{
    student s(10,50);
    print(s);
    return 0;
}
