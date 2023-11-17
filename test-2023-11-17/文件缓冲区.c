#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

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