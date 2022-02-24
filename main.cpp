// kaoshi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <complex>
#include <bitset>

using namespace std;


int main()
{
	cout << "i * i = " << 1i * 1i << endl;     //标准库定义的字面量后缀
	this_thread::sleep_for(500ms);
	cout << "Hello world"s.substr(0, 5) << endl;

	unsigned mask = 0b11110000;            //0b指明二进制
	cout << bitset<8>(mask) << endl;

	[[maybe_unuesd]]unsigned test = 0b111'000'000;  // 数字分隔符
	cout << test << endl;

	// nullptr nullptr_t  

	// 静态断言,编译期间求值，如果为假，编译会失败
	static_assert(sizeof(void*) == 4, "Only 32-bit targets are supported");


}
