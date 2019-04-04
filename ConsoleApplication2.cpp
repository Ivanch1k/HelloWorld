// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <Windows.h>
#include <tchar.h>



using namespace std;

void family();

int main()
{
	//SetConsoleOutputCP(1251);
	_tsetlocale(LC_ALL, _T("Russian"));
	//setlocale(LC_ALL, "Russian");
	TCHAR* s = _T("Ivan Иван");
	//tcout << t << endl;
	_tprintf(_T("%s\n"), s);
	family();
	system("pause");
    return 0;
}

void family() {
	char name[] = "Иван";

	wchar_t uniName[9];

	int result = MultiByteToWideChar(CP_ACP, 0, name, sizeof(name), uniName, sizeof(uniName));

	
	
	printf("%s\n", uniName);
	system("pause");
}

