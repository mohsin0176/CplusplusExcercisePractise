#include<iostream>
#include<bits/stdc++.h>
using namespace std;

enum flag{
    bold=1,
    neg=2,
    un=4
    };


int main()
{
     int x=bold|un;
     int y=bold|neg;
     cout<<x<<endl;
     cout<<y;
    return 0;
}
