#include "stdafx.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

#include "JanelaPrincipal.h"
[STAThreadAttribute]
int Main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ProjetoSoft1::JanelaPrincipal());
    return 0;
}
