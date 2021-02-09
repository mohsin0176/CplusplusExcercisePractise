#include <iostream>
using namespace std;

int main() {

    int *ptr=NULL;
    ptr=new int[10];
    int i;
    for(i=0;i<10;i++)
    {
        cin>>*(ptr+i);
    }
        for(i=0;i<10;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    delete [] ptr;

    return 0;
}
