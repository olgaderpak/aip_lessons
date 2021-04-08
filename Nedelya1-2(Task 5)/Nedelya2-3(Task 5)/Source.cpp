// Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
 //Время (неделя, час, сутки) 
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int week, hourday, day, transfer, hour;
    
    std::cout << "Введите цифру операции , которую нужно выполнить :\n" << "1.Неделя - день - час\n" <<  "2.День - неделя - час\n" << "3.Час - неделя - день\n";
    std::cin >> transfer;

    switch (transfer) {
        setlocale(LC_ALL, "Russian");

    case 1:
        std::cout << "Введите количество недель: " ;
        std::cin >> week;
        day = week * 7;
        std::cout << "Дни:  ";
        std::cout << day;
        hour = week * 168;
        std::cout << " Часы: ";
        std::cout << hour;
        break;

    case 2:
        std::cout << "Введите количество дней: ";
        std::cin >> day;
        week = day / 7;
        std::cout << "Недели: ";
        std::cout << week;
        hour = day * 24;
        std::cout << " Часы: ";
        std::cout << hour;
        break;
    case 3:
        std::cout << "Введите количество часов: ";
        std::cin >> hour;
        week = hour / 168;
        std::cout << "Недели: ";
        std::cout << week;
        day = hour / 24;
        std::cout << " Дни: ";
        std::cout << day;
        break;
    default:
        std::cout << " Ёк МаКаРеК ЕРОР ОшИбКа ОшИбКа ОшИбКа, введите от 1 до 3! ";
    }
    std::getchar();
    std::getchar();

    return 0;
}
