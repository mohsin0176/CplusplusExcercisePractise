#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    double i;
    double s=0;
        for( i=1;i<=n;i++)
        {
            s=s+1/i;
        }

    cout<<"Toatal Sum is:"<<s<<endl;

    return 0;
}
