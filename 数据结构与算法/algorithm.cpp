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

//二分
//整数类型二分 
// #include<iostream>
// using namespace std;
// const int N = 100010;
// int n , m;
// int q[N];
// int main(){
//     scanf("%d%d", &n,&m);
//     for(int i = 0; i < n; i ++) scanf("%d", &q[i]);
    
//     while(m --){
//         int x;
//         scanf("%d", &x);

//         int l = 0, r = n - 1;
//         while(l < r){
//             int mid = l + r >> 1;
//             if(q[mid] >= x) r = mid;
//             else l = mid + 1;
//         }
//         if(q[l]  != x) cout << "-1 -1" << endl;
//         else{
        
//             cout << l << " ";
//             int l = 0, r = n - 1;
//             while(l < r){
//                 int mid = l + r + 1 >> 1;
//                 if(q[mid] <= x) l = mid;
//                 else r = mid - 1;
//         }
//         cout << l << endl;
//     }

//     return 0;
// }



//浮点数二分
// #include<iostream>
// using namespace std;
// double n;
// int main(){
//     cin >> n;
//     double l = -1000 , r = 1000;
//     while(r - l >= 1e-8){
//         double mid = (l + r) / 2;
//         if(mid * mid * mid > n) r = mid;
//         else l = mid;
//     }
//     printf("%.6lf\n", l);
//     return 0;
// }


//高精度

//加法

#include<iostream>
#include<vector>
using namespace std;
vector<int> add(vector<int> &A, vector<int> &B){
    vector<int> C;
    int t = 0;
    for(int i = 0; i < A.size() || i < B.size(); i ++){
        if(i < A.size()) t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    if(t) C.push_back(t);
    return C;

}
int main(){
    string a ,b;
    cin >> a >> b;
    vector<int> A , B;
    for(int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');
    for(int i = b.size() - 1; i >= 0; i --) B.push_back(b[i] - '0');
    auto C = add(A ,B);
    for(int i = C.size() - 1; i >=0; i --) cout << C[i];
    return 0;
}