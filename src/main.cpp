#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int n;
    int time = 0;
cout << "write your number ";
cin >> n;

if (n == 0) {
    cout << "error, number is equal to 0" << endl;
    return 0;
}

string b;
while (n>0) {
    time = time + 1;
    if (n % 2 ==0) {
        b+= '0';
        cout << " test 19 this is the result " << b << " this is the initial number " << n << endl;}
    else {
        b+= '1';
        cout << "test 22 this is the result " << b << " this is the initial number " << n << endl;}
   n = n / 2;
   cout << "test 24 this is the result " << b << " this is the initial number " << n << endl;     
}
reverse(b.begin(), b.end());
cout << "result " << b << " number of cycles " << time << endl;
return 0;
}
