#include <iostream>
#include <map>
using namespace std;

int main(){
    using StudentList = std::map<int, string>;
    StudentList cpp_students;

    cpp_students.emplace(1001, "Gabriel");
    cpp_students.emplace(1011, "Sarah");
    cpp_students.emplace(1022, "Emanuel");
    for (const auto& [id,name] : cpp_students) {
        cout << "id: " << id << ", " << name << endl;
    }
    return 0;
}