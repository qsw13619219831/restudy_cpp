#include<stdio.h>
//写个结构体，并实例化结构体
//判断奇偶数
//输出1~100的偶数
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
			printf("%d %s\n", i,"是偶数");
		}
		else {
			printf("%d %s\n", i, "不是偶数");
		}
	}
	return 0;
}




//char* panduan(int a) {
//	if (a % 2 == 0) {
//		return "偶数";
//	}
//	else {
//		return "奇数";
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