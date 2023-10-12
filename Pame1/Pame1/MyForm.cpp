#include "MyForm.h"
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{

        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        Pame1::MyForm form;
        Application::Run(% form);
    
}
