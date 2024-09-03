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

// #include <iostream>

// void insertionSortDescending(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
        
//         // Move elements of arr[0..i-1] that are greater than key
//         // one position ahead of their current position
//         while (j >= 0 && arr[j] < key) {
//             std::cout<<arr[j+1]<<arr[j]<<"\n";
//             arr[j +1] = arr[j];
//             std::cout<<arr[j+1]<<arr[j]<<"\n";
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {4,8,12,5,4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     std::cout << "Original Array: ";
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     insertionSortDescending(arr, n);

//     std::cout << "Sorted Array (Descending Order): ";
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }



#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // Include iomanip for formatting output

using namespace std;

// Subject Class
class Subject {
public:
    string name;
    int ca_marks;
    int tee_marks;
    char grade;

    // Constructor
    Subject(string subjectName, int ca, int tee)
        : name(subjectName), ca_marks(ca), tee_marks(tee), grade(' ') {}

    // Calculate total marks (CA + TEE)
    int totalMarks() {
        return ca_marks + tee_marks;
    }

    // Method to calculate grade based on total marks
    void calculateGrade() {
        int total = totalMarks();
        if (total >= 90)
            grade = 'A';
        else if (total >= 80)
            grade = 'B';
        else if (total >= 70)
            grade = 'C';
        else if (total >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
};

// Student Class
class Student {
public:
    string name;
    string regNumber;
    string department;
    vector<Subject> subjects;

    // Constructor
    Student(string studentName, string regNum, string dept)
        : name(studentName), regNumber(regNum), department(dept) {}

    // Add subject to student's subject list
    void addSubject(Subject subject) {
        subjects.push_back(subject);
    }
};

// ReportCard Class
class ReportCard {
public:
    Student student;

    // Constructor
    ReportCard(Student stu) : student(stu) {}

    // Calculate CGPA based on grades
    float calculateCGPA() {
        float totalGradePoints = 0;
        int totalSubjects = student.subjects.size();

        for (Subject& subject : student.subjects) {
            // Calculate grade for each subject
            subject.calculateGrade();

            // Convert grade to grade points (A=4, B=3, C=2, D=1, F=0)
            switch (subject.grade) {
                case 'A':
                    totalGradePoints += 4;
                    break;
                case 'B':
                    totalGradePoints += 3;
                    break;
                case 'C':
                    totalGradePoints += 2;
                    break;
                case 'D':
                    totalGradePoints += 1;
                    break;
                default:
                    break;
            }
        }

        // Calculate CGPA as average of grade points
        return totalGradePoints / totalSubjects;
    }

    // Display mark sheet
    void displayMarkSheet() {
        cout << "                VIT BHOPAL UNIVERSITY\n\n";
        cout << "School: SCSE \n\n";
        cout << "                Mark Sheet\n";
        cout << "________________________________________________________\n";
        cout << "Student Name: " << student.name << "\n";
        cout << "Reg Number: " << student.regNumber << "\n";
        cout << "Department: " << student.department << "\n";
        cout << "----------------------------------\n";
        cout << "\nSubjects:\n";
        cout << left << setw(20) << "Subject" 
             << setw(10) << "CA Marks" 
             << setw(10) << "TEE Marks" 
             << setw(15) << "Total Marks" 
             << "Grade\n";
        cout << "________________________________________________________\n";
        for (Subject& subject : student.subjects) {
            // Calculate total marks
            int total = subject.totalMarks();

            cout << left << setw(20) << subject.name 
                 << setw(10) << subject.ca_marks 
                 << setw(10) << subject.tee_marks 
                 << setw(15) << total 
                 << subject.grade << "\n";
            cout << "________________________________________________________\n";
        }
        // Calculate CGPA
        float cgpa = calculateCGPA();
        cout << fixed << setprecision(2); // Display CGPA with 2 decimal places
        cout << "\nCGPA: " << cgpa << "\n";
        cout << "_________________________________________________________\n";
    }
};

// Main function
int main() {
    // Create a student
    Student student("Mannan Ali Shaikh", "22BCE10559", "Computer Science");

    // Add subjects and marks
    student.addSubject(Subject("Discrete(MAT2003)", 35, 40));
    student.addSubject(Subject("Physics(PA1001)", 30, 38));
    student.addSubject(Subject("Chemistry(CH1002)", 28, 37));
    student.addSubject(Subject("Biology(BT3314)", 32, 35));
    student.addSubject(Subject("English(PA1003)", 33, 30));

    // Create report card for the student
    ReportCard reportCard(student);

    // Display mark sheet
    reportCard.displayMarkSheet();

    return 0;
}
