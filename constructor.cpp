#include<iostream>
using namespace std;
class Flower
{
    public:
string name;
string color;
int price;
Flower(string name,string color,int price){
this->name=name;
this->color=color;
this->price=price;
}};
int main()
{
    Flower r("ROSE","WHITE",10);
   
     Flower r1("LILY","PINK",200);
    
    Flower r2("SUNFLOWER","YELLOW",100);
   
    cout<<r2.color<<"  "<<r1.name<<"  "<<r.price;
}
