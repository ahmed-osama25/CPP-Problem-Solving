#include<iostream>
#include<cstdlib>
using namespace std;

void update(int *a, int *b){
    int temp_a = *a;
    int temp_b = *b;
    
    *a = temp_a + temp_b;
    *b = abs(temp_a - temp_b);
}

int main(){
    int a,b;
    cin >> a >> b;
    
    update(&a,&b);
    
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}