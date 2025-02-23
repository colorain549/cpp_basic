// 0. (!!!错误写法, 仅作演示!!!)给定一个整数数组(本次使用array, 即普通数组)
// 1. 将输入的整数数组倒序输出, 每个数之间用空格分隔
// 2. 从正序数组中, 每隔一个单位（即索引为奇数的元素）, 输出其值，同样用空格分隔
// 3. 思考: 能否写成诸如cin>>n; int arr[n];的形式(印象中vs studio中会报错)
// 4. 已思考1: array必须固定大小
// 5. 已思考2: 即数组一旦声明，其大小通常是固定的，不能在运行时动态更改(第3点的写法不被允许)
// 6. 已思考3: 不清楚元素的确切个数，请使用vector
// 7. 以下的写法仅作演示, 正确的写法请使用vector
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 数组的长度n
    int n;
    cin >> n;
    // 声明数组
    int arr[n];
    //  n个数组的元素elem
    int elem;
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        arr[i] = elem;
    }
    // 将数组倒序输出
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    // 正序数组中, 隔一个单位（即索引为奇数的元素）,输出其值
    for (int k = 0; k < n; k += 2)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}