#include <iostream>
#include <memory>

using namespace std;

int main(){
    int a = 10;
    auto ptr{make_unique<int>(a)};
    cout << &ptr << endl;
    return 0;
}