#include<iostream>
using namespace std;
class student (student s)
{    
    public:
     string name;
    int roll;
    float percentage;
};
void updateMarks(student& s,float percentage)
{
 
}
void print(student s)
{
cout<<s.name<<"  "<<s.roll_no<<"  "<<s.percentage;
}
int main()
{
    student s1;
    s1.name="Sid";
    s1.roll_no=56;
    s1.markpercentage=400;

    student s2;
    s2.name="nil";
    s2.roll_no=66;
    s2.markpercentage=450;

    student s1;
    s3.name="dodo";
    s3.roll_no=60;
    s3.markpercentage=490;

    print(s1);
    print(s2);
    print(s3);


}