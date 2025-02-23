// 0. 任务依然是计算a+b
// 1. 输入中每行是一对a和b
// 2. 其中会有一对是0和0标志着输入结束，且这一对不要计算
// 3. 对于输入的每对a和b，需在相应的行输出a、b的和
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 输入a和b对
    int a, b;
    int sum;
    while (cin >> a >> b)
    {
        // 对是0和0标志着输入结束，且这一对不要计算
        if (a == 0 && b == 0)
        {
            break;
        }
        sum = a + b;
        cout << sum << endl;
    }

    return 0;
}