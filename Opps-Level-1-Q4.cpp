#include<iostream>
using namespace std;

class Animal{
    private:
    int weight;

    public:
    int age;
    string name;

    // constructor

    Animal()
    {
        this->age =0;
        this->name ="";
        this->weight =0;
        cout<< " Constructor" << endl;
    }


    // behivaour
    void eat()
    {
        cout<<"Eating" << endl;
    }
    void Laugh()
    {
        cout<<" Laughing " << endl;
    }
};

int main()
{
    Animal s;
    s.name = " Sonu Singh Sengar";
    s.age = 20;

    cout<< " Name is : " << s.name << endl;
    cout<< " age is : " << s.age << endl;

    s.eat();
    s.Laugh();

    // dynamic memory allocation 
    Animal* suresh = new Animal;

    suresh->name =" hii";
    suresh->age = 19;

    cout<< " Name is " << suresh->name <<endl;
    cout<< "Age  is : " << suresh->age << endl;
}

