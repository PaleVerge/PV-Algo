//
// Created by ritno on 2026/5/5.
//
#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    // --- (1) 流运算符重载 (必须为友元函数) ---
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);

    // --- (2) 成员函数形式重载运算符 ---
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        // 复数乘法公式: (a+bi)(c+di) = (ac-bd) + (ad+bc)i
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    // --- (3) 友元函数形式重载运算符 (与成员函数功能相同，仅作演示) ---
    // 注意：在实际工程中，通常只选择一种方式，若同时存在会引起歧义
    // 这里为了符合题目要求，将友元声明放在类内
    friend Complex add_friend(const Complex& c1, const Complex& c2);
};

// --- 流运算符具体实现 ---
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real;
    if (c.imag >= 0) os << "+";
    os << c.imag << "i";
    return os;
}

istream& operator>>(istream& is, Complex& c) {
    cout << "请输入实部和虚部: ";
    is >> c.real >> c.imag;
    return is;
}

// 友元函数实现
Complex add_friend(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1, c2;

    cout << "测试 cin 重载:" << endl;
    cin >> c1 >> c2;

    // 测试输出与成员函数运算符重载
    cout << "\nc1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    cout << "\n--- 成员函数重载测试 ---" << endl;
    cout << "c1 + c2 = " << (c1 + c2) << endl;
    cout << "c1 - c2 = " << (c1 - c2) << endl;
    cout << "c1 * c2 = " << (c1 * c2) << endl;

    cout << "\n--- 友元函数(演示)测试 ---" << endl;
    cout << "add_friend(c1, c2) = " << add_friend(c1, c2) << endl;

    return 0;
}