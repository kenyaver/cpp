#include <iostream>
#include <vector>

using namespace std;

void output(vector<int> out);
vector<int> input(vector<int> in);
vector<int> implant(vector<int> imp, int k, int a);
vector<int> pop(vector<int> poper, int k);

int main() {
  int k = 5;
  cin >> k;
  vector<int> array(k);
  array = input(array);
  output(array);
//   array = implant(array, 3, 5);
//   output(array);
//   array = pop(array, 3);
//   output(array);
  array.clear();
  return 0;
}

void output(vector<int> out) {
  for (auto i = out.rbegin(); i != out.rend(); i++) {
    cout << *i << " ";
  }
  cout << '\n';
}

vector<int> input(vector<int> in) {
  // int j = 0;
  for (auto i = in.begin(); i != in.end(); ++i) {
    cin >> *i;
    // j++;
  }
  return in;
}

vector<int> implant(vector<int> imp, int k, int a){
    int j = 0;
    for(auto i = imp.begin(); i != imp.end(); i++){
        if(j == k){
            imp.insert(i, a);
        }
        j++;
    }
    return imp;
}

vector<int> pop(vector<int> poper, int k){
    int j = 0;
    for(auto i = poper.begin(); i != poper.end(); i++){
        if(j == k){
            poper.erase(i);
        }
        j++;
    }
    return poper;
}