#include "StudentInfo.h"

StudentInfo::StudentInfo()
{
    id = 0;
    name = "";
    cgpa = 0;
}
StudentInfo::StudentInfo(int i, string n, double cg)
{
    id = i;
    name = n;
    cgpa = cg;
}
StudentInfo::StudentInfo(int i)
{
    id = i;
    name = "";
    cgpa =0;
}
 bool StudentInfo::operator != (StudentInfo s)
 {
     if(id == s.id)
     {
         return true;
     }
     else{return false;}
 }

bool StudentInfo::operator == (StudentInfo s)
 {
     if(id == s.id)
     {
         return true;
     }
     else{return false;}
 }
void StudentInfo::print()
{
    cout <<"Id: "<<id<<endl<<"Name: "<<name<<endl<<"CGPA: "<<cgpa<<endl;
}



