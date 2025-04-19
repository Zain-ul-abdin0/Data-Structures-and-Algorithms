#include <string>
using namespace std;

class Parrot : public Bird {
private:
    string name;
    int age;

public:
    // Constructor

    Parrot() {
        this->name = "Parrot";
        this->age = 1;
        cout << "Parrot Constructor is called" << endl;

    }
    Parrot(string name, int age) {
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
        return "Parrot";
    }
  
};

