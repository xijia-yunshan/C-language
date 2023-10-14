#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//⽐如，我们要搞⼀个活动，要上线⼀个礼品兑换单，礼品兑换单中有三种商品：图书、杯⼦、衬衫。
//每⼀种商品都有：库存量、价格、商品类型和商品类型相关的其他信息。
//图书：库存量、价格、商品类型——书名、作者、⻚数
//杯⼦：库存量、价格、商品类型——设计
//衬衫：库存量、价格、商品类型——设计、可选颜⾊、可选尺⼨
//
//一般的思考方法：
//struct gift_list
//{
//	//公共属性
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	//特殊属性
//	char title[20];//书名
//	char author[20];//作者
//	int num_pages;//⻚数
//
//	char design[30];//设计
//	int colors;//颜⾊
//	int sizes;//尺⼨
//};
//我们会发现结构的设计中包含了所有礼品的各种属性，这样使得结构体就会偏⼤，⽐较浪费内存。

struct gift_list
{
	//公共属性
	int stock_number;//库存量
	double price;//定价
	int item_type;//商品类型

	union
	{
		struct
		{
			char title[20];//书名
			char author[20];//作者
			char num_pages;//页数
		}book;

		struct
		{
			char design[30];//设计
		}cup;

		struct
		{
			char design[30];//设计
			int colors;//颜⾊
			int sizes;//尺⼨
		}shirt;

	}item;

};

int main()
{
	struct gift_list gl = { 0 };
	gl.stock_number = 100;
	gl.price = 25;
	gl.item_type = 2;
	gl.item.book.num_pages = 355;
	return 0;
}