#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ������Ͷ��ָ���Ȿ����Կ��ǿ�һ��
//�����ͨѶ¼ҲҪ�ܹ�дһƪ����
//ɨ�� 
//�����嶼����Ҫдһƪ����
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
////
//int main()
//{
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("text.txt", "wb");//  ����һ���ļ��Զ����Ƶ���ʽ����д
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	�Զ����Ƶ���ʽд�ļ�
//	fwrite(const void* buffer,size_t size,size_t count,FILE* stream)
//	fwrite(&s, sizeof(struct S), 1, pf);
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S tmp;
//	FILE* pf = fopen("text.txt", "rb");//  ����һ���ļ��Զ����Ƶ���ʽ����д
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�Զ����Ƶ���ʽ���ļ�
//	//fwrite(const void* buffer,size_t size,size_t count,FILE* stream)
//	fread(&tmp, sizeof(struct S), 1, pf); //  ��Ȼ��ǰ�������ö����Ƶ���ʽ�洢�ģ������������ʹ�ø�ʽ����ʽ��ӡ����
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//�μǽṹ�崫��ַ
//��ͨѶ¼�ĳ��ļ��İ汾Contactfile
//����һ��SaveContact(&con);
void SaveContact(contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return ;   // ��Ϊ����void ����
 	}
	//дͨѶ¼�����ݵ��ļ���
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		fwrite(&(ps->date[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}

//���ͨѶ¼���Ƿǳ�ʧ����Ҫ���´�ͷѧһ��
