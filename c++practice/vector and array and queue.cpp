// #include<iostream>
// #include<vector>
// #include<array>
// using namespace std;
// int main(){
//     //原始数组
//     double a1[4] = {1.0, 2.8, 3.8, 4.8};
//     //STL
//     vector<double> a2(4);
//     a2[0] = 1.0 / 3.0;
//     a2[1] = 1.0 / 5.0;
//     a2[2] = 1.0 / 7.0; 
//     a2[3] = 1.0 / 9.0;

//     //array
//     array<double , 4> a3 = {3.14 , 2.72 , 1.62 , 1.41};
//     array<double , 4> a4;
//     a4 = a3;
//     cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
//     cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;  
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> a; // 相当于一个长度动态变化的int数组
//     vector<int> b[233]; //相当于第一维长233，第二维长度动态变化的int数组
//     struct RET {
//         int x;
//         int y;
//     };
//     vector<RET> c; //存储结构体
//     a.size();//数组的长度
//     a.empty();//数组为空返回true,数组不为空返回false
//     //size函数返回vector的实际长度（包含的元素个数），empty函数返回一个bool类型，表明vector是否为空。二者的时间复杂度都是 O(1)O(1)。
//     //所有的STL容器都支持这两个方法，含义也相同，之后我们就不再重复给出。
//     a.clear();//把数组清空
//     //迭代器
//     vector<int>::iterator it = a.begin();
//     //*it 相当于指针
//     //vector的迭代器是“随机访问迭代器”，可以把vector的迭代器与一个整数相加减，其行为和指针的移动类似。可以把vector的两个迭代器相减，其结果也和指针相减类似，得到两个迭代器对应下标之间的距离。
//     a.end();
//     //begin函数返回指向vector中第一个元素的迭代器。例如a是一个非空的vector，则*a.begin()与a[0]的作用相同。
//     //所有的容器都可以视作一个“前闭后开”的结构，end函数返回vector的尾部，即第n 个元素再往后的“边界”。*a.end()与a[n]都是越界访问，其中n = a.size()。
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> a({1 ,2 ,3});
    // //cout << a[0] << ' ' << *a.begin() << endl;
    // //遍历vector
    // for(int i = 0; i < a.size(); i++) cout << a[i] << ' ';
    // cout << endl;
    // //auto == vector<int>::iterator it = a.begin();
    // for(auto i = a.begin(); i != a.end(); i++) cout << *i << ' ';
    // cout << endl;
    // for(int x : a) cout << x << ' ';
    // // cout << endl;
    // cout << a.front() << ' ' << a[0] << ' ' << *a.begin() << endl;
    // cout << a.back() << ' ' << a[a.size() - 1] << endl; 
    //front函数返回vector的第一个元素，等价于*a.begin()和a[0]。
    //back函数返回vector的最后一个元素，等价于*--a.end()和
//     a.push_back(4);//把元素插入到vector的尾部
//     for(auto x : a) cout << x << " ";
//     cout << endl;
//     a.pop_back();//删除vector的最后一个元素
//     for(auto x: a) cout << x << ' ';
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// #include<queue>//先进先出
// using namespace std;
// //头文件queue主要包括循环队列queue和优先队列priority_queue两个容器。
// int main(){
//     queue<int> q;
//     queue<double> a;//队列
//     struct RET{
//         int x;
//         int u;
//         bool operator < (const RET& t) const{
//             return x < t.x;
//         }
//     };
//     queue<RET> r;
//     //优先队列 -- 优先弹出队列最大值
//     priority_queue<int> a; // 大根堆 -- 重载小于号
//     priority_queue<int, vector<int>, greater<int>> b; // 小根堆 -- 重载大于号
//     priority_queue<RET> d;//一定要重载大于号或者小于号
//     priority_queue<pair<int ,int >> q;
//     priority_queue<RET,vector<RET>, greater<RET>> y;

//     //循环队列
//     q.push(1);//在队头插入一个元素
//     q.pop();//弹出队头元素
//     q.front();//返回对头
//     q.back();//返回队尾
//     q = queue<int>();//清空队列
//     return 0;
// }

//除了队列，优先队列，栈以外，都有clear函数


// #include<stack>
// #include<iostream>
// using namespace std;
// int main(){
//     stack<int> stk;
//     stk.push(1);//向栈顶插入一个元素
//     stk.top();//返回栈顶元素
//     stk.pop();//弹出栈顶元素
//     return 0;
// }

// #include<iostream>
// #include<deque>//双端队列
// // []              // 随机访问
// // begin/end       // 返回deque的头/尾迭代器
// // front/back      // 队头/队尾元素
// // push_back       // 从队尾入队
// // push_front      // 从队头入队
// // pop_back        // 从队尾出队
// // pop_front       // 从队头出队
// // clear           // 清空队列
// using namespace std;
// int main(){
//     deque<int> a;
//     a.begin();
//     a.back();
//     a.front();
//     a.back();
//     a.push_back(1);
//     a.push_front(2);
//     a[0];//随机访问一个元素

//     return 0;
// }

// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s; //元素不能重复
//     struct rec{
//         int x , y ;
//         bool operator < (const rec & t) const{
//             return x < t.x;
//         }
//     }; 
//     int a;
//     set<rec> s;  // 结构体rec中必须定义小于号
//     multiset<double> s; //元素可以重复
//     set<int>::iterator it = s.begin();
//     it ++; it --;
//     ++ it;
//     -- it;
//     s.end();//s.end()是指向集合中最大元素的下一个位置的迭代器。换言之，就像vector一样，是一个“前闭后开”的形式。因此-- s.end()是指向集合中最大元素的迭代器。
//     s.insert(a);
//     s.find(a); //如果没找到 s.find(a) == s.end;
//     if(s.find(a) == s.end()); //判断a是否在s中存在
//     s.lower_bound(a);// 找到大于等于a的最小元素的迭代器
//     s.upper_bound(a);// 找到大于a的最小元素的迭代器
//     s.count(a); // a在s中的个数


//     return 0;
// }

// #include<iostream>
// #include<map>
// #include<vector>
// #include<unordered_set>
// #include<unordered_map>
// #include<bitset>//位运算 用于二进制的串
// using namespace std;
// int main(){
//     map<string,vector<int>> a;
//     // a[1] = 2;
//     // a[10000000]  = 3;
//     // cout << a[10000000] << endl;
//     // a["nice"] = 2;
//     // cout << a["nice"] << endl;
//     a["nice"] = vector<int>({1, 2 ,3 ,4});
//     cout << a["nice"][2] << endl;
//     unordered_set<int> d;//哈希表 不能存储重复元素
//     unordered_multiset<int> z;//哈希表 可以存储重复元素
//     unordered_map<int, int> v;
//     bitset<1000> m;
//     m[0] = 1;
//     m.set(1);
//     m.reset(3);
//     cout << m[0] << endl;
//     cout << m.count() << endl;
//     return 0;
// }

//pair的用法
#include<iostream>
using namespace std;
int main(){
    pair<int , string> a;
    a = {3 , "nice"};
    cout << a.first << ' ' << a.second << endl;
    return 0;
}