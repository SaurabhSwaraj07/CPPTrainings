#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

template <typename KeyType, typename ValueType>
void printMap(const map<KeyType, ValueType>& container) {
    for (const auto& pair : container) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

template <typename T>
void printVector(const vector<T>& container) {
    for (const auto& element : container) {
        cout << element << endl;
    }
}

int main() {
    map<string, int> studentGrades;
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 75;
    studentGrades["Charlie"] = 85;

    vector<string> studentNames = {"Alice", "Bob", "Charlie"};

    cout << "Student Grades (Map):" << endl;
    printMap(studentGrades);  


    cout << "\nStudent Names (Vector):" << endl;
    printVector(studentNames);  

    return 0;
}
