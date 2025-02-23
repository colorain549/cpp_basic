// 0. 多组测试(while)
// 1. 已堆好的积木堆的个数n
// 2. n个积木堆的高度h
// 3. 使用动态数组vector, 保存n个积木堆的高度h
// 4. n=0时, 输入结束
// 5. 求均值后, 再计算移动的次数result
// 6. 在每组输出结果的下面都输出一个空行
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // 已堆好的积木堆的个数n
    int n;
    // n个积木堆的高度h
    int h;
    // n个积木堆的高度h之和sum
    int sum;
    // 均值
    int avg;
    // 使用动态数组vector, 保存n个积木堆的高度h
    vector<int> ivec;
    // 求均值后, 再计算移动的次数result
    int result;
    // 多组测试(while)
    while (cin >> n)
    {
        // n=0时, 输入结束
        if (n == 0)
        {
            break;
        }
        // 预留容量
        ivec.reserve(n);
        // 求和
        // 构建动态数组
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> h;
            sum += h;
            ivec.push_back(h);
        }
        // 均值
        avg = sum / n;
        // 求均值后, 再计算移动的次数result
        result = 0;
        for (int j = 0; j < n; j++)
        {
            if (ivec[j] > avg)
            {
                result += ivec[j] - avg;
            }
        }
        cout << result << endl;
        cout << endl;
        // 清空容器
        ivec.clear();
    }

    return 0;
}