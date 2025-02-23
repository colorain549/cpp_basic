// 0. 任务是计算a+b
// 1. 输入一系列的a和b对
// 2. 通过空格隔开(cin)
// 3. 依次输出a、b的和
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 声明变量a, b
    int a, b;
    // 保存a、b和的变量sum
    int sum;
    // 输入一系列的a和b对
    // 通过空格隔开(cin)
    while (cin >> a >> b)
    {
        // 依次输出a、b的和
        sum = a + b;
        cout << sum << endl;
    }

    return 0;
}