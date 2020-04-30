#include<stdio.h>
#include<math.h>

typedef struct time {
	int date;
	int hour;
	int minute;
}time;

int main(void) {
	printf("timediff");

	int d, h, m;
	int total1, total2;
	int result;
	time time1, time2;

	printf("Enter date1[1~30], hour1[0~23], minute1[0~59]: ");
	scanf("%d %d %d", &d, &h, &m);
	time1.date = d;
	time1.hour = h;
	time1.minute = m;

	printf("Enter date2[1~30], hour2[0~23], minute2[0~59]: ");
	scanf("%d %d %d", &d, &h, &m);

	time2.date = d;
	time2.hour = h;
	time2.minute = m;
	return 0;
}