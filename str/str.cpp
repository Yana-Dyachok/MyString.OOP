/*Реалізуйте методи для створеного класу MyString(Рядка):
1. count(а) - кількість зустрічі символа а в рядку           4. remove(a) - видаляє заданий символ в рядку
2. countstr(a) - кількість зустрічі підрядка а в рядку       5. insert(a, b) - вставка літери b на a-тий індекс
3. replace(a,b) - заміна всіх a на b                         6. empty() - повертає true, якщо рядок пустий
7. size - повертає довжину рядка
Перегрузіть оператор [] для створеного класу MyString(Рядка)
Перегрузіть оператор + для створеного класу MyString(Рядка).*/
#include <iostream>
#include "string.h"
#include "string"
using namespace std;
int main()
{
	MyString A("Never give up");
	MyString B(" is such a wonderful life");
	MyString C = A + B; cout << "Overloading operator +:  " << '"' << C << '"' << endl;//Перегрузіть оператор + для створеного класу MyString(Рядка)
	cout << "The symbol you selected is in the line  " << C.count('e') << " times" << endl;//метод визначає count(а) - кількість зустрічі символа а в рядку
	cout << "The substring you selected is in the line  " << C.countStr("er") << " times" << endl;//метод визначає countstr(a) - кількість зустрічі підрядка а в рядку 
	cout << "Replace symbol instead another symbol "; C.replace('e', 'a'); cout << '"' << C << '"' << endl;// replace(a,b) - заміна всіх a на b   
	cout << "Remove some symbol in the string "; C.remove('a');//метод remove(a) - видаляє заданий символ в рядку
	cout << "Insert symbol in some index "; C.insert(1, 'w'); cout << '"' << C << '"' << endl;//insert(a, b) - вставка літери b на a-тий індекс
	cout << "String is empty- true or false: " << C.empty() << endl;//метод empty() - повертає true, якщо рядок пустий
	cout << "Size of string = " << C.Size() << endl;//метод size - повертає довжину рядка
	cout << "Overloading operator [], some symbol is  " << '"' << C[4] << '"' << endl;//Перегрузіть оператор [] для створеного класу MyString(Рядка)
}