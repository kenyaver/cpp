#include <iostream>
#include <list>

using namespace std;

list <int> init_list(list<int>inlist);

void output(list<int> outlist);

list<int> implant(list<int> imlist, int pos, int val);

int main() {
    int k = 15;
    list<int> listi(k);
    list<int> listik(k);

    cout << "заполнение по порядку:\n";

    listi = init_list(listi);
    listik = init_list(listik);

    output(listi);
    output(listik);

    listi.swap(listik);

    cout << "меняет местами 2 списка:\n";

    output(listi);
    output(listik);

    cout << "добавдение элементов в начало и конец списка:\n";

    listi.push_back(0);
    listi.push_front(0);

    output(listi);

    cout << "добавление элементов на Н позицию (в данном случае на 11):\n";

    listik = implant(listik, 11, 0);

    output(listik);

    //  очищение списков:
    listi.clear();
    listik.clear();

    

    return 0;
}

list<int> init_list(list<int> inlist){
    int j = 0;
    for(auto i = inlist.begin(); i != inlist.end(); ++i){
        *i = j;
        ++j;
    }
    return inlist;
}

void output(list<int> outlist){
    for(auto i = outlist.begin(); i != outlist.end(); ++i){
        cout << *i << ", ";
    }
    cout << '\n';
}

list<int> implant(list<int> imlist, int pos, int val){
    for(auto i = imlist.begin(); i != imlist.end(); ++i){
        if(*i == pos){
            imlist.insert(i, val);
        }
    }
    return imlist;
}