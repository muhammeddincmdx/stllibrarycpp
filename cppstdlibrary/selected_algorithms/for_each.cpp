#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;



int main() {
    vector<int> nums{3,4,2,8,15,267};
    // lambda experssion
    auto print = [](const int &n)
    { cout << " " << n; };
    cout << "Numbers:";
    for_each(nums.cbegin(), nums.cend(), print);
    cout << endl;

    return 0;
}
