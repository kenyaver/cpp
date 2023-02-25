#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <list>

using namespace std;

class door {
   public:
    int id;
    int status;
};

list<door> init(list<door> input) {
    int j = 0;
    for (auto i = input.begin(); i != input.end(); ++i) {
        i->id = j;
        i->status = 0;
        j++;
    }
    return input;
}

void output(list<door> outdoor) {
    for (auto i = outdoor.begin(); i != outdoor.end(); ++i) {
        cout << i->id << " " << i -> status << '\n';
    }
    cout << '\n';
}

void find(list<door> search, int n) {
    for (auto i = search.begin(); i != search.end(); ++i) {
        if (i->id == n) {
            cout << i->id << " ";
            cout << i->status << "\n\n";
        }
    }
}

list<door> implant(list<door> imlist, int pos) {
    for (auto i = imlist.begin(); i != imlist.end(); ++i) {
        if (i->id == pos) {
            door dora;
            dora.id = i->id;
            dora.status = 0;
            imlist.insert(i, dora);
        }
    }
    return imlist;
}

#endif