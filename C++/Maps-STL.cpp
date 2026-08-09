#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<string, int> m;

    while (q--) {

        int type;
        cin >> type;

        if (type == 1) {
            string name;
            int marks;

            cin >> name >> marks;

            m[name] += marks;
        }

        else if (type == 2) {

            string name;
            cin >> name;

            m.erase(name);
        }

        else {

            string name;
            cin >> name;

            cout << m[name] << endl;
        }

    }

    return 0;
}