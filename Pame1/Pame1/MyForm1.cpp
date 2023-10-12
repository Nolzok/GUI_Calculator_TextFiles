#include "MyForm1.h"

using namespace Pame1;

MyForm1::MyForm1()
{

    InitializeComponent();


    // Create and configure the TextBox control
    //textBox3 = gcnew TextBox(); // Use the existing member textBox1
    //textBox3->Name = "textBox3"; // Set the name of the TextBox control
    //textBox3->Location = Point(10, 10);
    //textBox3->Width = 200;
    //this->Controls->Add(textBox3);



    textBox3->KeyPress += gcnew KeyPressEventHandler(this, &MyForm1::textBox3_KeyPress);
}



void MyForm1::textBox3_KeyPress(System::Object^ sender, KeyPressEventArgs^ e)
{


    // Check if the entered key is a digit (0-9) or the backspace key
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b')
    {

        // If the key is not a digit and not backspace, suppress the event
        e->Handled = true;

    }
    else
        currentExpression = L"";
}















