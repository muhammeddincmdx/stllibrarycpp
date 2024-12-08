#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void Print(const vector<int>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Before rotate: ";
    Print(v);

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate: ";
    Print(v);

    return 0;
}
