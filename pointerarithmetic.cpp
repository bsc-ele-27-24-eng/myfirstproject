#include <iostream>
using namespace std;
int main(){
    //null pointer
    int* ppointer = nullptr;
    int numbersArray[3] = {10,20,30};
    //assign address of first element to pointer 
    ppointer = numbersArray;
    //output the address of the first element 
    cout << "address at ppointer:" <<ppointer <<endl;
    cout << "address of numbersArray[0]:" <<numbersArray<<endl;
    //output the value of the first element using the pointer and indirection
    cout <<"value at ppointer :" << *ppointer <<endl;
    //this outputs the value of the secobd element
    cout << "va;ue at ++ppointer:" << *(++ppointer) <<endl;
    //assign address of first element to pointer
    ppointer = numbersArray;
    //this outputs the value of the first element
    cout << "value at ppointer++:" << *(ppointer++) << endl;
    return 0;
    


