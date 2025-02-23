// 0. s组测试数据
// 1. 钥匙串上有n把钥匙
// 2. 钥匙编号k 房门编号d
// 3. 需要打开的房门编号x
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;

int main()
{
    // s组测试数据
    int s;
    // 钥匙串上有n把钥匙
    int n;
    // 储存钥匙房门对的容器 <key, door> pair
    map<int, int> findKey;
    // 钥匙编号k 房门编号d
    int k, d;
    // 需要打开的房门编号x
    int x;
    //
    while (cin >> s)
    {
        // s组测试数据
        for (int i = 0; i < s; i++)
        {
            // 钥匙串上有n把钥匙
            cin >> n;
            for (int j = 0; j < n; j++)
            {
                cin >> k >> d;
                findKey[d] = k;
            }
            // 需要打开的房门编号x
            cin >> x;
            auto it = findKey.find(x);
            if (it != findKey.end())
            {
                cout << findKey[x] << endl;
            }
            else
            {
                cout << "Can't open the door." << endl;
            }
            // 清空容器
            findKey.clear();
        }
    }

    return 0;
}