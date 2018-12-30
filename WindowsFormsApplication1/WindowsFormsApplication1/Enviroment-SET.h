#pragma once
#include"transfer.h"
#include"EnvDetail.h"
namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// EnviromentSET 摘要
	/// </summary>
	public ref class EnviromentSET : public System::Windows::Forms::Form
	{
	public:
		EnviromentSET(void)
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
		~EnviromentSET()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	protected:


























	private: Sunisoft::IrisSkin::SkinEngine^  skinEngine1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EnviromentSET::typeid));
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->skinEngine1 = (gcnew Sunisoft::IrisSkin::SkinEngine((cli::safe_cast<System::ComponentModel::Component^>(this))));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// skinEngine1
			// 
			this->skinEngine1->SerialNumber = L"";
			this->skinEngine1->SkinFile = L"C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplic"
				L"ation1\\Debug\\MSN.ssk";
			this->skinEngine1->SkinStreamMain = (cli::safe_cast<System::IO::Stream^>(resources->GetObject(L"skinEngine1.SkinStreamMain")));
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(95, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"环境管理";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnviromentSET::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"华文新魏", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(95, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"库存管理";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EnviromentSET::button2_Click);
			// 
			// EnviromentSET
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(340, 352);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"EnviromentSET";
			this->Text = L"登录选择";
			this->Load += gcnew System::EventHandler(this, &EnviromentSET::EnviromentSET_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EnviromentSET_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 EnvDetail^ dlg = gcnew EnvDetail();
			 dlg->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 transfer^ dlg = gcnew transfer();
			 dlg->ShowDialog();
}
};
}
