#pragma once

namespace WindowsFormsApplication2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;

	using namespace System::Data::OleDb;

	using namespace System::Data::Common;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  diaoyongshujukuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^  inputToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			this->diaoyongshujukuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->inputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->diaoyongshujukuToolStripMenuItem,
					this->toolStripComboBox1, this->inputToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(983, 32);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// diaoyongshujukuToolStripMenuItem
			// 
			this->diaoyongshujukuToolStripMenuItem->Name = L"diaoyongshujukuToolStripMenuItem";
			this->diaoyongshujukuToolStripMenuItem->Size = System::Drawing::Size(145, 28);
			this->diaoyongshujukuToolStripMenuItem->Text = L"diaoyongshujuku";
			this->diaoyongshujukuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::diaoyongshujukuToolStripMenuItem_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 28);
			this->toolStripComboBox1->Click += gcnew System::EventHandler(this, &Form1::toolStripComboBox1_Click);
			// 
			// inputToolStripMenuItem
			// 
			this->inputToolStripMenuItem->Name = L"inputToolStripMenuItem";
			this->inputToolStripMenuItem->Size = System::Drawing::Size(59, 28);
			this->inputToolStripMenuItem->Text = L"input";
			this->inputToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::inputToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 83);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(921, 278);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(457, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(572, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 401);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void diaoyongshujukuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void inputToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 private: String^ strConn;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^  pOFD = gcnew OpenFileDialog();

			 pOFD->Filter = "Access文件(*.mdb)|*.mdb";

			 pOFD->DefaultExt = "mdb";

			 if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

			 strConn = String::Format(

				 "Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);

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
private: System::Void toolStripComboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
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

			 /* 直接使用表

			 DataTable^ table = gcnew DataTable;

			 da1->Fill( table );

			 this->dataGridView1->DataSource =table;*/
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

