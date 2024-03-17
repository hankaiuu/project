#include <iostream>
#include <string>
#include <fstream>
#include "student.h"
using namespace std;
int main()
{
    Student a[10];
    ifstream file1;
    file1.open("data.txt");
    for(int i=0;i<10;i++)
    {
        file1>>a[i].name;
    }
    for(int i=0;i<10;i++)
    {
        file1>>a[i].score[0];
    }
    for(int i=0;i<10;i++)
    {
        file1>>a[i].score[1];
    }
    for(int i=0;i<10;i++)
    {
        file1>>a[i].score[2];
    }
    double sum[3];
    double min[3]={5,5,5};
    double max[3]={0,0,0};
    cout<<"no\t"<<"name\t"<<"score0  "<<"score1  "<<"score2  "<<"average  "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<"\t"<<a[i].name<<"\t"<<a[i].score[0]<<"\t"<<a[i].score[1]<<"\t"<<a[i].score[2]<<"\t"<<a[i].getsveragescore()<<endl;
        for(int j=0;j<3;j++)
        {
            sum[j]+=a[i].score[j];
            if(a[i].score[j]<min[j]) min[j]=a[i].score[j];
            if(a[i].score[j]>max[j]) max[j]=a[i].score[j];
        }
    }
    cout<<"\t"<<"average\t";
    for(int i=0;i<3;i++)
    {
        cout<<sum[i]/10.0<<"\t";
    }
    cout<<endl;

    cout<<"\t"<<"min\t";
    for(int i=0;i<3;i++)
    {
        cout<<min[i]<<"\t";
    }
    cout<<endl;

    cout<<"\t"<<"max\t";
    for(int i=0;i<3;i++)
    {
        cout<<max[i]<<"\t";
    }
    cout<<endl;
}