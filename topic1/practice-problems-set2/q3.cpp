#include<iostream>

int A = 8; 
int B = 24; 
int C = 10; 
int RES;
int main(){
    RES = A/3*3+B%C*C;
    std::cout << RES; 
    RES = B%C;
    std::cout << RES;     
}

