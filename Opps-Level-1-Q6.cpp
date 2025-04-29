#include<iostream>
using namespace std;

class Animal {
public:
    int age;
    int weight;
    string name;

    Animal(int age) {
        this->age = age;
        this->weight = 0;
        this->name = "";
    }

    Animal(Animal &obj) {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "I am inside of the copy constructor." << endl;
    }
};

int main() {
    Animal a(10);
    Animal c = a;
    Animal animal(c);
   
    return 0;
}
