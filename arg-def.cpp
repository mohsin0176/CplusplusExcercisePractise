

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int x,int y=0,int p=0,int z=0)
{
    cout<<x+y+p+z<<endl;
}
int main() {
    // function call
    display(10);
    display(20,30);
    display(30,40,50);
    display(40,50,60,70);
    return 0;
}
