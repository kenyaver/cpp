#include <iostream>
#include <vector>

using namespace std;

class person {
public:
  int age = 0;
  char cname = 'A';


};

  ostream &operator<<(ostream &os, const person& a) {
    return os << a.age << ' ' << a.cname << '\n';
  }

  istream &operator>>(istream &in, person& a) {
    in >> a.age >> a.cname;
    return in;
  }

//   const int& operator+(int& left, int& right) {
//     return left + right;
// }

int main() {
  person artem;
  cin >> artem;
  cout << artem;
  return 0;
}