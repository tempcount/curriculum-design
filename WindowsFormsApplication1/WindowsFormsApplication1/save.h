#pragma once

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->beginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analyseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recieveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sendToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse2ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse3ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overviewToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse1ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse2ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warehouse3ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(1183, 28);
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
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"help";
			// 
			// recieveToolStripMenuItem
			// 
			this->recieveToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem,
					this->warehouse1ToolStripMenuItem1, this->warehouse2ToolStripMenuItem1, this->warehouse3ToolStripMenuItem1
			});
			this->recieveToolStripMenuItem->Name = L"recieveToolStripMenuItem";
			this->recieveToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->recieveToolStripMenuItem->Text = L"recieve";
			// 
			// sendToolStripMenuItem
			// 
			this->sendToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem1,
					this->warehouse1ToolStripMenuItem2, this->warehouse2ToolStripMenuItem2, this->warehouse3ToolStripMenuItem2
			});
			this->sendToolStripMenuItem->Name = L"sendToolStripMenuItem";
			this->sendToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->sendToolStripMenuItem->Text = L"sell";
			// 
			// warehouse1ToolStripMenuItem1
			// 
			this->warehouse1ToolStripMenuItem1->Name = L"warehouse1ToolStripMenuItem1";
			this->warehouse1ToolStripMenuItem1->Size = System::Drawing::Size(175, 24);
			this->warehouse1ToolStripMenuItem1->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem1
			// 
			this->warehouse2ToolStripMenuItem1->Name = L"warehouse2ToolStripMenuItem1";
			this->warehouse2ToolStripMenuItem1->Size = System::Drawing::Size(175, 24);
			this->warehouse2ToolStripMenuItem1->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem1
			// 
			this->warehouse3ToolStripMenuItem1->Name = L"warehouse3ToolStripMenuItem1";
			this->warehouse3ToolStripMenuItem1->Size = System::Drawing::Size(175, 24);
			this->warehouse3ToolStripMenuItem1->Text = L"warehouse3";
			// 
			// overviewToolStripMenuItem
			// 
			this->overviewToolStripMenuItem->Name = L"overviewToolStripMenuItem";
			this->overviewToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->overviewToolStripMenuItem->Text = L"overview";
			// 
			// overviewToolStripMenuItem1
			// 
			this->overviewToolStripMenuItem1->Name = L"overviewToolStripMenuItem1";
			this->overviewToolStripMenuItem1->Size = System::Drawing::Size(175, 24);
			this->overviewToolStripMenuItem1->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem2
			// 
			this->warehouse1ToolStripMenuItem2->Name = L"warehouse1ToolStripMenuItem2";
			this->warehouse1ToolStripMenuItem2->Size = System::Drawing::Size(175, 24);
			this->warehouse1ToolStripMenuItem2->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem2
			// 
			this->warehouse2ToolStripMenuItem2->Name = L"warehouse2ToolStripMenuItem2";
			this->warehouse2ToolStripMenuItem2->Size = System::Drawing::Size(175, 24);
			this->warehouse2ToolStripMenuItem2->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem2
			// 
			this->warehouse3ToolStripMenuItem2->Name = L"warehouse3ToolStripMenuItem2";
			this->warehouse3ToolStripMenuItem2->Size = System::Drawing::Size(175, 24);
			this->warehouse3ToolStripMenuItem2->Text = L"warehouse3";
			// 
			// environmentToolStripMenuItem
			// 
			this->environmentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem2,
					this->warehouse1ToolStripMenuItem3, this->warehouse2ToolStripMenuItem3, this->warehouse3ToolStripMenuItem3
			});
			this->environmentToolStripMenuItem->Name = L"environmentToolStripMenuItem";
			this->environmentToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->environmentToolStripMenuItem->Text = L"environment";
			// 
			// overviewToolStripMenuItem2
			// 
			this->overviewToolStripMenuItem2->Name = L"overviewToolStripMenuItem2";
			this->overviewToolStripMenuItem2->Size = System::Drawing::Size(175, 24);
			this->overviewToolStripMenuItem2->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem3
			// 
			this->warehouse1ToolStripMenuItem3->Name = L"warehouse1ToolStripMenuItem3";
			this->warehouse1ToolStripMenuItem3->Size = System::Drawing::Size(175, 24);
			this->warehouse1ToolStripMenuItem3->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem3
			// 
			this->warehouse2ToolStripMenuItem3->Name = L"warehouse2ToolStripMenuItem3";
			this->warehouse2ToolStripMenuItem3->Size = System::Drawing::Size(175, 24);
			this->warehouse2ToolStripMenuItem3->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem3
			// 
			this->warehouse3ToolStripMenuItem3->Name = L"warehouse3ToolStripMenuItem3";
			this->warehouse3ToolStripMenuItem3->Size = System::Drawing::Size(175, 24);
			this->warehouse3ToolStripMenuItem3->Text = L"warehouse3";
			// 
			// nowToolStripMenuItem
			// 
			this->nowToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->overviewToolStripMenuItem3,
					this->warehouse1ToolStripMenuItem, this->warehouse2ToolStripMenuItem, this->warehouse3ToolStripMenuItem
			});
			this->nowToolStripMenuItem->Name = L"nowToolStripMenuItem";
			this->nowToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->nowToolStripMenuItem->Text = L"now ";
			// 
			// overviewToolStripMenuItem3
			// 
			this->overviewToolStripMenuItem3->Name = L"overviewToolStripMenuItem3";
			this->overviewToolStripMenuItem3->Size = System::Drawing::Size(175, 24);
			this->overviewToolStripMenuItem3->Text = L"overview";
			// 
			// warehouse1ToolStripMenuItem
			// 
			this->warehouse1ToolStripMenuItem->Name = L"warehouse1ToolStripMenuItem";
			this->warehouse1ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->warehouse1ToolStripMenuItem->Text = L"warehouse1";
			// 
			// warehouse2ToolStripMenuItem
			// 
			this->warehouse2ToolStripMenuItem->Name = L"warehouse2ToolStripMenuItem";
			this->warehouse2ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->warehouse2ToolStripMenuItem->Text = L"warehouse2";
			// 
			// warehouse3ToolStripMenuItem
			// 
			this->warehouse3ToolStripMenuItem->Name = L"warehouse3ToolStripMenuItem";
			this->warehouse3ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->warehouse3ToolStripMenuItem->Text = L"warehouse3";
			// 
			// comToolStripMenuItem
			// 
			this->comToolStripMenuItem->Name = L"comToolStripMenuItem";
			this->comToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->comToolStripMenuItem->Text = L"com";
			// 
			// save
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 606);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"save";
			this->Text = L"save";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void recieveSendToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
