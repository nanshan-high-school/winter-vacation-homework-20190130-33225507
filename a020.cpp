#include <iostream>
using namespace std;
int main() {
    string card_number;
    int total;
    cout << "請輸入身分證字號:";
    cin >> card_number;
    if (card_number[0] < 'B') {
       total = 1;
    }
    else if (card_number[0] < 'C') {
            total = 10;
    }
    else if (card_number[0] < 'D') {
            total = 19;
    }
    else if (card_number[0] < 'E') {
            total = 28;
    }
    else if (card_number[0] < 'F') {
            total = 37;
    }
    else if (card_number[0] < 'G') {
            total = 46;
    }
    else if (card_number[0] < 'H') {
            total = 55;
    }
    else if (card_number[0] < 'I') {
            total = 64;
    }
    else if (card_number[0] < 'J') {
            total = 39;
    }
    else if (card_number[0] < 'K') {
            total = 73;
    }
    else if (card_number[0] < 'L') {
            total = 82;
    }
    else if (card_number[0] < 'M') {
            total = 2;
    }
    else if (card_number[0] < 'N') {
            total = 11;
    }
    else if (card_number[0] < 'O') {
            total = 20;
    }
    else if (card_number[0] < 'P') {
            total = 48;
    }
    else if (card_number[0] < 'Q') {
            total = 29;
    }
    else if (card_number[0] < 'R') {
            total = 38;
    }
    else if (card_number[0] < 'S') {
            total = 47;
    }
    else if (card_number[0] < 'T') {
            total = 56;
    }
    else if (card_number[0] < 'U') {
            total = 65;
    }
    else if (card_number[0] < 'V') {
            total = 74;
    }
    else if (card_number[0] < 'W') {
            total = 83;
    }
    else if (card_number[0] < 'X') {
            total = 21;
    }
    else if (card_number[0] < 'Y') {
            total = 3;
    }
    else if (card_number[0] < 'Z') {
            total = 12;
    }
    else if (card_number[0] < 91) {
            total = 30;
    }
    for (int i = 1; i < 9; i++) {
        total = total + (card_number[i] - 48) * (9 - i);
    }
    total = total + card_number[9] - 48;
    if (total % 10 == 0) {
       cout << "real";
    }
    else {
         cout << "fake";
    }
}
