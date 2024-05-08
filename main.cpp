#include <iostream>
using namespace std;

void fib(int n) { //Функция вычисления чисел Фибоначчи
    int a = 0;
    int b = 1;
    
    if (n <= 0) {
        return;
    }
    
    cout << "Первые " << n << " чисел Фибоначчи:\n";
    
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    setlocale (LC_ALL,"RUS"); //Испоьзование русской клавиатуры
    int n;
    cout << "Введите количество чисел Фибоначчи для вычисления: ";
    cin >> n;
    
    fib(n); //Вызов функции
    
    return 0; //Завершение работы функции
}

