#include <iostream>
using namespace std;

enum Color {RED, GREEN, BLUE};

int main() {
    Color c = RED;

    switch(c) {
        case RED:
            cout << "Red color" << endl;
            break;
        case GREEN:
            cout << "Green color" << endl;
            break;
        case BLUE:
            cout << "Blue color" << endl;
            break;
        default:
            cout << "Unknown color" << endl;
            break;
    }

    return 0;
}
