#pragma once
#include"SaveAnalyse.h"
#include"FruitAnalyse.h"
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
	/// transfer ժҪ
	/// </summary>
	public ref class transfer : public System::Windows::Forms::Form
	{
	public:
		transfer(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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





	private: System::Windows::Forms::ToolStripMenuItem^  �ֿ��ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->beginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ֿ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->comToolStripMenuItem, this->�ֿ��ToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(919, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// beginToolStripMenuItem
			// 
			this->beginToolStripMenuItem->Name = L"beginToolStripMenuItem";
			this->beginToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->beginToolStripMenuItem->Text = L"�ۺϷ���";
			this->beginToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::beginToolStripMenuItem_Click);
			// 
			// comToolStripMenuItem
			// 
			this->comToolStripMenuItem->Name = L"comToolStripMenuItem";
			this->comToolStripMenuItem->Size = System::Drawing::Size(92, 21);
			this->comToolStripMenuItem->Text = L"��һ�ֿ����";
			this->comToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::comToolStripMenuItem_Click);
			// 
			// �ֿ��ToolStripMenuItem
			// 
			this->�ֿ��ToolStripMenuItem->Name = L"�ֿ��ToolStripMenuItem";
			this->�ֿ��ToolStripMenuItem->Size = System::Drawing::Size(56, 21);
			this->�ֿ��ToolStripMenuItem->Text = L"�ֿ��";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->introductionToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->helpToolStripMenuItem->Text = L"����";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &transfer::helpToolStripMenuItem_Click);
			// 
			// introductionToolStripMenuItem
			// 
			this->introductionToolStripMenuItem->Name = L"introductionToolStripMenuItem";
			this->introductionToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->introductionToolStripMenuItem->Text = L"introduction";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->aboutToolStripMenuItem->Text = L"about";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 83);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(885, 285);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &transfer::dataGridView1_CellContentClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(196, 44);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(189, 20);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &transfer::comboBox1_SelectedIndexChanged);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT  ѧ��, �γ̺�, �ɼ�\r\nFROM      CJB";
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
				(gcnew System::Data::Common::DataColumnMapping(L"ѧ��",
					L"ѧ��")), (gcnew System::Data::Common::DataColumnMapping(L"�γ̺�", L"�γ̺�")), (gcnew System::Data::Common::DataColumnMapping(L"�ɼ�",
					L"�ɼ�"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"CJB", __mcTemp__1))
			});
			this->oleDbDataAdapter1->RowUpdated += gcnew System::Data::OleDb::OleDbRowUpdatedEventHandler(this, &transfer::oleDbDataAdapter1_RowUpdated);
			// 
			// oleDbInsertCommand
			// 
			this->oleDbInsertCommand->CommandText = L"INSERT INTO `CJB` (`ѧ��`, `�γ̺�`, `�ɼ�`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ѧ��",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"ѧ��")), (gcnew System::Data::OleDb::OleDbParameter(L"�γ̺�", System::Data::OleDb::OleDbType::VarWChar,
					0, L"�γ̺�")), (gcnew System::Data::OleDb::OleDbParameter(L"�ɼ�", System::Data::OleDb::OleDbType::Single, 0, L"�ɼ�"))
			});
			// 
			// transfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(919, 414);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
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
			 SaveAnalyse^ dlg = gcnew SaveAnalyse();
			 dlg->ShowDialog();
}
private: System::Void transfer_Load(System::Object^  sender, System::EventArgs^  e) {
			 strConn = String::Format(

				 "Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplication1\\WindowsFormsApplication1\\student.mdb");
			 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

			 con1->Open();    // ������

			 // �����Ͽ���б���

			 this->comboBox1->Items->Clear();

			 // ��ȡ���ݱ����ƣ�����䵽toolStripComboBox1��

			 // ָ�������У�����GetOleDbSchemaTable��,���ص�����Ϊtable��

			 array<String^>^strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE"};

			 DataTable^table = con1->GetOleDbSchemaTable(

				 OleDbSchemaGuid::Tables, strs);       // ��ȡ���ݱ���

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

			 // ��ȡѡ������ݱ���

			 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();

			 // ʹ��DataAdapter��DataSet

			 String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);


			 OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

			 DataSet^ theSet1 = gcnew DataSet();

			 da1->Fill(theSet1, "Test");         // ����ָ��������

			 this->dataGridView1->DataSource = theSet1;

			 this->dataGridView1->DataMember = "Test"; // ָ��Ҫ�򿪵ı�
}
private: System::Void oleDbConnection1_InfoMessage(System::Object^  sender, System::Data::OleDb::OleDbInfoMessageEventArgs^  e) {
}
private: System::Void oleDbDataAdapter1_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void beginToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FruitAnalyse^ dlg = gcnew FruitAnalyse();
			 dlg->ShowDialog();
}
};
}
