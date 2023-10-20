#include <iostream>
using namespace std;

// int main()
// {
// 	try {
// 	throw "what are you doingyou";
// 	}
// 	catch (char *excp) {
// 		cout << "Caught " << excp;
// 	}
// 	catch (...) {
// 		cout << "Default Exception\n";
// 	}
// 	try {
// 		throw "Some exception message";
// 	}
// 	catch (const char * excp) {
// 		cout << "Caught: " << excp << endl;
// 	}
// 	catch (...) {
// 		cout << "Default Exception\n";
// 	}

// 	return 0;
// }

// int main() {
//     string a = "Hello, World!";
//     string s = a.substr();
//     cout << s << endl;  // Output: "ello, World!"

//     return 0;
// }

#include <iostream>
using namespace std;





// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;


// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }cout<<endl;
//    int key;
//    cout<<"Enter the element to be counted : ";
//    cin>>key;
//    int cn=0;
   
//    for(int i=0;i<n;i++){
//        if(arr[i]==key){
//            cn++;
//        }
//    }
//    cout<<"the no of times key occur : "<<cn<<endl;
  

//     return 0;
// }



#include <stdio.h>
#include <stdbool.h>
#define MAX 10
int list[MAX] = {1,80,10,5,4};
void display(){
int i;
printf("[");
// navigate through all items
for(i = 0; i < MAX; i++){
printf("%d ",list[i]);
}
printf("]\n");
}
void bubbleSort() {
int temp;
int i,j;
bool swapped = false;

// loop through all numbers

for(i = 0; i < MAX-1; i++) {
swapped = false;
// loop through numbers falling ahead 
for(j = 0; j < MAX-1-i; j++) {
printf(" Items compared: [ %d, %d ] ", list[j],list[j+1]);
// check if next number is lesser than current no
// swap the numbers.
// (Bubble up the highest number)
if(list[j] > list[j+1]) {
temp = list[j];
list[j] = list[j+1];
list[j+1] = temp;
swapped = true;
printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
}else {
printf(" => not swapped\n");
}
if(list[j] > list[j+1]) {
temp = list[j];
list[j] = list[j+1];
list[j+1] = temp;
swapped = true;
printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
}else {
printf(" => not swapped\n");
}
if(list[j] > list[j+1]) {
temp = list[j];
list[j] = list[j+1];
list[j+1] = temp;
swapped = true;
printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
}else {
printf(" => not swapped\n");
}
}
// if no number was swapped that means
// array is sorted now, break the loop. 
if(!swapped) {
break;
}
printf("Iteration %d#: ",(i+1));
display();
}
}

main(){
printf("Input Array: ");
display(); 
printf("\n");
bubbleSort();
printf("\nOutput Array: "); 
display();
}