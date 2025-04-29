#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;
    int weight;
    
    void print()
    {
        cout<<this->age << " " << this->name << " " << this->weight << endl;
    }

    ~Animal()
    {
        cout<< " I am inside destructor" << endl;
    }
};


int main()
{
    Animal a;
    // a.age =10;
    // a.name = "Sonu ";
    // a.weight = 70;

    // Animal b =a;
    // a.print();
    // b.print();
    // a.name[0]='G';
    // b.age= 19;
    // a.print();
    // b.print();

    cout<<" 1destructor called " << endl;
    a.age =5;


    cout<<" 2 destructor called " << endl;
    Animal* b= new Animal();
    b->age=19;

    // mannulally 

    delete b;
    

}