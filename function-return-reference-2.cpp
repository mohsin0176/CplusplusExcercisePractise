#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int num;
int a=10;
int b=20;


int &test(int &m,int &n)
{
    int z=m+n;
    return z;
}
int main()
{
   int a=10;
   int b=20;
   cout<<test(a,b);

    return 0;
}




