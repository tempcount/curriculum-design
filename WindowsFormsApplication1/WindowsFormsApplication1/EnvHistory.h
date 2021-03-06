#pragma once
#include"SingleAnalyse.h"

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// EnvHistory 摘要
	/// </summary>
	public ref class EnvHistory : public System::Windows::Forms::Form
	{
	public:
		EnvHistory(void)
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
		~EnvHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;

	private: System::Windows::Forms::ToolStripMenuItem^  仓库2分析ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EnvHistory::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->仓库2分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->skinEngine1 = (gcnew Sunisoft::IrisSkin::SkinEngine((cli::safe_cast<System::ComponentModel::Component^>(this))));
			this->groupBox1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(41, 73);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(819, 157);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"选择查询时间范围";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1号车数据表", L"2号车数据表", L"3号车数据表" });
			this->comboBox1->Location = System::Drawing::Point(566, 84);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 31);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EnvHistory::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(586, 44);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"选择数据表";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(356, 44);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"结束时间";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 44);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"开始时间";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(295, 81);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(224, 31);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(40, 80);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(220, 31);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 31);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1070, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStrip2
			// 
			this->menuStrip2->Font = (gcnew System::Drawing::Font(L"华文新魏", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->仓库2分析ToolStripMenuItem,
					this->帮助ToolStripMenuItem, this->退出ToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip2->Size = System::Drawing::Size(1070, 31);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &EnvHistory::menuStrip2_ItemClicked);
			// 
			// 仓库2分析ToolStripMenuItem
			// 
			this->仓库2分析ToolStripMenuItem->Name = L"仓库2分析ToolStripMenuItem";
			this->仓库2分析ToolStripMenuItem->Size = System::Drawing::Size(102, 25);
			this->仓库2分析ToolStripMenuItem->Text = L"指标分析";
			this->仓库2分析ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EnvHistory::仓库2分析ToolStripMenuItem_Click);
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(62, 25);
			this->帮助ToolStripMenuItem->Text = L"帮助";
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(62, 25);
			this->退出ToolStripMenuItem->Text = L"退出";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(41, 262);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(819, 423);
			this->dataGridView1->TabIndex = 4;
			// 
			// skinEngine1
			// 
			this->skinEngine1->SerialNumber = L"";
			this->skinEngine1->SkinFile = L"C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplic"
				L"ation1\\Debug\\MSN.ssk";
			this->skinEngine1->SkinStreamMain = (cli::safe_cast<System::IO::Stream^>(resources->GetObject(L"skinEngine1.SkinStreamMain")));
			// 
			// EnvHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1070, 763);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Font = (gcnew System::Drawing::Font(L"华文新魏", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"EnvHistory";
			this->Text = L"环境数据查询";
			this->Load += gcnew System::EventHandler(this, &EnvHistory::EnvHistory_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 仓库3分析ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void EnvHistory_Load(System::Object^  sender, System::EventArgs^  e) {
			 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=Database.mdb");
			 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

			 con1->Open();    // 打开连接

			 // 清空组合框的列表项

			 this->comboBox1->Items->Clear();

			 // 获取数据表名称，并填充到toolStripComboBox1中

			 // 指定限制列，用于GetOleDbSchemaTable中,返回第四列为table表

			 array<String^>^strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE"};

			 DataTable^table = con1->GetOleDbSchemaTable(

				 OleDbSchemaGuid::Tables, strs);       // 获取数据表名

			 if (table->Rows->Count > 0)

			 {

				 for each(DataRow^ row in table->Rows)

				 {

					 this->comboBox1->Items->Add(row["TABLE_NAME"]);

				 }

				 this->comboBox1->SelectedIndex = 0;

			 }

			 con1->Close();
}
			private: String^ strConn;
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		



}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nIndex = this->comboBox1->SelectedIndex;

			 if (nIndex < 0) return;

			 // 获取选择的数据表名

			 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();

			 // 使用DataAdapter和DataSet

			 String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);


			 OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

			 DataSet^ theSet1 = gcnew DataSet();

			 da1->Fill(theSet1, "Test");         // 重新指定表名称

			 this->dataGridView1->DataSource = theSet1;

			 this->dataGridView1->DataMember = "Test"; // 指定要打开的表
}
private: System::Void 仓库2分析ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SingleAnalyse^ dlg = gcnew SingleAnalyse();
			 dlg->ShowDialog();
}
private: System::Void menuStrip2_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
	private: System::Void 仓库环境评估ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
