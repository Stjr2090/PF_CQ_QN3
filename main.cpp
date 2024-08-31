#include <iostream>
using namespace std;

// Function to calculate the sum of integers from first to last
int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; i++) {
        sum += i;
    }
    return sum;
}

// Function to calculate the greatest common divisor of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to reduce a fraction
int reduce(int& num, int& denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // failure to reduce
    }

    int greatestCommonDivisor = gcd(num, denom);
    num /= greatestCommonDivisor;
    denom /= greatestCommonDivisor;
    return 1; // successful reduction
}

int main() {
    int first, last, num, denom;

    // Test the sum_from_to function
    cout << "Enter the first and last integers: ";
    cin >> first >> last;
    cout << "Sum from " << first << " to " << last << " is: " << sum_from_to(first, last) << endl;

    // Test the reduce function
    cout << "Enter the numerator and denominator: ";
    cin >> num >> denom;
    if (reduce(num, denom) == 1) {
        cout << "Reduced fraction is: " << num << "/" << denom << endl;
    } else {
        cout << "Failed to reduce fraction." << endl;
    }

    return 0;
}
