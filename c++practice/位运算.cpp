//位运算符     
//与  &   and
//或  |   or
//取反 ~  NOT
//异或 ^ 0 ^ 0 = 0  0 ^ 1 = 1 1 ^ 0 = 1 1 ^ 1 = 0   XOR
//
// 左移 >>  a >> k == a / 2 ^ k
// 右移 >>  a << k == a * 2 ^ k
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 3;
//     int b = 6;
//     cout << (a ^ b) ;
//     cout << endl;
//     return 0;
// }

//a = 110110 -> (a >> 2) 1101 & 1 -> 1
//a >> 2 & 1 = 1
//如果要去上a的第k位数字
//a >> k & 1

#include<iostream>
using namespace std;
int main(){
    int a = 13;
    cout << (a >> 2 & 1) << endl;
    return 0;
}