//Nguon tham khao: https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html

#include <iostream>
using namespace std;
int fib(int n){
if(n <= 2) 
return 1; 
return fib(n - 1) + fib(n - 2);
} 
