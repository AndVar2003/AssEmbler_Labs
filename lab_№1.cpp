﻿// lab_№1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count;
    cin >> n;
    _asm
    {
        mov eax, n 
        mov esi, 2
        xor ebx, ebx
        jmp metka
    metka_1:
        inc ebx
    metka:
        cmp eax, 0
        je pr_end
        cdq
        idiv esi
        cmp edx, 1
        je metka_1
        jmp metka
    pr_end:
        mov count, ebx
    }
    if (count % 2 == 0)
        cout << "even number of 1's";
    else
        cout << "odd number of 1's";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
