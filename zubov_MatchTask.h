#ifndef _zubov_MATHTASK_H_
#define _zubov_MATHTASK_H_

#include <cstring>
using namespace std;

 //проверка корректности вводимых данных 8 
 bool UserInput(string input) { 
    9 //если строка пустая - ввод некорректен 10 
    if (input.empty()) return false;
//попытаться 
try {
//преобразование введенного значения в тип 
int number = stoi(input);
}
catch (…) //если возникла ошибка в блоке try
 { return false; } 
 return true;
 }
//вычисление площади прямоугольника 22 
int CalcRectangleArea(int NumberA, int NumberB) {
return NumberA * NumberB ;
}
#endif