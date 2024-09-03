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

// #include <stdio.h>
// #include <stdbool.h>
// #define MAX 10
// int list[MAX] = {1,80,10,5,4};
// void display(){
// int i;
// printf("[");
// // navigate through all items
// for(i = 0; i < MAX; i++){
// printf("%d ",list[i]);
// }
// printf("]\n");
// }
// void bubbleSort() {
// int temp;
// int i,j;
// bool swapped = false;

// // loop through all numbers

// for(i = 0; i < MAX-1; i++) {
// swapped = false;
// // loop through numbers falling ahead
// for(j = 0; j < MAX-1-i; j++) {
// printf(" Items compared: [ %d, %d ] ", list[j],list[j+1]);
// // check if next number is lesser than current no
// // swap the numbers.
// // (Bubble up the highest number)
// if(list[j] > list[j+1]) {
// temp = list[j];
// list[j] = list[j+1];
// list[j+1] = temp;
// swapped = true;
// printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
// }else {
// printf(" => not swapped\n");
// }
// if(list[j] > list[j+1]) {
// temp = list[j];
// list[j] = list[j+1];
// list[j+1] = temp;
// swapped = true;
// printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
// }else {
// printf(" => not swapped\n");
// }
// if(list[j] > list[j+1]) {
// temp = list[j];
// list[j] = list[j+1];
// list[j+1] = temp;
// swapped = true;
// printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
// }else {
// printf(" => not swapped\n");
// }
// }
// // if no number was swapped that means
// // array is sorted now, break the loop.
// if(!swapped) {
// break;
// }
// printf("Iteration %d#: ",(i+1));
// display();
// }
// }

// main(){
// printf("Input Array: ");
// display();
// printf("\n");
// bubbleSort();
// printf("\nOutput Array: ");
// display();
// }

// int main (){
//     try{
//         int age=15;
//         if(age>=18){
//             cout<<"Accesss Granted -you are old enough to vote";

//         }else{
//             throw(age);
//         }
//     }
//     catch (int myNum){
//         cout<<"Acess denied-you must be at leat 18 years old \n";
//         cout<<"age id :"<<myNum;
//     }
//     return 0 ;
// }

// class Base
// {
// public:
//     Base() { cout << "Base constructor called." << endl; }
//     ~Base() { cout << "Base destructor called." << endl; }
// };
// class Derived : public Base
// {
// public:
//     Derived() { cout << "Derived constructor called." << endl; }
//     ~Derived() { cout << "Derived destructor called." << endl; }
// };

// int main()
// {
    // Derived d;
    //  try{
    //      int age=15;
    //      if(age>=18){
    //          cout<<"Accesss Granted -you are old enough to vote";

    //     }else{
    //         throw 505;
    //     }
    // }
    // catch (...){
    //     cout<<"Acess denied-you must be at leat 18 years old \n";
    // }
    // return 0 ;

    // int a = 10;
    //  cout<<a<<endl;
    // int b = a++;
    //  cout<<a<<endl;
    // int c = a;

    // cout<<b<<endl;
    // cout<<c;
// }

// #include <iostream>
// using namespace std;

// // Class template for a generic Pair
// template <typename T>
// class Pair
// {
// private:
//     T first;
//     T second;

// public:
//     Pair(T f, T s) : first(f), second(s) {}

//     T getFirst() const
//     {
//         return first;
//     }

//     T getSecond() const
//     {
//         return second;
//     }
// };

// int main()
// {
//     // Create a Pair of integers
//     Pair<int> intPair(5, 10);
//     cout << "First: " << intPair.getFirst() << ", Second: " << intPair.getSecond() << endl;

//     // Create a Pair of doubles
//     Pair<double> doublePair(3.14, 6.28);
//     cout << "First: " << doublePair.getFirst() << ", Second: " << doublePair.getSecond() << endl;

//     return 0;
// }


// #include <iostream>

// template <class T1, class T2>
// class Pair {
// private:
//     T1 first;
//     T2 second;
// public:
//     Pair(T1 f, T2 s) : first(f), second(s) {}

//     void print() {
//         std::cout << "First: " << first << ", Second: " << second << std::endl;
//     }

//     void add() {
//         std::cout << "Addition: " << first + second << std::endl;
//     }

//     void subtract() {
//         std::cout << "Subtraction: " << first - second << std::endl;
//     }
// };

// int main() {
//     Pair<int, int> p1(5, 3);
//     p1.print();
//     p1.add();
//     p1.subtract();

//     Pair<float, float> p2(2.5, 1.75);
//     p2.print();
//     p2.add();
//     p2.subtract();

//     Pair<std::string, std::string> p3("Hello", "World");
//     p3.print();

//     return 0;
// }

// #include <iostream>

// template <typename T>
// class BaseClass {
// protected:
//     T value;

// public:
//     BaseClass(T val) : value(val) {}
//     virtual void printValue() {
//         std::cout << "BaseClass value: " << value << std::endl;
//     }
// };

// class DerivedClass : public BaseClass<int> {
// public:
//     DerivedClass(int val) : BaseClass(val) {}
//     void printValue() override {
//         std::cout << "DerivedClass value: " << value << std::endl;
//     }
// };

// int main() {
//     DerivedClass obj(42);
//     obj.printValue();

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <algorithm>

// struct Book {
//     int book_id;
//     std::string author_name;
//     double price;
//     int no_of_pages;
//     std::string publisher;
//     int year_of_publishing;
// };

// bool compareBooks(const Book& b1, const Book& b2) {
//     return b1.author_name < b2.author_name;
// }

// void sortBooks(const std::string& input_file, const std::string& output_file) {
//     std::ifstream inFile(input_file);
//     std::ofstream outFile(output_file);

//     std::vector<Book> books;
//     Book temp;

//     while (inFile >> temp.book_id >> temp.author_name >> temp.price >> temp.no_of_pages >> temp.publisher >> temp.year_of_publishing) {
//         books.push_back(temp);
//     }

//     std::sort(books.begin(), books.end(), compareBooks);

//     for (const auto& book : books) {
//         outFile << book.book_id << " " << book.author_name << " " << book.price << " " << book.no_of_pages << " " << book.publisher << " " << book.year_of_publishing << std::endl;
//     }

//     inFile.close();
//     outFile.close();

//     std::cout << "Books sorted and written to " << output_file << std::endl;
// }

// int main() {
//     sortBooks("books.txt", "sorted_books.txt");
//     return 0;
// }

// C++ implementation of Karatsuba algorithm for bit string multiplication.
// #include<iostream>
// #include<stdio.h>

// using namespace std;

// // FOLLOWING TWO FUNCTIONS ARE COPIED FROM http://goo.gl/q0OhZ
// // Helper method: given two unequal sized bit strings, converts them to
// // same length by adding leading 0s in the smaller string. Returns the
// // the new length
// int makeEqualLength(string &str1, string &str2)
// {
// 	int len1 = str1.size();
// 	int len2 = str2.size();
// 	if (len1 < len2)
// 	{
// 		for (int i = 0 ; i < len2 - len1 ; i++)
// 			str1 = '0' + str1;
// 		return len2;
// 	}
// 	else if (len1 > len2)
// 	{
// 		for (int i = 0 ; i < len1 - len2 ; i++)
// 			str2 = '0' + str2;
// 	}
// 	return len1; // If len1 >= len2
// }

// // The main function that adds two bit sequences and returns the addition
// string addBitStrings( string first, string second )
// {
// 	string result; // To store the sum bits

// 	// make the lengths same before adding
// 	int length = makeEqualLength(first, second);
// 	int carry = 0; // Initialize carry

// 	// Add all bits one by one
// 	for (int i = length-1 ; i >= 0 ; i--)
// 	{
// 		int firstBit = first.at(i) - '0';
// 		int secondBit = second.at(i) - '0';

// 		// boolean expression for sum of 3 bits
// 		int sum = (firstBit ^ secondBit ^ carry)+'0';

// 		result = (char)sum + result;

// 		// boolean expression for 3-bit addition
// 		carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry);
// 	}

// 	// if overflow, then add a leading 1
// 	if (carry) result = '1' + result;

// 	return result;
// }

// // A utility function to multiply single bits of strings a and b
// int multiplyiSingleBit(string a, string b)
// { return (a[0] - '0')*(b[0] - '0'); }

// // The main function that multiplies two bit strings X and Y and returns
// // result as long integer
// long int multiply(string X, string Y)
// {
// 	// Find the maximum of lengths of x and Y and make length
// 	// of smaller string same as that of larger string
// 	int n = makeEqualLength(X, Y);

// 	// Base cases
// 	if (n == 0) return 0;
// 	if (n == 1) return multiplyiSingleBit(X, Y);

// 	int fh = n/2; // First half of string, floor(n/2)
// 	int sh = (n-fh); // Second half of string, ceil(n/2)

// 	// Find the first half and second half of first string.
// 	// Refer http://goo.gl/lLmgn for substr method
// 	string Xl = X.substr(0, fh);
// 	string Xr = X.substr(fh, sh);

// 	// Find the first half and second half of second string
// 	string Yl = Y.substr(0, fh);
// 	string Yr = Y.substr(fh, sh);

// 	// Recursively calculate the three products of inputs of size n/2
// 	long int P1 = multiply(Xl, Yl);
// 	long int P2 = multiply(Xr, Yr);
// 	long int P3 = multiply(addBitStrings(Xl, Xr), addBitStrings(Yl, Yr));

// 	// Combine the three products to get the final result.
// 	return P1*(1<<(2*sh)) + (P3 - P1 - P2)*(1<<sh) + P2;
// }

// // Driver program to test above functions
// int main()
// {

// 	printf ("%ld\n", multiply("110", "1010"));
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
  int *arr=new int[10];
  // try {
  //   int age = 5;
  //   if (age >= 18) {
  //     cout << "Access granted - you are old enough.";
  //   }else{
	// 	throw age;
	// }
  // }
  // catch (const * exception ) {
  //   cout << "Access denied - You must be at least 18 years old.\n";
  // }
  return 0;
}
