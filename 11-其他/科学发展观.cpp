#include<stdio.h>
#include<windows.h>
void show(const char *s)
{
	while(*s)
	{
		printf("%c",*s++);
		Sleep(80);
	}
}
int main()
{
	system("color 1F");
	system("cls");
	
	show("\n\n          科学发展观\n\n");
	Sleep(500);
	
	show("  第一要义：发展\n");
	show("  核心立场：以人为本\n");
	show("  基本方法：全面协调可持续\n");
	show("  根本方法：统筹兼顾\n\n");
	
	Sleep(800);
	show("  实现全面协调可持续的科学发展\n");
	show("  促进社会和谐，推动国家进步\n\n");
	
	system("pause");
	return 0;
}
