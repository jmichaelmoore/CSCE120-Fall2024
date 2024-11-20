#include <iostream>
#include <vector>
using std::cout, std::endl, std::string, std::vector;

class Animal {
public:
    virtual string said() {return "Animal said what?";}
    string eat() {return "and eats Salad";}
    virtual ~Animal() {}
};

class Griffin : public Animal {
public:
    string said() {return "Griffin roars!";}
    string eat()  {return "and eats whatever.";}
    virtual ~Griffin() {}
};

class Unicorn : public Animal {
public:
    string said() {return "Unicorn sounds of chimes!";}
    string eat()  {return "and eats rainbows.";}
    virtual ~Unicorn() {}
};

int main (int argc, char * argv[]) {
    vector<Animal*> animals;

    Unicorn* unicorn = new Unicorn;
    cout << unicorn->said() << " -- ";
    cout << unicorn->eat()  << endl;
    animals.push_back(unicorn);

    Griffin* griffin = new Griffin;
    cout << griffin->said() << " -- ";
    cout << griffin->eat()  << endl;
    animals.push_back(griffin);

    while (animals.size() > 0) {
        cout << animals.at(0)->said() << " -- ";
        cout << animals.at(0)->eat()  << endl;
        delete animals.at(0);
        animals.erase(animals.begin());
    }
}

