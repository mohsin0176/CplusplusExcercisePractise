#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=1;
    int i;
    for(i=2;i<=n;i++)
    {
        sum=sum+(1/i);

    }
    cout<<"Total Sum is:"<<sum;
    return 0;
}
