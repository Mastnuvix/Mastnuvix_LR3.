#include <limits>
#include <cmath>
#include <algorithm>
using namespace std;
float x = 0;
float y = 0;
float razn = x - y;
void raznost(){
//задание 1 ввести вещественное число х
cout << "ввести вещественное число х" << endl;
cin >> x;  
cout << "Результат задания 1:" << endl;
}
void razn(){
//задание 2 ввести вещественное число y
cout << "ввести вещественное число y" << endl;
cin >> y;  
cout << "Результат задания 2:" << endl;
}
void zad(){
//задание 3 найти целую часть разности этих 2-х чисел
int trash = static_cast<int>(razn)
cout << trash << endl;
cout << "Результат задания 3:" << endl;
}
void zadan(){
//задание 4 найти дробную часть разности этих 2-ч чисел
double rulka = razn - trash;
cout << rulka << endl;
cout << "Результат задания 4:" << endl;
}   
}
int main()
{
setlocale(LC_ALL,"rus");
return 0;
}