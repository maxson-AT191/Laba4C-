

#include <cstring>
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void task1()
{
    char source[] = "123dfd";
    int sum = 0;

    for (int i = 0; i < strlen(source); ++i)
        sum += source[i];

    cout << "Sum = " << sum << std::endl;

    
}
void task2() {
    setlocale(LC_ALL, "rus");
    char alphabet[34] = { 0 };
    char letter; 
    int index = 0; 
    for (letter = 'А'; letter <= 'Я'; letter++) {
        if ('Ж' == letter) {
            alphabet[index++] = 'Ё';
        }
        alphabet[index] = letter;
        index++;
        
    }
    cout << "Буквы:  " << alphabet << endl<<endl;
}

void task3() {
    setlocale(LC_ALL, "rus");
    cout << "Третий уровень в другом файле";
    
    
    

    

    


}
int main() {
    task1();
    task2();
    task3();
}
