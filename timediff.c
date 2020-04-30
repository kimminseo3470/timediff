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

	while (1) {
		printf("Enter date1[1~30], hour1[0~23], minute1[0~59]: ");
		scanf("%d %d %d", &d, &h, &m);
		if (d < 1 || d>30 || h < 0 || h>23 || m < 0 || m>59)
			printf("Time error\n");
		else {
			time1.date = d;
			time1.hour = h;
			time1.minute = m;
			break;
		}
	}

	while (1) {
		printf("Enter date2[1~30], hour2[0~23], minute2[0~59]: ");
		scanf("%d %d %d", &d, &h, &m);
		if (d < 1 || d>30 || h < 0 || h>23 || m < 0 || m>59)
			printf("Time error\n");
		else {
			time2.date = d;
			time2.hour = h;
			time2.minute = m;
			break;
		}
	}


	total1 = time1.date * 1440 + time1.hour * 60 + time1.minute;
	total2 = time2.date * 1440 + time2.hour * 60 + time2.minute;
	result = abs(total1 - total2);
	printf("Difference between two times in miutes: %d minutes", result);


	return 0;
}