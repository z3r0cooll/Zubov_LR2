#include <iostream>
#include "zubov_MathTask.h"
using namespace std;
int main()
{
string str_input; //вспомогательная переменная
//ввод ширины прямоугольника
cout << "input height A" << end1;
//ввод значения в текстовом виде
getline(cin, str_input); //пока ввод некорректен (вводимое значение невозможно преобразовать в int) 
while (!UserInput(str_input)) {
cout << "input height a" << endl; //повторный ввод данных
getline(cin, str_input);
}
//присвоение переменной NumberA преобразованного в тип int
//правильно введенного текстового значения
int NumberA = stoi(str_input);
//ввод высоты прямоугольника
cout << "input weight B" << endl;
getline(cin, str_input);
while (! UserInput(str_input)) {
cout << "input weight B" << end1;
getline(cin, str_input);
}
//присвоение переменной NumberB преобразованного в тип int //правильно введенного текстового значения 
int NumberB = stoi(str_input);
//вычисление площади прямоугольника
int RectangleArea = CalcRectangleArea(NumberA, NumberB);
 //вывод значения площади
cout << "Area of Rectangle is " << RectangleArea << endl;
}