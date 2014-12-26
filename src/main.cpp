#include <glew.h>
#include <Windows.h>
#include <stdio.h>

#pragma comment(lib, "glew32.lib")

HGLRC hRC = NULL;



int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPTSTR    lpCmdLine,
					 int       nCmdShow)
{
	if (AllocConsole())
	{
		freopen("CONIN$", "rt", stdin);
		freopen("CONOUT$", "wt", stdout);
		freopen("CONOUT$", "wt", stderr);
		system("chcp 65001");
	}

	MSG msg;
	BOOL done = FALSE;

	if (MessageBox(NULL, "»´∆¡?", "…Ë÷√", MB_YESNO | MB_ICONQUESTION) == IDNO)
	{
		fullsreen = FALSE;
	}
	

	return 0;
}