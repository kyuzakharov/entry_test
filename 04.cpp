#include <iostream>
using namespace std;

int main(){
    int pr, step, num;
    std::cout << "Введите f: " << std::endl;
    std::cin >> pr;
    std::cout << "Введите шаг: " << std::endl;
    std::cin >> step;
     std::cout << "Введите число n: " << std::endl;
    std::cin >> num;
    
    if ((num-pr)%step == 0) {
        cout << num << " Является членом арифметической прогрессии с первым членом " << pr <<" и шагом" <<step<< endl;
    } else{
        cout << num << " не является членом арифметической прогрессии с первым членом " << pr <<" и шагом" <<step<< endl;
    }
    return 0;
}
