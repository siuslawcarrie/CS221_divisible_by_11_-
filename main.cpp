#include <iostream>

using namespace std;

int main() {
    int number, sum, reverse = NULL, reverse2;

    number = 8784204;
    while (number > 0) {
        reverse = number % 10;
        cout << reverse << endl;
        number = (number - reverse) / 10;
        cout << number << endl;
        reverse2 = number % 10;
        cout << reverse2;
        sum = reverse2 + sum;
    }
    cout << sum<<endl;
    if (sum == 0 or sum / 11 == 0) {
        cout << "Number is divisible by 11.";
    }
    else{
        cout<<"Number is not divisible by 11.";
    }
    return 0;
}
