#include <algorithm>
#include <iostream>
#include <array>

using namespace std;

template <typename T, size_t N>
void Print(const array<T, N>& arr) {
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    array<int, 10> s = {5, 7, 4, 2, 8,
                        6, 1, 9, 0, 3};

    cout << "Before Sorting: ";
    Print(s);

    sort(s.begin(), s.end());
    cout << "After Sorting: ";
    Print(s);
    return 0;
}
