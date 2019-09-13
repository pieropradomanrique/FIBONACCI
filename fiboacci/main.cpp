#include <iostream>

using namespace std;


int fibonacci(int num)
{
    int fib1,fib2,i;
   while(num<=1);
   cout << endl;
    cout << "Los " << num << " numeros de la serie de Fibonacci son:" << endl;
   fib1=1;
   fib2=1;
   cout << fib1 <<'\t';
   for(i=2;i<=num;i++)
   {
       cout << fib2 <<'\t';
       fib2 = fib1 + fib2;
       fib1 = fib2 - fib1;
   }
    return false;
}

int main(){
 int a;
 cout << "inserte su valor mayor que 1: ";
 cin >> a;
 fibonacci(a);}
