#include <iostream>
#include <fstream>
using namespace std;


int main() {
    int number;
    cout << "Enter an integer value between 5 and 10" << endl;
        cin >> number;
    while (number < 5 || number > 10) {
        cout<<"Sorry, you have entered an invalid number, please try again"<<endl;
        cin>>number;
    }

    cout << "Your input value(" << number << ") has been accepted." << endl;

    return 0;
}


