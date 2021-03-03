//  递归

// 接受 一个整型值（无符号），按照顺序打印它的每一位，例如 输入:1234  输出 ： 1 2 3 4，


//
//void print(int n)
//{
//	if (n > 9)//说明 n 是 两位数以上
//	{
//		print(n / 10);//再次带入  自定义函数 print  直至n<10
//
//	}
//	printf("%d ", n % 10);// 每次打印 个位数 的 数字
//
//}
//
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);// 1234
//	//1234%10=4  1234/10=123 123%10=3 123/10=12  12%10=2  12/10=1
//	//递归
//	print(num);
//	// print(1234)
//	// print(123) 4
//	// print(12) 3 4
//	// print(1) 2 3 4
//	return 0;
//}




// 编写 函数 不允许创建临时变量，求字符串的长度。





//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int count = 0;
//	char arr[] = "czy";
//	int len = strlen(arr);
//	printf("%d ", len);
//	//for()
//	return 0;
//}



//int my_strlen(char* st)//最终要求出一个长度 因此返回值应该是一个 整数 所以 写一个 int
//{
//	int count = 0;
//	 while(*st!='\0')
//	{
//		 count++;
//		 st++;
//	}
//	 return count;
//
//}
//
//
//
//
//int main()
//{
//	//int count = 0;
//	char arr[] = "czy";
//	//  my_strlen     自己写求字符串长度的函数
//	int len = my_strlen(arr);// arr是数组，数组传参 ，传过去的不是整个数组，而是第一个元素的地址  如 此数组中的 c  
//	printf("%d ", len);
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "czy";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

// 此程序使用到了 count  临时变量 不满足条件





//使用递归的方法写


//int my_strlen(char* str)// str  是一个指针变量   当 arr 传上来时 是 czy\n   但读取的是 第一个元素的地址 c  
//{
//	if (*str != '\0')//  此处验证传的是传递过来的地址是不是  \0  
//
//		return 1 + my_strlen(str + 1);
//	//把 大事化小
//	// my_strlen("czy")
//	//1+my_strlen("zy")
//	//1+1+my_strlen("y")
//	//1+1+1+my_strlen("")
//	//1+1+1+0
//	else
//		return 0;
//		
//}
//
//int main()
//{
//	char arr[] = "czy";
//	int len = my_strlen(arr);// 数组传参 传过去的不是整个数组 而是第一个元素的地址 因此传过去的是一个地址
//	printf("%d ", len);
//	return 0;
//}





//迭代


//求n的阶乘

//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//
//int Facl2(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x*Facl2(x - 1);
//}
////递归
//
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl2(n);
//	printf("%d ", ret);
//	return 0;
//}






//求第n个斐波那契数（不考虑溢出）

// 斐波那契数列 ：  1 1 2 3 5 8 13 21 34 55-----     前两个数值之和等于第三个数


//int F(int e)
//{
//	if (e <= 2)
//		return 1;
//	else
//		return F(e - 1) + F(e - 2);
//}
//效率低 计算量大







// 1 1 2 3 5 8 13 21 34 55----
// a b c
//   a b c
//     a b c



//int F(int e)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (e > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		e--;// 当要计算第四个 斐波那契数时  只需要算 2次 
//	}
//	return c;
//}
//
//
//
//
//
//
//int main()
//{
//	int e = 0;
//	int ret = 0;
//	scanf("%d", &e);
//	ret = F(e);
//	printf("%d", ret);
//	return 0;
//}