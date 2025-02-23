// 0. 计算出给定数各个位上数字为偶数的和sum
// 1. 输入数据有多组(while)
// 2. 数字在32位整型范围(int)
// 3. 数位分离
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 计算出给定数各个位上数字为偶数的和sum
    int sum;
    // 输入数据有多组(while)
    int n;
    // 各个位上数字num
    int num;
    //
    while (cin >> n)
    {
        // 初始化/初始化sum为0
        sum = 0;
        // 数位分离
        while (n > 0)
        {
            // 分离最低位
            num = n % 10;
            // 偶数
            if (num % 2 == 0)
            {
                sum += num;
            }
            // 分离下一位
            n /= 10;
        }
        cout << sum << endl;
        cout << endl;
    }

    return 0;
}