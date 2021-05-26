// 测试转义字符的效果

#include<stdio.h>

int main()
{
	printf("a\nb\tc");
	printf("dddd\beeee\"fff\"\\");
	printf("\n------------练习部分------\n");
	printf("a\tb\tc\n");	// \t制表符为8个字符，8个字符加上之前不是空格的字符算起
	printf("aa\tbbb\n");
	printf("aaaa\tbbb\n");
	printf("aaaaaaaa\tbbb\n");
	printf("aaaa\tbb\tcccc\n");
	//printf("aaa\cbbb");   /c:无法识别，不是转义字符
	return 0;
}
