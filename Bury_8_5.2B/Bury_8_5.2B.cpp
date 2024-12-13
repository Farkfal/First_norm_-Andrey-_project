#include "Functions.h"
#include <iostream>

int main(){

    setlocale(LC_ALL, "ru");
    
    while (true) {

        system("cls");


        int n, fill_choise, type_choise, sort_choise;

        std::cout << "введите кол-во элементов массива: ";
        std::cin >> n;
        if (std::cin.fail()) {
            system("cls");
            std::cout << "Неверный ввод.\n";
            return 0;
        }

        std::cout << "введите способ заполнения (1-случайный, 2-возрастание, 3-убывание, остальные-случайные): ";
        std::cin >> fill_choise;
        if (std::cin.fail()) {
            system("cls");
            std::cout << "Неверный ввод.\n";
            return 0;
        }

        std::cout << "введите тип элементов массива (1-int, 2-char, 3-double, 4-float, остальные-int): ";
        std::cin >> type_choise;
        if (std::cin.fail()) {
            system("cls");
            std::cout << "Неверный ввод.\n";
            return 0;
        }

        std::cout << "введите тип сортировки (1-вставкой, 2-обменом, остальные-вставкой): ";
        std::cin >> sort_choise;
        if (std::cin.fail()) {
            system("cls");
            std::cout << "Неверный ввод.\n";
            return 0;
        }


        switch (type_choise) {
        default:
        case 1: choise(n, fill_choise, sort_choise, new int[n]); break;
        case 2: choise(n, fill_choise, sort_choise, new char[n]); break;
        case 3: choise(n, fill_choise, sort_choise, new double[n]); break;
        case 4: choise(n, fill_choise, sort_choise, new float[n]); break;
        }

        std::cin.get();
        std::cout << "\nвведите enter для продолжения";
        std::cin.get();
    }
    
}