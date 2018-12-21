#pragma once

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	using namespace System::Data::Common;
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

	private: System::Windows::Forms::ToolStripMenuItem^  recieveDetailToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  configToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  仓库点ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand;

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
			this->recieveDetailToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->仓库点ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->introductionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbInsertCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->beginToolStripMenuItem,
					this->comToolStripMenuItem, this->仓库点ToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1225, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// beginToolStripMenuItem
			// 
			this->beginToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->recieveDetailToolStripMenuItem });
			this->beginToolStripMenuItem->Name = L"beginToolStripMenuItem";
			this->beginToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->beginToolStripMenuItem->Text = L"综合分析";
			// 
			// recieveDetailToolStripMenuItem
			// 
			this->recieveDetailToolStripMenuItem->Name = L"recieveDetailToolStripMenuItem";
			this->recieveDetailToolStripMenuItem->Size = System::Drawing::Size(176, 24);
			this->recieveDetailToolStripMenuItem->Text = L"recieve detail";
			// 
			// comToolStripMenuItem
			// 
			this->comToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configToolStripMenuItem,
					this->openToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->comToolStripMenuItem->Name = L"comToolStripMenuItem";
			this->comToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			this->comToolStripMenuItem->Text = L"单一仓库分析";
			this->comToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::comToolStripMenuItem_Click);
			// 
			// configToolStripMenuItem
			// 
			this->configToolStripMenuItem->Name = L"configToolStripMenuItem";
			this->configToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->configToolStripMenuItem->Text = L"config";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->openToolStripMenuItem->Text = L"open";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->closeToolStripMenuItem->Text = L"close";
			// 
			// 仓库点ToolStripMenuItem
			// 
			this->仓库点ToolStripMenuItem->Name = L"仓库点ToolStripMenuItem";
			this->仓库点ToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->仓库点ToolStripMenuItem->Text = L"仓库点";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->introductionToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->helpToolStripMenuItem->Text = L"帮助";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::helpToolStripMenuItem_Click);
			// 
			// introductionToolStripMenuItem
			// 
			this->introductionToolStripMenuItem->Name = L"introductionToolStripMenuItem";
			this->introductionToolStripMenuItem->Size = System::Drawing::Size(169, 24);
			this->introductionToolStripMenuItem->Text = L"introduction";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(169, 24);
			this->aboutToolStripMenuItem->Text = L"about";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1225, 490);
			this->dataGridView1->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(361, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(251, 23);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &transfer::comboBox1_SelectedIndexChanged);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT  学号, 课程号, 成绩\r\nFROM      CJB";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=\"C:\\Users\\ASUS\\Desktop\\vc++ curricul"
				L"um design\\curriculum-design\\WindowsFormsApplication1\\WindowsFormsApplication1\\st"
				L"udent.mdb\"";
			this->oleDbConnection1->InfoMessage += gcnew System::Data::OleDb::OleDbInfoMessageEventHandler(this, &transfer::oleDbConnection1_InfoMessage);
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {
				(gcnew System::Data::Common::DataColumnMapping(L"学号",
					L"学号")), (gcnew System::Data::Common::DataColumnMapping(L"课程号", L"课程号")), (gcnew System::Data::Common::DataColumnMapping(L"成绩",
					L"成绩"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"CJB", __mcTemp__1))
			});
			this->oleDbDataAdapter1->RowUpdated += gcnew System::Data::OleDb::OleDbRowUpdatedEventHandler(this, &transfer::oleDbDataAdapter1_RowUpdated);
			// 
			// oleDbInsertCommand
			// 
			this->oleDbInsertCommand->CommandText = L"INSERT INTO `CJB` (`学号`, `课程号`, `成绩`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"学号")), (gcnew System::Data::OleDb::OleDbParameter(L"课程号", System::Data::OleDb::OleDbType::VarWChar,
					0, L"课程号")), (gcnew System::Data::OleDb::OleDbParameter(L"成绩", System::Data::OleDb::OleDbType::Single, 0, L"成绩"))
			});
			// 
			// transfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1225, 518);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"transfer";
			this->Text = L"transfer";
			this->Load += gcnew System::EventHandler(this, &transfer::transfer_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void transfer_Load(System::Object^  sender, System::EventArgs^  e) {
			 strConn = String::Format(

				 "Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplication1\\WindowsFormsApplication1\\student.mdb");
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
private: System::Void oleDbConnection1_InfoMessage(System::Object^  sender, System::Data::OleDb::OleDbInfoMessageEventArgs^  e) {
}
private: System::Void oleDbDataAdapter1_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
}
};
}
