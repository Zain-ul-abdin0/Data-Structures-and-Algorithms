#include <string>
#include <iostream>
using namespace std;

class Crow  {
private:
    string name;
    int age;

public:
    // Constructor

    Crow() {
        this->name = "Crow";
        this->age = 1;
        cout << "Crow Constructor is called" << endl;

    }
    Crow(string name, int age) {
        this->name = name;
        this->age = age;

    }
    string pureLiteral() {
        return "Pure Literal is Called";
    };
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
        return "Crow";
    }

};

