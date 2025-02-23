// 0. 任务是计算若干整数的和
// 1. N, 本行后面有N个数
// 2. N=0, 输入结束, 且这一行不要计算
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 该行第一个数N
    int N;
    // 本行后面的数elem
    int elem;
    // 保存若干整数和的变量sum
    int sum;
    while (cin >> N)
    {
        // N=0, 输入结束, 且这一行不要计算
        if (N == 0)
        {
            break;
        }
        // 初始化/重置sum的值为0
        sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> elem;
            sum += elem;
        }
        cout << sum << endl;
    }

    return 0;
}