#include <string>
#include <iostream>
using namespace std;

class Eagle : public Bird {
private:
    string name;
    int age;

public:
    // Constructor

    Eagle() {
        this->name = "Eagle";
        this->age = 1;
        cout << "Eagle Constructor is called" << endl;

    }
    Eagle(string name, int age) {
        this->name = name;
        this->age = age;

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
        return "Eagle";
    }
    virtual string pureLiteral() = 0;

};

