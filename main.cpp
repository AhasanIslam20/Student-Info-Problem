#include "UnsortedType.cpp"
#include "StudentInfo.h"
#include <iostream>


using namespace std;

int main()
{
    UnsortedType <StudentInfo> ut;
    StudentInfo s1(15234,"Jon", 2.6);
    StudentInfo s2(13732,"Tyrion", 3.9);
    StudentInfo s3(13569,"Sandor",1.2);
    StudentInfo s4(15467,"Ramsey2", 3.1);
    StudentInfo s5(16285,"Arya", 3.1);
    ut.InsertItem(s1);
    ut.InsertItem(s2);
    ut.InsertItem(s3);
    ut.InsertItem(s4);
    ut.InsertItem(s5);
    cout<<"Before Deleting: "<<endl;
    ut.ResetList();
    for(int i=0; i<5; i++)
    {
        StudentInfo temp;
        ut.GetNextItem(temp);
        temp.print();
        cout << "\n" ;
    }

    cout <<"\n";

    StudentInfo s6(15467);
    ut.DeleteItem(s6);

    bool check;
    StudentInfo s7(13569);
    ut.RetrieveItem(s7, check);
    if(check)
    {
        cout <<"Item is found"<<endl;
    }
    else{cout <<"Item not found"<<endl;}

    cout<<"\n";

    cout<<"After Deleting : "<<endl;
    ut.ResetList();
    for(int i=0; i<4; i++)
    {
        StudentInfo temp;
        ut.GetNextItem(temp);
        temp.print();
        cout << "\n" ;
    }


}
