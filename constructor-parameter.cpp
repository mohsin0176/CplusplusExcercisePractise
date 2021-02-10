#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class student
{
    private:

    int age;
    int weight;

    public:
    student(int a,int w)
    {
        age=a;
        weight=w;
    }
    int print()
    {
        cout<<"Age is\t:"<<age<<endl<<"Weight is\t:"<<weight<<endl;
    }
};

int main()
{
    student s(10,50);
    s.print();
    return 0;
}
