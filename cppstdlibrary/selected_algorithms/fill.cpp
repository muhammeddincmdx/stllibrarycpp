#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


template <typename T>
void Print(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fill(v.begin(), v.end(), -1);

    Print(v);
}
