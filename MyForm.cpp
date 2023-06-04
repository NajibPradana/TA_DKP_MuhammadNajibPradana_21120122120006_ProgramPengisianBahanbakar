#include "MyForm.h"
#include "Pengisian.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TugasBesar::MyForm form;
	Application::Run(% form);
}

