#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <string>
class Student
    {
        public :
                string name;
                double score[3];
        float getsveragescore(void)
        {
            float aver=(score[0]+score[1]+score[2])/3;
            return aver;
        }
    };

#endif