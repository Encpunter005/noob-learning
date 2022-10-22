//#include<stdio.h>
/* int main(){
    int m = 0;//主角的初始攻击
    int a = 0;//怪物的攻击力
    double p = 0.01;
    int i = 0;//怪的数量
    scanf("%d%d%d%lf",&i ,&m ,&a , &p);
    for(int i = 0 ; ; i++){
        a++;

    }
    return 0;
} */
/* #include<iostream>
using namespace std;
void first();
void second();
int main(){
    first();
    first();
    second();
    second();
    return 0; 
}
void first(){
    cout << "Three blind miece" << endl;
}
void second(){
    cout << "See how they run" << endl;
} */
/* #include<iostream>
using namespace std;
int main(){
    cout << "Enter your age: ";
    int age = 0;
    cin >> age;
    cout << "Your age in months is " << age * 12 << endl;
    return 0;
} */
/* #include<iostream>
using namespace std;
int main(){
    cout << "Please enter a Celsius value: ";
    double temp;
    cin >> temp;
    cout << endl;
    cout << temp << "degrees Celsius is " << (temp * 1.8) + 32 << " degrees Fahrenheit." << endl;
    return 0;
} */
/* #include<iostream>
using namespace std;
void test();
int main(){
    test();
    return 0;
}
void test(){
    cout << "Enter the number of light years: " << endl;
    double length;
    cin >> length;
    cout << length << "light years = " << length * 63240 << " astronomical units" << endl;
} */
/* #include<iostream>
using namespace std;
void clockl(int h , int m);
int main(){
    int  h, m;
    clockl(h , m);
    return 0;
}
void clockl(int h ,int m){
    cout << "Enter the number of hours: " ;
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    cout << "Time: " << h << " : " << m << endl;
} */

/* //climits定义了各种限制的符号名称
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_long_long = LLONG_MAX;
//计算变量类型的长度
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_long_long) << " bytes." << endl;
    cout << endl;
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long_long: " << n_long_long << endl << endl;
    cout << "Minimum int value =  " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    
    return 0;
} */

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int arr[50];
    memset(arr , 0,sizeof(arr));
    return 0;
}
