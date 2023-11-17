#define _CRT_SECURE_NO_WARNINGS

//1. 为什么要使用文件？
//数据------>内存中  程序退出、掉电  数据就丢失了
//数据------>硬盘 其实就是存储在文件中，数据就不会因为程序退出、掉电就丢失
//想要数据持久化，就需要存储到文件中！

//2. 什么是文件？
//一般来说，磁盘（硬盘）上的文件就是文件。
//但是在程序设计中，我们一般谈的文件有两种：程序文件、数据文件（从文件的功能角度来分类）

//2.1 程序文件
//包含源程序文件（后缀为.c），目标文件（Windows环境后缀为.obj），可执行程序（Windows环境后缀为。exe）
//举例：
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////程序文件
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//2.2 数据文件
//在以前各章所处理数据的输⼊输出都是以终端为对象的，即从终端的键盘输⼊数据，运⾏结果显⽰到显⽰器上。
//其实有时候我们会把信息输出到磁盘上，当需要的时候再从磁盘上把数据读取到内存中使⽤，这⾥处理的就是磁盘上⽂件。

//2.3 文件名
//一个文件要有一个唯一的文件标识，以便用户识别和引用
//文件名包括3部分：文件路径 + 文件名主干 + 文件后缀
//例如：c : \code\test.txt
//为了方便起见，文件标识常被称为文件名。

//3. 二进制文件和文本文件
//根据数据的组织形式，数据文件被称为文本文件或者二进制文件

//简单理解：
//文本文件：储存文本信息的文件
//储存二进制信息的文件

//举例：
#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//⼆进制的形式写到⽂件中
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//如果test.txt文件不存在，C语言会在该路径下创建该文件，即在“test-2023-11-8”文件夹中创建test.txt文件

//test.txt文件用记事本打开以后看不懂，“源文件 ---> 添加现有项 ---> test.txt ---> 打开方式 ---> 二进制编辑器”

//4. 文件的打开和关闭

//文件的打开和关闭，我们可以理解为给瓶子中灌水：
//（1）打开罐子（打开文件）
//（2）灌水（读/写文件）
//（3）盖上盖子（关闭文件）

//4.1 流和标准流

//4.1.1 流的概念
//流是高度抽象的概念，可以理解为流淌着字符的河，通过流我们可以将数据打印到屏幕、写入硬盘等，C语言程序员只需要将考虑如何将数据写入流中即可，不用关心外部设备是啥，效率就会大大提高

//4.1.2 标准流
//C语言中有很多流，而在C语言启动的时候，默认打开了三个流：
//stdin—标准输入流，在大多数环境中从键盘输入，scanf函数就是从标准输入流中读取数据。
//stdout—标准输出流，大多数环境中输出至显示器界面，printf函数就是将信息输出到标准输出流中。
//stderr—标准错误流，大多数环境中输出到显示器界面

//stdin、stdout、stderr三个流的类型是：FILE* ，通常称为文件指针
//C语言中，通过FILE*来维护流的各种操作

//4.2 文件指针
//缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”

//使用文件，打开文件 ----》 内存中创建一个和这个文件相关的文件信息去区 ----》 这个文件信息区是由FILE类型的结构体来描述的

//int main()
//{
//	FILE;
//	return 0;
//}

//4.3 文件的打开和关闭
//fopen函数来打开文件，fclose来关闭文件

//fopen有以下几种打开方式：
//（1）“r”：文件必须存在，如果不存在，则打开失败
//fopen函数打开失败的话，会返回NULL；如果打开成功，会返回文件信息区的地址FILE*（文件地址）

//（2）“w”：写文件，如果文件存在，会清空原来文件的内容，相当于变成了空文件夹
//                    如果文件不存在，会新建一个空文件

//int main()
//{
	////打开文件
	//FILE* pf = fopen("test.txt", "w");

	////FILE* pf = fopen("D:\C语言项目\test-2023-11-8\test-2023-11-6\test.txt", "w");
	////绝对路径

	////相对路径
	////.表示路径
	////..上一级路径
	////FILE* pf = fopen("../../test-2023-11-8/test.txt", "w");

//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('x', pf);
//	fputc('y', pf);
//	fputc('z', pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//	
//	return 0;
//}

////使用fgetc从标准输入流中读取数据
//int main()
//{
//	int ch = fgetc(stdin);//fgetc从标准输入流中读取数据，并返回对应的ASCII值，如果没有读取成功，就返回EOF！
//	//int ch = getchar();//当fgetc传递的是stdin时，等同于getchar
//	
//	
//	printf("%c\n", ch);
//
//	return 0;
//}

//文件的读取
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//文件的拷贝
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen");
//		fclose(pfread);
//		pfread = NULL;//如果pfread打开文件成功，pfwrite打开文件失败，就关闭第一个打开的文件，将pfread重置为NULL
//		return 1;
//	}
//
//	//拷贝
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	//关闭
//	fclose(pfread);
//	pfread = NULL;
//	
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}

//fgets函数
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行
//	fputs("hello world", pf);
//	fputs("hehe", pf);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行
//	char arr[20] = "xxxxxxxxxxxxxxx";
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//格式化输入输出函数
//fcanf  fprintf
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//另外，我们也可以直接输出到屏幕上
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//
//	/*FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}*/
//
//	//写文件
//	fprintf(stdout, "%d %f %s", s.n, s.f, s.arr);
//
//	//关闭
//	/*fclose(pf);
//	pf = NULL;*/
//	return 0;
//}

//data.txt文件中已经有数据了，我们能否将它们读取出来呢？
//当然可以，这时候我们就需要用到fscanf函数
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), &(s.arr));
//	printf("%d %f %s", s.n, s.f, s.arr);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//对比一组函数
//scanf—针对标准输入流（stdin）的格式化输入函数
//printf—针对标准输出流（stdout）的格式化输出函数

//fscanf—针对所有输入流的格式化输入函数
//fprintf—针对所有输出流的格式化输出函数

//sprintf—将格式化的数据转换成字符串
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//	char arr[20] = { 0 };
//	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//利用sscanf从arr这个字符串中提取出格式化的数据
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//	char arr[20] = { 0 };
//	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
//	printf("%s\n", arr);
//
//	struct S t = { 0 };
//	sscanf(arr, "%d %f %s", &(t.n), &(t.f), t.arr);
//	printf("%d %f %s\n", t.n, t.f, t.arr);
//
//	return 0;
//}

//fseek函数
//int fseek ( FILE * stream, long int offset, int origin );—流、偏移量、起始位
//int main()
//{
//	int arr[10] = { 0 };
//	
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	//定位文件指针
//	//fseek(pf, 6, SEEK_SET);
//	//fseek(pf, -3, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fseek(pf, 5, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//g
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell函数—返回相对于起始位置的偏移量
//int main()
//{
//	int arr[10] = { 0 };
//	
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	//定位文件指针
//	//fseek(pf, 6, SEEK_SET);
//	//fseek(pf, -3, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fseek(pf, 5, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//g
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//让文件指针回到起始位置
//int main()
//{
//	int arr[10] = { 0 };
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	//定位文件指针
//	//fseek(pf, 6, SEEK_SET);
//	//fseek(pf, -3, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fseek(pf, 5, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//g
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//feof函数
//牢记：在文件读取过程中，不能用feof函数的返回值来直接判断文件是否结束
//feof的作用：当文件结束的时候，判断读取结束的原因是否是：遇到文件尾结束

//文件读取结束的原因：1.文件遇到末尾；2.文件读取错误。

//1、文本文件读取是否结束，判断返回值是否为EOF（fgetc），或者NULL（fgets）
//2、二进制文件的读取（fread）结束判断，判断返回值是否小于要读的个数

//ferror函数—判断文件读取是否是因为遇到错误而读取结束

//文本文件的例子：
//int main()
//{
//	int c = 0;
//
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("FILE opening failed");
//		return EXIT_FAILURE;//1
//	}
//	//当fgetc读取失败的时候或遇到文件结束，都会返回EOF
//
//	while ((c = fgetc(fp)) != EOF)
//	{
//		putchar(c);
//	}
//
//	//判断什么原因导致文件读取结束
//	if (ferror(fp))
//	{
//		puts("I/O error when reading");
//	}
//	else if (feof(fp))
//	{
//		puts("End of File reached successfully");
//	}
//	 
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//二进制文件的例子：
//enum { SIZE = 5 };
//
//int main()
//{
//	double a[SIZE] = { 1., 2., 3., 4., 5. };
//	FILE *fp = fopen("test.bin", "wb");//必须⽤⼆进制模式
//	fwrite(a, sizeof (*a), SIZE, fp);//写double的数组		
//	fclose(fp);
//
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof (*b), SIZE, fp);//读double的数组
//
//	if (ret_code == SIZE)
//	{
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n)
//		{
//			printf("%f ", b[n]);
//			putchar('\n');
//		}
//	}
//	else
//	{
//		if (feof(fp))
//		{
//			printf("Error reading test.bin: unexpected end of file\n");
//		}
//		else if (ferror(fp))
//		{
//			perror("Error reading test.bin");
//		}
//	}
//}

//文件缓冲区

//我们写了一个程序，程序中有各种变量，例如：结构体、数组，我们想把他们写到文件中去，而文件存放在硬盘上，把数据写到文件中，不是直接把文件写道硬盘上
//而是先把数据放到缓冲区里面，缓冲区放满，或者我们手动刷新缓冲区，才会把缓冲区里面的数据写到硬盘中去
//我们读文件也是一样的，先放到缓冲区，再传递到程序中去


int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒已经写数据了，打开test.txt文件，发现文件没有内容\n");

	Sleep(10000);

	printf("刷新缓冲区\n");

	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件

	printf("再睡眠10秒此时，再次打开test.txt文件，文件有内容了\n");

	Sleep(10000);

	fclose(pf);//fclose在关闭⽂件的时候，也会刷新缓冲区

	pf = NULL;
	return 0;
}