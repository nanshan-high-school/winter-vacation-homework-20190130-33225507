#include <iostream>
using namespace std;
int main() {
    string x;
    int k;
    int check = 0;
    cout << "輸入字串:";
    cin >> x;
    for (int i = 0; x[i] != 0; i++) {
        k = i + 1;
    }
    for (int i = 0; i < (k + 1)/ 2; i++) {
        if (x[i] == x[k - 1 - i]) {
           check = check + 0;
        }
        else {
             check = check + 1;
        }
    }
    if (check == 0) {
       cout << "yes";
    }
    else {
         cout << "no";
    }
}
