#include <array>
#include <iostream>
using std::cout;
using std::endl;


int main(){
    std::array<float, 3> data{10.0F, 100.0F, 1000.0F};
    for (const auto &elem : data)
    {
        cout << elem << endl;
    }

    cout << std::boolalpha;
    cout << "Array Empty: " << data.empty() << endl;
    cout << "Array Size: " << data.size() << endl;
    
}
