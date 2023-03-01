#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream file("haha.txt", ios::app);
    string str;
    if(file.is_open()){
        file << "hello file!\n"; 
    }
    cout << "completed\n";
    file.close();
    ifstream filer("haha.txt");
    while(getline(filer, str)){
        cout << str << '\n';
    }
    filer.close();
    return 0;
}
