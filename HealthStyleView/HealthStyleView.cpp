#include "pch.h"
#include "HealthStyleMainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	HealthStyleView::HealthStyleMainForm form;
	Application::Run(% form);
    return 0;
}
