#pragma once

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// EnvDetail ժҪ
	/// </summary>
	public ref class EnvDetail : public System::Windows::Forms::Form
	{
	public:
		EnvDetail(void)
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
		~EnvDetail()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;

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
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ״̬��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Զ�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͳ�������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pAPERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARAMETER4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ƽ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::GroupBox^  ʵʱ����;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �򿪴���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �رմ���ToolStripMenuItem;









	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�򿪴���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�رմ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hISTORYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iMAGESETTINGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ƽ��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tOOLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Զ�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͳ�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pAPERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARAMETER4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->ʵʱ���� = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->ʵʱ����->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->SuspendLayout();
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(279, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"ERROR";
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(115, 103);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(101, 30);
			this->numericUpDown1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(351, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 56);
			this->button2->TabIndex = 5;
			this->button2->Text = L"LED";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->��������ToolStripMenuItem,
					this->hISTORYToolStripMenuItem, this->iMAGESETTINGToolStripMenuItem, this->tOOLToolStripMenuItem, this->ͳ�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1814, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem1,
					this->�򿪴���ToolStripMenuItem, this->�رմ���ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(138, 24);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &EnvDetail::��������ToolStripMenuItem1_Click);
			// 
			// �򿪴���ToolStripMenuItem
			// 
			this->�򿪴���ToolStripMenuItem->Name = L"�򿪴���ToolStripMenuItem";
			this->�򿪴���ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->�򿪴���ToolStripMenuItem->Text = L"�򿪴���";
			// 
			// �رմ���ToolStripMenuItem
			// 
			this->�رմ���ToolStripMenuItem->Name = L"�رմ���ToolStripMenuItem";
			this->�رմ���ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->�رմ���ToolStripMenuItem->Text = L"�رմ���";
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
				this->��������ToolStripMenuItem,
					this->ƽ��������ToolStripMenuItem, this->��ʽ����ToolStripMenuItem
			});
			this->iMAGESETTINGToolStripMenuItem->Name = L"iMAGESETTINGToolStripMenuItem";
			this->iMAGESETTINGToolStripMenuItem->Size = System::Drawing::Size(136, 24);
			this->iMAGESETTINGToolStripMenuItem->Text = L"IMAGE SETTING";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(153, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ƽ��������ToolStripMenuItem
			// 
			this->ƽ��������ToolStripMenuItem->Name = L"ƽ��������ToolStripMenuItem";
			this->ƽ��������ToolStripMenuItem->Size = System::Drawing::Size(153, 24);
			this->ƽ��������ToolStripMenuItem->Text = L"ƽ��������";
			// 
			// ��ʽ����ToolStripMenuItem
			// 
			this->��ʽ����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ͼToolStripMenuItem,
					this->����ͼToolStripMenuItem
			});
			this->��ʽ����ToolStripMenuItem->Name = L"��ʽ����ToolStripMenuItem";
			this->��ʽ����ToolStripMenuItem->Size = System::Drawing::Size(153, 24);
			this->��ʽ����ToolStripMenuItem->Text = L"��ʽ����";
			// 
			// ����ͼToolStripMenuItem
			// 
			this->����ͼToolStripMenuItem->Name = L"����ͼToolStripMenuItem";
			this->����ͼToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->����ͼToolStripMenuItem->Text = L"����ͼ";
			// 
			// ����ͼToolStripMenuItem
			// 
			this->����ͼToolStripMenuItem->Name = L"����ͼToolStripMenuItem";
			this->����ͼToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->����ͼToolStripMenuItem->Text = L"����ͼ";
			// 
			// tOOLToolStripMenuItem
			// 
			this->tOOLToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������ToolStripMenuItem,
					this->״̬��ToolStripMenuItem, this->����ToolStripMenuItem, this->�Զ�����ToolStripMenuItem
			});
			this->tOOLToolStripMenuItem->Name = L"tOOLToolStripMenuItem";
			this->tOOLToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->tOOLToolStripMenuItem->Text = L"TOOL";
			this->tOOLToolStripMenuItem->Click += gcnew System::EventHandler(this, &EnvDetail::tOOLToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ״̬��ToolStripMenuItem
			// 
			this->״̬��ToolStripMenuItem->Name = L"״̬��ToolStripMenuItem";
			this->״̬��ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->״̬��ToolStripMenuItem->Text = L"״̬��";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �Զ�����ToolStripMenuItem
			// 
			this->�Զ�����ToolStripMenuItem->Name = L"�Զ�����ToolStripMenuItem";
			this->�Զ�����ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->�Զ�����ToolStripMenuItem->Text = L"�Զ�����";
			// 
			// ͳ�������ToolStripMenuItem
			// 
			this->ͳ�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->pAPERToolStripMenuItem,
					this->pARAMETER1ToolStripMenuItem, this->pARAMETER2ToolStripMenuItem, this->pARAMETER3ToolStripMenuItem, this->pARAMETER4ToolStripMenuItem
			});
			this->ͳ�������ToolStripMenuItem->Name = L"ͳ�������ToolStripMenuItem";
			this->ͳ�������ToolStripMenuItem->Size = System::Drawing::Size(96, 24);
			this->ͳ�������ToolStripMenuItem->Text = L"ͳ�������";
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
			// ʵʱ����
			// 
			this->ʵʱ����->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ʵʱ����->Controls->Add(this->button4);
			this->ʵʱ����->Controls->Add(this->label8);
			this->ʵʱ����->Controls->Add(this->button3);
			this->ʵʱ����->Controls->Add(this->label9);
			this->ʵʱ����->Controls->Add(this->button5);
			this->ʵʱ����->Controls->Add(this->label10);
			this->ʵʱ����->Controls->Add(this->button6);
			this->ʵʱ����->Controls->Add(this->label11);
			this->ʵʱ����->Controls->Add(this->chart4);
			this->ʵʱ����->Controls->Add(this->chart3);
			this->ʵʱ����->Controls->Add(this->chart2);
			this->ʵʱ����->Controls->Add(this->chart5);
			this->ʵʱ����->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ʵʱ����->Location = System::Drawing::Point(667, 58);
			this->ʵʱ����->Margin = System::Windows::Forms::Padding(4);
			this->ʵʱ����->Name = L"ʵʱ����";
			this->ʵʱ����->Padding = System::Windows::Forms::Padding(4);
			this->ʵʱ����->Size = System::Drawing::Size(1096, 700);
			this->ʵʱ����->TabIndex = 8;
			this->ʵʱ����->TabStop = false;
			this->ʵʱ����->Text = L"ʵʱ����";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(288, 661);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 30);
			this->button4->TabIndex = 5;
			this->button4->Text = L"����";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(168, 668);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 24);
			this->label8->TabIndex = 4;
			this->label8->Text = L"�񵴶�";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(816, 661);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 30);
			this->button3->TabIndex = 5;
			this->button3->Text = L"����";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(677, 668);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 24);
			this->label9->TabIndex = 4;
			this->label9->Text = L"�к�����";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(816, 334);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 30);
			this->button5->TabIndex = 5;
			this->button5->Text = L"����";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(696, 335);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 24);
			this->label10->TabIndex = 4;
			this->label10->Text = L"ʪ��";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(288, 332);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"����";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(168, 334);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 24);
			this->label11->TabIndex = 4;
			this->label11->Text = L"�¶�";
			// 
			// chart4
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart4->Legends->Add(legend1);
			this->chart4->Location = System::Drawing::Point(25, 388);
			this->chart4->Margin = System::Windows::Forms::Padding(4);
			this->chart4->Name = L"chart4";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart4->Series->Add(series1);
			this->chart4->Size = System::Drawing::Size(477, 250);
			this->chart4->TabIndex = 3;
			this->chart4->Text = L"chart4";
			// 
			// chart3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart3->Legends->Add(legend2);
			this->chart3->Location = System::Drawing::Point(552, 388);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(477, 250);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			this->chart2->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->Cursor = System::Windows::Forms::Cursors::Cross;
			legend3->Alignment = System::Drawing::StringAlignment::Far;
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(552, 61);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(477, 250);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart5
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea4);
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart5->Legends->Add(legend4);
			this->chart5->Location = System::Drawing::Point(25, 61);
			this->chart5->Margin = System::Windows::Forms::Padding(4);
			this->chart5->Name = L"chart5";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart5->Series->Add(series4);
			this->chart5->Size = System::Drawing::Size(477, 250);
			this->chart5->TabIndex = 0;
			this->chart5->Text = L"chart5";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1��", L"2��", L"3��" });
			this->comboBox2->Location = System::Drawing::Point(54, 378);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(212, 28);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 7;
			// 
			// EnvDetail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1814, 808);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->ʵʱ����);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"EnvDetail";
			this->Text = L"EnvDetail";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ʵʱ����->ResumeLayout(false);
			this->ʵʱ����->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tOOLToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void ��������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
