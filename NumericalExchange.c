#include <stdio.h>


//Swap不能解决问题
//当实参传给形参时，形参是实参的一份临时拷贝（数值一样，但其仍然拥有自己不同地址的空间），对形参的修改是不会改变实参的
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}

void Swap2(int* pa, int* pb)//接收地址、、、、//该地括号内两个值为形参/该形参只在当前函数内使用
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 30;
	//int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);//指针算法，取地址、、、//该地括号内两值为实参/若该地两值为表达式，则必须有条件算出确切值！/也可以为函数---（常量/变量/表达式/函数）
	//↑传址调用
	//Swap1(a, b);//传值调用，函数的形参和实参调用不同内存块/对形参的修改不会影响实参
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d b=%d", a, b);
	return 0;
}