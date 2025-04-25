#include<iostream>
using namespace std;

class Animal{
    // state or properties

    private:
    int weight;
    public:
    int age;
    string name;

    // behaviour
    void eat(){
        cout<< " Eating " << endl;
    }

    void sleep(){
        cout<<"Sleeping  " << endl;
    }

    int getweight()
    {
        return weight;
    }
    void setweight(int w)
    {
        weight = w;
    }

};

int main()
{
    // object creations 

    // static memory allocation
    Animal ramesh;
    ramesh.age = 15;
    ramesh.name = " Lion";
    cout<<" Age of Ramesh is: " << ramesh.age<< endl;
    cout<<" Name of ramesh is: " << ramesh.name << endl;
    // dynamic memory allocation

    cout <<" Size of Empty Class is : " << sizeof(Animal) << endl;

    ramesh.eat();
    ramesh.sleep();

    ramesh.setweight(101);
    cout << " Weight is : "<< ramesh.getweight()<< endl;
    return 0;
}