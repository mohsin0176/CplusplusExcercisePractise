#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class teacher
{

public:
friend class student;

};
class student
{
    public:
    int fun(teacher &t)
    {
        return 0;
    }
};

int main()
{
    student s;
    teacher t;
    s.fun(t);

    return 0;
}

