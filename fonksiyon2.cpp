#include <iostream>

int toplama(int sayi1, int sayi2){
    return sayi1 + sayi2 ;
}

void mesajlar(const char* y) {
    std::cout<<"merhaba " << y;
}

int main (){
    std::cout<< toplama(2,3);
   mesajlar("emre");
}