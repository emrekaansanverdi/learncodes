#include <iostream>

int test(int a , int b)
{
    std::cout<< a + b<< std::endl;
}
int merhaba()
{
    std::cout<<"merhaba dünya nasılsınız ben yeni oluşturuldum"<<std::endl; 
    return 0;
}

int hesapmesaj(int a )
{
    std::cout<<a;
    std::cout<<"       bu integer türündedir."<<std::endl;

}

int hesapmesaj(const char* b)
{
    std::cout<<b;
    std::cout<<" bu string türündedir."<<std::endl;
}

int main ()
{
    merhaba();
    test(4,5); 
    hesapmesaj("merhaba");
    hesapmesaj(5);
    test;
}