#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


/*
 * Compilado para Linux
 *
 * helloParOuImpar: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=976b718e5e90b2b68ee79555fe8dae45085c3f5e, for GNU/Linux 3.2.0, not stripped

*/

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
           // Se for PAR imprime Hello,
           std::cout << "Hello, " << i << " == número é PAR..!" << std::endl;
           doisSegundos();
       } else {
           // Se for ÍMPAR imprime World!
           std::cout << "World! " << i << " != número é ÍMPAR!" << std::endl;
           doisSegundos();
       }
   }
    return 0;
}
