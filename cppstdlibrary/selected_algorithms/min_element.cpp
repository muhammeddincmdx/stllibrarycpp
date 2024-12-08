#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main () {
    vector<int> v{3, 1, 4, 1, 0, 5, 9};
    auto result = min_element(v.begin(), v.end());
    auto min_location = distance(v.begin(), result);
    cout << "min at: " << min_location << endl;
    return 0;
}