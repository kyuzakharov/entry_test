#include <iostream>
using namespace std;

int main(){
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;
    
    int a = n/100;
    int b = (n/10)%10;
    
    int x = a * 100 + b *10+a; 
    std::cout<< "Число x: "<< x << std::endl;
    return 0;
}
