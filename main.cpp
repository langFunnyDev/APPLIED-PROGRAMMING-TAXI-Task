#include <iostream>
#include <map>

std::map<int, int> distance; // Ассоциативный автоматически сортируемый динамический массив для данных о растояниях до домов сотрудников
std::map<int, int> cost;     // Ассоциативный автоматически сортируемый динамический массив для данных о стоимости за километр пути
std::map<int, int> answer;   // Ассоциативный автоматически сортируемый динамический массив для вывода ответа

int arr[1000][2] = {};       // Промежуточный массив

int N;

template <typename A, typename B> // Структура выполняющая обмен местами ключа и значения в ассоциативном массиве
std::multimap<B, A> flip_map(std::map<A,B> & src) {

    std::multimap<B,A> dst;

    for(typename std::map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
        dst.insert(std::pair<B, A>(it -> second, it -> first));

    return dst;
}

int main() {
    std::cout << "Enter the number of employees: ";
    std::cin >> N; // ввод числа сотрудников

    for (int i = 0; i < N; i++){
        std::cin >> distance[i]; // Заполнение ассоциативного массива данными о растоянии до домов сотрудников
    }

    for (int i = 0; i < N; i++){
        std::cin >> cost[i];  // Заполнение ассоциативного массива данными о стоимости за километр
    }

    std::multimap<int, int> distanceSorted = flip_map(distance); // Разворот и пересортировка ассоциативного массива
    std::multimap<int, int> costSorted = flip_map(cost);

    int i = 0;
    for(auto it = distanceSorted.rbegin(); it != distanceSorted.rend(); ++it){ // составление решения задачи, заполнение промежуточного массива в обратном порядке дистанциями
        arr[i][0] = it->second;
        i++;
    }

    int i1 = 0;
    for(const auto & it : costSorted) { // составление решения задачи, заполнение промежуточного массива в прямом порядке стоимостью
        arr[i1][1] = it.second;
        i1++;
    }

    for (int i = 0; i < N; i++){ // автосортировка результирующего набора
        answer[arr[i][0]] = arr[i][1];
    }

    for (const auto & item : answer) { // вывод решения
        std::cout << item.second + 1 << " ";
    }

    // Защита от некоректного ввода реализованна строгой типизацией ожидаемых данных

    return 0;
}
