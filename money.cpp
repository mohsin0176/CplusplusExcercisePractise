#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class money
{
    int euro;
    int cent;
public:
    money(int e=0,int c=0){euro=e;cent=c;}
    int get_euro(){return euro;}
    void set_euro(int e){euro=e;}
    int get_cent(){return cent;}
    void set_cent(int c){cent=c;}
    void print(){cout<<euro<<cent<<endl;}
};

money operator +(money m1,money m2)
{


    int e=m1.get_euro()+m2.get_cent();
    int c=m1.get_cent()+m2.get_cent();
    e+=c/100;c%=100;
    money res(e,c);
    return res;
}
int main()
{
    money m;
    return 0;
}

