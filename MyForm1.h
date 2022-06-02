#pragma once
namespace lisovski19atp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LimeGreen;
			this->label1->Location = System::Drawing::Point(1, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Число пирамид:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(6, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Сторона основания пирамиды:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Высота пирамиды:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(10, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 61);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Создать заданное число пирамид";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(16, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(312, 46);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Задайте число пирамид и нажмите на кнопку создать";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Lime;
			this->groupBox1->Location = System::Drawing::Point(19, 92);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(138, 132);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"<//...>";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(60, 38);
			this->maskedTextBox1->Mask = L"00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(22, 21);
			this->maskedTextBox1->TabIndex = 21;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(69, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Следующая";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->maskedTextBox3);
			this->groupBox2->Controls->Add(this->maskedTextBox2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::Lime;
			this->groupBox2->Location = System::Drawing::Point(39, 351);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(260, 181);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"<//...>";
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->maskedTextBox3->Location = System::Drawing::Point(107, 118);
			this->maskedTextBox3->Mask = L"00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(25, 21);
			this->maskedTextBox3->TabIndex = 11;
			this->maskedTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox3->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->maskedTextBox2->Location = System::Drawing::Point(108, 51);
			this->maskedTextBox2->Mask = L"00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(24, 21);
			this->maskedTextBox2->TabIndex = 10;
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(176, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(152, 132);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(99, 547);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Завершить создание";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(194, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 14);
			this->label5->TabIndex = 13;
			this->label5->Text = L"///";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(194, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 14);
			this->label6->TabIndex = 14;
			this->label6->Text = L"///";
			// 
			// label7
			// 
			this->label7->AutoEllipsis = true;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(194, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 14);
			this->label7->TabIndex = 15;
			this->label7->Text = L"///";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(6, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 14);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Площадь поверхности ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Lime;
			this->label9->Location = System::Drawing::Point(6, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 14);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Апофема";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(6, 41);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 14);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Объем";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::Lime;
			this->groupBox3->Location = System::Drawing::Point(79, 232);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(249, 58);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"<info>";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(71, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(205, 44);
			this->label11->TabIndex = 20;
			this->label11->Text = L"P I R A M I D E";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(340, 582);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->ForeColor = System::Drawing::Color::Lime;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Создание пирамид";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); //создать заданное число пирамид
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e); //следующая
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e); //завершить создание
};
}
