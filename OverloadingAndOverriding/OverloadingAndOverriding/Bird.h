#include <string>
using namespace std;

class Bird : public Animal {
private:
    string name;
    int age;

public:
    // Constructor

    Bird() {
        this->name = "Bird";
        this->age = 1;
        cout << "Bird Constructor is called" << endl;

    }
    Bird(string name, int age) {
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
        return "Bird";
    }
    string getCategory() {
        return "B";
    }
    void makeSound() {
        cout<<"Chirpping";
    }
};

