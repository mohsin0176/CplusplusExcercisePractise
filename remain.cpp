#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  main()
{
         int n;
         cin>>n;
         if(n<=1)
         {
         cout <<n<<endl ;
         }
         else if(n%3==2)
         {
         cout<<3*n+1<<endl;
         }
         else
         {
        cout<<n/2<<endl;
         }
         return 0;

}
