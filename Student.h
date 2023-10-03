#include <iostream>
#include <string>

using namespace std;

// Class representing a student
class Student {
private:
    string netID;  // Unique identifier for the student
    string name;   // Student's name
    int age;       // Student's age

    // *Declare GradeBook as a friend class to allow access to private members*

public:
    // Default constructor
    Student() {}

    // Parameterized constructor to initialize member variables
    Student(string netID, string name, int age) {
        this->netID = netID;
        this->name = name;
        this->age = age;
    }

    // Getter for netID
    string GetID() const { return netID; }

    // Getter for name
    string GetName() const { return name; }

    // Getter for age
    int GetAge() const { return age; }

    // Setter for netID
    void SetID(string netID) { this->netID = netID; }

    // Setter for name
    void SetName(string name) { this->name = name; }

    // Setter for age
    void SetAge(int age) { this->age = age; }

    // Print student information
    void Print() {
        cout << "ID: " << netID
             << " Name: " << name
             << " Age: " << age << endl;
    }

    // Overload less-than operator for sorting students by name
    bool operator <(const Student &obj) const {
        return this->name < obj.name;
    }
};
