#include<iostream>
#include<cstdlib>
#include<ctime>
int main (){
    srand(static_cast<unsigned int>(std::time(nullptr)));
    int daysuntilexpiration = rand() % 12;
    switch (daysuntilexpiration){
    case 0: 
        std:: cout <<"your subscription has expired."<<std::endl;
        break;
    case 1:
        std:: cout <<"your subscription expires within a day!"<<std::endl;
        std:: cout <<"renew now and save20%!"<<std::endl;
        break;
     case 2:
     case 3:
     case 4:
     case 5:
        std:: cout <<"your subscription expires in" << daysuntilexpiration << "days" <<std::endl;
        std:: cout <<"renew now and save10%!"<<std::endl;
        break;
     case 6:
     case 7:
     case 8:
     case 9:
     case 10:
       std:: cout <<"your subscription will expire soon.renew now!"<<std::endl;
       break;

     defauilt:
       std:: cout << "you have an active subscription. " << std :: endl;
    }

}

