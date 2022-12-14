# 数据结构与算法

## 数据结构


### 链表
![YwArL.png](https://c2.im5i.com/2023/01/01/YwArL.png)
![YwDjs.png](https://c2.im5i.com/2023/01/01/YwDjs.png)
> 初始化

```c++
#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x) , next(nullptr) {}

};
```

>  生成链表
```c++
class LinkedList{

    public:

    //生成链表
    ListNode* createLinkedList(int arr[], int n){

        if ( n == 0){
            return NULL;
        }

        ListNode *head = new ListNode(arr[0]);
        ListNode *curNode = head;

        for (int i = 1; i < n; ++i) {
            curNode->next = new ListNode(arr[i]);
            curNode = curNode->next;
        }
        return head;
    }

```
> 反转链表
```c++
ListNode *reverseLinked(ListNode *head)
{
	ListNode *preNode = NULL;
	ListNode *curNode = head;
	
	while(curNode != NULL)
	{
		ListNode *nextNode = curNode->next;
		curNode->next = preNode;
		preNode = curNode;
		curNode = nextNode;
	}
	//preNode变成头节点
	return preNode;
}
```
> 移除值为val的所有节点
```c++
 ListNode* removeElements(ListNode *head, int val){

        ListNode *dummyHead = new ListNode(-1);
        dummyHead->next = head;

        ListNode *cur = dummyHead;
        while (cur->next != NULL){
            if (cur->next->val == val){
                ListNode *delNode = cur->next;
                cur->next = delNode->next;
                delete delNode;
            } else{
                cur = cur->next;
            }
        }

        ListNode *returnNode = dummyHead->next;
        delete dummyHead;

        return returnNode;
    }
```
> 合并两个有序的链表
```c++
 ListNode *mergeTwoLists(ListNode *headA, ListNode *headB){

        if (headA == NULL){
            return headB;
        } else if (headB == NULL){
            return headA;
        }

        ListNode *mergedHead = NULL;

        if (headA->val < headB->val){

            mergedHead = headA;
            mergedHead->next = mergeTwoLists(mergedHead->next,headB);

        } else {

            mergedHead = headB;
            mergedHead->next = mergeTwoLists(headA,mergedHead->next);

        }
        return mergedHead;
    }
```
> 找到两个链表的交点
[两个链表的第一个公共节点](200~https://www.acwing.com/problem/content/62/)
```c++
ListNode *findIntersectionNode(ListNode *headA, ListNode*headB){

        int lengthA = calculateLength(headA);
        int lengthB = calculateLength(headB);

        ListNode *pA = headA;
        ListNode *pB = headB;

        int n = lengthA - lengthB;

        for (int i = 0; i < abs(n); ++i) {

            if(n > 0){

                pA = pA->next;

            } else{

                pB = pB->next;
            }
        }

        while (pA && pB){

            //found first same value node
//            if (pA->val == pB->val){
//                return pB;
//            }

            //found first same address node(intersection node)
            if (pA->val == pB->val){
                return pB;
            }

            //move node
            pA = pA->next;
            pB = pB->next;
        }

        return NULL;
    }
```
### 静态链表

#### 单链表
[单链表](https://www.acwing.com/problem/content/828/)
```c++
#include<iostream>
using namespace std;

const int N = 1e6 + 10;



//head表示头节点的下标
//e[i]表示节点i的值
//ne[i]表示节点i的next指针是多少
//idx表示当前已经用到了哪个点
int head , e[N] , ne[N] , idx;

void init()
{
    head = -1;
    idx = 0;
}

//将x插到头节点
void add_to_head(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx ++;
}

//将x插入到下标是k的点后面
void add(int k , int x)
{

    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx ++;
}


//将下标是k的后面的点删掉
void Remove(int k)
{
    ne[k] = ne[ne[k]];
}



```

#### 双链表
[双链表](https://www.acwing.com/problem/content/829/)
```c++
#include<iostream>
using namespace std;
const int N = 1e5 + 10;

//r[N]表示当前这个点右边的点是谁
//l[N]表示当前这个点左边的点是谁
//e[N]表示当前这个点的值
//idx表示已经用到了哪个点

int e[N] , l[N] , r[N] , idx;



void init()
{
    //0表示左端点，1表示右端点
    r[0] = 1 , l[1] = 0;
    idx = 2;
}

//在下标是k的点的右边插入x
void add(int k , int x)
{
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
    idx ++;
}

//删除第k个点
void Remove(int k)
{
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

```
### 栈
#### 数组模拟
```c++
// tt表示栈顶
int stk[N], tt = 0;

// 向栈顶插入一个数
stk[ ++ tt] = x;

// 从栈顶弹出一个数
tt -- ;

// 栈顶的值
stk[tt];

// 判断栈是否为空
if (tt > 0)
{

}

```
#### 单调栈
[单调栈](https://www.acwing.com/problem/content/832/)

> 常见模型：找出每个数左边离它最近的比它大/小的数

```c++
int tt = 0;
for (int i = 1; i <= n; i ++ )
{
    while (tt && check(stk[tt], i)) tt -- ;
    stk[ ++ tt] = i;
}

```
### 队列
#### 数组模拟
> 1. 普通队列
```c++
// hh 表示队头，tt表示队尾
int q[N], hh = 0, tt = -1;

// 向队尾插入一个数
q[ ++ tt] = x;

// 从队头弹出一个数
hh ++ ;

// 队头的值
q[hh];

// 判断队列是否为空
if (hh <= tt)
{

}
```
> 2. 循环队列


```c ++
// hh 表示队头，tt表示队尾的后一个位置
int q[N], hh = 0, tt = 0;

// 向队尾插入一个数
q[tt ++ ] = x;
if (tt == N) tt = 0;

// 从队头弹出一个数
hh ++ ;
if (hh == N) hh = 0;

// 队头的值
q[hh];

// 判断队列是否为空
if (hh != tt)
{

}

```
#### 单调队列
[单调队列](https://www.acwing.com/problem/content/156/)
> 常见模型：找出滑动窗口中的最大值/最小值

```c++
int hh = 0, tt = -1;
for (int i = 0; i < n; i ++ )
{
    while (hh <= tt && check_out(q[hh])) hh ++ ;  // 判断队头是否滑出窗口
    while (hh <= tt && check(q[tt], i)) tt -- ;
    q[ ++ tt] = i;
}

```
### Trie树

![YwHq8.png](https://c2.im5i.com/2023/01/01/YwHq8.png)

[Trie字符串统计](https://www.acwing.com/problem/content/837/)

> 高效的存储和查找字符串集合的数据结构

```c++
#include<iostream>
using namespace std;
const int N = 1e5 + 10;

// 0号点既是根节点，又是空节点
// son[][]存储树中每个节点的子节点
// cnt[]存储以每个节点结尾的单词数量

char str[N];
int son[N][26] , cnt[N] , idx;//下标是0的点，既是根节点，又是空节点

int n;

//插入一个字符串
void insert(char str[])
{
    int p = 0;
    for(int i = 0; str[i]; i ++)
    {
        int u = str[i] - 'a';
        if(!son[p][u]) son[p][u] = ++ idx;
        p = son[p][u];
    }

    cnt[p] ++;
}


//查询字符串出现次数
int query(char str[])
{
    int p = 0;
    for(int i = 0; str[i]; i ++)
    {
        int u = str[i] - 'a';
        if(!son[p][u]) return 0;
        p = son[p][u];
    }

    return cnt[p];
}
```

### 并查集


![YwuL6.png](https://c2.im5i.com/2023/01/01/YwuL6.png)

[合并集合](https://www.acwing.com/problem/content/838/)

[连通块中点的数量](https://www.acwing.com/problem/content/839/)


> 将两个集合合并
> 询问两个元素是否在一个集合当中


```markdown
每一个集合用一棵树来表示
树根的编号就是整个集合的编号
每个节点存储它的父节点
p[x]表示x的父节点
```
> Q1：  如何判断树根： if(p[x] == x)
> Q2：如何求x的集合编号：while(p[x] != x) x = p[x]
> Q3：如何合并两个集合： p[x]是x的集合编号，p[y]是y的集合编号 p[x] = y;
> 优化：路径压缩


```C++
#include<iostream>
#include<cstdio>
using namespace std;

const int N = 1e5 + 10;
int n, m;
int p[N];

int find(int x) //返回x的祖宗节点 + 路径压缩
{
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    scanf("%d%d" , &n , &m);
    for(int i = 1; i <= n; i ++) p[i] = i;
    
    while(m --)
    {
        char op[2];
        int a , b;
        scanf("%s%d%d" , op , &a , &b);
        if(op[0] == 'M') p[find(a)] = find(b);
        else
        {
            if(find(a) == find(b)) puts("Yes");
            else puts("No");
        }
    }

    return 0;
}
```
### 堆

> 完全二叉树

[堆排序](https://www.acwing.com/problem/content/840/)
#### 小根堆
![ROoHU.png](https://c2.im5i.com/2022/12/29/ROoHU.png)
#### 大根堆
![ROnG8.png](https://c2.im5i.com/2022/12/29/ROnG8.png)
#### 堆的存储
![RO3Lw.png](https://c2.im5i.com/2022/12/29/RO3Lw.png)

###  如何手写一个堆
1. 插入一个数  ``` heap[++ size] = x; up(size); ```
2. 求集合当中的最小值 ``` heap[1] ```
3. 删除最小值 ``` heap[1] = heap[size]; size --; down(1); ```
4. 删除任意一个元素 ``` heap[k] = heap[size]; size --; down(k); up(k); ```
5. 修改任意一个元素 ``` heap[k] = x; down(k); up(k); ```

```c++
down(int x)
{
  int t = x; //用于存储最小节点的下标 
  if(x * 2 <= size && x * 2 <  h[t]) t = x * 2;
  if(x * 2 + 1 <= size && x * 2 + 1 < h[t]) t = x * 2 + 1;
  if(u != t)
  {
    swap(h[u] , h[t]);
    down(t);
  }
}

up(int x)
{
  while(x / 2 && h[x / 2] > h[x])
  {
    swap(h[x / 2] , h[x]);
    x /= 2;
  }
}

```

### 哈希表
> 0~1e9 $\Rightarrow$ 0~1e5
#### 存储结构
[模拟散列表](https://www.acwing.com/problem/content/842/)
###### 1. 开放寻址法
![YF0K5.png](https://c2.im5i.com/2022/12/30/YF0K5.png)
1. 找大于最大值的一个质数
2. 插入 && 查找操作
> 先求哈希值 ```int k = (x % N + N) % N;```
> 将哈希值插入h[k]，如果这个点上有存，就换下一个，如果到末尾都有值，就从下标0的位置开始找
```c++
#include<iostream>
#include<cstring>
using namespace std;
const int N = 200003 , null = 0x3f3f3f3f;

int h[N];

int n;

int find(int x)
{
    int k = (x % N + N) % N;
    while(h[k] != null && h[k] != x)
    {
        k ++;
        if(k == N) k = 0;
    }
    return k;
}

int main()
{
//    for(int i = 200000 ;; i ++)
//    {
//        bool falg = true;
//        for(int j = 2; j * j <= i; j ++)
//        {
//            if(i % j == 0)
//           {
//                flag = false;
//                break;
//            }
//            if(flag)
//            {
//                cout << i << endl;
//                break;
//            }
//       }
//    }

    memset(h , null , sizeof(h));
    cin >> n;
    while(n --)
    {
        int k , x;
        string op;
        cin >> op >> x;
        k = find(x);
        if(op == "I") h[k] = x;
        else 
        {
            if(h[k] != null) puts("Yes");
            else puts("No");
        }
    }

    return 0;
}

```

###### 2. 拉链法
![YFoH3.png](https://c2.im5i.com/2022/12/30/YFoH3.png)
1. 找大于最大值的一个质数
2. 插入操作
> 先求哈希值 ```int k = (x % N + N) % N;```
> 如果有两个数的哈希值一样(哈希冲突)，用单链表的方式存储
3. 查找操作
> 遍历整个哈希表

```c++
//h[N] 为哈希表
//e[N] 存入的值
//ne[N] next指针
//idx 表示当前用到了哪个点

for(int i = N; ; i ++)
{
    bool flag = true;
    for(int j = 2; j * j <= i; j ++)
    {
        if(i % j == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout << i;
        break;
    }

}

void insert(int x)
{
    int k = (x % N + N) % N;
    e[idx] = x;
    ne[idx] = h[k];
    h[k] = idx ++;
}

bool find(int x)
{
    int k = (x % N + N) % N;
    for(int i = h[k]; i != -1; i = ne[i])
    {
        if(e[i] == x) return true;
    }
    return false;
}
```

#### 字符串哈希方式
> 比kmp好使
> 记录不能从0开始
![YSPG4.png](https://c2.im5i.com/2023/01/06/YSPG4.png)

```c++
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
typedef unsigned long long ULL;
int n , m , P = 131;
char str[N];

ULL h[N] , p[N];

ULL get(int l , int r)
{
    return h[r] - h[l - 1] * p[r - l + 1];
}

int main()
{
    scanf("%d%d%s" , &n , &m , str + 1);
    p[0] = 1;
    for(int i = 1; i <= n; i ++)
    {
        p[i] = p[i - 1] * P;
        h[i] = h[i - 1] * P+ str[i];//预处理前缀和
    }

    while(m --)
    {
        int l1 , r1 , l2 , r2;
        scanf("%d%d%d%d" , &l1 , &r1 , &l2 , &r2);
        if(get(l1 , r1) == get(l2 , r2)) puts("Yes");
        else puts("No");
    }

    return 0;
}


```


## 算法

### 排序
#### 快速排序
> 用两个指针不断递归交换

[快排](https://www.acwing.com/problem/content/787/)
```c++
#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int a[N];
int n;

void quick_sort(int a[] , int l , int r)
{
  if(l >= r) return ;
  int i = l - 1 , j = r + 1;
  int mid = a[l + r >> 1];
  while(i < j)
  {
    do i ++; while(a[i] < mid);
    do j --; while(a[j] > mid);
    if(i < j) swap(a[i] , a[j]);
  }
  quick_sort(a , l , j) , quick_sort(a , j + 1 , r);

}

int main()
{
  scanf("%d" , &n);
  for(int i = 0; i < n; i ++) scanf("%d" , &a[i]);
  quick_sort(a , 0 , n - 1);
  for(int i = 0; i < n; i ++) printf("%d " , a[i]);

  return 0;
}

```
####  归并排序
> 分治思想

[逆序对的数量](https://www.acwing.com/problem/content/790/)
```c++
#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int n;
int q[N], tmp[N];
void merge_sort(int q[], int l, int r){
    if(l >= r) return;
    int mid = (l + r) / 2;
    merge_sort(q, l , mid), merge_sort(q , mid + 1 , r);
    int i = l, j = mid + 1, k = 0;
    while(i <= mid && j <= r){
        if(q[i] < q[j]) tmp[k ++] = q[i ++];
        else tmp[k ++] = q[j ++];
    }
    while(i <= mid) tmp[k ++] = q[i ++];
    while(j <= r) tmp[k ++] = q[j ++];
    for(int i = l, j = 0; i <=r ; i ++, j ++) q[i] = tmp[j];
}
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) scanf("%d", &q[i]);
    merge_sort(q , 0 , n - 1);
    for(int i = 0; i < n; i ++) printf("%d ", q[i]);
    return 0;
}

```

#### 堆排序
[堆排序](https://www.acwing.com/problem/content/840/)
> 将一堆数构建成小根堆或者大根堆
> 每次求得最小值或者最大值后删除根节点

```c++
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e5 + 10;
int h[N] , Size;
int n , m;

void down(int x)
{
  int t = x; // 用于存储最小节点的下标
  if(x * 2 <= Size && h[x * 2] < h[t]) t = x * 2;
  if(x * 2 + 1 <= Size && h[x * 2 + 1] < h[t]) t = x * 2 + 1;
  if(x != t)
  {
    swap(h[t] , h[x]);
    down(t);
  }

}

int main()
{
  scanf("%d%d" , &n , &m);
  for(int i = 1; i <= n; i ++) scanf("%d" , &h[i]);
  Size = n;

  for(int i = n / 2; i; i --) down(i);

  while(m --)
  {
    printf("%d " , h[1]);
    //删除操作
    h[1] = h[Size];
    Size --;
    down(1); 
  }

  return 0;
}
```


### 高精度运算

> 模拟人类四则运算的过程

#### 高精度加法
[高精度加法](https://www.acwing.com/problem/content/793/)
```c++
#include<iostream>
#include<vector>
using namespace std;
string a, b;
vector<int> A , B;

vector<int> add(vector<int> &A , vector<int> &B)
{
    if(A.size() < B.size()) return add(B , A);

    vector<int> C;
    int t = 0;
    for(int i = 0; i < A.size(); i ++)
    {
        t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    if(t) C.push_back(t);
    return C;
}


int main()
{
    cin >> a >> b;
    for(int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');
    for(int i = b.size() - 1; i >= 0; i --) B.push_back(b[i] - '0');

    auto C =  add(A , B);
    for(int i = C.size() - 1; i >= 0; i --) cout << C[i];

    return 0;
}


```

#### 高精度减法
[高精度减法](https://www.acwing.com/problem/content/794/)
```c++
#include<iostream>
#include<vector>
using namespace std;
string a, b;
vector<int> A , B;

bool cmp(vector<int> &A , vector<int> &B)
{
    if(A.size() != B.size()) return A.size() > B.size();
    for(int i = A.size() - 1; i >= 0; i --)
    {
        if(A[i] != B[i]) return A[i] > B[i];
    }
    return true;
}


vector<int> sub(vector<int> &A , vector<int> &B)
{
    int t = 0;
    vector<int> C;
    for(int i = 0; i < A.size(); i ++)
    {
        t = A[i] - t;
        if(i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if(t >= 0) t = 0;
        else t = 1;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}




int main()
{
    cin >> a >> b;
    for(int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');
    for(int i = b.size() - 1; i >= 0; i --) B.push_back(b[i] - '0');
    
    if(cmp(A , B))
    {
        auto C = sub(A , B);
        for(int i = C.size() - 1; i >= 0; i --) cout << C[i];
    }
    else
    {
        cout << "-";
        auto C = sub(B, A);
        for(int i = C.size() - 1; i >= 0; i --) cout << C[i];
    }

    return 0;
}


```


#### 高精度乘法
[高精度乘法](https://www.acwing.com/problem/content/795/)

```c++
#include<iostream>
#include<vector>
using namespace std;
string a;
int b;
vector<int> A;

vector<int> mul(vector<int> &A , int b)
{
    vector<int> C;
    int t = 0;
    for(int i = 0; i < A.size() || t; i ++)
    {
        if(i < A.size()) t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}


int main()
{
    cin >> a >> b;
    for(int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');
    auto C = mul(A , b);

    for(int i = C.size() - 1; i >= 0; i --) cout << C[i];

    return 0;
}

```

#### 高精度除法
[高精度除法](https://www.acwing.com/problem/content/796/)
```c++
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int b , r;
string a;
vector<int> A;

vector<int> div(vector<int> &A , int b , int &r)
{
   vector<int> C;
   for(int i = A.size() - 1; i >= 0; i --)
   {
       r = A[i] + r * 10;
       C.push_back(r / b);
       r %= b;
   }
   reverse(C.begin() , C.end());
   while(C.size() > 1 && C.back() == 0) C.pop_back();
   return C;
}
    
    

int main()
{
    cin >> a >> b;
    for(int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');

    auto C = div(A , b , r);
    for(int i = C.size() - 1; i >= 0; i --) cout << C[i];
    cout << endl << r;

    return 0;
}

```

### KMP算法
> next[]数组 -- 找到最长的模式串相等的前缀和后缀
> 快速匹配两个字符串


[kmp算法](https://www.acwing.com/activity/content/code/content/4986741/)
```c++
#include<iostream>
usin namespace std;
const int N = 1e5 + 10 , M = 1e6 + 10;
int n , m;
char p[N]  , s[M];
int ne[N];

int main()
{   
    cin >> n >> p + 1 >> m >> s + 1;


    //求next数组的过程
    for(int i = 2 , j = 0; i <= n; i ++)
    //i != 1的原因，next[0] = 0 , 如果第一个字符不匹配，就从0开始
    {
        while(j && p[i] != p[j + 1]) j = ne[j];
        if(p[i] == p[j + 1]) j ++;
        ne[i] = j;//归零
    }


    //KMP匹配过程
    for(int i = 1 , j = 0; i <= m; i ++)
    {
        while(j && s[i] != p[j + 1]) j = ne[j];
        if(s[i] == p[j + 1]) j ++;

        //匹配成功
        if(j == n)
        {
            printf("%d " , i - n);//下标从0开始
            j = ne[j];
        }
    }

    return 0;
}
```

### 位运算
![YwoH7.jpeg](https://c2.im5i.com/2023/01/01/YwoH7.jpeg)
[位运算](https://www.acwing.com/problem/content/803/)

```c++
#include<iostream>
using namespace std;
int n ;
const int N = 1e5 + 10;
int a[N];

int lowbit(int x)
{
    return x & -x;
}

int main()
{
    scanf("%d" , &n);
    for(int i = 0; i < n; i ++)
    {
        int cnt = 0;
        scanf("%d" , &a[i]);
        while(a[i]) a[i] -= lowbit(a[i]) ,  cnt ++;
        printf("%d " , cnt);
    }

    return 0;
}


```

## STL

### 容器

#### vector
> 倍增思想
> 支持比较运算（字典序）
```c++
    vector<int> a(10 , 3);
    a.size();//返回容器的大小
    a.empty();//判断容器是否为空
    a.clear();//清空整个容器
    a.front();//返回容器的第一个元素
    a.back();//返回容器末尾元素
    a.erase();//从下标开始删除到容器末尾
    a.push_back();//往容器末尾插入一个元素
    a.pop_back();//删除容器末尾元素
```
#### pair
> 简单的二元组
> 支持比较运算（字典序）
```c++
pair<int ,  string> p;//类型可以任意
p = make_pair(12 , "shjefkl");
p.first//返回pair的第一个元素
p.second//返回pair的第二个元素
比较运算//先比较第一个关键字，如果第一个关键字一样则比较第二个关键字

```

#### string
> 好用的字符串类

```c++
string a;
string a[10];//字符串数组，每个元素都是一个字符串
a.size(); 
a.empty();
a.clear();
a.back();
a.substr(%d , %d); //返回原串的子串，第一个参数是子串在原串的起始位置，第二个参数是子串的长度，忽略的话默认延长到原串的末尾
a.c_str();//返回string存储字符串的起始地址
a.find("char");//查找字符串，如果没有，会返回string::npos, 如果查到，返回第一次匹配成功的下标
```

#### queue
> 队列 ， 先进先出

```c++
queue<int> a;
a.push();//向队尾插入一个元素
a.front();//返回队头
a.back();//返回队尾元素
a.pop();//弹出队头元素
没有clear()函数
a = queue<int>(); //清空原队列
```

##### priority_queue
> 堆 , 默认是大根堆

```c++
priority_queue<int> a;
a.push();//插入一个元素
a.top();//返回堆顶元素
a.pop();//弹出堆顶元素
a.empty();
a.size();
没有clear()函数
a = priority_queue<int>(); //清空堆
定义成小根堆的方式 priority_queue<int , vector<int , greater<int>> a;
```
#### dueue
> 双端队列

```c++
dueue<int> a;
a.size(); 
a.empty();
a.clear();
a.front();
a.back();
a.push_back();
a.pop_back();
a.push_front();//往容器首元素插入一个元素
a.pop_front();//弹出首元素
a.begin();
a.end();

```


#### stack
> 栈
```c++
stack<int> a;
a.push();//向栈顶插入一个元素
a.top();//返回栈顶元素
a.pop();//弹出栈顶元素
a.empty();
a.size();
没有clear()函数
```

#### set/multiset
> 基于平衡二叉树（红黑树）
> 不存在重复元素的集合
> multi_set 允许重复元素存在
```c++

set<int> a;
a.insert();//插入一个元素
a.find();//查找一个元素，如果不存在返回a.end();
a.count(%d)//返回某一个数的个数 
a.size(); 
a.empty();
a.clear();
a.erase(%d);//输入一个数x，删除所有x
            //输入一个迭代器，删除这个迭代器
a.lower_bound()/upper_bound() //
lower_bound(x)// 返回大于等于x的迭代器
upper_bound(x)// 返回大于x的迭代器
a.begin();
a.end();

```

#### map/multimap
> 基于平衡二叉树（红黑树）
```c++
insert(); //插入的数是一个pair 
erase();//输入的参数可以是pair或者迭代器
find();//
a.lower_bound()/upper_bound() //
lower_bound(x)// 返回大于等于x的迭代器
upper_bound(x)// 返回大于x的迭代器



```

#### unordered_set/unordered_map/unordered_multiset/unordered_multimap
> 哈希表
> 不支持lower_bound() , upper_bound()


#### bitset
> 压位

### 库函数
#### lower_bound & upper_bound
> 处理二分问题，使用前一定要```先排序```
> lower_bound的第三个参数传入一个元素target，在两个迭代器（指针）指定的部分上执行二分查找，返回指向第一个大于等于x的元素的位置的迭代器（指针）。
> upper_bound的用法和lower_bound大致相同，唯一的区别是查找第一个大于target的元素。当然，两个迭代器（指针）指定的部分应该是```提前排好序的```。

```c++
//用法
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int n , target;

int main()
{
    cin >> n >> target;
    for(int i = 0; i < n; i ++) cin >> a[i];
    sort(a , a + n);
    int i = lower_bound(a , a + n , target) - a;
    //查找小于等于target的元素
    int y = --(upper_bound(a , a + n , target) - a);

    return 0;
}
```

#### sort
> 处理排序问题
> 底层逻辑：快排

[结构体排序](https://www.acwing.com/problem/content/864/ "三元组排序")
```c++
//用法
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10;

int n , a[N];

bool cmp(st x)
{
    return x.t > x.y;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    //从小到大排序
    sort(a , a + n);

    //从大到小排序
    sort(a , a + n , greater<int>)

    //特定函数排序(用于结构体排序、堆排序等等)
    sort(a , a + n , cmp(x))
    //如果返回1为较大，返回0为较小
    return 0;
}
```
#### reverse 
> 反转一个容器(string , vector , array , set ....)
```c++
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 1e5 + 10;
int a[N];
vector<int> A;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    reverse(a , a + n);
    reverse(A.begin() , A.end());
    return 0;
}
```

#### nth_element
> 可以从某个序列中找到第 n 小的元素 K，并将 K 移动到序列中第 n 的位置处
```c++
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 1e5 + 10;
int a[N];
vector<int> A;
int main()
{
    int k , n ;
    cin >> n >> k;
    for(int i = 0; i < n; i ++) cin >> a[i];
    
    nth_element(a , a + k - 1, a + n);
    nth_element(A.begin() , A.begin() + k - 1 , A.end());
    cout << a[k] << endl;

    return 0;
}

```

## 数学知识
### 斐波那契数列写法

> 循环
```c++
int search()
{
    int n , a = 0 , b = 1 , c = 0;
    cin >> n;
    while(n -- ){
        cout << a << ' ';
        c = a + b;
        a = b, b = c;
    }

    return 0;
}
```
> 递归
```
int func(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 1;
    if(n > 2) return func(n - 1) + func(n - 2);
}
```

### 找质数

```c++
void search()
{
    for(int i = 100010; i ; i --)
    {
        bool flag = true;
        for(int j = 2; j * j <= i; j ++)
        {
            if(i % j == 0)
            {
                flag = false;
                break;
            }
            if(flag) cout << i << end;
        }
    }
    return 0;
}

```
### 找最大公约数
```c++
int lcm(int a , int b)
{
    for(int i = 10000 ;; i --)
    {
        if(i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
    return 0;
}


```
### 找最小公倍数
```c++
int gcd(int a , int b)
{
    for(int i = 1; i <= a * b; i ++)
    {
        if(i % a == 0 && i % b == 0) return i;
    }
    return 0;
}

```
