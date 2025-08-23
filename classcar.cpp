#include<iostream>
using namespace std;
class Car{
public:
string name;
int price;
string type;

};
void print(Car& c)
{
    cout<<c.name<<"  "<<c.price<<"  "<<c.type<<" ";

}
void change(Car& c){
c.name="Maruti Suzuki";
}
int main()
{
Car c1;
c1.name="Toyota";
c1.price=4,00,000;
c1.type="Car";
Car c2;
c2.name="Audi";
c2.price=1,00,00,000;
c2.type="Car";
print(c1);
change(c1);
print(c1);
print(c2);
}