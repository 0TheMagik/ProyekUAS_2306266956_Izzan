#include <stdio.h>

int main() {
    int n = 6; // Jumlah data
    double x[] = {0, 1, 2, 3, 4, 5};  //data waktu      
    double q[] = {0, 120, 190, 170, 110, 60}; // data energi panas
    
    double Q = 0.0;
    double h = x[1] - x[0]; // Interval Waktu (segmen)
    
    // Trapezoidal Rule Komposit
    Q += q[0] + q[n-1];
    for (int i = 1; i < n - 1; i++) {
        Q += 2 * q[i]; 
    }

    double I = (h / 2.0) * Q;

    printf("Total energi panas yang dihantarkan = %.2lf Joule\n", I);

    return 0;
}