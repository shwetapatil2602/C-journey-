#include<iostream>
using namespace std;
class Student{
    public:
    int no;
    string name;
    string school;
};
int main()
{
    Student s;
    s.name="Yashi";
    s.no=10;
    s.school="new school";
    int x=4;
    cout<<&x<<endl;
    int *p=&x;
    cout<<p<<endl;
    int*ptr=new int(166);
    cout<<*ptr<<endl;

}