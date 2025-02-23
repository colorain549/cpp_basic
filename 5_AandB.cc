// 0. 任务是计算若干整数的和
// 1. 输入的第一行为一个整数N
// 2. N行每行先输入一个整数M
// 3. 输入M个整数
// 4. 输出M个数的和，每组输出之间输出一个空行(控制输出)
// 5. 多组测试数据，多个N的输入(while)
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // N 行
    int N;
    // M个整数elem的和sum
    int M;
    int elem;
    int sum;
    // 多组测试数据，多个N的输入(while)
    while (cin >> N)
    {
        for (int i = 0; i < N; i++)
        {
            // 初始化/重置sum的值为0
            sum = 0;
            // M个整数elem
            cin >> M;
            for (int i = 0; i < M; i++)
            {
                cin >> elem;
                sum += elem;
            }
            cout << sum << endl;
            // 输出M个数的和，每组输出之间输出一个空行(控制输出)
            // 若不是最后一次循环, 则输出一个空行
            if (i != N - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}