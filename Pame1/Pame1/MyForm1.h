#pragma once
#include <string>

namespace Pame1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1();
		//MyForm1(void)
		//{
		//	InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		//}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonEnter;

	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonCOMMA;
	private: System::Windows::Forms::Button^ buttonCLR;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ buttonDivide;

	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Label^ label2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonCLR = (gcnew System::Windows::Forms::Button());
			this->buttonCOMMA = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(218, 9);
			this->label1->MaximumSize = System::Drawing::Size(300, 330);
			this->label1->MinimumSize = System::Drawing::Size(1000, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1000, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calculator Gui";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(603, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(664, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(725, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(603, 278);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(664, 278);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(725, 278);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(603, 324);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(664, 324);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(725, 324);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 40);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Location = System::Drawing::Point(664, 370);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(55, 40);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm1::button0_Click);
			// 
			// buttonCLR
			// 
			this->buttonCLR->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonCLR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonCLR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCLR->Location = System::Drawing::Point(603, 370);
			this->buttonCLR->Name = L"buttonCLR";
			this->buttonCLR->Size = System::Drawing::Size(55, 40);
			this->buttonCLR->TabIndex = 11;
			this->buttonCLR->Text = L"CLEAR";
			this->buttonCLR->UseVisualStyleBackColor = false;
			this->buttonCLR->Click += gcnew System::EventHandler(this, &MyForm1::buttonCLR_Click);
			// 
			// buttonCOMMA
			// 
			this->buttonCOMMA->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonCOMMA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonCOMMA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCOMMA->Location = System::Drawing::Point(725, 370);
			this->buttonCOMMA->Name = L"buttonCOMMA";
			this->buttonCOMMA->Size = System::Drawing::Size(55, 40);
			this->buttonCOMMA->TabIndex = 12;
			this->buttonCOMMA->Text = L",";
			this->buttonCOMMA->UseVisualStyleBackColor = false;
			this->buttonCOMMA->Click += gcnew System::EventHandler(this, &MyForm1::buttonCOMMA_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinus->Location = System::Drawing::Point(786, 232);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(55, 40);
			this->buttonMinus->TabIndex = 13;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm1::buttonMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlus->Location = System::Drawing::Point(786, 278);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(55, 40);
			this->buttonPlus->TabIndex = 14;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm1::buttonPlus_Click);
			// 
			// buttonEnter
			// 
			this->buttonEnter->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonEnter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEnter->Location = System::Drawing::Point(786, 370);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(55, 40);
			this->buttonEnter->TabIndex = 15;
			this->buttonEnter->Text = L"ENTER";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &MyForm1::buttonEnter_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(438, 160);
			this->textBox3->MaximumSize = System::Drawing::Size(236, 100);
			this->textBox3->MinimumSize = System::Drawing::Size(572, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(572, 50);
			this->textBox3->TabIndex = 16;
			// 
			// buttonBack
			// 
			this->buttonBack->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBack->Location = System::Drawing::Point(786, 324);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(55, 40);
			this->buttonBack->TabIndex = 17;
			this->buttonBack->Text = L"BACK";
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm1::buttonBack_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(1429, -1);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(91, 33);
			this->button10->TabIndex = 18;
			this->button10->Text = L"EXIT";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonMultiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMultiply->Location = System::Drawing::Point(857, 232);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(55, 40);
			this->buttonMultiply->TabIndex = 19;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm1::buttonMultiply_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonDivide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDivide->Location = System::Drawing::Point(857, 278);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(55, 40);
			this->buttonDivide->TabIndex = 20;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm1::buttonDivide_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(1162, 53);
			this->label2->MinimumSize = System::Drawing::Size(150, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 25);
			this->label2->TabIndex = 21;
			// 
			// MyForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1521, 627);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonCOMMA);
			this->Controls->Add(this->buttonCLR);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion






		   private:
			   void textBox3_KeyPress(System::Object^ sender, KeyPressEventArgs^ e);
	






	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}




		   //TextBox^ textBox;
		   //String^ currentOperator;
		   //bool isOperatorClicked;
		   //double result;

		   //void InitializeCalculator();
		   //void button_Click(System::Object^ sender, System::EventArgs^ e);
		   //void clearButton_Click(System::Object^ sender, System::EventArgs^ e);
		   //void equalButton_Click(System::Object^ sender, System::EventArgs^ e);
		   //void PerformOperation(String^ op,double secondOperand);








		   bool drag;
		   Point offset;
private: System::Void MyForm1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	drag = true; //kanoyme enable to dragging
	offset.X = e->X; //x axonas
	offset.Y = e->Y; //y axonas

}


private: System::Void MyForm1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	if (drag) //an kanoyme drag
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}

}


private: System::Void MyForm1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	drag = false;

}








	   System::String^ currentExpression;



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e)
{

	Button^ button = safe_cast<Button^>(sender);
	currentExpression += button->Text;
	textBox3->Text = currentExpression;

}





private: System::Void buttonCLR_Click(System::Object^ sender, System::EventArgs^ e) 
{

	textBox3->Text = "";
	currentExpression = "";

}



private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) 
{

	currentExpression += L"-";
	textBox3->Text = currentExpression;

}



private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e)
{

	currentExpression += L"*";
	textBox3->Text = currentExpression;

}

private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e)
{

	currentExpression += L"/";
	textBox3->Text = currentExpression;

}


private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) 
{

	//if (textBox3->Text->Length > 0)
	//{
		//textBox3->Text = textBox3->Text->Substring(0, textBox3->Text->Length - 1);
	//}
	if (currentExpression->Length > 0)
	{
		currentExpression=currentExpression->Substring(0,currentExpression->Length - 1);
		textBox3->Text = currentExpression;
	}

}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
		   Button^ button = safe_cast<Button^>(sender); //to safe_cast testarei na dei an einai sosto date type to button,an einai tote me to sender stelnei auto to button kai to kanei point
		   currentExpression += button->Text; //prosthetoyme sto currentExpression to Text tou Button poy dialexame
		   textBox3->Text = currentExpression;
}


private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) 
{
			//Button^ button = safe_cast<Button^>(sender); 
			//currentExpression += button->Text;


		   currentExpression += L"+";
		   textBox3->Text = currentExpression;
}




private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) 
{

	try 
	{
		System::Data::DataTable dt; 
		auto result = dt.Compute(currentExpression, nullptr); //Kanei mono tou calculations meso tou DataTable,opote den tha xreiazotan na kaneis code tin logiki tou calculator
		currentExpression = result->ToString();
		textBox3->Text = currentExpression;
	}


	catch (System::Exception^ ex) 
	{
		currentExpression = L"Error"; //to current expression einai idi L"" opote otan kanoyme += L"x" tote prosthetoyme se auto to string ena +x
		textBox3->Text = currentExpression;
	}


}




private: System::Void buttonCOMMA_Click(System::Object^ sender, System::EventArgs^ e) 
{

	currentExpression += L".";
	textBox3->Text = currentExpression;

}
};
}
