#include <iostream>
#include <set>
using namespace std;

struct comp {
    unsigned short time, send;
    unsigned int id;
};

struct order
{
    bool operator()(const comp& x, const comp& y) const
    {
        return x.time < y.time || (x.time == y.time && x.id < y.id);
    }
};

int main() {
    unsigned short users, send, i;
    comp aux;
    cin >> users;
    while(users != 0) {
        set<comp, order> list; 
        i = 0;
        while(i < users) {
            cin >> aux.id >> aux.time;
            aux.send = aux.time;
            list.insert(aux);
            ++i;
        }
        cin >> send;
        i = 0;
        set<comp>::iterator it=list.begin();
        while(i < send) {
            aux = *it;
            cout << aux.id << "\n";
            aux.time += aux.send;
            list.insert(aux);
            ++it;
            ++i;
        }
        cout << "----\n";
        cin >> users;
    }
    return 0;
}