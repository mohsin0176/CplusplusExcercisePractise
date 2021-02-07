#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void hail(int n)

{

         if(n<=1)
         {
         cout<< n << "-> " ;
         return;
         }
         if(n%2==2) { hail(3*n+1);};

         else { hail(n/2) ;};

}

int  main()
{
         int n;
         cin>>n;
         hail(10);
         return 0;

}
