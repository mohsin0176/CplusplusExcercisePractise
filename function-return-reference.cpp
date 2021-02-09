#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int num;

int &test()
{
    return num;
}
int main()
{
    test()=10;

    cout << num;

    return 0;
}




