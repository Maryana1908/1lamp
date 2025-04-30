#include <iostream>
#include <string>
#include <algorithm>
int main () {
    int n;
    int time = 0;
std::cout << "write your number ";
std::cin >> n;

if (n == 0) {
    std::cerr << "0 is not supported for conversion" << std::endl;
    return 1;
}
if (n<0) {
    std::cerr << "negative digits are not supported for conversion" << std::endl;
    return 1;
}

std::string b = "";
while (n>0) {
    time = time + 1;
    if (n % 2 ==0) {
        b+= '0';
        std::cout << " this is the result " << b << " this is the initial number " << n << std::endl;}
    else {
        b+= '1';
        std::cout << " this is the result " << b << " this is the initial number " << n << std::endl;}
   n = n / 2;
   std::cout << " this is the result " << b << " this is the initial number " << n << std::endl;     
}
std::reverse(b.begin(), b.end());
std::cout << "result " << b << " number of cycles " << time << std::endl;
return 1;
}
