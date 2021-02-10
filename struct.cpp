#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr,d;
    ptr=&d;
    cin>>ptr->feet;
    cin>>(*ptr).inch;
    cout<<ptr->feet<<endl;
    cout<<(*ptr).inch;
    return 0;
}
