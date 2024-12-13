#pragma once
#include <iostream>
#include <ctime>

/// <summary>
/// эта функция заполняет массив рандомно
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillrand(int mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = rand() % 100;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив рандомно
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillrand(char mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = char(rand() % 26 + 'a');
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив рандомно
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillrand(double mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = rand() % 1000 / 10.0;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив рандомно
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillrand(float mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = rand() % 1000 / 10.0;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}

/// <summary>
/// эта функция заполняет массив по возрастанию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillup(int mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = i;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив по возрастанию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillup(char mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = (char) i + 'a';
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив по возрастанию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillup(double mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = i/10.0;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив по возрастанию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void fillup(float mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = i/10.0;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}

/// <summary>
/// эта функция заполняет массив по убыванию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void filldown(int mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = n - 1 - i;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив по убыванию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void filldown(char mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] =(char) n - 1 - i +'a';
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив по убыванию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void filldown(double mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = (n - 1 - i) / 10.0;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}
/// <summary>
/// эта функция заполняет массив по убыванию
/// </summary>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
void filldown(float mas[], int n){

    for (int i = 0; i < n; i++){
        mas[i] = (n - 1 - i) / 10.0;
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}


/// <summary>
/// эта функция сортирует массив вставкой
/// </summary>
/// <typeparam name="T"> - любой стандартный тип</typeparam>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
/// <param name="count_ifs"> - счетчик сравнений</param>
/// <param name="count_swaps"> - счетчик перестоновок</param>
template<typename T>
void insertion_sort(T mas[], int n, int& count_ifs, int& count_swaps){

    count_ifs = 0;
    count_swaps = 0;

    for (int i = 1; i < n; i++){
        int j = i;
        while (j >= 1 && mas[j - 1] > mas[j]){
            count_ifs++;
            count_swaps++;

            T buf = mas[j];
            mas[j] = mas[j - 1];
            mas[j - 1] = buf;
            j--;
        }
    }
}


/// <summary>
/// эта функция сортирует массив обменом
/// </summary>
/// <typeparam name="T"> - любой стандартный тип</typeparam>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
/// <param name="count_ifs"> - счетчик сравнений</param>
/// <param name="count_swaps"> - счетчик перестоновок</param>
template<typename T>
void buble_sort(T mas[], int n,int& count_ifs, int& count_swaps) {
    
    count_ifs = 0;
    count_swaps = 0;

    for (int i = 0; i < n-1; i++) {
        int ind = i;
        for (int j = i + 1; j < n; j++) {
            count_ifs++;
            if (mas[j] < mas[ind]) {
                ind = j;
            }
        }
        
        count_swaps++;
        T buf = mas[i];
        mas[i] = mas[ind];
        mas[ind] = buf;
    }
}


/// <summary>
/// эта функция выводит массив
/// </summary>
/// <typeparam name="T"> - любой стандартный тип</typeparam>
/// <param name="mas"> - массив элементов</param>
/// <param name="n"> - количество элементов массива</param>
template<typename T>
void out(T mas[], int n){

    for (int i = 0; i < n; i++){
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
}


/// <summary>
/// эта функция реализует выбор способа заполнения, выбор способа сортировки, вывод массива
/// </summary>
/// <typeparam name="T"> - любой стандартный тип</typeparam>
/// <param name="n"> - количество элементов массива</param>
/// <param name="fill_choise"> - тип заполнения</param>
/// <param name="sort_choise"> - тип сортировки</param>
/// <param name="mas"> - массив элементов</param>
template<typename T>
void choise(int n, int fill_choise, int sort_choise, T mas[]){

    setlocale(LC_ALL, "ru");

    switch (fill_choise) {
    default:
    case 1:srand(time(NULL)); fillrand(mas, n); break;
    case 2:fillup(mas, n); break;
    case 3:filldown(mas, n); break;
    }

    int count_swaps = 0, count_ifs = 0;
    switch (sort_choise) {
    default:
    case 1:insertion_sort(mas, n,count_ifs,count_swaps); break;
    case 2:buble_sort(mas, n, count_ifs, count_swaps); break;
    }

    out(mas, n);
    std::cout << "кол-во перестоновок: " << count_swaps << "\t кол-во сравнений: " << count_ifs << '\n';
    delete[] mas;
}

