#include<bits/stdc++.h>
using namespace std;

void sayDigits(int number,vector<string> wordsforDigit){

    if(number == 0) return;
    sayDigits(number/10,wordsforDigit);
    int modTen = number%10;
    cout<<wordsforDigit[modTen]<<" ";

//Non iterarive way : gives answer in oposite order

    // vector<string> wordsforDigit = {"zero","one","two","three","four","five","six","seven","eight","nine"}; 
    // while(number > 0){
    //     int modTen = number % 10; //to get the last digit 
    //     cout<<wordsforDigit[modTen]<<" ";
    //     number = number/10;
    // }
}
int main(){
    vector<string> wordsforDigit = {"zero","one","two","three","four","five","six","seven","eight","nine"}; 
    sayDigits(10290,wordsforDigit);
    return 0;
}