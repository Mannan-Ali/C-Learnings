#include<bits/stdc++.h>
using namespace std;

typedef struct employee{
    int ID;
    string name;
    int salary; 

}t;


int main(){
    t array[3];
    for(int i=0;i<3;i++){
        cout<<"ID: ";
        cin>>array[i].ID;
        cout<<"Name: ";
        cin>>array[i].name;
        cout<<"salary: ";
        cin>>array[i].salary;

    }
    cout<<endl;
    cout<<"ID "<<"  "<<"Name"<<"  "<<"salary"<<endl;

    for(int i=0;i<3;i++){
        cout<<array[i].ID<<"  "<<array[i].name<<"  "<<array[i].salary<<endl;
    }
    return 0;
}