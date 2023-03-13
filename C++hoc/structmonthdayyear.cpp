#include "stdio.h"
#include <stdlib.h>

struct Date {
	int day;
	int month;
	int year;
};

void inputDate (struct Date &d){
	printf("Input day:\n");
	scanf("%d", &d.day);
	printf("Input month:\n");
	scanf("%d", &d.month);
	printf("nhap year:\n");
	scanf("%d", &d.year);
}

void printfDate (struct Date d){
	printf("%d/%d/%d: la ngay ban vua nhap vao", d.day, d.month, d.year);
}



int main(int argc, char *argv[]) {
	struct Date myDate;
	inputDate(myDate);
	printfDate(myDate);
	return 0;
}
