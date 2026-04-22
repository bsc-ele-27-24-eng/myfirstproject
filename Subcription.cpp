#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int daysuntilexpiration = std::rand()%12;
    std::cout<<"random number generated:"<<daysuntilexpiration <<std::endl;
    if(daysuntilexpiration <= 0){
        std:: cout <<"your subscription has expired."<<std::endl;

    }
    else if (daysuntilexpiration <= 1){
         std:: cout <<"your subscription expires within a day!."<<std::endl;
        std:: cout <<"renew now and save20%."<<std::endl;
    }
    else if(daysuntilexpiration <=10){
         std:: cout <<"your subscription will expire soon.renew now!"<<std::endl;

    }
    else {
        std:: cout << "you have an active subscription. " << std :: endl;
    
    }
    return 0;

}