#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    
    Student(string name="",int age=0){
        this->name=name;
        this->age=age;
    }
    
    void inputDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void readAndPrintDetails(Student students[], int n, int index = 0) {
    if (index == n) return; 
    
    students[index].inputDetails();

    readAndPrintDetails(students, n, index + 1);
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;
    
    Student students[N];
    readAndPrintDetails(students, N);

    // Student S1("Ravi",10);
    // students[0]=Student("Ravi",10);

    for(int i=0;i<N;i++){
        students[0].display();
    }


    
    return 0;
}
