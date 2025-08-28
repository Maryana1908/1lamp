#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
int main () {
    int n;
    int time = 0;
std::cout << "write an integer ";
std::cin >> n;

int original = n;
n = std::abs(n);

std::string b = "";
int time = 0;

if (n == 0) {
    b = "0";
    return 1;
}
else {
    while (n > 0) {
        b += (n % 2 == 0) ? '0' : '1';
        n /= 2;
        time ++;
    } 
    std::reverse(b.begin(), b.end());
}

if (original < 0) {
    b = "-" + b;
}

std::cout << "result: " << b << " number of cycles: " << time << std::endl;
return 0;
}
