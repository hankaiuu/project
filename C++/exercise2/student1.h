#ifndef STUDENT1_H
#define STUDENR1_H
#include <string>
using namespace std;
    class student1
    {
        public:
        string name;
        struct course{
            string name;
            int score;
        };
        vector<course> courses;
        
    };
#endif