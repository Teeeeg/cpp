#include<iostream>

int main(){
    int num = 999;

    int* p_num = &num;

    std::cout << "Value of num: " << *p_num << std::endl;
    std::cout << "Address of num: " << p_num << std::endl;

    *p_num = 1000;
    std::cout << "New value of num: " << num << std::endl;
    std::cout << "Address of num after change: " << p_num << std::endl;
}