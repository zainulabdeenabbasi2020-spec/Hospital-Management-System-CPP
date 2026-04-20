#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base Class (Demonstrating Inheritance)
class Person {
public:
    string name;
    int age;
    virtual void displayInfo() = 0; // Pure Virtual Function (Polymorphism)
};

class Patient : public Person {
public:
    int patientID;
    string ailment;

    void displayInfo() override {
        cout << "Patient ID: " << patientID << " | Name: " << name << " | Ailment: " << ailment << endl;
    }
};

int main() {
    cout << "--- Hospital Management System ---" << endl;
    
    Patient p1;
    p1.name = "Zain ul Abideen";
    p1.age = 22;
    p1.patientID = 101;
    p1.ailment = "Fever";

    p1.displayInfo();

    return 0;
}
