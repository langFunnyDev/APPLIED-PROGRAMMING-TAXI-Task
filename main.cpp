#include <iostream>
#include <map>

std::map<int, int> distance;
std::map<int, int> cost;
std::map<int, int> answer;

int arr[1000][2] = {};

int N;

template <typename A, typename B>
std::multimap<B, A> flip_map(std::map<A,B> & src) {

    std::multimap<B,A> dst;

    for(typename std::map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
        dst.insert(std::pair<B, A>(it -> second, it -> first));

    return dst;
}

int main() {
    std::cout << "Enter the number of employees: ";
    std::cin >> N;

    for (int i = 0; i < N; i++){
        std::cin >> distance[i];
    }

    for (int i = 0; i < N; i++){
        std::cin >> cost[i];
    }

    std::multimap<int, int> distanceSorted = flip_map(distance);
    std::multimap<int, int> costSorted = flip_map(cost);

    int i = 0;
    for(auto it = distanceSorted.rbegin(); it != distanceSorted.rend(); ++it){
        arr[i][0] = it->second;
        i++;
    }

    int i1 = 0;
    for(const auto & it : costSorted) {
        arr[i1][1] = it.second;
        i1++;
    }

    for (int i = 0; i < N; i++){
        answer[arr[i][0]] = arr[i][1];
    }

    for (const auto & item : answer) {
        std::cout << item.second + 1 << " ";
    }

    return 0;
}
