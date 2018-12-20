#pragma once

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// EnvDetail 摘要
	/// </summary>
	public ref class EnvDetail : public System::Windows::Forms::Form
	{
	public:
		EnvDetail(void)
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
		~EnvDetail()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  hISTORYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iMAGESETTINGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tOOLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  状态栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自动换行ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计与分析ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pAPERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  坐标设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  平滑度设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  曲线图ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  折线图ToolStripMenuItem;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->hISTORYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iMAGESETTINGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tOOLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->统计与分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pAPERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->状态栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自动换行ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->坐标设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->平滑度设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->曲线图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->折线图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(68, 363);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(165, 28);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 325);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Select";
			this->label1->Click += gcnew System::EventHandler(this, &EnvDetail::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(531, 83);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(909, 627);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DISPLAY";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->numericUpDown6);
			this->groupBox2->Controls->Add(this->numericUpDown7);
			this->groupBox2->Controls->Add(this->numericUpDown8);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Location = System::Drawing::Point(68, 434);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(391, 347);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"EXPECT SETTING";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(115, 103);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(101, 30);
			this->numericUpDown1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(115, 159);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(101, 30);
			this->numericUpDown2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(115, 217);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(101, 30);
			this->numericUpDown3->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(115, 271);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(101, 30);
			this->numericUpDown4->TabIndex = 9;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(263, 273);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(101, 30);
			this->numericUpDown5->TabIndex = 14;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(263, 219);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(101, 30);
			this->numericUpDown6->TabIndex = 13;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(263, 161);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(101, 30);
			this->numericUpDown7->TabIndex = 12;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(263, 105);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(101, 30);
			this->numericUpDown8->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(123, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"EXPECT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(279, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"ERROR";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(351, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 348);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 56);
			this->button2->TabIndex = 5;
			this->button2->Text = L"LED";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->hISTORYToolStripMenuItem,
					this->iMAGESETTINGToolStripMenuItem, this->tOOLToolStripMenuItem, this->统计与分析ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1814, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// hISTORYToolStripMenuItem
			// 
			this->hISTORYToolStripMenuItem->Name = L"hISTORYToolStripMenuItem";
			this->hISTORYToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->hISTORYToolStripMenuItem->Text = L"HISTORY";
			// 
			// iMAGESETTINGToolStripMenuItem
			// 
			this->iMAGESETTINGToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->坐标设置ToolStripMenuItem,
					this->平滑度设置ToolStripMenuItem, this->格式设置ToolStripMenuItem
			});
			this->iMAGESETTINGToolStripMenuItem->Name = L"iMAGESETTINGToolStripMenuItem";
			this->iMAGESETTINGToolStripMenuItem->Size = System::Drawing::Size(136, 24);
			this->iMAGESETTINGToolStripMenuItem->Text = L"IMAGE SETTING";
			// 
			// tOOLToolStripMenuItem
			// 
			this->tOOLToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->工具栏ToolStripMenuItem,
					this->状态栏ToolStripMenuItem, this->字体ToolStripMenuItem, this->自动换行ToolStripMenuItem
			});
			this->tOOLToolStripMenuItem->Name = L"tOOLToolStripMenuItem";
			this->tOOLToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->tOOLToolStripMenuItem->Text = L"TOOL";
			this->tOOLToolStripMenuItem->Click += gcnew System::EventHandler(this, &EnvDetail::tOOLToolStripMenuItem_Click);
			// 
			// 统计与分析ToolStripMenuItem
			// 
			this->统计与分析ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->pAPERToolStripMenuItem,
					this->pARAMETER1ToolStripMenuItem, this->pARAMETER2ToolStripMenuItem, this->pARAMETER3ToolStripMenuItem, this->pARAMETER4ToolStripMenuItem
			});
			this->统计与分析ToolStripMenuItem->Name = L"统计与分析ToolStripMenuItem";
			this->统计与分析ToolStripMenuItem->Size = System::Drawing::Size(96, 24);
			this->统计与分析ToolStripMenuItem->Text = L"统计与分析";
			// 
			// pAPERToolStripMenuItem
			// 
			this->pAPERToolStripMenuItem->Name = L"pAPERToolStripMenuItem";
			this->pAPERToolStripMenuItem->Size = System::Drawing::Size(178, 24);
			this->pAPERToolStripMenuItem->Text = L"PAPER";
			// 
			// pARAMETER1ToolStripMenuItem
			// 
			this->pARAMETER1ToolStripMenuItem->Name = L"pARAMETER1ToolStripMenuItem";
			this->pARAMETER1ToolStripMenuItem->Size = System::Drawing::Size(178, 24);
			this->pARAMETER1ToolStripMenuItem->Text = L"PARAMETER1";
			// 
			// pARAMETER2ToolStripMenuItem
			// 
			this->pARAMETER2ToolStripMenuItem->Name = L"pARAMETER2ToolStripMenuItem";
			this->pARAMETER2ToolStripMenuItem->Size = System::Drawing::Size(178, 24);
			this->pARAMETER2ToolStripMenuItem->Text = L"PARAMETER2";
			// 
			// pARAMETER3ToolStripMenuItem
			// 
			this->pARAMETER3ToolStripMenuItem->Name = L"pARAMETER3ToolStripMenuItem";
			this->pARAMETER3ToolStripMenuItem->Size = System::Drawing::Size(178, 24);
			this->pARAMETER3ToolStripMenuItem->Text = L"PARAMETER3";
			// 
			// pARAMETER4ToolStripMenuItem
			// 
			this->pARAMETER4ToolStripMenuItem->Name = L"pARAMETER4ToolStripMenuItem";
			this->pARAMETER4ToolStripMenuItem->Size = System::Drawing::Size(178, 24);
			this->pARAMETER4ToolStripMenuItem->Text = L"PARAMETER4";
			// 
			// 工具栏ToolStripMenuItem
			// 
			this->工具栏ToolStripMenuItem->Name = L"工具栏ToolStripMenuItem";
			this->工具栏ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->工具栏ToolStripMenuItem->Text = L"工具栏";
			// 
			// 状态栏ToolStripMenuItem
			// 
			this->状态栏ToolStripMenuItem->Name = L"状态栏ToolStripMenuItem";
			this->状态栏ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->状态栏ToolStripMenuItem->Text = L"状态栏";
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->字体ToolStripMenuItem->Text = L"字体";
			// 
			// 自动换行ToolStripMenuItem
			// 
			this->自动换行ToolStripMenuItem->Name = L"自动换行ToolStripMenuItem";
			this->自动换行ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->自动换行ToolStripMenuItem->Text = L"自动换行";
			// 
			// 坐标设置ToolStripMenuItem
			// 
			this->坐标设置ToolStripMenuItem->Name = L"坐标设置ToolStripMenuItem";
			this->坐标设置ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->坐标设置ToolStripMenuItem->Text = L"坐标设置";
			// 
			// 平滑度设置ToolStripMenuItem
			// 
			this->平滑度设置ToolStripMenuItem->Name = L"平滑度设置ToolStripMenuItem";
			this->平滑度设置ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->平滑度设置ToolStripMenuItem->Text = L"平滑度设置";
			// 
			// 格式设置ToolStripMenuItem
			// 
			this->格式设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->曲线图ToolStripMenuItem,
					this->折线图ToolStripMenuItem
			});
			this->格式设置ToolStripMenuItem->Name = L"格式设置ToolStripMenuItem";
			this->格式设置ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->格式设置ToolStripMenuItem->Text = L"格式设置";
			// 
			// 曲线图ToolStripMenuItem
			// 
			this->曲线图ToolStripMenuItem->Name = L"曲线图ToolStripMenuItem";
			this->曲线图ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->曲线图ToolStripMenuItem->Text = L"曲线图";
			// 
			// 折线图ToolStripMenuItem
			// 
			this->折线图ToolStripMenuItem->Name = L"折线图ToolStripMenuItem";
			this->折线图ToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->折线图ToolStripMenuItem->Text = L"折线图";
			// 
			// EnvDetail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1814, 808);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"EnvDetail";
			this->Text = L"EnvDetail";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tOOLToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
