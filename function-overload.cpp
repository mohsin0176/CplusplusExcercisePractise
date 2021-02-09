#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void test()
{
     cout<<"No Argument Passed"<<endl;
}
void test(int n)
{
     cout<<n<<endl;
}
void test(float m)
{
     cout<<m<<endl;
}
void test(int n,double m)
{
     cout<<n<<endl<<m<<endl;
}

int main() {
    int a=10;
    float b=3.0003;
    test();
    test(a);
    test(b);
    test(a,b);
    return 0;
}

