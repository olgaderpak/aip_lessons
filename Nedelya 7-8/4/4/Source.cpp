//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
//Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем (считываются с клавиатуры или из файла). 

#include <iostream>
#include <cmath>

int main(){

    setlocale(LC_ALL, "Russian");

    float n, m, sh;

    std::cout << "Введите шаг: " ;
    std::cin >> sh;
    std::cout << "Введите начало: " ;
    std::cin >> n;
    std::cout << "Введите конец: ";
    std::cin >> m;
   
    for (float i = n; i <= m; i = i + sh) {
        std::cout << i << " ";
    }

    return 0;
}