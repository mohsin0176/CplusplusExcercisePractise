#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{

int data;
public:
    A(){cout<<"Const"<<endl;}
    A(A &a){cout<<"Copy Const:"<<a.data<<endl;}
    A(int d){data=d;cout<<"Const:"<<d<<endl;}
    ~A(){cout<<"Dest:"<<data<<endl;}

};

void f(A a)
{
    cout<<"f"<<endl;
}
int main()
{
    A a(1);
    f(a);
    A *a1=new A[5];
    return 0;
}
