//  #include<iostream>
//  #include<string.h>
//  using namespace std;
//  void sort(int arr[],int sz){
//     int i ,j;
//     for(i = 1 ; i < 11; i++)
//     {
//         for(j = 0; j < i; j++ )
//         {
//             if(arr[i] < arr[j])
//             {
//                 arr[i] = arr[i] + arr[j];
//                 arr[j] = arr[i] - arr[j];
//                 arr[i] = arr[i] - arr[j];
//             }
//         }   
//     }
//     for(int w = 0; w < i; w++)
//     {
//         printf("%d ", arr[w]);
//     }

// }
// int main(){
//     int arr[100];
//     memset(arr, 0 , sizeof(arr));
//     int a = 0;
//     for(int i = 0; i < 10 ; i++)
//     {
//         scanf("%d",&a);
//         arr[i] = a;
//     }
//     int sz =sizeof(arr) / sizeof(arr[0]);
//     sort(arr,sz);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int arr[] = {1,2,3,4,5};
// 	int* o = arr;
// 	printf("%d", o[2]);
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[] = {1,2,3,4,5,};
//     int * p = a;
//     int * q = &a[5];
//     printf("%d\n", q-p);
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// double multi(int n, double sum){
//     for(int i = 0; i < 2 * n ; i++) sum = sum * i;
//     return sum;
// }
// int main(){
//     int n;
//     double result , x;
//     cin >> n >> x;
//     double sum = 1;
//     while(result < 0.00001)
//     {
//          result = 1 - pow( (-1) ,n ) *  pow(x,2 * n) / multi(n , sum);
//          n ++;
//     }
//     cout << "cos(x) = " << result;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 1;
//     cin >> a;
//     cout << " a++ = " << a ++ << " "; 
//     //cout << "++a = " << ++ a; // ++ a = a + 1;
//     cout << endl;
//     int b = a ++;
//     cout << b;

//     return 0;
// }