#pragma once
#include "Windows.h"
#include "tchar.h"
#include"SerialForm.h"
#include"SetForm.h"
namespace WindowsFormsApplication1 {
	using namespace System::IO::Ports;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
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


	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �򿪴���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �رմ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  qToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListBox^  listBox1;









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
			this->qToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->ʵʱ���� = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->statusStrip1->SuspendLayout();
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��������ToolStripMenuItem,
					this->hISTORYToolStripMenuItem, this->iMAGESETTINGToolStripMenuItem, this->tOOLToolStripMenuItem, this->ͳ�������ToolStripMenuItem,
					this->qToolStripMenuItem
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
			this->��������ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &EnvDetail::��������ToolStripMenuItem_DropDownItemClicked);
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
			// qToolStripMenuItem
			// 
			this->qToolStripMenuItem->Name = L"qToolStripMenuItem";
			this->qToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->qToolStripMenuItem->Text = L"��������";
			this->qToolStripMenuItem->Click += gcnew System::EventHandler(this, &EnvDetail::qToolStripMenuItem_Click);
			// 
			// ʵʱ����
			// 
			this->ʵʱ����->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ʵʱ����->Controls->Add(this->chart1);
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
			// chart1
			// 
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Cross;
			legend1->Alignment = System::Drawing::StringAlignment::Far;
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(25, 61);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(477, 250);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"chart1";
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
			chartArea2->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart4->Legends->Add(legend2);
			this->chart4->Location = System::Drawing::Point(25, 388);
			this->chart4->Margin = System::Windows::Forms::Padding(4);
			this->chart4->Name = L"chart4";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart4->Series->Add(series2);
			this->chart4->Size = System::Drawing::Size(477, 250);
			this->chart4->TabIndex = 3;
			this->chart4->Text = L"chart4";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(552, 388);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(477, 250);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			this->chart2->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			chartArea4->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea4);
			this->chart2->Cursor = System::Windows::Forms::Cursors::Cross;
			legend4->Alignment = System::Drawing::StringAlignment::Far;
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart2->Legends->Add(legend4);
			this->chart2->Location = System::Drawing::Point(552, 61);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(477, 250);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 366);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 197);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(311, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 30);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(492, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 30);
			this->textBox3->TabIndex = 12;
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5,
					this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 750);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
			this->statusStrip1->Size = System::Drawing::Size(1814, 58);
			this->statusStrip1->TabIndex = 13;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 53);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(167, 53);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->RightToLeftLayout = true;
			this->toolStripProgressBar1->Size = System::Drawing::Size(133, 52);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(824, 53);
			this->toolStripStatusLabel3->Spring = true;
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel4->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(167, 53);
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel5->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(167, 53);
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->AutoSize = false;
			this->toolStripStatusLabel6->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel6->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(167, 53);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &EnvDetail::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(79, 46);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(476, 144);
			this->listBox1->TabIndex = 14;
			// 
			// EnvDetail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1814, 808);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
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
			this->Load += gcnew System::EventHandler(this, &EnvDetail::EnvDetail_Load);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
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
private: System::Void EnvDetail_Load(System::Object^  sender, System::EventArgs^  e) {
}
	private:bool GetComList_Reg(ComboBox ^combox)
	{
				HKEY hkey;
				int result;
				int i = 0;
				result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("Hardware\\DeviceMap\\SerialComm"), NULL, KEY_READ, &hkey);
				//��ע���
				if (ERROR_SUCCESS == result)
				{
					TCHAR portName[0x100], commName[0x100];
					DWORD dwLong, dwSize;
					combox->Items->Clear();
					while (1)
					{
						dwSize = sizeof(portName) / sizeof(TCHAR);
						dwLong = dwSize;
						result = RegEnumValue(hkey, i, portName, &dwLong, NULL, NULL, (LPBYTE)commName, &dwSize);
						if (ERROR_NO_MORE_ITEMS == result)
						{
							//ö�ٴ���
							break;   //commName���Ǵ�������"COM2"
						}
						String ^strComName = gcnew String(commName);
						combox->Items->Add(strComName);
						i++;
					}
					RegCloseKey(hkey);
				}
				if (combox->Items->Count > 0)
				{
					combox->SelectedIndex = 0;//Ĭ��ѡ�е�һ��
					return true;
				}
				else
				{
					return false;
				}
	}
				public:SerialForm^dlg = gcnew SerialForm();
private: System::Void ��������ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 ToolStripMenuItem^ item;

			 if (e == nullptr)

				 item = safe_cast<ToolStripMenuItem^>(sender);

			 else

				 item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
			 if (item == ��������ToolStripMenuItem1)
			 {
				 GetComList_Reg(dlg->comboBox4);
				 dlg->ShowDialog();
			 }
			 if (item == �򿪴���ToolStripMenuItem)
			 {
				 dlg->com->Open();//�򿪴��ڣ���������chart����
			 }
			 if (item == �رմ���ToolStripMenuItem)
			 {
				 dlg->com->Close();//�رմ��ڣ���������chart����
			 }
}
private: System::Void qToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SetForm^dlg = gcnew SetForm();
			 dlg->ShowDialog();
}
public: static array<String^> ^split = gcnew array<String^>(18){ "1" };
private: String^ strConn;

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
	public:	 void UpdateColor1(Button ^button)
		 {
			 Color color1;

			 color1 = Color::FromArgb(255, 0, 0);
			 // color2 = Color::FromArgb(0, 255, 0);
			 button->BackColor = color1;
			 //Sleep(1000);
			 //button->BackColor = color2;
		 }
			 public:void UpdateColor2(Button ^button)
			 {
				 Color color2;

				 color2 = Color::FromArgb(0, 255, 0);
				 // color2 = Color::FromArgb(0, 255, 0);
				 //button->BackColor = color1;
				 //Sleep(1000);
				 button->BackColor = color2;
			 }
public: void data_receivce()//���մ�������
			{
						String^ receiveText = nullptr;
						char buffer[200] = {};
						if (dlg->com->IsOpen)
						{
							int bufroom = 0;
							bufroom = dlg->com->BytesToRead;
							if (bufroom != 0)
							{
								for (int i = 0; i < bufroom; i++)
								{
									buffer[i] = dlg->com->ReadChar();
								}
								String^buff = gcnew String(buffer);
								if (buff->Length > 32)
								{
									listBox1->Items->Add(buff);

									split = gcnew array<String^>{L"0", L"0", L"0", L"0"};
									split = buff->Split(59);
									DateTime dateTime = DateTime::Now;             //��ȡϵͳ��ǰʱ��
									//********�������ݿⲢ�洢*******************//////
									strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");
									OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
									//********ѡ�����ͼ���洢����********// 
									int nIndex = this->comboBox1->SelectedIndex;
									if (nIndex < 0) return;
									String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
									String^ sql1;
									String^ sql2;
									String^ sql3;
									String^ sql4;

									//LocationForm::textBox1->Text = split[12];
									//LocationForm::textBox1->Text = split[13];

									/*valuechange::����1 = split[4];
									valuechange::γ��1 = split[5];
									valuechange::����2 = split[10];
									valuechange::γ��2 = split[11];
									valuechange::����3 = split[16];
									valuechange::γ��3 = split[17];*/

									con1->Open();    // ������
									sql1 = "INSERT INTO 1�ų����ݱ�([�¶�],[ʪ��],[�𵴶�],[�к�����],[����ʱ��],[��Ӧ����]) VALUES( " + split[0] + " , " + split[1] + " , " + split[2] + ", " + split[3] + ",Now() , '1��' )";
									OleDbCommand^ comm1 = gcnew OleDbCommand(sql1, con1);
									comm1->ExecuteNonQuery();
									sql2 = "INSERT INTO 2�ų����ݱ�([�¶�],[ʪ��],[�𵴶�],[�к�����],[����ʱ��],[��Ӧ����]) VALUES( " + split[6] + " , " + split[7] + " , " + split[8] + ", " + split[9] + ",Now() , '2��' )";
									OleDbCommand^ comm2 = gcnew OleDbCommand(sql2, con1);
									comm2->ExecuteNonQuery();
									//con1->Close();
									//con1->Open();    // ������
									sql3 = "INSERT INTO 3�ų����ݱ�([�¶�],[ʪ��],[�𵴶�],[�к�����],[����ʱ��],[��Ӧ����]) VALUES( " + split[12] + " , " + split[13] + " , " + split[14] + ", " + split[15] + ",Now() , '3��' )";
									OleDbCommand^ comm3 = gcnew OleDbCommand(sql3, con1);
									comm3->ExecuteNonQuery();
									con1->Close();
									if (strTableName == "1��")
									{
										if (split[0] != nullptr&&split[1] != nullptr&&split[2] != nullptr&&split[3] != nullptr)
										{

											chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[0]);
											chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[0])<0 || float::Parse(split[0])>30)  //�¶ȳ��ޱ���
											{
												UpdateColor1(button1);//R
												button1->Text = "����";
												this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[0] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�¶�([�¶�],[�¶�����ʱ��],[�¶ȶ�Ӧ����]) VALUES( " + split[0] + " ,Now() , '" + strTableName + "' )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1);
													comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button1);//G
												button1->Text = "����";
											}

											chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[1]);
											chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);

											if (float::Parse(split[1])<0 || float::Parse(split[1])>50)  //ʪ�ȳ��ޱ���
											{
												UpdateColor1(button2);
												button2->Text = "����";
												this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[1] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_ʪ��([ʪ��],[ʪ������ʱ��],[ʪ�ȶ�Ӧ����]) VALUES( " + split[1] + " ,Now() , '" + strTableName + "'  )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button2);
												button2->Text = "����";
											}

											chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[3]);
											chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);

											if (float::Parse(split[3])<0 || float::Parse(split[3])>80)  //�ж����峬�ޱ���
											{
												UpdateColor1(button3);
												button3->Text = "����";
												this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[3] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�ж�����([�ж�����],[�ж���������ʱ��],[�ж������Ӧ����]) VALUES(" + split[3] + " ,Now() , '" + strTableName + "'  )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button3);
												button3->Text = "����";
											}

											chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[2]);
											chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);

											if (float::Parse(split[2])<0 || float::Parse(split[2])>20)  //�񵴶ȳ��ޱ���
											{
												UpdateColor1(button4);
												button4->Text = "����";
												this->chart4->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[2] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�񵴶�([�񵴶�],[�񵴶�����ʱ��],[�񵴶ȶ�Ӧ����]) VALUES( " + split[2] + " ,Now() , '" + strTableName + "' )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												Sleep(100);

											}
											else
											{
												UpdateColor2(button4);
												button4->Text = "����";
											}

											//����
											if ((float::Parse(split[2]) > 10 && float::Parse(split[2]) < 30)) this->textBox1->Text = "�𵴶Ƚϴ�";
											else if (float::Parse(split[2]) < 10) this->textBox1->Text = "�𵴶Ƚ�С";
											else if (float::Parse(split[2]) > 30) this->textBox1->Text = "�𵴶Ⱥܴ�";

											if ((float::Parse(split[3]) > 10 && float::Parse(split[3]) < 40)) this->textBox2->Text = "���ڿ�������һ��";
											else if (float::Parse(split[3]) < 10) this->textBox2->Text = "���ڿ���������";
											else if (float::Parse(split[3]) > 40) this->textBox2->Text = "���ڿ���������";

											if ((float::Parse(split[0]) > 26 && float::Parse(split[0]) < 28)) this->textBox3->Text = "�������¶�����";
											else if (float::Parse(split[0]) < 26) this->textBox3->Text = "�����¶�ƫ��";
											else if (float::Parse(split[0]) > 28) this->textBox3->Text = "�����¶�ƫ��";

								
										}
									}
									else if (strTableName == "2��")
									{

										if (split[6] != nullptr&&split[7] != nullptr&&split[8] != nullptr&&split[9] != nullptr)
										{

											chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[6]);
											chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[6])<26 || float::Parse(split[6])>28)  //�¶ȳ��ޱ���
											{
												UpdateColor1(button1);
												button1->Text = "����";
												this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[6] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�¶�([�¶�],[�¶�����ʱ��],[�¶ȶ�Ӧ����]) VALUES( " + split[6] + " ,Now() , '" + strTableName + "' )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button1);
												button1->Text = "����";
											}
											chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[7]);
											chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[7])<0 || float::Parse(split[7])>50)  //ʪ�ȳ��ޱ���
											{
												UpdateColor1(button2);
												button2->Text = "����";
												this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[7] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_ʪ��([ʪ��],[ʪ������ʱ��],[ʪ�ȶ�Ӧ����]) VALUES( " + split[7] + " ,Now() , '" + strTableName + "'  )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button2);
												button2->Text = "����";
											}

											chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[9]);
											chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);

											if (float::Parse(split[9])<0 || float::Parse(split[9])>80)  //�ж����峬�ޱ���
											{
												UpdateColor1(button3);
												button3->Text = "����";
												this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[9] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�ж�����([�ж�����],[�ж���������ʱ��],[�ж������Ӧ����]) VALUES(" + split[9] + " ,Now() , '" + strTableName + "'  )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button3);
												button3->Text = "����";
											}
											chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[8]);
											chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[8])<45 || float::Parse(split[8])>75)  //�񵴶ȳ��ޱ���
											{
												UpdateColor1(button4);
												button4->Text = "����";
												this->chart4->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[8] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�񵴶�([�񵴶�],[�񵴶�����ʱ��],[�񵴶ȶ�Ӧ����]) VALUES( " + split[8] + " ,Now() , '" + strTableName + "' )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);

											}
											else
											{
												UpdateColor2(button4);
												button4->Text = "����";
											}

											//����
											if ((float::Parse(split[8]) > 10 && float::Parse(split[8]) < 30)) this->textBox1->Text = "�𵴶Ƚϴ�";
											else if (float::Parse(split[8]) < 10) this->textBox1->Text = "�𵴶Ƚ�С";
											else if (float::Parse(split[8]) > 30) this->textBox1->Text = "�𵴶Ⱥܴ�";

											if ((float::Parse(split[9]) > 10 && float::Parse(split[9]) < 40)) this->textBox2->Text = "���ڿ�������һ��";
											else if (float::Parse(split[9]) < 10) this->textBox2->Text = "���ڿ���������";
											else if (float::Parse(split[9]) > 40) this->textBox2->Text = "���ڿ���������";

											if ((float::Parse(split[6]) > 26 && float::Parse(split[6]) < 28)) this->textBox3->Text = "�������¶�����";
											else if (float::Parse(split[6]) < 26) this->textBox3->Text = "�����¶�ƫ��";
											else if (float::Parse(split[6]) > 28) this->textBox3->Text = "�����¶�ƫ��";

									
										}
									}
									else if (strTableName == "3��")
									{
										if (split[12] != nullptr&&split[13] != nullptr&&split[14] != nullptr&&split[15] != nullptr)
										{

											chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[12]);
											chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[12])<26 || float::Parse(split[12])>28)  //�¶ȳ��ޱ���
											{
												UpdateColor1(button1);
												button1->Text = "����";
												this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[12] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�¶�([�¶�],[�¶�����ʱ��],[�¶ȶ�Ӧ����]) VALUES( " + split[12] + " ,Now() , '" + strTableName + "' )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button1);
												button1->Text = "����";
											}
											chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[13]);
											chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[13])<0 || float::Parse(split[13])>50)  //ʪ�ȳ��ޱ���
											{
												UpdateColor1(button2);
												button2->Text = "����";
												this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[13] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_PM([ʪ��],[ʪ������ʱ��],[ʪ�ȶ�Ӧ����]) VALUES( " + split[13] + " ,Now() , '" + strTableName + "'  )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button2);
												button2->Text = "����";
											}
											chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[15]);
											chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[15])<26 || float::Parse(split[15])>28)  //�ж����峬�ޱ���
											{
												UpdateColor1(button3);
												button3->Text = "����";
												this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[15] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�ж�����([�ж�����],[�ж���������ʱ��],[�ж������Ӧ����]) VALUES(" + split[15] + " ,Now() , '" + strTableName + "'  )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button3);
												button3->Text = "����";
											}
											chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[14]);
											chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
											if (float::Parse(split[14])<45 || float::Parse(split[14])>75)  //�񵴶ȳ��ޱ���
											{
												UpdateColor1(button4);
												button4->Text = "����";
												this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
												if (split[14] != nullptr)
												{
													con1->Open();    // ������
													sql4 = "INSERT INTO �쳣���ݱ�_�񵴶�([�񵴶�],[�񵴶�����ʱ��],[�񵴶ȶ�Ӧ����]) VALUES( " + split[14] + " ,Now() , '" + strTableName + "' )";
													OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
													con1->Close();
												}
												//Sleep(100);
											}
											else
											{
												UpdateColor2(button4);
												button4->Text = "����";
											}

											//����
											if ((float::Parse(split[14]) > 10 && float::Parse(split[14]) < 30)) this->textBox1->Text = "�𵴶Ƚϴ�";
											else if (float::Parse(split[14]) < 10) this->textBox1->Text = "�𵴶Ƚ�С";
											else if (float::Parse(split[14]) > 30) this->textBox1->Text = "�𵴶Ⱥܴ�";

											if ((float::Parse(split[15]) > 10 && float::Parse(split[15]) < 40)) this->textBox2->Text = "���ڿ�������һ��";
											else if (float::Parse(split[15]) < 10) this->textBox2->Text = "���ڿ���������";
											else if (float::Parse(split[15]) > 40) this->textBox2->Text = "���ڿ���������";

											if ((float::Parse(split[12]) > 26 && float::Parse(split[12]) < 28)) this->textBox3->Text = "�������¶�����";
											else if (float::Parse(split[12]) < 26) this->textBox3->Text = "�����¶�ƫ��";
											else if (float::Parse(split[12]) > 28) this->textBox3->Text = "�����¶�ƫ��";

						
										}
									}

					

									/*if (TempForm::comboBox1->Items->Count > 0){
										int index1 = TempForm::comboBox1->SelectedIndex;
										switch (index1)
										{
										case 0:TempForm::textBox1->Text = split[0]; break;
										case 1:TempForm::textBox1->Text = split[6]; break;
										case 2:TempForm::textBox1->Text = split[12]; break;
										}
									}*/

									/*if (HumidForm::comboBox1->Items->Count > 0)
									{
										int index2 = HumidForm::comboBox1->SelectedIndex;
										switch (index2)
										{
										case 0:HumidForm::textBox1->Text = split[1]; break;
										case 1:HumidForm::textBox1->Text = split[7]; break;
										case 2:HumidForm::textBox1->Text = split[13]; break;
										}
									}*/
									
									/*if (ShakeForm::comboBox1->Items->Count > 0){

										int index3 = ShakeForm::comboBox1->SelectedIndex;
										switch (index3)
										{
										case 0:ShakeForm::textBox1->Text = split[2]; break;
										case 1:ShakeForm::textBox1->Text = split[8]; break;
										case 2:ShakeForm::textBox1->Text = split[14]; break;
										}
									}*/

								/*	if (FForm::comboBox1->Items->Count > 0){
										int index4 = FForm::comboBox1->SelectedIndex;
										switch (index4)
										{
										case 0:FForm::textBox1->Text = split[3]; break;
										case 1:FForm::textBox1->Text = split[9]; break;
										case 2:FForm::textBox1->Text = split[15]; break;
										}
										if (LocationForm::comboBox1->Items->Count > 0)
										{
											int index = LocationForm::comboBox1->SelectedIndex;
											double m, n;
											switch (index)
											{
											case 0:
											{
													  m = Double::Parse(valuechange::����1);
													  n = Double::Parse(valuechange::γ��1);
													  LocationForm::textBox1->Text = m.ToString();
													  LocationForm::textBox2->Text = n.ToString();
													  array<System::Object^>^a = gcnew array<System::Object^>{m, n};
													  LocationForm::webBrowser1->Document->InvokeScript("setLocation", a);
													  break;
											}
											case 1:
											{
													  m = Double::Parse(valuechange::����2);
													  n = Double::Parse(valuechange::γ��2);
													  LocationForm::textBox1->Text = m.ToString();
													  LocationForm::textBox2->Text = n.ToString();
													  array<System::Object^>^a = gcnew array<System::Object^>{m, n};
													  LocationForm::webBrowser1->Document->InvokeScript("setLocation", a);
													  break;
											}
											case 2:
											{
													  m = Double::Parse(valuechange::����3);
													  n = Double::Parse(valuechange::γ��3);
													  LocationForm::textBox1->Text = m.ToString();
													  LocationForm::textBox2->Text = n.ToString();
													  array<System::Object^>^a = gcnew array<System::Object^>{m, n};
													  LocationForm::webBrowser1->Document->InvokeScript("setLocation", a);
													  break;
											}
											}

										}
									}*/
								}
							}
						}
			}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime dateTime = DateTime::Now;             //��ȡϵͳ��ǰʱ��
			 toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // ��ʾ����
			 toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // ��ʾʱ��
			 toolStripProgressBar1->Value = dateTime.Second;           //������
			 if (Control::IsKeyLocked(Keys::CapsLock))

				 this->toolStripStatusLabel4->Text = "��д";

			 else

				 this->toolStripStatusLabel4->Text = "";

			 if (Control::IsKeyLocked(Keys::NumLock))

				 this->toolStripStatusLabel5->Text = "����";

			 else

				 this->toolStripStatusLabel5->Text = "";

			 if (Control::IsKeyLocked(Keys::Scroll))

				 this->toolStripStatusLabel6->Text = "����";

			 else

				 this->toolStripStatusLabel6->Text = "";
			 //this->timer1->Interval = Int32::Parse(this->numericUpDown1->Text);
			 data_receivce();

}
};
}
