// 0. 给定一个整数数组
// 1. 输入的整数数组倒序输出, 每个数之间用空格分隔
// 2. 正序数组中, 每隔一个单位（即索引为奇数的元素）, 输出其值, 同样用空格分隔
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // 数组的长度n
    int n;
    cin >> n;
    // 给定一个整数数组ivec
    // 并初始化
    vector<int> ivec;
    ivec.reserve(n);
    // n个数组的元素elem
    int elem;
    // 尾插
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        ivec.push_back(elem);
    }
    // 倒序输出
    for (int j = ivec.size() - 1; j >= 0; j--)
    {
        cout << ivec[j] << " ";
    }
    cout << endl;
    // 正序数组中, 每隔一个单位（即索引为奇数的元素）, 输出其值
    for (int k = 0; k < ivec.size(); k += 2)
    {
        cout << ivec[k] << " ";
    }
    cout << endl;

    return 0;
}