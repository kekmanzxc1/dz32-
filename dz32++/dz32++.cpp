#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
    int age;

public:
    Pet(string petName, int petAge) : name(petName), age(petAge) {}

    virtual void printInfo() {
        cout << "Name: " << name << ", Age: " << age << " years old" << endl;
    }
};

class Dog : public Pet {
private:
    string breed;

public:
    Dog(string dogName, int dogAge, string dogBreed) : Pet(dogName, dogAge), breed(dogBreed) {}

    void printInfo() override {
        cout << "Dog Name: " << name << ", Age: " << age << " years old, Breed: " << breed << endl;
    }
};

class Cat : public Pet {
private:
    string color;

public:
    Cat(string catName, int catAge, string catColor) : Pet(catName, catAge), color(catColor) {}

    void printInfo() override {
        cout << "Cat Name: " << name << ", Age: " << age << " years old, Color: " << color << endl;
    }
};

class Parrot : public Pet {
private:
    string species;

public:
    Parrot(string parrotName, int parrotAge, string parrotSpecies) : Pet(parrotName, parrotAge), species(parrotSpecies) {}

    void printInfo() override {
        cout << "Parrot Name: " << name << ", Age: " << age << " years old, Species: " << species << endl;
    }
};

int main() {
    Dog dog("Ponchik", 3, "Golden Retriever");
    Cat cat("Snejok", 2, "Black");
    Parrot parrot("banan", 5, "Macaw");

    dog.printInfo();
    cat.printInfo();
    parrot.printInfo();
}
