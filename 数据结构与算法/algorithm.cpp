//排序
//1. 快排(不太稳定)

//way 1
// #include<iostream>
// using namespace std;
// const int N = 1e6 + 10;
// int n;
// int q[N];
// void quick_sort(int q[], int l ,int r){
//     int x = q[(l + r) / 2], i = l - 1, j = r + 1;
//     if(l >= r) return ;
//     while(i < j){
//         do i ++; while(q[i] < x);
//         do j --; while(q[j] > x);
//         if(i < j) swap(q[j], q[i]);
//     }
//     quick_sort(q, l, j);
//     quick_sort(q, j + 1, r);
// }
// int main(){
//     scanf("%d", &n);
//     for(int i = 0 ; i < n; i ++) scanf("%d", &q[i]);
//     quick_sort(q, 0 , n - 1);
//     for(int i = 0; i < n ; i ++) printf("%d ", q[i]);
//     return 0;
// }
//way 2
// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int N = 1e6 + 10;
// int n;
// int q[N];
// int main(){
//     scanf("%d", &n);
//     for(int i = 0; i < n ; i ++) scanf("%d", &q[i]);
//     sort(q , q + n);
//     for(int i = 0; i < n; i ++) printf("%d ", q[i]);
//     return 0;
// }

//2.归并排序(稳定)
// #include<iostream>
// using namespace std;
// const int N = 1e6 + 10;
// int n;
// int q[N] ,tmp[N];
// void merge_sort(int q[], int l ,int r){
//     if(l >= r) return;
//     int mid = (l + r) / 2;
//     merge_sort(q , l , mid), merge_sort(q , mid + 1 , r);
//     int k = 0, i = l, j = mid + 1;
//     while(i <= mid && j <= r){
//         if(q[i] <= q[j]) tmp[k ++] = q[i ++];
//         else tmp[k++] = q[j ++];
//     }
//     while(i <= mid) tmp[k ++] = q[i ++];
//     while(j <= r) tmp[k ++] = q[j ++];
//     for(int i = l ,j = 0; i <= r; i ++ , j ++) q[i] = tmp[j];
// }
// int main(){
//     scanf("%d", &n);
//     for(int i = 0; i < n; i ++) scanf("%d", &q[i]);
//     merge_sort(q, 0 , n - 1);
//     for(int i = 0; i < n; i ++) printf("%d ", q[i]);
//     return 0;
// }


