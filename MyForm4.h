#pragma once
#include "MyForm.h"
namespace lisovski19atp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
		}
	protected:
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private:
	System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(72, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Программа создана студентом группы \r\nО-19-АТП-АУТП-Б\r\nЛисовским В.С.\r\nУНТИ, АТС\r\n"
				L"БГТУ, 2021";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(17, 112);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(343, 290);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(372, 414);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"GOST type A", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Lime;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"О программе";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
