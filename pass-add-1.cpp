#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int *n,int *m)
{
    int temp1=*n;
    int temp2=*m;

    cout<<*n<<temp1;
    cout<<*m<<temp2;
}

int main()
{

    int a=100;int b=200;
    swap(&a,&b);
    return 0;
}


