#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main () {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = accumulate(v.begin(), v.end(), 0);
    int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

}