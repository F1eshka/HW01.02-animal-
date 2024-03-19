#include <iostream>
using namespace std;

class Dog; 

class Cat {
public:
    string name;

    Cat()
    {

    }

    Cat(const Dog& dog); 
    void Meow() {
        cout << "meow\n";
    }
};

class Dog {
public:
   
    string name;

    Dog()
    {

    }

    Dog(const Cat& cat);
   
    void Gav() {
        cout << "gav\n";
    }
};

Cat::Cat(const Dog& dog) {
    name = dog.name;
}

Dog::Dog(const Cat& cat) {
    name = cat.name;
}

int main() 
{
    Cat c;
    c.name = "Borz";
    cout << c.name << "\n";
    c.Meow();
    cout << "\n";
    Dog d = c; 
    d.Gav();
    cout << d.name << "\n";
    Cat x = d;
    x.Meow();
    cout << x.name << "\n"; 
}