#include <iostream>
#include <vector>

int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}
double getAverage(const std::vector<int>& vec) {
    if (vec.empty()) {
        return 0.0;   
    }

    int sum = getSum(vec);
    return static_cast<double>(sum) / vec.size();
}
int getMin(const std::vector<int>& vec) {
    if (vec.empty()) {
        throw -1;
    }

    int min = vec[0];
    for (int num : vec) {
        if (num < min) {
            min = num;
        }
    }
    return min;
}
int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(numbers);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Averaege " << getAverage(numbers) << std::endl;
    std::cout << "Min " << getMin(numbers) << std::endl;
    return 0;
}