//Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3.
#include <iostream>

int main()
{
    int a, b, c;

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите три целых числа a, b, c : ";
    std:: cin >> a >> b >> c;
    if ((a > b) && (a > c) && (b < c)) {
        a = a * 5;
        b = b - 3;
        std::cout << a << " ";
        std::cout << b ;
    }
    if ((a > b) && (a > c) && (c < b)) {
        a = a * 5;
        c = c - 3;
        std::cout << a<<" ";
        std::cout << c ;
    }
    if ((b > a) && (b > c) && (a < c)) {
        b = b * 5;
        a = a - 3;
        std::cout << b<< " ";
        std::cout << a ;
    }
    if ((b > a) && (b > c) && (c < a)) {
        b = b * 5;
        c = c - 3;
        std::cout << a<<" ";
        std::cout << c ;
    }
    if ((c > a) && (c > b) && (a < b)) {
        c = c * 5;
        a = a - 3;
        std::cout << c<< " ";
        std::cout << a ;
    }
    if ((c > a) && (c > b) && (b < a)) {
        c = c * 5;
        b = b - 3;
        std::cout << c <<" ";
        std::cout << b ;
    }

    return 0;
}
