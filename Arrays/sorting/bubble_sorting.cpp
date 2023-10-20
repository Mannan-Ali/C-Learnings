// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin >> size;
//     int arry[size];
//     cout<<"Enter data :"<<endl;
//     for (int i = 0; i < size; i++)
//     {

//         cin >> arry[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arry[i] << " ";
//     }
//     cout << endl;
//     int counter = 0;
//     while (counter < size - 1)
//     {
//         for (int i = 0; i < size - counter; i++)
//         {
//             if (arry[i] > arry[i + 1])
//             {
//                 int temp = arry[i];
//                 arry[i] = arry[i + 1];
//                 arry[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
//     cout<<"Your Sorted Array is :"<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arry[i] << " ";
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter data:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arry[i]);
    }

    int counter = 0;
    while (counter < size - 1) {
        for (int i = 0; i < size - counter; i++) {
            if (arry[i] > arry[i + 1]) {
                int temp = arry[i];
                arry[i] = arry[i + 1];
                arry[i + 1] = temp;
            }
        }
        counter++;
    }

    printf("Your Sorted Array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }

    return 0;
}
