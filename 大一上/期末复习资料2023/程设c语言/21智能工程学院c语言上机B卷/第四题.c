#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main(){
struct time {
    int hour, minute, second;
    char  str[2];
}a;
int t;
printf("������ʱ�䣺");
scanf("%d:%d:%d%s", &a.hour, &a.minute, &a.second,&a.str);
printf("�������Ӻ������(<60)��");
scanf("%d", &t);
a.second = a.second + t;
if (a.second >= 60) {
    a.minute = a.second / 60 + a.minute;
    a.second = a.second % 60;
}
if (a.minute >= 60) {
    a.hour = a.minute / 60 + a.hour;
    a.minute = a.minute % 60;
}
if (a.hour >= 12) {
    a.hour = a.hour % 12;
    if (strcmp(a.str, "am"))
    {
        strcpy(a.str, "am");
    }
    else
    {
        strcpy(a.str, "pm");
    }
}
printf("�ٹ�%d����ʱ��Ϊ��%d:%d:%d%s",t, a.hour, a.minute, a.second, a.str);
    return 0;
}