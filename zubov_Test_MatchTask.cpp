#include "CUTE/cute/cute.h" 
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
//подключение модуля с тестируемыми методами
#include "zubov_MatchTask.h"
using namespace cute;
void testCalcRectangleArea() {
// входные значения
int a = 3;
int b = 5;
//ожидаемый результат
int expected = 15;
// получение значения с помощью тестируемого метода
int actual = CalcRectangleArea(a, b);
// сравнение ожидаемого результата с полученным 

ASSERT_EQUAL(expected, actual);
}
// Тест, проверяющий отсев пустых значений
void testUserInput_Empty() {
    // Исходные данные
    string str = ""; // Пустая строка

    // Ожидаемое значение результата работы функции UserInput
    bool expected = false;

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}
// Тест, проверяющий отсев нецифровых символов
void testUserInput_Letter() {
    // Исходные данные
    string str = "a"; // Строка с нецифровым символом

    // Ожидаемое значение результата работы функции UserInput
    bool expected = false;

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}
// Тест, проверяющий отсев отрицательных значений
void testUserInput_NegativeValue() {
    // Исходные данные
    string str = "-5"; // Строка с отрицательным значением

    // Ожидаемое значение результата работы функции UserInput
    bool expected = false;

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}
int main(){
/**/ // Создаем тестовый набор 
suite s;
// Добавляем тестовую функцию в набор
s.push_back(CUTE(testCalcRectangleArea));
s.push_back(CUTE(testUserInput_Empty)); // Добавляем тест для пустых значений
s.push_back(CUTE(testUserInput_Letter)); // Тест для нецифровых символов
s.push_back(CUTE(testUserInput_NegativeValue)); // Тест для отрицательных значений
// Создаем listener и runner
ide_listener<> listener;
makeRunner(listener)(s, "all Rectangle Tests");
return 0;
}