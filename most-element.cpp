#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main()
{
    int i,j;
    int a[5]={1,2,2,2,3};

for(i=0;i<=4;i++)
{
        int *count;
        count=new int(0);
        for(j=0;j<=4;j++)
        {
        if(a[i]==a[j]){ *count=*count+1; }
        }
        cout<<a[i]<<"\t"<<"is"<<"\t"<<*count<<"\t"<<"Times"<<endl;
        delete count;
}

return 0;
}
