#include <iostream>
using namespace std;
int main (){
    //declare pointer and initialize it
    //so that it doesnt store a random address
    int* ppointer = nullptr;
    int integerVar = 5;
    //assign pointer to address of object
    ppointer = &integerVar;
    //output the value of integerVar
    cout << "integerVar :" << &integerVar << endl;
    //cout output the address of integerVar
    cout <<"address of integerVal :" << &integerVar << endl;
    //output the address assigned to ppointer 
    cout << "ppointer :" << ppointer << endl;
    //output the address of ppointer
    cout << "address of ppointer" <<&ppointer << endl;
    return 0;
    

}