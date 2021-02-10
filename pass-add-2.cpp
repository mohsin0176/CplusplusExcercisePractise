#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int *n,int *m)
{
    int temp=*n;
    *n=*m;
    *m=temp;
}

int main()
{

    int a=100;int b=200;
    cout<<a<<b;
    swap(&a,&b);
    cout<<a<<b;
    return 0;
}

