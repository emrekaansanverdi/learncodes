#include <iostream>
int main ()
{
    int a ;
    int b ;
    char islem = '+';
    std::cout<<"birinci sayı: "<< std::endl;
    std::cin>>a;
    std::cout<<"ikinci sayı: "<< std::endl;
    std::cin>> b ;
    std::cout<<"işleminizi giriniz-> ";
    std::cin>> islem;

   /*  if (islem == '+')
    {
      std::cout<<"sonuç: "<< a+b;

    }
    else if (a>10) 
    {
            std::cout<<"else if çalıştı.";

    }

    else {
            std::cout<<"işlem yapılamıyor. tekrar deneyiniz. ";

    } */
 /*   switch(islem){
        case '+' :
        std::cout<<"sonuç: "<< a+b;
        break;
        case '-' :
        std::cout<<"sonuç: "<< a-b;
        break;
        default :
        std::cout<<"Herhangi bir geçerli işlem girmediniz lütfen tekrar giriniz.";
        break; 




   }*/
        for (int i = 0; i < 5; i++)
        {
                if (i== 0)
                {
                        std::cout<<std::endl<<"döngü: "<< i<< std::endl;
                }
                else
                {
                        std::cout<<"döngü: "<< i<< std::endl;
                }
                
                ;
        }
        
}

