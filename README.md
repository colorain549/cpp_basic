# cpp_basic

## 反思与思考
6. 对于数组, 固定长度时, 可使用array; 不确定数组长度, 请使用vector
```
<!-- 错误写法 -->
int n;
cin >> n;
int arr[n];
<!-- 正确写法 -->
int n;
cin >> n;
vector<int> ivec(n);
```
10. switch中, break的使用方法(1.break会结束本次循环; 2. 不使用break, 则继续往下匹配)
11. cin遇到空格，会停止读取，因此需使用getline(若连续出现cin和getline，需在中间插入getchar(), 吸收回车对getline的影响)

## 注意事项
* 需加强数组(array, vector)部分的学习与记忆
* 内存泄漏(尤其链表部分13-15)
