#pragma once
#include "Functions.h"
namespace lisovski19atp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown20;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::NumericUpDown^ numericUpDown21;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::TextBox^ textBox3;
protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(1048, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Отобразить все \r\nсозданные пирамиды";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Lime;
			this->textBox1->Location = System::Drawing::Point(177, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(236, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(907, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 65);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Создать пирамиды";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(906, 742);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 66);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Создать квадраты";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Lime;
			this->textBox2->Location = System::Drawing::Point(907, 439);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(413, 21);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"...";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox11->Location = System::Drawing::Point(13, 18);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(170, 139);
			this->pictureBox11->TabIndex = 19;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox12->Location = System::Drawing::Point(189, 18);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(170, 139);
			this->pictureBox12->TabIndex = 18;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox13->Location = System::Drawing::Point(365, 18);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(170, 139);
			this->pictureBox13->TabIndex = 17;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox14->Location = System::Drawing::Point(541, 18);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(170, 139);
			this->pictureBox14->TabIndex = 16;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Black;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox15->Location = System::Drawing::Point(717, 18);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(170, 139);
			this->pictureBox15->TabIndex = 15;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox16->Location = System::Drawing::Point(13, 195);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(170, 139);
			this->pictureBox16->TabIndex = 24;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox17->Location = System::Drawing::Point(189, 195);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(170, 139);
			this->pictureBox17->TabIndex = 23;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox18->Location = System::Drawing::Point(365, 195);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(170, 139);
			this->pictureBox18->TabIndex = 22;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox19->Location = System::Drawing::Point(541, 195);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(170, 139);
			this->pictureBox19->TabIndex = 21;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MyForm::pictureBox19_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Black;
			this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox20->Location = System::Drawing::Point(717, 195);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(170, 139);
			this->pictureBox20->TabIndex = 20;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MyForm::pictureBox20_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown20);
			this->groupBox2->Controls->Add(this->numericUpDown19);
			this->groupBox2->Controls->Add(this->numericUpDown18);
			this->groupBox2->Controls->Add(this->numericUpDown17);
			this->groupBox2->Controls->Add(this->numericUpDown16);
			this->groupBox2->Controls->Add(this->numericUpDown15);
			this->groupBox2->Controls->Add(this->numericUpDown14);
			this->groupBox2->Controls->Add(this->numericUpDown13);
			this->groupBox2->Controls->Add(this->numericUpDown12);
			this->groupBox2->Controls->Add(this->pictureBox19);
			this->groupBox2->Controls->Add(this->pictureBox20);
			this->groupBox2->Controls->Add(this->pictureBox14);
			this->groupBox2->Controls->Add(this->pictureBox15);
			this->groupBox2->Controls->Add(this->pictureBox11);
			this->groupBox2->Controls->Add(this->numericUpDown11);
			this->groupBox2->Controls->Add(this->pictureBox16);
			this->groupBox2->Controls->Add(this->pictureBox17);
			this->groupBox2->Controls->Add(this->pictureBox18);
			this->groupBox2->Controls->Add(this->pictureBox12);
			this->groupBox2->Controls->Add(this->pictureBox13);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(3, 430);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(898, 378);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Square";
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->BackColor = System::Drawing::Color::Black;
			this->numericUpDown20->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown20->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown20->Location = System::Drawing::Point(717, 340);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown20->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(34, 22);
			this->numericUpDown20->TabIndex = 37;
			this->numericUpDown20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown20->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown20->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown20_ValueChanged);
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->BackColor = System::Drawing::Color::Black;
			this->numericUpDown19->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown19->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown19->Location = System::Drawing::Point(541, 340);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown19->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(34, 22);
			this->numericUpDown19->TabIndex = 36;
			this->numericUpDown19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown19->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown19->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown19_ValueChanged);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->BackColor = System::Drawing::Color::Black;
			this->numericUpDown18->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown18->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown18->Location = System::Drawing::Point(365, 340);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown18->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(34, 22);
			this->numericUpDown18->TabIndex = 35;
			this->numericUpDown18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown18->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown18->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown18_ValueChanged);
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->BackColor = System::Drawing::Color::Black;
			this->numericUpDown17->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown17->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown17->Location = System::Drawing::Point(189, 340);
			this->numericUpDown17->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown17->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(34, 22);
			this->numericUpDown17->TabIndex = 34;
			this->numericUpDown17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown17->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown17->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown17_ValueChanged);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->BackColor = System::Drawing::Color::Black;
			this->numericUpDown16->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown16->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown16->Location = System::Drawing::Point(13, 340);
			this->numericUpDown16->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown16->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(34, 22);
			this->numericUpDown16->TabIndex = 33;
			this->numericUpDown16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown16->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown16_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->BackColor = System::Drawing::Color::Black;
			this->numericUpDown15->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown15->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown15->Location = System::Drawing::Point(717, 163);
			this->numericUpDown15->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown15->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(34, 22);
			this->numericUpDown15->TabIndex = 32;
			this->numericUpDown15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown15->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown15_ValueChanged);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->BackColor = System::Drawing::Color::Black;
			this->numericUpDown14->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown14->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown14->Location = System::Drawing::Point(541, 163);
			this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown14->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(34, 22);
			this->numericUpDown14->TabIndex = 31;
			this->numericUpDown14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown14->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown14_ValueChanged);
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->BackColor = System::Drawing::Color::Black;
			this->numericUpDown13->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown13->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown13->Location = System::Drawing::Point(365, 163);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown13->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(34, 22);
			this->numericUpDown13->TabIndex = 30;
			this->numericUpDown13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown13->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown13_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->BackColor = System::Drawing::Color::Black;
			this->numericUpDown12->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown12->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown12->Location = System::Drawing::Point(189, 163);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(34, 22);
			this->numericUpDown12->TabIndex = 29;
			this->numericUpDown12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown12_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->BackColor = System::Drawing::Color::Black;
			this->numericUpDown11->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown11->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown11->Location = System::Drawing::Point(13, 163);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(34, 22);
			this->numericUpDown11->TabIndex = 28;
			this->numericUpDown11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown11_ValueChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(10, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 139);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox2->Location = System::Drawing::Point(186, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(170, 139);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox3->Location = System::Drawing::Point(361, 15);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(170, 139);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Black;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox4->Location = System::Drawing::Point(538, 15);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(170, 139);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Black;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox5->Location = System::Drawing::Point(714, 15);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(170, 139);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Black;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox10->Location = System::Drawing::Point(714, 188);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(170, 139);
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Black;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox9->Location = System::Drawing::Point(538, 188);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(170, 139);
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Black;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox8->Location = System::Drawing::Point(362, 188);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(170, 139);
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Black;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox7->Location = System::Drawing::Point(185, 188);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(170, 139);
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox6->Location = System::Drawing::Point(9, 188);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(170, 139);
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown10);
			this->groupBox1->Controls->Add(this->numericUpDown9);
			this->groupBox1->Controls->Add(this->numericUpDown8);
			this->groupBox1->Controls->Add(this->numericUpDown7);
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->pictureBox9);
			this->groupBox1->Controls->Add(this->pictureBox10);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->pictureBox6);
			this->groupBox1->Controls->Add(this->pictureBox7);
			this->groupBox1->Controls->Add(this->pictureBox8);
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(3, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(898, 388);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Piramide";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->BackColor = System::Drawing::Color::Black;
			this->numericUpDown10->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown10->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown10->Location = System::Drawing::Point(714, 333);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(34, 22);
			this->numericUpDown10->TabIndex = 36;
			this->numericUpDown10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown10_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->BackColor = System::Drawing::Color::Black;
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown9->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown9->Location = System::Drawing::Point(538, 333);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(34, 22);
			this->numericUpDown9->TabIndex = 35;
			this->numericUpDown9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown9_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->BackColor = System::Drawing::Color::Black;
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown8->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown8->Location = System::Drawing::Point(362, 333);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(34, 22);
			this->numericUpDown8->TabIndex = 34;
			this->numericUpDown8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown8_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->BackColor = System::Drawing::Color::Black;
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown7->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown7->Location = System::Drawing::Point(186, 333);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(34, 22);
			this->numericUpDown7->TabIndex = 33;
			this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown7_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->BackColor = System::Drawing::Color::Black;
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown6->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown6->Location = System::Drawing::Point(10, 333);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(34, 22);
			this->numericUpDown6->TabIndex = 32;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown6_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BackColor = System::Drawing::Color::Black;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown5->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown5->Location = System::Drawing::Point(714, 160);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(34, 22);
			this->numericUpDown5->TabIndex = 31;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown5_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::Color::Black;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown4->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown4->Location = System::Drawing::Point(538, 160);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(34, 22);
			this->numericUpDown4->TabIndex = 30;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::Color::Black;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown3->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown3->Location = System::Drawing::Point(362, 160);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(34, 22);
			this->numericUpDown3->TabIndex = 29;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::Black;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown2->Location = System::Drawing::Point(186, 160);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(34, 22);
			this->numericUpDown2->TabIndex = 28;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::Black;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown1->Location = System::Drawing::Point(10, 160);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(34, 22);
			this->numericUpDown1->TabIndex = 27;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(1048, 743);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 65);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Отобразить все \r\nсозданные квадраты\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(1189, 351);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 65);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Создать пирамиды на основе квадратов";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Black;
			this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox21->Location = System::Drawing::Point(6, 20);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(170, 139);
			this->pictureBox21->TabIndex = 29;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Lime;
			this->button6->Location = System::Drawing::Point(177, 20);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(236, 83);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Найти пирамиду с наименьшей площадью поверхности";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 14);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Апофема";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 14);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Площадь поверхности";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(7, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 14);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Объём";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(288, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 14);
			this->label4->TabIndex = 36;
			this->label4->Text = L"...";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(288, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 14);
			this->label5->TabIndex = 35;
			this->label5->Text = L"...";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(288, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 14);
			this->label6->TabIndex = 34;
			this->label6->Text = L"...";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(288, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 14);
			this->label7->TabIndex = 42;
			this->label7->Text = L"...";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(288, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 14);
			this->label8->TabIndex = 41;
			this->label8->Text = L"...";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Lime;
			this->label9->Location = System::Drawing::Point(288, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 14);
			this->label9->TabIndex = 40;
			this->label9->Text = L"...";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(10, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 14);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Периметр";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Lime;
			this->label11->Location = System::Drawing::Point(10, 43);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 14);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Диагональ";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Lime;
			this->label12->Location = System::Drawing::Point(10, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 14);
			this->label12->TabIndex = 37;
			this->label12->Text = L"Площадь";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(5, 93);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 14);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Длинна стороны основания";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Lime;
			this->label14->Location = System::Drawing::Point(288, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 14);
			this->label14->TabIndex = 44;
			this->label14->Text = L"...";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Lime;
			this->label15->Location = System::Drawing::Point(10, 91);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(153, 14);
			this->label15->TabIndex = 45;
			this->label15->Text = L"Длинна стороны основания";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Lime;
			this->label16->Location = System::Drawing::Point(288, 91);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 14);
			this->label16->TabIndex = 46;
			this->label16->Text = L"...";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Lime;
			this->label17->Location = System::Drawing::Point(6, 116);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 14);
			this->label17->TabIndex = 47;
			this->label17->Text = L"Высота пирамиды";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Lime;
			this->label18->Location = System::Drawing::Point(288, 116);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 14);
			this->label18->TabIndex = 48;
			this->label18->Text = L"...";
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Lime;
			this->button7->Location = System::Drawing::Point(4, 14);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(181, 46);
			this->button7->TabIndex = 49;
			this->button7->Text = L"Найти среднюю площадь квадратов";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Lime;
			this->label19->Location = System::Drawing::Point(1, 74);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(160, 14);
			this->label19->TabIndex = 50;
			this->label19->Text = L"Средняя площадь квадратов";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->BackColor = System::Drawing::Color::Black;
			this->numericUpDown21->Font = (gcnew System::Drawing::Font(L"Unispace", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown21->ForeColor = System::Drawing::Color::Lime;
			this->numericUpDown21->Location = System::Drawing::Point(177, 137);
			this->numericUpDown21->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown21->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(34, 22);
			this->numericUpDown21->TabIndex = 52;
			this->numericUpDown21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown21->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown21->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown21_ValueChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1331, 25);
			this->menuStrip1->TabIndex = 53;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"GOST type A", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(113, 21);
			this->toolStripMenuItem1->Text = L"Сохранить всё";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"GOST type A", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(67, 21);
			this->toolStripMenuItem2->Text = L"Помощь";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Font = (gcnew System::Drawing::Font(L"GOST type A", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(99, 21);
			this->toolStripMenuItem3->Text = L"О программе";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"GOST type A", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(907, 199);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(416, 143);
			this->groupBox3->TabIndex = 54;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Info";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown21);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->pictureBox21);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(906, 28);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(417, 171);
			this->groupBox4->TabIndex = 55;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"<min>";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox3);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"GOST type A", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(907, 478);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(412, 109);
			this->groupBox5->TabIndex = 56;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"<mid>";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::Color::Lime;
			this->textBox3->Location = System::Drawing::Point(291, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 14);
			this->textBox3->TabIndex = 53;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"GOST type A", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(907, 617);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(413, 119);
			this->groupBox6->TabIndex = 57;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Info";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1331, 813);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"OOP";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void Draw(Kvadrat& obj, PictureBox^ pic, int& mash, Color col);//функция для рисования квадратов
	private: void Draw(Piramide& obj, PictureBox^ pic, int& mash, Color col);//функция для рисования пирамид
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);//отрисовка пирамид
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);//создать пирамиды
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);//создать квадраты
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);//отрисовка квадратов
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);//создать пирамиды на основе квадратов
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);//пирамида с наименьшей площадью поверхности
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);//средняя площадь квадратов
	/// <summary>
	/// изменение масштаба фигур
	/// </summary>
	//Piramide
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown9_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown10_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	//Kvadrat
	private: System::Void numericUpDown11_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown12_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown13_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown14_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown15_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown16_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown17_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown18_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown19_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown20_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown21_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	/// <summary>
	/// показ информации о фигуре
	/// </summary>
	//Piramide
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e);
	//Kvadrat
	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e);
	//Menu
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);//сохранение в файл "SAVED.txt"
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);//помощь
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e);//о программе
};
}
