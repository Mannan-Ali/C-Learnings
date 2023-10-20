#include<bits/stdc++.h>
using namespace std;

typedef struct employee{
    int ID;
    string name;
    int salary; 

}t;

int main(){
    t Mannan;
    Mannan.ID=1;
    Mannan.name="head employee";
    Mannan.salary=100000000;
    cout<< Mannan.ID<<endl;
    cout<<Mannan.name<<endl;
    cout<<Mannan.salary<<endl;
    return 0;
}

