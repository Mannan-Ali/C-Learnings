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
                s2 += A[i][j] * x[j];
            }
            x_new[i] = (b[i] - s1 - s2) / A[i][i];
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
