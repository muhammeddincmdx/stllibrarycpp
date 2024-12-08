#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main(){
    std::vector<int> numbers = {1, 2, 3};
    std::vector<std::string> names = {"Python", "Java"};
    names.emplace_back("C++");
    
    cout << "NAMES" << endl;
    cout << "First Name: " << names.front() << endl;
    cout << "Size: " << names.size() << ", Capacity: " << names.capacity() << endl;
    cout << "NUMBERS" << endl;
    cout << "Last Number: " << numbers.back() << endl;
    cout << "Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << endl;

    return 0;
}