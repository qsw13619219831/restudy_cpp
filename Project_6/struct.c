#include<stdio.h>
//д���ṹ�壬��ʵ�����ṹ��
//�ж���ż��
//���1~100��ż��
int panduan(int a) {
	if (a % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	for (int i = 0; i < 101; i++) {
		if (panduan(i)) {
			printf("%d %s\n", i,"��ż��");
		}
		else {
			printf("%d %s\n", i, "����ż��");
		}
	}
	return 0;
}




//char* panduan(int a) {
//	if (a % 2 == 0) {
//		return "ż��";
//	}
//	else {
//		return "����";
//	}
//}
//
//int main() {
//	printf("%s\n",panduan(31));
//	return 0;
//}



//struct students {
//	int age;
//	char sex[5];
//	char name[50];
//};
//
//int main() {
//	struct students stu ={24,"man","ataraqin"};
//	printf("%s %d %s", stu.name, stu.age, stu.sex);
//	
//	//stu.sex, stu.name
//	return 0;
//}