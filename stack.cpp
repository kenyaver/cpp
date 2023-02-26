#include <iostream>
#include <stack>

using namespace std;

stack<int> init(stack<int> ex, int n);

void output(stack<int> out, int n);

int main() {
  int k = 5;
  stack<int> study;
  study = init(study, k);
  // cout << "OK\n";
  output(study, k);

  return 0;
}

stack<int> init(stack<int> ex, int n) {
  int a;
  cout << "enter " << n << " integer n:\n";
  for (auto i = 0; i < n; ++i) {
    cin >> a;
    ex.push(a);
  }
  return ex;
};

void output(stack<int> out, int n) {
  stack<int> copyer;
  for (int i = 0; i < n; ++i) {
    cout << out.top() << ' ';
    copyer.push(out.top());
    out.pop();
  }
  cout << '\n';

  for (int i = 0; i < n; ++i) {
    out.push(copyer.top());
    copyer.pop();
  }
}
