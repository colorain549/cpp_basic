// 0. 多组测试(while)
// 1. 判断给定的整数n是否存在于给定的集合中
// 2. k组测试数据
// 3. m个整数
// 4. 集合中的元素elem
// 5. n表示需要进行判断的目标整数
#include <iostream>
#include <set>

using std::cin;
using std::cout;
using std::endl;
using std::set;

int main()
{
    // 集合/容器
    set<int> iset;
    int elem;
    // k组测试数据
    int k;
    // m个整数
    int m;
    // 判断给定的整数n是否存在于给定的集合中
    int n;
    // 多组测试(while)
    while (cin >> k)
    {
        for (int i = 0; i < k; i++)
        {
            // m个整数
            cin >> m;
            // 给定的集合
            for (int j = 0; j < m; j++)
            {
                cin >> elem;
                iset.insert(elem);
            }
            // 给定的整数n
            cin >> n;
            // 判断
            auto it = iset.find(n);
            if (it != iset.end())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            // 清空容器
            iset.clear();
        }
    }
    return 0;
}