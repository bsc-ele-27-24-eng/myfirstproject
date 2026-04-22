#include <iostream>
int main(){
    int userInput = 0;

    std :: cout << "enter unteger value between 5 and 10" << std:: endl;

    while(true){
        std :: cin >> userInput;
        if (std :: cin.fail()){
            std :: cin.clear();
            std :: cin.ignore(10000, '\n');
            std :: cout << "sorry you entered an invalid number, please try again" <<std :: endl;

        }else if (userInput >= 5 && userInput <= 10){
            break;
        }else {
            std :: cout << "you entered " << userInput << ".please enter a number between 5 and 10." <<std ::endl;
        }
        std :: cout <<"your input value ("<< userInput <<") has been accepted." << std :: endl;
        return 0;
        
    }
}
