#pragma once
#include"admin.h"
#include"save.h"
#include"transfer.h"
#include"EnvDetail.h"
namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: Sunisoft::IrisSkin::SkinEngine^  skinEngine1;






	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->skinEngine1 = (gcnew Sunisoft::IrisSkin::SkinEngine((cli::safe_cast<System::ComponentModel::Component^>(this))));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(69, 45);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"用户名";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(78, 114);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(60, 171);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(457, 101);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"登录身份";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(318, 56);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(111, 25);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"高级管理";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(184, 56);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(111, 25);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"环境管理";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(42, 56);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 25);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"库存管理";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 28);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 28);
			this->textBox2->TabIndex = 6;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Location = System::Drawing::Point(380, 114);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(112, 25);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"显示密码";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(150, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 44);
			this->button1->TabIndex = 8;
			this->button1->Text = L"登录";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(315, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 44);
			this->button3->TabIndex = 10;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// skinEngine1
			// 
			this->skinEngine1->SerialNumber = L"";
			this->skinEngine1->SkinFile = L"C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplic"
				L"ation1\\Debug\\MSN.ssk";
			this->skinEngine1->SkinStreamMain = (cli::safe_cast<System::IO::Stream^>(resources->GetObject(L"skinEngine1.SkinStreamMain")));
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(569, 418);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"华文新魏", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"登录";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 textBox2->PasswordChar = checkBox2->Checked ? 0 : '*';   // 取消或设置密码字符
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ strLogon = L"输入的登录信息:\r\n";

			 if (textBox1->Text == String::Empty) strLogon += L"未输入用户名\r\n";

			 else strLogon += textBox1->Text + L"\r\n";

			 if (textBox2->Text == String::Empty) strLogon += L"未输入登录密码\r\n";

			 else strLogon += textBox2->Text + L"\r\n";

			 strLogon += L"登录身份: ";

			 if (radioButton1->Checked) strLogon += L"库存管理员用户\r\n";

			 else if (radioButton2->Checked) strLogon += L"环境管理员用户\r\n";

			 else if (radioButton3->Checked) strLogon += L"高级管理员\r\n";

			 else strLogon += L"未知身份\r\n";


			 if (((textBox1->Text == "abc" &&  textBox2->Text == "123") || (textBox1->Text == "admin" && textBox2->Text == "admin123") )&& radioButton1->Checked)

			 {

					MessageBox::Show(strLogon);         //显示用户输入的信息	 
					transfer^ transferform = gcnew transfer;
					transferform->ShowDialog();
			 }
			 else if (((textBox1->Text == "abc" &&  textBox2->Text == "123") || (textBox1->Text == "admin" && textBox2->Text == "admin123") )&& radioButton2->Checked)

			 {

				 MessageBox::Show(strLogon);         //显示用户输入的信息	 
				 EnvDetail^ saveform = gcnew EnvDetail;
				 saveform->ShowDialog();
			 }
			 else if ((textBox1->Text == "abc" && textBox2->Text == "123") && radioButton3->Checked)

			 {

				 MessageBox::Show(strLogon);         //显示用户输入的信息	 
				 admin^ adminform = gcnew admin;
				 adminform->ShowDialog();
			 }
			 
			 else
			 {
				 MessageBox::Show("没有此用户名或密码错误！");
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}

};
}

