#include <iostream>
using namespace std;

int main()
{
    // первые 5 чисел Фибоначчи 
    double f1 = 0.0; // первое число = 0
    double f2 = 1.0; // второе число = 1
    double f3 = f1+f2; // 3 число = сумме двух предыдущих
    double f4 = f2+f3; //4 число = сумме двух предыдущих
    double f5 = f3+f4; //5 число = сумме двух предыдущих


    //вывод  чисел в терминал
    cout<< "Fibonacchi number 1  "<< f1 << endl;
    cout<< "Fibonacchi number 2  "<< f2<< endl;
    cout<< "Fibonacchi number 3  "<< f3 << endl;
    cout<< "Fibonacchi number 4  "<< f4 << endl;
    cout<< "Fibonacchi number 5  " << f5 << endl;
   
    
}