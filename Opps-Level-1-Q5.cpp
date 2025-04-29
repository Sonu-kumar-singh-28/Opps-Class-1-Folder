#include<iostream>
using namespace std;
// aprametrize constructor

class Pmt{
    public:
    int age;
    int weight;
    Pmt(int age)
    {
        this->age =age;
        cout<< " parametrize constructor" << endl;
    }

    Pmt(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout<< "Second Parametrize called " << endl; 
    }
};

int main(){

    Pmt* p = new Pmt(100);

    Pmt* q = new Pmt(10,100);
}