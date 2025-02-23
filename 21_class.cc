// 0. 基类 Shape
// 1. 派生类 Rectangle 和 Circle
// 2. 计算面积的方法
// 3. 输入包括多行
// 4. 图形类型（"rectangle"或"circle"）
// 5. 矩形，参数是宽度和高度，对于圆形，参数是半径
// 6. 输入以单词"end"结束
// 7. 封装抽象继承多态
// 8. 重载(同一作用域)覆盖(纯虚函数)重写(没有纯虚函数)
// 9. 使用智能指针
#include <iostream>
#include <iomanip>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;
using std::unique_ptr;

// 基类Shape
class Shape
{
public:
    // 纯虚函数
    virtual string getType() = 0;
    virtual float getArea() = 0;
};

// 派生类 Rectangle
class Rectangle : public Shape
{
public:
    // 构造函数
    Rectangle(int width, int length) : _width(width), _length(length) {}
    // 覆盖
    string getType() override
    {
        return "Rectangle";
    }
    float getArea() override
    {
        return _length * _width;
    }

private:
    int _width;
    int _length;
};

// 派生类 Circle
class Circle : public Shape
{
public:
    // 构造函数
    Circle(int radius) : _radius(radius) {}
    // 覆盖
    string getType() override
    {
        return "Circle";
    }
    float getArea() override
    {
        return 3.14 * _radius * _radius;
    }

private:
    int _radius;
};

int main()
{
    string type;
    int width;
    int length;
    int radius;
    // 输入包括多行
    while (cin >> type)
    {
        // 输入以单词"end"结束
        if (type == "end")
        {
            break;
        }
        // 图形类型（"rectangle"或"circle"）
        else if (type == "rectangle")
        {
            cin >> width >> length;
            // Rectangle *pRec = new Rectangle(width, length);
            unique_ptr<Rectangle> pRec(new Rectangle(width, length));
            cout << pRec->getType() << " area: ";
            cout << fixed << setprecision(2) << pRec->getArea() << endl;
        }
        else if (type == "circle")
        {
            cin >> radius;
            // Circle *pCir = new Circle(radius);
            unique_ptr<Circle> pCir(new Circle(radius));
            cout << pCir->getType() << " area: ";
            cout << fixed << setprecision(2) << pCir->getArea() << endl;
        }
    }

    return 0;
}