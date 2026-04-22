#include <iostream>
using namespace std;
int main(){
    int numbersArray[5];
    int p;
    int *ppointer = nullptr;
    //assign the address to the first element to the pointer 
    ppointer = numbersArray;
    *ppointer = 10; // assign a value to the first element
    /*increament the pointer using pointer arithmetic to assign the address of the second element to the pointer*/
    ppointer++;
    *ppointer = 20; //assign a value to the second element
    //assign the address of the fourth element to the third element to the pointer
    ppointer = &numbersArray[2];
    *ppointer = 30 ; // assign a value to the third element
    /*assign the address of the fourth element to the pointer using pointer arithmetic */
    ppointer = numbersArray + 3;
    *ppointer = 40; //assign a value to the fourth element
    //assign the address to the first element to the pointer
    ppointer = numbersArray;
    /*assign a value to the fifth element using indirection and pointer pointer arithmetic*/
    *(ppointer + 4) = 50;
    //iterate and ouput all the elements in the array 
    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << ",";
    }
    return 0;

}