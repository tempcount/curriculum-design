#pragma once

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// SingleAnalyse 摘要
	/// </summary>
	public ref class SingleAnalyse : public System::Windows::Forms::Form
	{
	public:
		SingleAnalyse(void)
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
		~SingleAnalyse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;

	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;


	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;

	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand;

	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SingleAnalyse::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(631, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"结束时间";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"开始时间";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(562, 49);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(214, 25);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(149, 49);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(271, 25);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(934, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 20);
			this->label1->TabIndex = 13;
			this->label1->Text = L"选择异常数据类型";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"异常数据表_温度", L"异常数据表_湿度", L"异常数据表_振荡度", L"异常数据表_有毒气体" });
			this->comboBox1->Location = System::Drawing::Point(943, 53);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 23);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SingleAnalyse::comboBox1_SelectedIndexChanged);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(36, 90);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(576, 200);
			this->listView1->TabIndex = 11;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &SingleAnalyse::listView1_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(171, 379);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(405, 86);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"报表生成";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 36);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 29);
			this->button2->TabIndex = 17;
			this->button2->Text = L"打印";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 36);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 29);
			this->button1->TabIndex = 16;
			this->button1->Text = L"打印预览";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(727, 499);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"条";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(464, 499);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 20);
			this->label5->TabIndex = 21;
			this->label5->Text = L"异常数据有";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(327, 469);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L" ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(585, 499);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 25);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SingleAnalyse::textBox1_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(446, 321);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 20);
			this->label9->TabIndex = 25;
			this->label9->Text = L" ";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"湿度", L"湿度")), (gcnew System::Data::Common::DataColumnMapping(L"湿度日期时间",
					L"湿度日期时间")), (gcnew System::Data::Common::DataColumnMapping(L"湿度对应车辆", L"湿度对应车辆"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"异常数据表_湿度", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand;
			// 
			// oleDbDeleteCommand
			// 
			this->oleDbDeleteCommand->CommandText = L"DELETE FROM `异常数据表_湿度` WHERE ((`ID` = \?) AND ((\? = 1 AND `湿度` IS NULL) OR (`湿度` ="
				L" \?)) AND ((\? = 1 AND `湿度日期时间` IS NULL) OR (`湿度日期时间` = \?)) AND ((\? = 1 AND `湿度对应车"
				L"辆` IS NULL) OR (`湿度对应车辆` = \?)))";
			this->oleDbDeleteCommand->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_湿度",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_湿度",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"湿度", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_湿度日期时间",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度日期时间", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_湿度日期时间",
					System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度日期时间", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_湿度对应车辆",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度对应车辆", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_湿度对应车辆",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"湿度对应车辆", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=\"C:\\Users\\ASUS\\Desktop\\vc++ curricul"
				L"um design\\curriculum-design\\WindowsFormsApplication1\\WindowsFormsApplication1\\Da"
				L"tabase.mdb\"";
			// 
			// oleDbInsertCommand
			// 
			this->oleDbInsertCommand->CommandText = L"INSERT INTO `异常数据表_湿度` (`湿度`, `湿度日期时间`, `湿度对应车辆`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"湿度",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"湿度")), (gcnew System::Data::OleDb::OleDbParameter(L"湿度日期时间", System::Data::OleDb::OleDbType::Date,
					0, L"湿度日期时间")), (gcnew System::Data::OleDb::OleDbParameter(L"湿度对应车辆", System::Data::OleDb::OleDbType::VarWChar, 0, L"湿度对应车辆"))
			});
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT  *\r\nFROM      [异常数据表_湿度]";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbUpdateCommand
			// 
			this->oleDbUpdateCommand->CommandText = resources->GetString(L"oleDbUpdateCommand.CommandText");
			this->oleDbUpdateCommand->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {
				(gcnew System::Data::OleDb::OleDbParameter(L"湿度",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"湿度")), (gcnew System::Data::OleDb::OleDbParameter(L"湿度日期时间", System::Data::OleDb::OleDbType::Date,
					0, L"湿度日期时间")), (gcnew System::Data::OleDb::OleDbParameter(L"湿度对应车辆", System::Data::OleDb::OleDbType::VarWChar, 0, L"湿度对应车辆")),
					(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
					false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)),
					(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_湿度", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
					static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"湿度", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_湿度",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"湿度", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_湿度日期时间",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度日期时间", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_湿度日期时间",
					System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度日期时间", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_湿度对应车辆",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"湿度对应车辆", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_湿度对应车辆",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"湿度对应车辆", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(731, 217);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 25);
			this->textBox3->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(780, 316);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 25);
			this->textBox4->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(516, 291);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 25);
			this->textBox2->TabIndex = 29;
			// 
			// SingleAnalyse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1165, 606);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"SingleAnalyse";
			this->Text = L"SingleAnalyse";
			this->Load += gcnew System::EventHandler(this, &SingleAnalyse::SingleAnalyse_Load);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SingleAnalyse_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			  private: String^ strConn;
		private: BindingSource^ binding1;
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=Database.mdb");

			 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

			 con1->Open();    // 打开连接
			 int nIndex = this->comboBox1->SelectedIndex;


			 if (nIndex < 0) return;

			 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // 获取选择的数据表名

			 // 使用DataAdapter和DataSet
			 String^ strCmd;
			 String^ strCmd1;
			 String^ strCmd2;
			 String^ strCmd3;
			 int temp1, temp2, temp3;
			 switch (nIndex)
			 {
			 case 0:
				 strCmd = String::Format("SELECT * FROM {0} WHERE 温度日期时间>={1} AND 温度日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd1 = String::Format("SELECT * FROM {0} WHERE 温度日期时间>={1} AND 温度日期时间<={2} AND 温度对应车辆='1号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd2 = String::Format("SELECT * FROM {0} WHERE 温度日期时间>={1} AND 温度日期时间<={2} AND 温度对应车辆='2号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd3 = String::Format("SELECT * FROM {0} WHERE 温度日期时间>={1} AND 温度日期时间<={2} AND 温度对应车辆='3号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());

				 this->label4->Text = "温度";
				 break;
			 case 1:
				 strCmd = String::Format("SELECT * FROM {0} WHERE 湿度日期时间>={1} AND 湿度日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd1 = String::Format("SELECT * FROM {0} WHERE 湿度日期时间>={1} AND 湿度日期时间<={2} AND 湿度对应车辆='1号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd2 = String::Format("SELECT * FROM {0} WHERE 湿度日期时间>={1} AND 湿度日期时间<={2} AND 湿度对应车辆='2号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd3 = String::Format("SELECT * FROM {0} WHERE 湿度日期时间>={1} AND 湿度日期时间<={2} AND 湿度对应车辆='3号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());

				 this->label4->Text = "湿度";
				 break;
			 case 2:
				 strCmd = String::Format("SELECT * FROM {0} WHERE 振荡度日期时间>={1} AND 振荡度日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd1 = String::Format("SELECT * FROM {0} WHERE 振荡度日期时间>={1} AND 振荡度日期时间<={2} AND 振荡度对应车辆='1号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd2 = String::Format("SELECT * FROM {0} WHERE 振荡度日期时间>={1} AND 振荡度日期时间<={2} AND 振荡度对应车辆='2号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd3 = String::Format("SELECT * FROM {0} WHERE 振荡度日期时间>={1} AND 振荡度日期时间<={2} AND 振荡度对应车辆='3号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());

					this->label4->Text = "振荡度";
				 break;
			 case 3:
				 strCmd = String::Format("SELECT * FROM {0} WHERE 有毒气体日期时间>={1} AND 有毒气体日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd1 = String::Format("SELECT * FROM {0} WHERE 有毒气体日期时间>={1} AND 有毒气体日期时间<={2} AND 有毒气体对应车辆='1号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd2 = String::Format("SELECT * FROM {0} WHERE 有毒气体日期时间>={1} AND 有毒气体日期时间<={2} AND 有毒气体对应车辆='2号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 strCmd3 = String::Format("SELECT * FROM {0} WHERE 有毒气体日期时间>={1} AND 有毒气体日期时间<={2} AND 有毒气体对应车辆='3号'", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());

				 this->label4->Text = "有毒气体";
				 break;

			 }

			 this->listView1->Columns->Clear();

			 this->listView1->Items->Clear();
			 //this->textBox1->Text = " ";





			 System::Data::OleDb::OleDbCommand ^ cmd1 = gcnew System::Data::OleDb::OleDbCommand(strCmd1, con1);

			 this->oleDbDataAdapter1->SelectCommand = cmd1;

			 System::Data::DataSet^  dataSet1 = gcnew DataSet();

			 oleDbDataAdapter1->Fill(dataSet1, "TestInfo");
			 // 获取数据表
			 oleDbDataAdapter1->Fill(dataSet1, strTableName);
			 DataTable^ table11 = dataSet1->Tables[strTableName];
			 table11->PrimaryKey = gcnew array<DataColumn^>{ table11->Columns[0] };
			 binding1 = gcnew BindingSource(dataSet1, strTableName);
			 DispView(table11);
			 int i;
			 this->textBox2->Text = this->listView1->Items->Count.ToString();
			 temp1 = this->listView1->Items->Count;




			 System::Data::OleDb::OleDbCommand ^ cmd2 = gcnew System::Data::OleDb::OleDbCommand(strCmd2, con1);

			 this->oleDbDataAdapter1->SelectCommand = cmd2;

			 System::Data::DataSet^  dataSet2 = gcnew DataSet();

			 oleDbDataAdapter1->Fill(dataSet2, "TestInfo");
			 // 获取数据表
			 oleDbDataAdapter1->Fill(dataSet2, strTableName);
			 DataTable^ table12 = dataSet2->Tables[strTableName];
			 table11->PrimaryKey = gcnew array<DataColumn^>{ table11->Columns[0] };
			 binding1 = gcnew BindingSource(dataSet2, strTableName);
			 DispView(table12);
		
			 this->textBox3->Text = this->listView1->Items->Count.ToString();
			 temp2 = this->listView1->Items->Count;



	/*	 System::Data::OleDb::OleDbCommand ^ cmd3 = gcnew System::Data::OleDb::OleDbCommand(strCmd3, con1);

			 this->oleDbDataAdapter1->SelectCommand = cmd3;

			 System::Data::DataSet^  dataSet3 = gcnew DataSet();

			 oleDbDataAdapter1->Fill(dataSet3, "TestInfo");
			 // 获取数据表
			 oleDbDataAdapter1->Fill(dataSet3, strTableName);
			 DataTable^ table13 = dataSet3->Tables[strTableName];
			 table11->PrimaryKey = gcnew array<DataColumn^>{ table13->Columns[0] };*/
			/* binding1 = gcnew BindingSource(dataSet3, strTableName);
			 DispView(table13);*/
			 //int i;
			 /*this->textBox4->Text = this->listView1->Items->Count.ToString();
			 temp3 = this->listView1->Items->Count;*/




			 System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd, con1);

			 this->oleDbDataAdapter1->SelectCommand = cmd;

			 System::Data::DataSet^  dataSet = gcnew DataSet();

			 oleDbDataAdapter1->Fill(dataSet, "TestInfo");
			 // 获取数据表
			 oleDbDataAdapter1->Fill(dataSet, strTableName);
			 DataTable^ table1 = dataSet->Tables[strTableName];
			 table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
			 binding1 = gcnew BindingSource(dataSet, strTableName);
			 DispView(table1);
			// int i;
			 this->textBox1->Text = this->listView1->Items->Count.ToString();

			 //this->listView1->AutoResizeColumn(5, ColumnHeaderAutoResizeStyle::ColumnContent);


			 this->textBox4->Text = (this->listView1->Items->Count - temp1 - temp2).ToString();
			 temp3 = this->listView1->Items->Count;


}

		 	private: System::Void DispView(DataTable^ table)

	{

				 this->listView1->Columns->Clear();

				 this->listView1->Items->Clear();

				 //this->listView1->AutoResizeColumns(ColumnHeaderAutoResizeStyle::ColumnContent);

				 if (table == nullptr) return;

				 ListViewItem^ item;

				 for each (DataRow^ row in table->Rows)

				 {

					 if (row->RowState != DataRowState::Deleted)// 不能是已删除的行

					 {

						 item = gcnew ListViewItem(row[0]->ToString());

						 for (int i = 1; i<table->Columns->Count; i++)

							 item->SubItems->Add(row[i]->ToString());

					 }

					 listView1->Items->Add(item);

				 }

				 // 创建ListView列表头

				 for each (DataColumn^ col in table->Columns)

					 listView1->Columns->Add(col->Caption, 120);

	}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
