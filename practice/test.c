#include <stdio.h>
//排序
// 1.快排
//确定分界点：q[i] q[i+r] q[r] 随机
//调整区间
//递归--处理左右两段
// const int N = 1e6 + 10;

// void quick_sort(int q[], int l, int r)
// {
//     if (l >= r)
//         return;
//     int x = q[l], i = l - 1, j = r + 1;
//     while (i < j)
//     {
//         do
//             i++;
//         while (q[i] < x);
//         do
//             j--;
//         while (q[j] > x);
//         if (i < j)
//         {
//             q[i] -= q[j];
//             q[j] += q[i];
//             q[i] = q[j] - q[i];
//         }

//         quick_sort(q, l, j);
//         quick_sort(q, j + 1, r);
//     }
// }
// int main()
// {
//     int n;
//     int q[N];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &q[i]);

//     quick_sort(q, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         printf("%d ", q[i]);
//     return 0;
// }

//补充
//递归函数--主要有点忘记了已经--
int practice(int a){
    if(a == 0 || a == 1)
    {
        return 1;
    }
    else {
        return a * practice(a - 1);
        }
    }
    
int main(){
    int a = 0;
    scanf("%d",&a);
    practice(a);
    printf("%d\n",practice(a));
    return 0;
}
// 2.归并排序
//二分
// 1.整数
// 2.浮点数