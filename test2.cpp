// #include <iostream>
// using namespace std;
// bool search(int *arr, int size, int k)
// {
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     if (size == 0)
//     {
//         return false; // Base case: Element not found
//     }

//     if (arr[0] == k)
//     {
//         return true; // Base case: Element found
//     }

//     // Recursive case: Search in the remaining portion of the array
//     return search(arr + 1, size - 1, k);
// }

// int main()
// {
//     int arr[] = {5, 3, 2, 8, 10, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 8;

//     bool found = search(arr, n, target);

//     if (found)
//     {
//         std::cout << "Element " << target << " found in the array." << std::endl;
//     }
//     else
//     {
//         std::cout << "Element " << target << " not found in the array." << std::endl;
//     }

//     return 0;
//}

#include <iostream>

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key
        // one position ahead of their current position
        while (j >= 0 && arr[j] < key) {
            std::cout<<arr[j+1]<<arr[j]<<"\n";
            arr[j +1] = arr[j];
            std::cout<<arr[j+1]<<arr[j]<<"\n";
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {4,8,12,5,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertionSortDescending(arr, n);

    std::cout << "Sorted Array (Descending Order): ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
