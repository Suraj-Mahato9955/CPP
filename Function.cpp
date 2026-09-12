#include <iostream>
using namespace std;

/*int sum(int n) {
    int sum = 0;

    for(int i = 0; i <= n; i++) {
        sum += i;
    }

    return sum;
}
int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
    
}

--------------------------Pass By Value------------------
int sum(int a, int b) {
    a = a + 10;
    b = b + 20;             Output----- 39
                                        5
                                        4
    return a + b;
}
int main() {
    int a = 5, b = 4;
    cout<< sum(a, b) << endl;
    cout<< a << endl;
    cout<< b << endl;
    return 0;
}
---------------------------------------------------------------
int sumofdigit(int num) {
    int digitsum = 0;
    while(num > 0) {
        int lastDigit = num%10;
        num = num/10;

        digitsum += lastDigit;
    }
    return digitsum;
}
int main() {
    cout<< "sum= " << sumofdigit(23) << endl;
    return 0;
}


/*int main() {
    cout << factorial(3) << endl;

    return 0;
}*/
int factorial(int n) {
    int fact = 1;

    for(int i=1; i <= n; i++) {
        fact *= i;
        
    }
    return fact;
}
int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}
int main() {
    
    int n = 8, r = 2;
    cout<< nCr(n, r) << endl;
    return 0;
    
}

