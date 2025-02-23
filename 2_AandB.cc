// 0. 计算a+b, 但输入方式有所改
// 1. 输入第一行是一个整数N
// 2. N行a和b
// 3. 通过空格隔开(cin)
// 4. 测试数据不仅仅一组。即会持续输入N以及后面的a和b(while)
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // N行a和b
    int N;
    int a, b;
    // 保存a+b的变量sum
    int sum;
    while (cin >> N)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> a >> b;
            sum = a + b;
            cout << sum << endl;
        }
    }

    return 0;
}