#include <iostream>
using namespace std;
#include <vector>

/* 尾递归 */
int tailRecur(int n, int res) {
    // 终止条件
    if (n == 0)
        return res;
    // 尾递归调用
    return tailRecur(n - 1, res + n);
}

/* 递归 */
int recur(int n) {
    // 终止条件
    if (n == 1)
        return 1;
    // 递：递归调用
    int res = recur(n - 1);
    // 归：返回结果
    return n + res;
}

//斐波那契数列
int fib(int n){

    if(n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
   cout << tailRecur(10000,0) <<endl;
   cout << fib(10) <<endl;
   system("pause");
	return 0;
}

