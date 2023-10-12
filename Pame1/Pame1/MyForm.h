#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <vector>
#include "MyForm1.h"


namespace Pame1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//MyForm();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightPink;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->MaximumSize = System::Drawing::Size(200, 150);
			this->label1->MinimumSize = System::Drawing::Size(120, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.15F));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(15, 86);
			this->label2->MaximumSize = System::Drawing::Size(200, 150);
			this->label2->MinimumSize = System::Drawing::Size(80, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.15F));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 132);
			this->label3->MaximumSize = System::Drawing::Size(200, 150);
			this->label3->MinimumSize = System::Drawing::Size(80, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.15F));
			this->textBox1->Location = System::Drawing::Point(12, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 16);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.15F));
			this->textBox2->Location = System::Drawing::Point(12, 155);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 16);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(123, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button3->ForeColor = System::Drawing::Color::Crimson;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(1166, -2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::button3_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(118, 153);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(93, 23);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox2->Location = System::Drawing::Point(217, 153);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(88, 23);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Hide Password";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->Click += gcnew System::EventHandler(this, &MyForm::checkBox2_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(581, 171);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(161)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(0, 11);
			this->label4->MaximumSize = System::Drawing::Size(600, 600);
			this->label4->MinimumSize = System::Drawing::Size(200, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 80);
			this->label4->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Location = System::Drawing::Point(532, 384);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(317, 225);
			this->panel2->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(908, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Sign up";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1239, 621);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)   //
		{
			textBox2->Focus();
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)   //
		{
			button1->PerformClick();
		}
	}
	private: System::Void button3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			Application::Exit();
		}
	}









		   //Sign Up na apothikeuei ta stoixeia se ena arxeio me kommata to opoio exei polles grammes kai i kathe grammi ta xorizei me ','


		   bool isUsernameTaken(const string& username, const string& filename) {
			   ifstream file(filename);
			   if (!file) {
				   throw runtime_error("Error opening file.");
			   }

			   string line;
			   while (getline(file, line)) {
				   string savedUsername, password;
				   size_t pos = line.find(',');
				   savedUsername = line.substr(0, pos);
				   if (username == savedUsername) {
					   return true; // Username already exists
				   }
			   }

			   return false; // Username not found
		   }





		   bool hasSpecialCharacter(const string& password)
		   {
			   for (char c : password)
			   {
				   if (!isalnum(c) && !isspace(c))
				   {
					   return true;
				   }
			   }
			   return false;
		   }


		   void saveCredentialsToFile(const string& username, const string& password, const string& filename) {
			   ofstream file(filename, ios::app); // Open file in append mode
			   if (!file) {
				   throw runtime_error("Error opening file.");
			   }
			   if (!hasSpecialCharacter(password))
			   {
				   MessageBox::Show("Password must contain at least one special character.");
				   return;
			   }
			   else
			   {
				   file << endl << username << "," << password;
			   }
			   }





	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


		label1->Text = "Sign up";
		string username = msclr::interop::marshal_as<string>(textBox1->Text);
		string password = msclr::interop::marshal_as<string>(textBox2->Text);

		try {
			string filename = "login.txt";

			if (!isUsernameTaken(username, filename))
			{
				if ((hasSpecialCharacter(password) == true))
				{
					saveCredentialsToFile(username, password, filename);
					MessageBox::Show("Successfully Signed up!");
				}
				else
				{
					MessageBox::Show("Password needs to contain at least one special character!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show ("Username already in use!","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
		}
		catch (exception& ex) {
			MessageBox::Show(gcnew String(ex.what()));
		}
	}








		   // Otan Patisoyme to EXIT tha kleisei i efarmogi

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		System::Windows::Forms::DialogResult result=MessageBox::Show("Are you sure you want to exit?", "Exit",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}

	}






		   //anoigoume to file kai to xorizoyme se 2 vectors meso ton kommaton


		   vector<pair<string, string>> readCredentialsFromCSV(const string& filename) {
			   ifstream file(filename);
			   if (!file) {
				   throw runtime_error("Error opening file.");
			   }

			   vector<pair<string, string>> credentials;
			   string line;
			   while (getline(file, line)) {
				   stringstream ss(line);
				   string username, password;
				   getline(ss, username, ',');
				   getline(ss, password, ',');
				   credentials.push_back(make_pair(username, password));
			   }

			   return credentials;
		   }



		   //Login checkaroyme na doyme an ta stoixeia einai sosta apo to arxeio login

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {


		label1->Text = "Login";

		string username = msclr::interop::marshal_as<string>(textBox1->Text);
		string password = msclr::interop::marshal_as<string>(textBox2->Text);

		try {
			vector<pair<string, string>> credentials = readCredentialsFromCSV("login.txt");

			bool found = false;
			bool test = false;
			for (const auto& cred : credentials) {
				if (username == cred.first) 
				{
					found = true;
					if (password == cred.second)
					{

						MessageBox::Show("Successfully Logged in!");
						textBox2->Text = "";
						textBox1->Text = "";

						String^ textFromTextBox = textBox1->Text;
						test = true;
						MyForm1^ newForm = gcnew MyForm1();
						//newForm->SetReceivedText = textFromTextBox;
						newForm->Show();

						//this->Close();

						
					}
					else
					{

						MessageBox::Show("Wrong Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						textBox2->Text = ""; //Katharizei ton kodiko

					}
					break;
				}
			}

			if (!found) {
				MessageBox::Show("Wrong Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (exception& ex) {
			MessageBox::Show(gcnew String(ex.what()));
		}
	}






		   //***Diaforateiko Sign Up kai Login Page***



	private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->UseSystemPasswordChar = false;  //na fainontai ta grammata i oxi otan grafo ton kodiko

	}
	private: System::Void checkBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->UseSystemPasswordChar = true;
	}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{

	panel2->Location = System::Drawing::Point(0, 0); //Vazoyme to panel sto kentro
	panel2->Size = System::Drawing::Size(1239, 621); //Megalonoyme to panel sto megethos toy application
	System::Drawing::Image^ backgroundImage = System::Drawing::Image::FromFile("hmm.jpg");  //i fotografia poy theloyme na allaxei
	panel2->BackgroundImage = backgroundImage;      //edo ginetai i metatropi
	panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;   //edo kanoyme stretch tin fotografia


	label4->ForeColor = System::Drawing::Color::FromArgb(255, 128, 0);
	label4->Text = "Testing";
	panel2->Controls->Add(label4);

	button3->Location = System::Drawing::Point(1166, -2); //Vazoyme to Exit button pano dexia
	panel2->Controls->Add(button3); //Vazoume to Exit button na fainetai pano apo to panel

}


	   //Drag to application

	   bool drag;
	   Point offset;

private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	drag = true; //kanoyme enable to dragging
	offset.X = e->X; //x axonas
	offset.Y = e->Y; //y axonas
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	if (drag) //an kanoyme drag
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X-offset.X,currentScreenPosition.Y-offset.Y);
	}

}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	drag = false; //disable to dragging

}
};
}
