#include <bits/stdc++.h>
using namespace std;

bool canMakeSubsequence(string str1, string str2)
{
    int size = str1.length() - str2.length();
    char start = str1[0];
    char end = str1[size];
    int i = 0;
    // while(i<= size){
    //     if( str1[i] == )
    // }
}

int main()
{
    string str1 = "abc";
    string str2 = "ad";
    canMakeSubsequence(str1, str2);
    return 0;
}