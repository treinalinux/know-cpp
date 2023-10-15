#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


// Espera dois segundos ;)
void doisSegundos(){
    std::this_thread::sleep_for( std::chrono::seconds(2) );
}


int main()
{
   int count = 9;

   for (int i = 0; i <= count; ++ i) {
       if (i%2==0)
       {
           std::cout << "Hello, " << i << " == número é PAR..!" << std::endl;
           doisSegundos();
       } else {
           std::cout << "World! " << i << " != número é ÍMPAR!" << std::endl;
           doisSegundos();
       }
   }
    return 0;
}
