#include <iostream>

using namespace std;

int main() {

    float c, f;

    cout << "Da-me a temperatura em graus Farenheit: ";
    cin >> f;

    c = (5*(f-32)/9);
    cout << "A temperatura em graus celsius e: " << c;

    return 0;
}
