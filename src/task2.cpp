#include "task2.h"
#include <Windows.h>

const char* greet(int hour, int min)
{
	SetConsoleCP(1251);		
	SetConsoleOutputCP(1251);
    const char* str[] = { "������������ �����", "������ ����!",
		"������ ����!", "������ ����!", "������ �����!" };
    if (hour >= 0 && hour < 6)
        return str[1];
    else if (hour >= 6 && hour < 11)
        return str[2];
    else if (hour >= 11 && hour < 18)
        return str[3];
    else if (hour >= 18 && hour <= 23)
        return str[4];
    return str[0];
} 