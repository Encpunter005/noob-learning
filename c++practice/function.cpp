// #include<iostream>
// using namespace std;
// void simple();
// int main(){
//     cout << "main() will call the simple() function" << endl;
//     simple();
//     cout << "main() is finished with the simple() function" << endl;
//     return 0;
// }
// void simple(){

//     cout << " It's me. " << endl; 
// }

//简单的函数调用
// #include<cstdio>
// double add(double a , double b){
//     return a + b;
// }
// int main(){
//     double a ,b;
//     scanf("%lf%lf",&a , &b);
//     printf("%.2lf\n",add(a , b));
// }

//绝对值
// #include<iostream>
// using namespace std;
// int abs();
// int main(){
//     int a;
//     cin >> a;
//     cout << abs( a );
//     return 0;
// }
// int abs(int a){
//     if(a < 0) return -a;
//     return a;
// }

//区间求和
// #include<iostream>
// using namespace std;
// int sum(int a , int b){
//     int i  = a + 1;
//     while(i <= b){
//         a += i;
//         i++;
//     }
//     return a;
// }
// int main(){
//     int a , b;
//     cin >> a >> b;
//     cout << sum(a , b);
//     return 0;
// }

//809 求最大公约数
// #include<iostream>
// using namespace std;
// int lcm(int a , int b)
// {
//     for(int i = 1; i <= a * b; i++){//0被任何数取模都为0
//         if(i % a == 0 && i % b == 0) return i;
//     }
// }

// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << lcm(a , b) << endl;
//     return 0;
// }

//814复制数组

//void *memcpy(void *str1, const void *str2, size_t n)
//str2 要被复制的字符串
//str1 要被放入的字符串
//size_t n 长度，多少个字节
//#include<iostream>
// #include<cstring>
// using namespace std;
// const int N = 110;
// void copy(int a[], int b[], int size){  
//     // for(int i = 0; i < size ; i ++){
//     //     b[i] = a[i];
//     memcpy(b , a , size * 4);
//     //}
// }
// int main(){
//     int a[N], b[N];
//     int n , m ,size;
//     cin >> n >> m >> size;
//     for(int i = 0; i < n ; i++) cin >> a[i];
//     for(int i = 0; i < m; i ++) cin >> b[i];

//     copy(a , b , size);
//     for(int i = 0 ; i < m ; i++) cout << b[i] << " ";
//     cout << endl;
//     return 0;
// }


//815 打印字符串
// #include<iostream>
// #include<stdio.h>
// const int N = 110;
// using namespace std;
// void print(char str[]){
//     printf("%s",str);
// }
// int main(){
//     char str[N];
//     //fgets(str, 101 , stdin);
//     cin.getline(str, 101);
//     printf(str);
//     return 0;
// }
//816
//交换数组
// #include<iostream>
// using namespace std;
// void reverse(int a[],int size){
//     for(int i = 0, j = size - 1 ; i < j ; i ++, j --)  swap(a[i] , a[j]);
// }
// int main(){
//     int n,size;
//     int a[10010];
//     cin  >> n >> size;
//     for(int i = 0; i < n; i ++) cin >> a[i];
//     reverse(a , size);
//     for(int i = 0; i < n ; i ++) cout << a[i] << " ";
//     return 0; 
// }


//817 数组去重
// #include<iostream>
// using namespace std;
// int get_unique_count(int a[], int n){
//     int count = 0;
//         for(int i = 0; i < n ; i ++){
//         bool is_existed = false;
//         for(int j = 0; j < i ; j ++){
//             if(a[i] == a[j]){
//                 is_existed = true;
//                 break;
//             }
//         }
//         if(!is_existed) count ++;
//     }
//     return count;
// }
// int main(){
//     int a[1010];
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i ++) cin >> a[i];
//     cout << get_unique_count(a , n) << endl;

//     return 0;
// }

//818数组排序
//第一次循环确定最小值
//#include<iostream>
// using namespace std;
// const int MAX = 1000;
// void sort(int arr[], int l, int r){
//     for(int i = l; i <= r; i++){
//         for(int j = i + 1; j <= r; j++){
//             if(arr[j] < arr[i]) swap(arr[i] , arr[j]);
//         }
//     }
// }
// int main(){
//     int arr[MAX];
//     int n , l , r;
//     cin >> n >> l >> r;
//     for(int i = 0; i < n ; i ++) cin >> arr[i];
//     sort(arr , l , r);
//     for(int i = 0; i < n ; i++) cout << arr[i] << " ";
//     return 0;
// }

//821 走方格（递归搜索树）
// #include<iostream>
// using namespace std;
// int n ,ans;
// void f(int k){
//     if(k == n) ans ++;
//     else if(k < n){
//         f(k + 1);
//         f(k + 2);
//     }
    
// }
// int main(){
//     cin >> n;
//     f(0);
//     cout << ans << endl;
//     return 0;
// }

//820斐波那契数列
// #include<iostream>
// using namespace std;
// int cacluation(int n)
// {
//     if(n <= 2) return 1;
//     else return cacluation(n - 1 ) + cacluation(n - 2);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout <<  cacluation(n) << endl;
//     return 0;
// }

//822走格子2.0 
// #include<iostream>
// using namespace std;
// int ans;
// int n,m;
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


//823 排列
#include<iostream>
using namespace std;
const int N = 10;
int n;
void dfs(int u , int nums[], bool status[]){
    if(u > n ){
        for(int i = 1 ; i <= n; i ++)  printf("%d ",nums[i]);
        printf("\n");   
    }
    else{
        for(int i = 1; i <= n ; i++){
            if(!status[i]){
                status[i] = true;
                nums[u] = i;
                dfs(u + 1, nums, status);
                status[i] = false;//恢复现场
            }
        }
    }
}
int main(){
    scanf("%d", &n);
    int nums[N];
    bool status[N] = {0};
    dfs(1 , nums , status);
    return 0;
}


