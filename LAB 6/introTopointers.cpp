#include <iostream>
using namespace std;
int main (){

    int* ppointer = nullptr;
    int integerVar = 5;

    ppointer = &integerVar;
    
    cout << "integerVar :" << &integerVar << endl;
    
    cout <<"address of integerVal :" << &integerVar << endl;
    
    cout << "ppointer :" << ppointer << endl;
    
    cout << "address of ppointer" <<&ppointer << endl;
    return 0;
    

}