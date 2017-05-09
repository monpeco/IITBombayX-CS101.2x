#include<iostream>

int a, b, c, d, e; 

int main(){
    a = 10 % 5; 
    std::cout<<a;
    b = 8/4*7; 
    c = a+b/2; 
    d = b++; 
    ++a; 
    e = a + b + c + d++; 
    std::cout<<e;    
}

