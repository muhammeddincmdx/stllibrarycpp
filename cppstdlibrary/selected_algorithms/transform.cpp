#include <algorithm>
#include <iostream>

using namespace std;

auto UpperCase(char c) { return toupper(c); }
int main() {
    const string s("hello");
    string S{s};
    transform(s.begin(),
              s.end(),
              S.begin(),
              UpperCase);
    cout << s << endl;
    cout << S << endl;
    
}





