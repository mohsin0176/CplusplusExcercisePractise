#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void shift_right(int *A, int size, int p)

{
         int i;
         int tmp[size];
         p = p%size;
         for(i=0;i<size;i++)
         {
        tmp[ i+p>=0? (i+p)%size : size+i+p ] = A[i];
         }
         for(i=0;i<size;i++)
         {
        A[i] = tmp[i];
         }
}

int main()
{
    shift_right(int arr[], 5, 2);
    return 0;
}
