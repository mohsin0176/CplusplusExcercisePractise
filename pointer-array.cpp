#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    ptr=arr;
    int i;
    for(i=0;i<9;i++)
    {
        cin>>*(ptr+i);
    }
      for(i=0;i<9;i++)
    {
        cout<<*(ptr+i)<<"\t";
    }
    return 0;
}
