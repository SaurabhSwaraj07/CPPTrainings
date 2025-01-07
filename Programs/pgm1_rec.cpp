#include <iostream>
#include <vector>  // Using vector for dynamic array
using namespace std;

class Student {
    string name;
    int age;

public:
    // Constructor to initialize student with name and age
    Student(string name = "", int age = 0) {
        this->name = name;
        this->age = age;
    }

    // Method to input student details
    void inputDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Method to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Recursive function to input student details
void readAndPrintDetails(vector<Student>& students, int n, int index = 0) {
    // Base case: stop when we've processed all students
    if (index == n) return;

    // Input details for the current student
    students[index].inputDetails();

    // Recur for the next student
    readAndPrintDetails(students, n, index + 1);
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    // Create a vector of Student objects with size N
    vector<Student> students(N);

    // Call the recursive function to input details
    readAndPrintDetails(students, N);

    // Loop through the vector and display details of each student
    for (int i = 0; i < N; i++) {
        students[i].display();  // Display the details for each student
    }

    return 0;
}
