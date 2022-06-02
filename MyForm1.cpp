#include "MyForm1.h"
#include "Functions.h"
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <cmath>
using namespace System::Drawing;
using namespace lisovski19atp; // Название проекта
int WINAPI WinMain1(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm1);

	return 0;
}
int i = 0;
int length=1; //введенное пользователем кол-во пирамид
const int array = 10;	//максимально доступное кол-во пирамид
Piramide pir[array];	//массив объектов (пирамид)
int   osn[array], visota[array]; //массивы для записи в файл
float apop1[array],size1[array],fip1[array] ;
System::Void lisovski19atp::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)	 //создать заданное число пирамид
{
	if (maskedTextBox1->Text != "")
	{
		length = System::Convert::ToInt32(maskedTextBox1->Text); //ввод количества пирамид, которые будут созданы
		if (length > 10 || length <1)
		{
			label4->Text = "Не может быть обработано, повторите ввод";
			maskedTextBox1->Text = "";
			length = 1;
			button1->Enabled = true;
		}
		else
		{
			button1->Enabled = false;
			label4->Text = "Заполните данные о пирамиде номер " + System::Convert::ToString(i);
		}
			

	}
	else 
		label4->Text = "Задайте число пирамид и нажмите на кнопку создать";
}
System::Void lisovski19atp::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e)	//кнопка "следующая пирамида"
{
	
	int b=0;
	int h=0;
	int y = 120, x = 70;
	const double alpha = 3.141592 / 6;
	label4->Text = "Заполните данные о пирамиде номер "+System::Convert::ToString(i);
	if (maskedTextBox2->Text != "" && maskedTextBox3->Text != "")
	{
		 b = System::Convert::ToInt32(maskedTextBox2->Text);												//сторона основания пирамиды 
		 h = System::Convert::ToInt32(maskedTextBox3->Text);
	}
	pir[i] = Piramide(b, h);												//заполянем массив объектов
	
	Bitmap^ bmp1 = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);    //создаем объект, хранящий в себе растровое изображение размером с pictureBox1                                                                     
	Pen^ pen1 = gcnew Pen(Color::Lime);                                      //чтобы нарисовать линию, нужно задать карандаш и выбрать цвет карандаш

	 b = pir[i].geta();
	 h = pir[i].get_h();
	int mashtab = 7;
	if (h > 7 || b > 12)
	{
		mashtab = 4;
	}
	b = b * mashtab;
	h = h * mashtab;
	//рисуем квадрат заданным карандашом в объекте для рисования
	//основание
	Graphics::FromImage(bmp1)->DrawLine(pen1, x, y, x - b * cos(alpha), y - (b / 2));              //AB 
	Graphics::FromImage(bmp1)->DrawLine(pen1, x - b * cos(alpha), y - (b / 2), x, y - b);          //DC
	Graphics::FromImage(bmp1)->DrawLine(pen1, x, y - b, x + b * cos(alpha), y - b / 2);                  //CD
	Graphics::FromImage(bmp1)->DrawLine(pen1, x + b * cos(alpha), y - (b / 2), x, y);               //DA
	//боковые стороны 
	Graphics::FromImage(bmp1)->DrawLine(pen1, x, y, x, y - h - b);                                        //AO
	Graphics::FromImage(bmp1)->DrawLine(pen1, x - b * cos(alpha), y - (b / 2), x, y - h - b);          //BO
	Graphics::FromImage(bmp1)->DrawLine(pen1, x, y - b, x, y - h - b);                                  //CO
	Graphics::FromImage(bmp1)->DrawLine(pen1, x + b * cos(alpha), y - (b / 2), x, y - h - b);          //DO

	pictureBox1->Image = bmp1;

	pir[i].apophem();
	pir[i].field();
	pir[i].sizep();
	label7->Text = System::Convert::ToString(floor((pir[i].fip)*100)/100);
	label6->Text = System::Convert::ToString(floor((pir[i].apop)*100)/100);
	label5->Text = System::Convert::ToString(floor((pir[i].size)*100)/100);
	fip1[i] = floor((pir[i].fip) * 100) / 100;  //получение данных для записи в файл
	apop1[i] = floor((pir[i].apop) * 100) / 100;
	size1[i] = floor((pir[i].size) * 100) / 100;
	osn[i] = pir[i].geta();
	visota[i] = pir[i].get_h();
	maskedTextBox2->Text = "";
	maskedTextBox3->Text = "";
	i++;
	if (i > length-1)																					//после создания последнего объекта button2 блокируется
	{
		button2->Enabled = false;
		label4->Text = "Нажмите кнопку завершить создание";
	}
}
System::Void lisovski19atp::MyForm1::button3_Click(System::Object^ sender, System::EventArgs^ e)	//завершить создание
{
	std::ofstream data("piramidedata.txt"); //создание файла с инф. по созданным пирамидам
	for (int  i = 0; i < length; i++)
	{
		data << fip1[i] << "\n" << apop1[i] << "\n" << size1[i] << "\n" << osn[i] << "\n" << visota[i] <<"\n";
	}
	data.close();
	button1->Enabled = true; //активация кнопки создания массива пирамид
	length = 1;
	i = 0;
	Close(); // закрытие формы
}
