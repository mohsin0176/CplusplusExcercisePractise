#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

        int a[5] = { 1,2,3,4,5} ;
        int *p = a+2;
        int *q = new int[3];
        int i;
        for(i=0;i<3;i++)
        {
         *q++ = *p++;
        }
        cout << "Loop 1" << endl;
        while(p!=a)
        {
        p--;
        cout << p[0] << endl;
        }
        cout << "Loop 2" << endl;
        for(i=1;i<=3;i++)
        {
        cout << q[-i] << endl;
        }
        q=a+1;
        cout << "Loop 3" << endl;
        for(i=0;i<4;i++)
        {
        cout << q[i] << endl;
        }
    return 0;
}
