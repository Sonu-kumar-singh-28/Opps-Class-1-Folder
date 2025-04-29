#include<iostream>
using namespace std;
class Animal{
    public:
    int weight;

    void setweight(int weight)
    {
        this->weight = weight;
    }
    cout<< weight <<endl;
};

int main()
{
    Animal a;
    a.setweight(10);
}

