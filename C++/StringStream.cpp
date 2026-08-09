#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int num;
    char comma;

    while (ss >> num) {
        result.push_back(num);
        ss >> comma;
    }

    return result;
}


int main() {
    string str;
    cin >> str;

    vector<int> vec = parseInts(str);

    for (int num : vec) {
        cout << num << endl;
    }

    return 0;
}