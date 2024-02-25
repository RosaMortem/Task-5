#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(const string& name) : name(name) {}
    virtual void sound() = 0;

private:
    string name;
};

class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}
    void sound() {
        cout << "Woof" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& name) : Animal(name) {}
    void sound() {
        cout << "Meow" << endl;
    }
};

class Cow : public Animal {
public:
    Cow(const string& name) : Animal(name) {}
    void sound() {
        cout << "Moo" << endl;
    }
};

class Bear : public Animal {
public:
    Bear(const string& name) : Animal(name) {}
    void sound() {
        cout << "Grr" << endl;
    }
};

int main() {
    Dog dog("Aleks");
    Cat cat("Mewn");
    Cow cow("Milka");
    Bear bear("Brok");

    dog.sound();
    cat.sound();
    cow.sound();
    bear.sound();

    return 0;
}