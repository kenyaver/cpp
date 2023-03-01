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
        id = primer;
        return id;
    }

    void get_id(){
        cout << id << endl;
    }
};

int main(){
    car<int> a(12);
    a.get_id();
    return 0;
}