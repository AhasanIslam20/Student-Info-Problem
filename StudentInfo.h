#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <string>
#include<iostream>
using namespace std;

class StudentInfo
{
    public:
        StudentInfo();
        StudentInfo(int, string, double);
        StudentInfo(int);

        bool operator != (StudentInfo);
        bool operator ==(StudentInfo);

        void print();



    protected:

    private:
        int id;
        string name;
        double cgpa;
};

#endif // STUDENTINFO_H
