#include <iostream>
using namespace std;
int main() {
    int number;
    int new_code = 0;
    string code;
    cout << "請輸入7個大寫字母:";
    cin >> code;
    for (int i = 0; i < 6; i++) {
        if (code[i] > code[i + 1]) {
           number = code[i] - code[i + 1];
        }
        else {
             number = code[i + 1] - code[i];
        }
        new_code = new_code * 10 + number;
    }
    cout << new_code << "\n";
}
