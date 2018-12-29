#pragma once
#include"EnvDetail.h"
#include"transfer.h"
namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// save 摘要
	/// </summary>
	public ref class save : public System::Windows::Forms::Form
	{
	public:
		save(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~save()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  beginToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  analyseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  recieveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  overviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse1ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse2ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse3ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  sendToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  overviewToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse1ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse2ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse3ToolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  environmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  overviewToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse1ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse2ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse3ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  nowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  overviewToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  warehouse3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  comToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(save::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->beginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->environmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overviewToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse1ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse2ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse3ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overviewToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analyseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recieveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse2ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse3ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sendToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overviewToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse1ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse2ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse3ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->skinEngine1 = (gcnew Sunisoft::IrisSkin::SkinEngine((cli::safe_cast<System::ComponentModel::Component^>(this))));
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->beginToolStripMenuItem,
					this->comToolStripMenuItem, this->analyseToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1207, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// beginToolStripMenuItem
			// 
			this->beginToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->environmentToolStripMenuItem,
					this->nowToolStripMenuItem
			});
			this->beginToolStripMenuItem->Name = L"beginToolStripMenuItem";
			this->beginToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->beginToolStripMenuItem->Text = L"begin";
			// 
			// environmentToolStripMenuItem
			// 
			this->environmentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem2,
					this->warehouse1ToolStripMenuItem3, this->warehouse2ToolStripMenuItem3, this->warehouse3ToolStripMenuItem3
			});
			this->environmentToolStripMenuItem->Name = L"environmentToolStripMenuItem";
			this->environmentToolStripMenuItem->Size = System::Drawing::Size(171, 24);
			this->environmentToolStripMenuItem->Text = L"environment";
			// 
			// overviewToolStripMenuItem2
			// 
			this->overviewToolStripMenuItem2->Name = L"overviewToolStripMenuItem2";
			this->overviewToolStripMenuItem2->Size = System::Drawing::Size(166, 24);
			this->overviewToolStripMenuItem2->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem3
			// 
			this->warehouse1ToolStripMenuItem3->Name = L"warehouse1ToolStripMenuItem3";
			this->warehouse1ToolStripMenuItem3->Size = System::Drawing::Size(166, 24);
			this->warehouse1ToolStripMenuItem3->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem3
			// 
			this->warehouse2ToolStripMenuItem3->Name = L"warehouse2ToolStripMenuItem3";
			this->warehouse2ToolStripMenuItem3->Size = System::Drawing::Size(166, 24);
			this->warehouse2ToolStripMenuItem3->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem3
			// 
			this->warehouse3ToolStripMenuItem3->Name = L"warehouse3ToolStripMenuItem3";
			this->warehouse3ToolStripMenuItem3->Size = System::Drawing::Size(166, 24);
			this->warehouse3ToolStripMenuItem3->Text = L"warehouse3";
			// 
			// nowToolStripMenuItem
			// 
			this->nowToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem3,
					this->warehouse1ToolStripMenuItem, this->warehouse2ToolStripMenuItem, this->warehouse3ToolStripMenuItem
			});
			this->nowToolStripMenuItem->Name = L"nowToolStripMenuItem";
			this->nowToolStripMenuItem->Size = System::Drawing::Size(171, 24);
			this->nowToolStripMenuItem->Text = L"now ";
			// 
			// overviewToolStripMenuItem3
			// 
			this->overviewToolStripMenuItem3->Name = L"overviewToolStripMenuItem3";
			this->overviewToolStripMenuItem3->Size = System::Drawing::Size(166, 24);
			this->overviewToolStripMenuItem3->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem
			// 
			this->warehouse1ToolStripMenuItem->Name = L"warehouse1ToolStripMenuItem";
			this->warehouse1ToolStripMenuItem->Size = System::Drawing::Size(166, 24);
			this->warehouse1ToolStripMenuItem->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem
			// 
			this->warehouse2ToolStripMenuItem->Name = L"warehouse2ToolStripMenuItem";
			this->warehouse2ToolStripMenuItem->Size = System::Drawing::Size(166, 24);
			this->warehouse2ToolStripMenuItem->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem
			// 
			this->warehouse3ToolStripMenuItem->Name = L"warehouse3ToolStripMenuItem";
			this->warehouse3ToolStripMenuItem->Size = System::Drawing::Size(166, 24);
			this->warehouse3ToolStripMenuItem->Text = L"warehouse3";
			// 
			// comToolStripMenuItem
			// 
			this->comToolStripMenuItem->Name = L"comToolStripMenuItem";
			this->comToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->comToolStripMenuItem->Text = L"com";
			this->comToolStripMenuItem->Click += gcnew System::EventHandler(this, &save::comToolStripMenuItem_Click);
			// 
			// analyseToolStripMenuItem
			// 
			this->analyseToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->recieveToolStripMenuItem,
					this->sendToolStripMenuItem
			});
			this->analyseToolStripMenuItem->Name = L"analyseToolStripMenuItem";
			this->analyseToolStripMenuItem->Size = System::Drawing::Size(71, 24);
			this->analyseToolStripMenuItem->Text = L"history";
			// 
			// recieveToolStripMenuItem
			// 
			this->recieveToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem,
					this->warehouse1ToolStripMenuItem1, this->warehouse2ToolStripMenuItem1, this->warehouse3ToolStripMenuItem1
			});
			this->recieveToolStripMenuItem->Name = L"recieveToolStripMenuItem";
			this->recieveToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->recieveToolStripMenuItem->Text = L"recieve";
			// 
			// overviewToolStripMenuItem
			// 
			this->overviewToolStripMenuItem->Name = L"overviewToolStripMenuItem";
			this->overviewToolStripMenuItem->Size = System::Drawing::Size(166, 24);
			this->overviewToolStripMenuItem->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem1
			// 
			this->warehouse1ToolStripMenuItem1->Name = L"warehouse1ToolStripMenuItem1";
			this->warehouse1ToolStripMenuItem1->Size = System::Drawing::Size(166, 24);
			this->warehouse1ToolStripMenuItem1->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem1
			// 
			this->warehouse2ToolStripMenuItem1->Name = L"warehouse2ToolStripMenuItem1";
			this->warehouse2ToolStripMenuItem1->Size = System::Drawing::Size(166, 24);
			this->warehouse2ToolStripMenuItem1->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem1
			// 
			this->warehouse3ToolStripMenuItem1->Name = L"warehouse3ToolStripMenuItem1";
			this->warehouse3ToolStripMenuItem1->Size = System::Drawing::Size(166, 24);
			this->warehouse3ToolStripMenuItem1->Text = L"warehouse3";
			// 
			// sendToolStripMenuItem
			// 
			this->sendToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem1,
					this->warehouse1ToolStripMenuItem2, this->warehouse2ToolStripMenuItem2, this->warehouse3ToolStripMenuItem2
			});
			this->sendToolStripMenuItem->Name = L"sendToolStripMenuItem";
			this->sendToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->sendToolStripMenuItem->Text = L"sell";
			// 
			// overviewToolStripMenuItem1
			// 
			this->overviewToolStripMenuItem1->Name = L"overviewToolStripMenuItem1";
			this->overviewToolStripMenuItem1->Size = System::Drawing::Size(166, 24);
			this->overviewToolStripMenuItem1->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem2
			// 
			this->warehouse1ToolStripMenuItem2->Name = L"warehouse1ToolStripMenuItem2";
			this->warehouse1ToolStripMenuItem2->Size = System::Drawing::Size(166, 24);
			this->warehouse1ToolStripMenuItem2->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem2
			// 
			this->warehouse2ToolStripMenuItem2->Name = L"warehouse2ToolStripMenuItem2";
			this->warehouse2ToolStripMenuItem2->Size = System::Drawing::Size(166, 24);
			this->warehouse2ToolStripMenuItem2->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem2
			// 
			this->warehouse3ToolStripMenuItem2->Name = L"warehouse3ToolStripMenuItem2";
			this->warehouse3ToolStripMenuItem2->Size = System::Drawing::Size(166, 24);
			this->warehouse3ToolStripMenuItem2->Text = L"warehouse3";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"help";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(73, 84);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1075, 308);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &save::groupBox1_Enter);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(138, 15);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(681, 52);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(372, 122);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"出入库";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(293, 46);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 41);
			this->button4->TabIndex = 14;
			this->button4->Text = L"detail";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &save::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(215, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 41);
			this->button3->TabIndex = 13;
			this->button3->Text = L"alarm";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(122, 50);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(66, 30);
			this->textBox6->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(21, 52);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(66, 30);
			this->textBox5->TabIndex = 11;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(36, 44);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(614, 131);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"环境";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(510, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 56);
			this->button2->TabIndex = 9;
			this->button2->Text = L"detail";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &save::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(431, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 52);
			this->button1->TabIndex = 8;
			this->button1->Text = L"alarm";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(331, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(236, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(334, 69);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(66, 30);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 69);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(66, 30);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(66, 30);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 30);
			this->textBox1->TabIndex = 0;
			// 
			// skinEngine1
			// 
			this->skinEngine1->SerialNumber = L"";
			this->skinEngine1->SkinFile = L"C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplic"
				L"ation1\\Debug\\MSN.ssk";
			this->skinEngine1->SkinStreamMain = (cli::safe_cast<System::IO::Stream^>(resources->GetObject(L"skinEngine1.SkinStreamMain")));
			// 
			// save
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1207, 606);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"save";
			this->Text = L"save";
			this->Load += gcnew System::EventHandler(this, &save::save_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void recieveSendToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void save_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 EnvDetail^ envdetail = gcnew EnvDetail;
			 envdetail->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 transfer^ transferdetail = gcnew transfer;
			 transferdetail->ShowDialog();
}
};
}
