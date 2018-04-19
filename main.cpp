#include"array.h"

int main()
{
    Array interger1(7);
    Array interger2(10);

    cout<<"size of interger1 is"
        <<interger1.getSize()
        <<"Array after initialization"<<endl<<interger1<<endl;

    cout<<"size of interger2 is"
        <<interger2.getSize()
        <<"Array after initialization"<<endl<<interger2<<endl;

    cout<<"inout 7 int numbers :";
    cin>>interger1;

    cout<<"after input the interger1 :"<<endl<<interger1<<endl;

    if(interger1!=interger2)
    {
        cout<<"interger1 and interger2 are not equal"<<endl;
    }

    interger2=interger1;

    cout<<"after interger2=interger1"<<endl;
    cout<<"interger2:"<<endl<<interger2<<endl;

    interger1[5]=1234;
    cout<<"after interger1[5]=1234 interger1[5] is"
        <<interger1[5]<<endl;

    return 0;
}
