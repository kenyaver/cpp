#include <iostream>

using namespace std;

template <typename T>
class car{
    private:
    T id;
    public:
    car(T id): id(id)
    { }
    T set_id(T primer){
        this.id = primer;
        return this -> id;
    }

    void get_id(){
        cout << this -> id << endl;
    }
};

template<typename K>
K sum(K a, K b){
    return a + b;
}

int main(){
    // car<int> a(12);
    // a.get_id();
    int a = 1;
    int c = 2;
    int s = sum(a, c);
    double b = 5.06;
    double d = 5.6;
    double e = sum(b, d);
    cout << s << endl << e << endl;
    return 0;
}