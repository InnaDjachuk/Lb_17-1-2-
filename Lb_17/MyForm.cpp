#include "MyForm.h"
#include "MyForm1.h"
#include <Windows.h>

using namespace Lb17;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}