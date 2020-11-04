#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指数基金投资指南这本书可以考虑看一下
//针对于通讯录也要能够写一篇博客
//扫雷 
//三子棋都是需要写一篇博客
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
////
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("text.txt", "wb");//  创建一个文件以二进制的形式进行写
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	以二进制的形式写文件
//	fwrite(const void* buffer,size_t size,size_t count,FILE* stream)
//	fwrite(&s, sizeof(struct S), 1, pf);
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S tmp;
//	FILE* pf = fopen("text.txt", "rb");//  创建一个文件以二进制的形式进行写
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//以二进制的形式读文件
//	//fwrite(const void* buffer,size_t size,size_t count,FILE* stream)
//	fread(&tmp, sizeof(struct S), 1, pf); //  虽然在前面我是用二进制的形式存储的，但是这里可以使用格式化形式打印出来
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//牢记结构体传地址
//把通讯录改成文件的版本Contactfile
//增加一个SaveContact(&con);
void SaveContact(contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return ;   // 因为他是void 类型
 	}
	//写通讯录中数据到文件中
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		fwrite(&(ps->date[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}

//这个通讯录算是非常失败了要重新从头学一遍
