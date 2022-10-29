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

/* #include<iostream>
#include<string.h>
using namespace std;
int main(){
    int arr[50];
    memset(arr , 0,sizeof(arr));
    return 0;
}
 */
/* #include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cout << endl;
    cin >> ch;
    cout << "hello there" << endl;
    cout << "Thank you for the " << ch << " character." << endl;
    cout.put(ch);
    return 0;
} */


//模拟一个登录格式
/* #include<iostream>
#include<windows.h>
using namespace std;
int main(){
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:______\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "....\n";
    Sleep(1000);
    cout << "\aCode verified! Proceed with Plan z3!\n";
    return 0;
} */


//除法分支
/* #include<iostream>
using namespace std;

int main(){
    cout.setf(ios_base::fixed, ios_base::floatfield);
    //C++中通过cout来实现格式输出，就类似于C语言中通过printf()来实现格式输出。
    //cout.setf()的作用是通过设置格式标志来控制输出形式，其中ios_base::fixed表示：用正常的记数方法显示浮点数(与科学计数法相对应)；
    //ios_base::floatfield表示小数点后保留6位小数。
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9 / 5.0 = " << 9 / 5.0 << endl;
    cout << "double constants: 1e7 / 9.0 = " << 1.e7 / 9.0 << endl;
    cout << "float constants: 1e7f / 9.0f = " << 1.e7f / 9.0f << endl;
    /*Integer division: 9/5 = 1
    Floating-point division: 9.0 / 5.0 = 1.800000
    Mixed division: 9 / 5.0 = 1.800000
    double constants: 1e7 / 9.0 = 1111111.111111
    float constants: 1e7f / 9.0f = 1111111.125000 */
   // return 0;
//} */

//强制类型转换
//int hliex;
//(float)hliex;
//float(hliex);

/* #include<iostream>
using namespace std;
int main(){
    auto n = 100;//int
    auto m = 10.0;//double
    auto x = 1.3e13L;//long double
    cout << endl << n << endl;
    return 0;
} */

//字符串输入
/* #include<cstring>
#include<iostream>
using namespace std;
int main(){
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];
    cout << "Enter your name :\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some dilicious " << dessert;
    cout << "for you, " << name << ".\n";
    return 0;
} */


//<string.h>
//面向行的输入 getline()
//cin.getline(数组的名称,读取的字符数)
/* #include<iostream>
using namespace std;
int main(){
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];
    cout << "Enter your name :\n";
    cin.getline(name,Arsize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,Arsize);
    cout << "I have some dilicious " << dessert;
    cout << "for you, " << name << ".\n";
    return 0;
} */



//string类
//简介
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    char charr1[20];
    char charr2[20] = "jaquar";
    string str1;
    string str2 = "panther";
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some feline: \n";
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;
    return 0;
} */


//string类
//字符串初始化
//赋值、拼接、附加
/* #include<iostream>
using namespace std;;
int main(){
    string s1 = "penguin";
    string s2, s3;
    cout << "You can assign one string object to another: s2 = s1 \n";
    s2 = s1;
    cout << "s1: " << s1 << " , s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2" << endl;
    s3 = s1 + s2;
    cout << "s1 += s2 yields string: s3 = s1 + s2\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += "for a day";
    cout << "s2 += \" for a day \" yields s2 = " << s2 << endl;

    return 0;
}
 */

//string类的其他操作
/* #include<iostream>
#include<cstring>
using namespace std;
int main(){
    char charr1[20];
    char charr2[20] = "jaquar";
    string str1;
    string str2 = "panther";
    str1 = str2;
    strcpy(charr1,charr2);


    str1 += " paste";
    strcat(charr1," jucice");
    
    int len1 = str1.size();
    int len2 = strlen(charr1);
    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    return 0;
}
 */

// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;
// int main(){
//     char charr[20];
//     string str;
//     cout << "Length of string in charr before input: " << strlen(charr) << endl;
//     cout << "Length of string in str before input: " << str.size() << endl;
//     cout << "Enter a line of text: \n";
//     cin.getline(charr, 20);
//     cout << "Your entered: " << charr << endl;
//     cout << "Enter another line of text:\n";
//     getline(cin, str);
//     cout << "Enter another line of text: \n";

//     cout << "You entered: " << str << endl;
//     cout << "Length of string in charr after input: " << strlen(charr) << endl;
//     cout << "Length of strng in str after input" << str.size() << endl;
//     return 0;
// }

//补充，链表
// #include<stdio.h>
// #include<stdlib.h>//molloc()
// #include<string.h>
// const int  TSIZE = 45;
// struct film {
//     char title[TSIZE];
//     int rating;
//     struct film * next;

// };
// char * s_gets(char *st,int n );
// int main(){
//     struct film * head = NULL;
//     struct film * prev , * current;
//     char input[TSIZE];
//     puts("Enter first movive title:");
//     while (s_gets(input,TSIZE) != NULL && input[0] != '\0'){
//         current = (struct film *) malloc(sizeof(struct film));
//         if(head == NULL)   head = current; //第一个结构
//         else { //后续结构
//             prev -> next = current;
//             current -> next = NULL;
//             strcpy(current -> title, input);
//             puts("Enter your rating <0-10>:");
//             scanf("%d", &current -> rating);
//             while (getchar() != '\n');
//             continue;
//             puts("Enter next movie title (empty line to stop):");
//             prev = current;


//         }
//     }
//     //显示电影列表
//     if(head == NULL) printf("No data entered. ");
//     else{
//         printf("Here is the movie list:\n");
//         current = head;
//         while (current != NULL){
//             printf("Movie: %s Rating %d\n",current -> title, current ->rating);
//             current = current -> next;

//         }
        
//     }
//     //完成任务，释放内存
//     current = head;
//     while(current != NULL){
//         current = head;
//         head = current -> next;
//         free(current);
//         current = NULL;
//     }
//     printf("Bye!\n");


//     return 0;
// }
// char * s_gets(char * st,int n){

//     char * ret_val;
//     char * find;
//     ret_val = fgets(st ,n, stdin);
//     if(ret_val){
//         find = strchr(st,'\n');
//         if(find) *find = '\0';
//         else {
//             while(getchar() != '\n')
//             continue;
//         }
//         return ret_val;

//     }
// }
//时间换算
/* #include<stdio.h>
int main(){
	int t = 0;
	scanf("%d",&t);
	int h = t / 60 / 60;
	int m = t /60 % 60;
	int s = t % 60;
	printf("%d:%02d:%02d",h,m,s);
	return 0;
} */

//元素逆序
// #include<iostream>
// #include<string.h>
// using namespace std;
// const int SIZE = 100;
// int main(){
//     int count , n;
//     cin >> count;
//     int arr[SIZE];
//     memset(arr,0,SIZE);
//     for(int i = 0;i < count;i++){
//         cin >> n;
//         arr[i] = n;
//     }
//     int start = 0;
//     int end = count - 1;
//     while(start < end){
//         arr[start] += arr[end];
//         arr[end] = arr[start] - arr[end];
//         arr[start] -= arr[end];
//         start ++;
//         end --;
//     }
//     for(int j = 0; j < count; j++){
//         printf("arr[%d] = %d\n",j,arr[j]);
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int n, ans;
// void walk(int k) {
//     if(k == n) ans ++;
//     else if(k < n){
//         walk(k + 1);
//         walk(k + 2);
//     }
// }
// int main(){
//     cin >> n;
//     walk(0);
//     cout << ans << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int n, m;
// int ans;
// void walk(int x, int y){
//     if(x == n && y == m) ans ++;
//     else{
//         if(y < m) walk(x , y + 1);
//         if(x < n) walk(x + 1 , y);
//     }
// }
// int main(){
//     cin >> n >> m;
//     walk(0 , 0);
//     cout << ans << endl;
//     return 0;
// }