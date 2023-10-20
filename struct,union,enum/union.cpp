#include <iostream>
#include <cstring>


using namespace std;

union Data {
    int i;
    float f;
    char str[6];
};

int main() {
    Data d;

    d.i = 10;
    cout << "d.i = " << d.i << endl;

    d.f = 3.14;
    cout << "d.f = " << d.f << endl;

    strcpy(d.str, "Hello");
    cout << "d.str = " << d.str << endl;

    return 0;
}
 