#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>

using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void displayDetails() = 0; // Pure Virtual Function
};

// Derived Class for Patient
class Patient : public Person {
private:
    int patientID;
    string disease;
public:
    Patient(string n, int a, int id, string d) : Person(n, a), patientID(id), disease(d) {}
    
    void displayDetails() override {
        cout << "Patient ID: " << patientID << "\nName: " << name 
             << "\nAge: " << age << "\nDisease: " << disease << endl;
    }
};

// Derived Class for Doctor
class Doctor : public Person {
private:
    string specialization;
public:
    Doctor(string n, int a, string spec) : Person(n, a), specialization(spec) {}
    
    void displayDetails() override {
        cout << "Doctor Name: " << name << "\nSpecialization: " << specialization << endl;
    }
};

#endif
