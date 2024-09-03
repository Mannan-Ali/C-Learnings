#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to perform Gauss-Seidel iteration
vector<double> gauss_seidel(const vector<vector<double>>& A, const vector<double>& b, const vector<double>& x0, double tol = 1e-6, int max_iter = 100) {
    int n = b.size();
    vector<double> x = x0;

    for (int k = 0; k < max_iter; ++k) {
        vector<double> x_new = x; // Create a copy of x for updating

        for (int i = 0; i < n; ++i) {
            double s1 = 0.0;
            double s2 = 0.0;
            for (int j = 0; j < i; ++j) {
                s1 += A[i][j] * x_new[j];
            }
            for (int j = i + 1; j < n; ++j) {
                s2 += A[i][j] * x_new[j];
            }
            x_new[i] = (b[i] - s1- s2) / A[i][i];
        }

        // Print values at each iteration
        cout << "Iteration " << k + 1 << ":";
        for (double xi : x_new) {
            cout << " " << xi;
        }
        cout << endl;

        x = x_new; // Update x for the next iteration
    }

    return x; // Return the final values, even if convergence is not reached
}

int main() {
    
    int n;
    cout<<"\n The the Equation should be in the form of \n"    
          <<"              aX+bY+cZ=d\n"<<endl;
    cout << "Enter the number of equations: ";
    cin >> n;

    vector<vector<double>> A(n, vector<double>(n));
    vector<double> b(n);
    vector<double> x0(n);

    cout << "Enter the coefficients of the equations (row by row):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Equation " << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
        cout << "Right-hand side (d" << i + 1 << "): ";
        cin >> b[i];
        cout << "Initial guess (x0" << i + 1 << "): ";
        cin >> x0[i];
    }

    int max_iterations;
    cout << "Enter the maximum number of iterations you want : ";
    cin >> max_iterations;

    vector<double> solution = gauss_seidel(A, b, x0, 1e-6, max_iterations);

    cout << "Final Solution:";
    for (double xi : solution) {
        cout << " " << xi;
    }
    cout << endl;

    return 0;
}


// // 5x - y + z - w = 10
// // 2x + 8y + 2z - w = -7
// // -x + y + 6z + 3w = 8
// // 3x - 2y + z + 9w = 6

// // 10x - 2y + z + w = 5
// //    -2x + 11y - z + w = -5
// //    x - y + 12z - w = 4
// //    w + z + y - 13w = 7
// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <iomanip>
// #include <algorithm>

// using namespace std;

// int main() {
//     int Imax, N;
//     double C_n;

//     cout << "What do you want the maximum iteration to be: ";
//     cin >> Imax;
//     cout << "How many equations do you want: ";
//     cin >> N;
//     cout << "What number do you want to converge to value: ";
//     cin >> C_n;

//     vector<vector<double>> A(N, vector<double>(N));
//     vector<double> B(N);
//     vector<double> X(N, 0.0);
//     vector<double> Y(N, 0.0);
//     vector<double> Z(N, 0.0);
//     vector<double> e(N, 1.0);

//     // Input matrix A
//     for (int x = 0; x < N; x++) {
//         double row_sum = 0.0; // For computing the sum of the row without the diagonal element
//         for (int y = 0; y < N; y++) {
//             cout << "Enter coefficient A[" << x + 1 << "][" << y + 1 << "]: ";
//             cin >> A[x][y];
//             if (x != y) {
//                 row_sum += abs(A[x][y]);
//             }
//         }
//         if (abs(A[x][x]) <= row_sum) {
//             cout << "Matrix is not diagonally dominant. Please input again." << endl;
//             return 1;
//         }
//     }

//     // Input vector B
//     for (int l = 0; l < N; l++) {
//         cout << "Enter right-hand side value B[" << l + 1 << "]: ";
//         cin >> B[l];
//     }

//     int iteration = 0;

//     while (iteration < Imax) {
//         iteration++;
//         Z = X; // Save current values to calculate error later

//         for (int i = 0; i < N; i++) {
//             double sum = 0.0;
//             for (int j = 0; j < N; j++) {
//                 if (i != j) {
//                     sum += A[i][j] * X[j];
//                 }
//             }
//             X[i] = (B[i] - sum) / A[i][i];
//         }

//         // Calculate Y and Z (you should add code to calculate Y)

//         vector<double> e_squared(N);
//         for (int i = 0; i < N; i++) {
//             e_squared[i] = (X[i] - Z[i]) * (X[i] - Z[i]);
//         }

//         double max_e_squared = *max_element(e_squared.begin(), e_squared.end());
//         if (sqrt(max_e_squared) <= C_n) {
//             break;
//         }

//         // Print values at each iteration
//         cout << "Iteration " << iteration << ":";
//         for (int i = 0; i < N; i++) {
//             cout << " X[" << i + 1 << "]=" << X[i];
//         }
//         cout << endl;
//     }

//     // Display Results
//     cout << "Final Results:\n";
//     for (int i = 0; i < N; i++) {
//         cout << fixed << setprecision(9) << "X[" << i + 1 << "]=" << X[i] << "\n";
//     }

//     return 0;
// }
[[21.  7. 13.]
 [ 1.  5.  3.]
 [12.  3. 16.]]