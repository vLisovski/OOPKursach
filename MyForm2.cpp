#include "MyForm2.h"
#include <fstream>
#include "Functions.h"
#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace System::Drawing;
using namespace lisovski19atp; // Название проекта
int WINAPI WinMain2(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm2);
	return 0;
}
int length1 = 1;
int i1 = 0;
const int array = 10;
Kvadrat kv[array];
int fik1[array], perim1[array],storona[array]; //массивы данных для записи в файл
float dia1[array];
System::Void lisovski19atp::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::ofstream data("squaredata.txt"); //создание файла с инф. по созданным квадратам
	for (int  i = 0; i < length1; i++)
	{
		data << fik1[i] << "\n" << perim1[i] << "\n" << dia1[i] << "\n" << storona[i] << "\n";
	}
	data.close();
	button2->Enabled = true; 
	length1 = 1;
	i1 = 0;
	Close(); //закрытие формы
	
	
}
System::Void lisovski19atp::MyForm2::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	int a = 0;
	
	int y = 120, x = 70;
	const double alpha = 3.141592 / 6;
	label8->Text = "Заполните данные о квадрате номер " + System::Convert::ToString(i1);
	if (maskedTextBox2->Text != "" )
	{
		a = System::Convert::ToInt32(maskedTextBox2->Text);												//сторона квадрата
	}
	kv[i1] = Kvadrat(a);												//заполянем массив объектов

	Bitmap^ bmp1 = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);    //создаем объект, хранящий в себе растровое изображение размером с pictureBox1                                                                     
	Pen^ pen1 = gcnew Pen(Color::Lime);                                      //чтобы нарисовать линию, нужно задать карандаш и выбрать цвет карандаш

	a = kv[i1].geta();
	
	int mashtab = 7;

	if ( a > 12)//автокоррекция масштаба
	{
		mashtab = 4;
	}
	a = a * mashtab;
	
	//рисуем квадрат заданным карандашом в объекте для рисования
	
	Graphics::FromImage(bmp1)->DrawLine(pen1, x, y, x - a * cos(alpha), y - (a / 2));//AB 
	Graphics::FromImage(bmp1)->DrawLine(pen1, x - a * cos(alpha), y - (a / 2), x, y - a);//DC
	Graphics::FromImage(bmp1)->DrawLine(pen1, x, y - a, x + a * cos(alpha), y - a / 2);//CD
	Graphics::FromImage(bmp1)->DrawLine(pen1, x + a * cos(alpha), y - (a / 2), x, y);//DA
	
	pictureBox1->Image = bmp1;//передаем свойству Image pictureBox1 растровый объект, на котором был нарисован квадрат

	kv[i1].diagonal();
	kv[i1].field();
	kv[i1].perimeter();
	dia1[i1] = kv[i1].dia; //получение данных об объектах для записи в файл
	fik1[i1] = kv[i1].fik;
	perim1[i1] = kv[i1].perim;
	storona[i1] = kv[i1].geta();
	label7->Text = System::Convert::ToString(floor((kv[i1].dia) * 100) / 100);
	label5->Text = System::Convert::ToString(floor((kv[i1].fik) * 100) / 100);
	label6->Text = System::Convert::ToString(floor((kv[i1].perim) * 100) / 100);

	i1++;

	maskedTextBox2->Text = "";
	if (i1 > length1 - 1)//после создания последнего объекта button2 блокируется
	{
		button3->Enabled = false;
		label8->Text = "Нажмите кнопку завершить создание";
	}
}
System::Void lisovski19atp::MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (maskedTextBox1->Text != "")
	{
		length1 = System::Convert::ToInt32(maskedTextBox1->Text);
		if (length1 > 10 || length1 < 1)
		{
			label8->Text = "Не может быть обработано, повторите ввод";
			maskedTextBox1->Text = "";
			length1 = 1;
			button2->Enabled = true;
		}
		else
		{
			button2->Enabled = false;
			label8->Text = "Заполните данные о квадрате номер " + System::Convert::ToString(i1);
		}


	}
	else
		label8->Text = "Задайте число квадратов и нажмите на кнопку создать";
}
