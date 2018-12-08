#pragma once

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// transfer 摘要
	/// </summary>
	public ref class transfer : public System::Windows::Forms::Form
	{
	public:
		transfer(void)
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
		~transfer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  beginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  comToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  introductionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  inquireToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  recieveDetailToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  configToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;

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
			this->comToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->introductionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inquireToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recieveDetailToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->beginToolStripMenuItem,
					this->comToolStripMenuItem, this->inquireToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1193, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// beginToolStripMenuItem
			// 
			this->beginToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->recieveDetailToolStripMenuItem });
			this->beginToolStripMenuItem->Name = L"beginToolStripMenuItem";
			this->beginToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->beginToolStripMenuItem->Text = L"begin";
			// 
			// comToolStripMenuItem
			// 
			this->comToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configToolStripMenuItem,
					this->openToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->comToolStripMenuItem->Name = L"comToolStripMenuItem";
			this->comToolStripMenuItem->Size = System::Drawing::Size(102, 24);
			this->comToolStripMenuItem->Text = L"vitural com";
			this->comToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::comToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->introductionToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::helpToolStripMenuItem_Click);
			// 
			// introductionToolStripMenuItem
			// 
			this->introductionToolStripMenuItem->Name = L"introductionToolStripMenuItem";
			this->introductionToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->introductionToolStripMenuItem->Text = L"introduction";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->aboutToolStripMenuItem->Text = L"about";
			// 
			// inquireToolStripMenuItem
			// 
			this->inquireToolStripMenuItem->Name = L"inquireToolStripMenuItem";
			this->inquireToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->inquireToolStripMenuItem->Text = L"inquire";
			// 
			// configToolStripMenuItem
			// 
			this->configToolStripMenuItem->Name = L"configToolStripMenuItem";
			this->configToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->configToolStripMenuItem->Text = L"config";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->openToolStripMenuItem->Text = L"open";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->closeToolStripMenuItem->Text = L"close";
			// 
			// recieveDetailToolStripMenuItem
			// 
			this->recieveDetailToolStripMenuItem->Name = L"recieveDetailToolStripMenuItem";
			this->recieveDetailToolStripMenuItem->Size = System::Drawing::Size(176, 24);
			this->recieveDetailToolStripMenuItem->Text = L"recieve detail";
			// 
			// transfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1193, 563);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"transfer";
			this->Text = L"transfer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
