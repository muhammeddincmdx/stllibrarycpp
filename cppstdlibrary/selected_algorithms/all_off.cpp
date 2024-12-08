#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
inline bool even(int i) { return i % 2 == 0; };

void Print(const vector<int>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}


int main() {
    vector<int> v(10, 2);
    partial_sum(v.cbegin(), v.cend(), v.begin());
    Print(v);
    bool all_even = all_of(v.cbegin(), v.cend(), even);
    if(all_even){
        cout << "All numbers are even" << endl;

    }

    return 0;
}
