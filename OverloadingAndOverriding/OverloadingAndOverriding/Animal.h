#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    // Constructor

    Animal() {
        this->name = "Animal";
        this->age = 1;
        cout << "Animal Constructor is called" << endl;

    }

    // Setter
    void setAge(int age) {
        this->age = age;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter
    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }
    string getType() {
        return "Animal";
    }
   virtual string getCategory() {
        return "A";
    }
   virtual void makeSound() = 0;
};

