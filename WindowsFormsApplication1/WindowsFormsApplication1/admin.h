#pragma once

namespace WindowsFormsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// admin 摘要
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
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
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Sunisoft::IrisSkin::SkinEngine^  skinEngine1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->skinEngine1 = (gcnew Sunisoft::IrisSkin::SkinEngine((cli::safe_cast<System::ComponentModel::Component^>(this))));
			this->SuspendLayout();
			// 
			// skinEngine1
			// 
			this->skinEngine1->SerialNumber = L"";
			this->skinEngine1->SkinFile = L"C:\\Users\\ASUS\\Desktop\\vc++ curriculum design\\curriculum-design\\WindowsFormsApplic"
				L"ation1\\Debug\\MSN.ssk";
			this->skinEngine1->SkinStreamMain = (cli::safe_cast<System::IO::Stream^>(resources->GetObject(L"skinEngine1.SkinStreamMain")));
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 305);
			this->Name = L"admin";
			this->Text = L"admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
