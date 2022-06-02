#pragma once
namespace lisovski19atp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
		}
	protected:
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	protected:
	private:
	System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(109, 545);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Завершить создание";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(85, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(168, 44);
			this->label11->TabIndex = 21;
			this->label11->Text = L"S Q U A R E";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(154, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 137);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 14);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Число квадратов:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(6, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 58);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Создать заданное число квадратов";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::Color::Lime;
			this->groupBox1->Location = System::Drawing::Point(12, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 124);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"<//...>";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(55, 33);
			this->maskedTextBox1->Mask = L"00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(23, 21);
			this->maskedTextBox1->TabIndex = 26;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 14);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Площадь:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 14);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Периметр:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 14);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Диагональ:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 14);
			this->label5->TabIndex = 30;
			this->label5->Text = L"///";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(162, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 14);
			this->label6->TabIndex = 31;
			this->label6->Text = L"///";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(162, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 14);
			this->label7->TabIndex = 32;
			this->label7->Text = L"///";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->ForeColor = System::Drawing::Color::Lime;
			this->groupBox2->Location = System::Drawing::Point(109, 199);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(223, 70);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"<info>";
			// 
			// label8
			// 
			this->label8->AutoEllipsis = true;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(221, 28);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Задайте количество квадратов и \r\nнажмите кнопку создать";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(24, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 23);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Следующий";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 14);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Сторона квадрата:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->maskedTextBox2);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->ForeColor = System::Drawing::Color::Lime;
			this->groupBox3->Location = System::Drawing::Point(90, 356);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(174, 112);
			this->groupBox3->TabIndex = 38;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"<//...>";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->maskedTextBox2->Location = System::Drawing::Point(73, 45);
			this->maskedTextBox2->Mask = L"00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(24, 21);
			this->maskedTextBox2->TabIndex = 38;
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(340, 582);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Lime;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"Создание квадратов";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); //завершить создание
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e); //создать заданное число квадратов 
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e); //следующий
};
}
