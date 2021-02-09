#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int num;
int a=10;
int b=20;


int &test()
{
    int z=a+b;
    int &s=z;
    return s;
}
int main()
{
    test();

    cout <<test();

    return 0;
}




