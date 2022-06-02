#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "Functions.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
//---------------------------------------------------------------------------------------------------------------------
using namespace System::Drawing;
using namespace lisovski19atp; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles(); //включение визуальных элементов
	Application::SetCompatibleTextRenderingDefault(false); //работа с текстом 
	Application::Run(gcnew MyForm);//запуск формы
	return 0;
}
//---------------------------------------------------------------------------------------------------------------------
int y = 135, x = 75;//координаты начальной точки для рисования на pictureBox
const double alpha = 0.5236; //угол для отрисовки основания пирамид и квадратов 
int mashtab1 = 1, mashtab2 = 1, mashtab3 = 1, mashtab4 = 1, mashtab5 = 1, mashtab6 = 1, mashtab7 = 1, mashtab8 = 1, mashtab9 = 1, mashtab10 = 1; //масштабы с нумериков 
int mashtab11 = 1, mashtab12 = 1, mashtab13 = 1, mashtab14 = 1, mashtab15 = 1, mashtab16 = 1, mashtab17 = 1, mashtab18 = 1, mashtab19 = 1, mashtab20 = 1,mashtab21=1;
int stor0 = 0, stor1 = 0, stor2 = 0, stor3 = 0, stor4 = 0, stor5 = 0, stor6 = 0, stor7 = 0, stor8 = 0, stor9 = 0,stor10=0;//stor10 - сторона наименьшей по объему пирамиды
int stor11 = 0, stor12 = 0, stor13 = 0, stor14 = 0, stor15 = 0, stor16 = 0, stor17 = 0, stor18 = 0, stor19 = 0, stor20 = 0; //стороны пирамид и квадратов
int visot0 = 0, visot1 = 0, visot2 = 0, visot3 = 0, visot4 = 0, visot5 = 0, visot6 = 0, visot7 = 0, visot8 = 0, visot9 = 0;
float kvdrt = 0;//количество квадратов
int prmd = 0;//количество пирамид

Piramide minpir(1,1); //минимальная пирамида по умолчанию
//---------------------------------------------------------------------------------------------------------------------
void lisovski19atp::MyForm::Draw(Piramide& obj, PictureBox^ pic, int &mash, Color col)
{
    Bitmap^ bmp = gcnew Bitmap(pic->Width, pic->Height);    //создаем объект, хранящий в себе растровое изображение размером с pic                                                                    
    Pen^ pen = gcnew Pen(col);                                      //чтобы нарисовать линию, нужно задать карандаш и выбрать цвет карандаш

    int b = obj.geta();
    int h = obj.get_h();

    b = b * mash;
    h = h * mash;

    //рисуем квадрат заданным карандашом в объекте для рисования
    //основание
    Graphics::FromImage(bmp)->DrawLine(pen, x, y, x - b * cos(alpha), y - (b / 2));              
    Graphics::FromImage(bmp)->DrawLine(pen, x - b * cos(alpha), y - (b / 2), x, y - b);          
    Graphics::FromImage(bmp)->DrawLine(pen, x, y - b, x + b * cos(alpha), y - b / 2);                 
    Graphics::FromImage(bmp)->DrawLine(pen, x + b * cos(alpha), y - (b / 2), x, y);               
    //боковые стороны 
    Graphics::FromImage(bmp)->DrawLine(pen, x, y, x, y - h - b);                                     
    Graphics::FromImage(bmp)->DrawLine(pen, x - b * cos(alpha), y - (b / 2), x, y - h - b);          
    Graphics::FromImage(bmp)->DrawLine(pen, x, y - b, x, y - h - b);                               
    Graphics::FromImage(bmp)->DrawLine(pen, x + b * cos(alpha), y - (b / 2), x, y - h - b);          

    pic->Image = bmp;                                               //присваиваем свойству Image у pic объект bmp, который хранит наш рисунок
}
void lisovski19atp::MyForm::Draw(Kvadrat& obj, PictureBox^ pic, int& mash, Color col)                              //определяем функцию. Прототип создан внутри класса MyForm
{
    Bitmap^ bmp = gcnew Bitmap(pic->Width, pic->Height);    //создаем объект, хранящий в себе растровое изображение размером с pic                                                                   
    Pen^ pen = gcnew Pen(col);                                      //чтобы нарисовать линию, нужно задать карандаш и выбрать цвет карандаш

    int a = obj.geta();
    a = a * mash;

    //рисуем квадрат заданным карандашом в объекте для рисования
    //основание
    Graphics::FromImage(bmp)->DrawLine(pen, x, y, x - a * cos(alpha), y - (a / 2));               
    Graphics::FromImage(bmp)->DrawLine(pen, x - a * cos(alpha), y - (a / 2), x, y - a);          
    Graphics::FromImage(bmp)->DrawLine(pen, x, y - a, x + a * cos(alpha), y - a / 2);            
    Graphics::FromImage(bmp)->DrawLine(pen, x + a * cos(alpha), y - (a / 2), x, y);              

    pic->Image = bmp;                                              //присваиваем свойству Image у pic объект bmp, который хранит наш рисунок
}
//--------------------------------------------------------------------------------------------------------------------
System::Void lisovski19atp::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int b[10] = { 0,0,0,0,0,0,0,0,0,0 }, h[10] = { 0,0,0,0,0,0,0,0,0,0 };
    int bytebase[50];
    std::string str1;
    int k = 0, byte = 0, jump = 0;
    std::string pirinfo = "piramidedata.txt"; //запись адреса файла с данными по пирамидам
    std::ifstream fin; //создание объекта класса "imput file stream"
    fin.open(pirinfo); //открытие файла по записанному ранее адресу
    if (!fin.is_open())//если файл не удалось открыть
    {
        textBox1->Text = "Ошибка чтения файла. Создайте хотя-бы одну пирамиду";
    }
    else
    {
        char ch;
        while (fin.get(ch))//пока возмонжо считать строку из файла
        {
            str1 = ""; //затираем переменную, в которой сохранилась строка
            std::getline(fin, str1); //считали первую строку, чтение данных прекращается при достижении пробела
            byte = fin.tellg(); //получили информацию о том, сколько байт прочиталось
            bytebase[k] = byte; //записываем в массив длинну первой строки в байтах
            k++; //увеличиваем счетчик итераций на 1
            byte = 0; //затираем переменную с байтами для следующей строки
            //по итогу имеем текущее кол-во строк в файле с инф. по пирамидам и сколько байт пройдено с чтением каждой новой строки

        }
        fin.close(); //переоткрываем файл, чтобы чтение началось корректно
        fin.open(pirinfo);
        for (int j = 0; j < (k / 5); j++)
        {
            jump = bytebase[2 + 5 * j]; //узнаем, сколько байт нужно пройти до нужной строки
            fin.seekg(jump, std::ios_base::beg); //перемещаемся на строку с длинной основания пирамиды
            fin >> b[j]; //считываем строку 
            jump = bytebase[3 + 5 * j]; //узнаем, сколько байт нужно пройти до нужной строки
            fin.seekg(jump, std::ios_base::beg);//перемещаемся на строку с длинной основания пирамиды
            fin >> h[j]; //считываем строку 
        }
    }
    fin.close(); //закрываем файл с информацией по пирамидам
    prmd = k / 5; //передаем глобальной переменной количество созданных пирамид
    switch (prmd)//делаем видымимы столько pictureBox , сколько было считано пирамид из файла
    {
    case 0: pictureBox1->Visible = false; 
        pictureBox2->Visible = false;
        pictureBox3->Visible = false;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 1: pictureBox1->Visible = true; 
        pictureBox2->Visible = false;
        pictureBox3->Visible = false;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 2:pictureBox1->Visible = true;  
        pictureBox2->Visible = true;
        pictureBox3->Visible = false;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 3:pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 4:pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 5:pictureBox1->Visible = true;  
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 6:pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 7:pictureBox1->Visible = true;  
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 8:pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 9:pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = true;
        pictureBox10->Visible = false;
        break;
    case 10:pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = true;
        pictureBox10->Visible = true;
        break;
    default:textBox1->Text = "Что-то пошло не так...";
        pictureBox1->Visible = true; 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = true;
        pictureBox10->Visible = true;
        break;
    }
    stor0 = b[0]; stor1 = b[1]; stor2 = b[2]; stor3 = b[3]; stor4 = b[4]; //присваиваем глобальным переменным длинны основания пирамиды значения, прописанные пользователем
    stor5 = b[5]; stor6 = b[6]; stor7 = b[7]; stor8 = b[8]; stor9 = b[9];   //при создании пирамид
    visot0 = h[0]; visot1 = h[1]; visot2 = h[2]; visot3 = h[3]; visot4 = h[4]; //присваиваем глобальным переменным высот пирамид значения, прописанные пользователем
    visot5 = h[5]; visot6 = h[6]; visot7 = h[7]; visot8 = h[8]; visot9 = h[9];
    //отрисовка пирамид
    Piramide pir0(b[0], h[0]); //создание экземпляра класса Piramide со значениями стороны основания и высоты первой введенной пирамиды
    Draw(pir0, pictureBox1, mashtab1, Color::Aqua);               //вызов функции рисования на pictureBox1
    Piramide pir1(b[1], h[1]);//аналогично для второй введенной пирамиды
    Draw(pir1, pictureBox2, mashtab2, Color::Blue);               //аналогично для рисования на pictureBox2
    Piramide pir2(b[2], h[2]);
    Draw(pir2, pictureBox3, mashtab3, Color::DarkOrange);
    Piramide pir3(b[3], h[3]);
    Draw(pir3, pictureBox4, mashtab4, Color::Yellow);
    Piramide pir4(b[4], h[4]);
    Draw(pir4, pictureBox5, mashtab5, Color::Red);
    Piramide pir5(b[5], h[5]);
    Draw(pir5, pictureBox6, mashtab6, Color::DarkViolet);
    Piramide pir6(b[6], h[6]);
    Draw(pir6, pictureBox7, mashtab7, Color::Lime);
    Piramide pir7(b[7], h[7]);
    Draw(pir7, pictureBox8, mashtab8, Color::BurlyWood);
    Piramide pir8(b[8], h[8]);
    Draw(pir8, pictureBox9, mashtab9, Color::AntiqueWhite);
    Piramide pir9(b[9], h[9]);
    Draw(pir9, pictureBox10, mashtab10, Color::HotPink);
    textBox1->Text = "Нарисовано";
}
System::Void lisovski19atp::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm1^ frm = gcnew MyForm1;
    frm->Show(this);
}
System::Void lisovski19atp::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm2^ frm = gcnew MyForm2;
    frm->Show(this);
}
System::Void lisovski19atp::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int a[10] = { 0,0,0,0,0,0,0,0,0,0 }, perim[10];
    float diag[10], field[10];
    int bytebase[50];
    std::string str1;
    int k = 0, byte = 0, jump = 0;
    std::string sqinfo = "squaredata.txt";
    std::ifstream fin;
    fin.open(sqinfo);
    if (!fin.is_open())
    {
        textBox1->Text = "Ошибка чтения файла. Создайте хотя-бы один квадрат";
    }
    else
    {
        char ch;
        while (fin.get(ch))
        {
            str1 = ""; //затираем переменную, в которой сохранилась строка
            std::getline(fin, str1); //считали первую строку, чтение данных прекращается при достижении пробела
            byte = fin.tellg(); //получили информацию о том, сколько байт прочиталось
            bytebase[k] = byte; //записываем в массив длинну первой строки в байтах
            k++; //увеличиваем счетчик итераций на 1
            byte = 0; //затираем переменную с байтами для следующей строки
            //по итогу имеем текущее кол-во строк в файле с инф. по квадратам и сколько байт пройдено с чтением каждой новой строк
        }
        fin.close(); //переоткрываем файл, чтобы чтение началось корректно
        fin.open(sqinfo);
        for (int j = 0; j < (k / 4); j++)
        {
            jump = bytebase[2 + 4 * j]; //узнаем, сколько байт нужно пройти до нужной строки
            fin.seekg(jump, std::ios_base::beg); //перемещаемся на строку с длинной стороны квадрата
            fin >> a[j]; //считываем строку с длинной стороны квадрата
        }
    }
    fin.close(); //закрываем файл с информацией по квадратам
    stor11 = a[0]; stor12 = a[1]; stor13 = a[2]; stor14 = a[3]; stor15 = a[4]; //передаем в глобальные переменные значения сторон квадратов, созданных пользователем 
    stor16 = a[5]; stor17 = a[6]; stor18 = a[7]; stor19 = a[8]; stor20 = a[9];
    kvdrt = k / 4; //передача количества считанных квадратов в глобальную переменную
    switch (k)//делаем выдимыми столько pictureBox, сколько считано квадратов из файла
    {
    case 0: pictureBox11->Visible = false; 
        pictureBox12->Visible = false;
        pictureBox13->Visible = false;
        pictureBox14->Visible = false;
        pictureBox15->Visible = false;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 4: pictureBox11->Visible = true;
        pictureBox12->Visible = false;
        pictureBox13->Visible = false;
        pictureBox14->Visible = false;
        pictureBox15->Visible = false;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 8:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = false;
        pictureBox14->Visible = false;
        pictureBox15->Visible = false;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 12:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = false;
        pictureBox15->Visible = false;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 16:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = false;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 20:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = true;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 24:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = true;
        pictureBox16->Visible = true;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 28:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = true;
        pictureBox16->Visible = true;
        pictureBox17->Visible = true;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 32:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = true;
        pictureBox16->Visible = true;
        pictureBox17->Visible = true;
        pictureBox18->Visible = true;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    case 36:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = true;
        pictureBox16->Visible = true;
        pictureBox17->Visible = true;
        pictureBox18->Visible = true;
        pictureBox19->Visible = true;
        pictureBox20->Visible = false;
        break;
    case 40:pictureBox11->Visible = true;
        pictureBox12->Visible = true;
        pictureBox13->Visible = true;
        pictureBox14->Visible = true;
        pictureBox15->Visible = true;
        pictureBox16->Visible = true;
        pictureBox17->Visible = true;
        pictureBox18->Visible = true;
        pictureBox19->Visible = true;
        pictureBox20->Visible = true;
        break;
    default:textBox1->Text = "Что-то пошло не так...";
        pictureBox11->Visible = false;
        pictureBox12->Visible = false;
        pictureBox13->Visible = false;
        pictureBox14->Visible = false;
        pictureBox15->Visible = false;
        pictureBox16->Visible = false;
        pictureBox17->Visible = false;
        pictureBox18->Visible = false;
        pictureBox19->Visible = false;
        pictureBox20->Visible = false;
        break;
    }
    //отрисовка квадратов
    Kvadrat kv0(a[0]);
    Draw(kv0, pictureBox11, mashtab11, Color::Aqua);
    Kvadrat kv1(a[1]);
    Draw(kv1, pictureBox12, mashtab12, Color::Blue);
    Kvadrat kv2(a[2]);
    Draw(kv2, pictureBox13, mashtab13, Color::DarkOrange);
    Kvadrat kv3(a[3]);
    Draw(kv3, pictureBox14, mashtab14, Color::Yellow);
    Kvadrat kv4(a[4]);
    Draw(kv4, pictureBox15, mashtab15, Color::Red);
    Kvadrat kv5(a[5]);
    Draw(kv5, pictureBox16, mashtab16, Color::DarkViolet);
    Kvadrat kv6(a[6]);
    Draw(kv6, pictureBox17, mashtab17, Color::Lime);
    Kvadrat kv7(a[7]);
    Draw(kv7, pictureBox18, mashtab18, Color::BurlyWood);
    Kvadrat kv8(a[8]);
    Draw(kv8, pictureBox19, mashtab19, Color::AntiqueWhite);
    Kvadrat kv9(a[9]);
    Draw(kv9, pictureBox20, mashtab20, Color::HotPink);
    textBox2->Text = "Нарисовано";
}
System::Void lisovski19atp::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    int b[10] = { 0,0,0,0,0,0,0,0,0,0 }, h[10] = { 0,0,0,0,0,0,0,0,0,0 };
    int bytebase[50];
    int bytebase1[50];
    std::string str1;
    std::string str2;
    int k = 0, byte = 0, jump = 0;
    std::string pirinfo = "piramidedata.txt";
    std::ifstream fin;
    fin.open(pirinfo);
    if (!fin.is_open())
    {
        textBox1->Text = "Ошибка чтения файла. Создайте хотя-бы одну пирамиду";
    }
    else
    {
        char ch;
        while (fin.get(ch))
        {
            str1 = ""; //затираем переменную, в которой сохранилась строка
            std::getline(fin, str1); //считали первую строку, чтение данных прекращается при достижении пробела
            byte = fin.tellg(); //получили информацию о том, сколько байт прочиталось
            bytebase[k] = byte; //записываем в массив длинну первой строки в байтах
            k++; //увеличиваем счетчик итераций на 1
            byte = 0; //затираем переменную с байтами для следующей строки
            //по итогу имеем текущее кол-во строк в файле с инф. по пирамидам и сколько байт пройдено с чтением каждой новой строки
        }
        fin.close(); //переоткрываем файл, чтобы чтение началось корректно
        fin.open(pirinfo);
        for (int j = 0; j < (k / 5); j++)
        {
            jump = bytebase[3 + 5 * j]; //узнаем, сколько байт нужно пройти до нужной строки
            fin.seekg(jump, std::ios_base::beg);//перемещаемся на строку с длинной высоты пирамиды
            fin >> h[j]; //считываем строку 
        }
    }
    fin.close(); //закрываем файл с информацией по пирамидам
    k = 0;
    byte = 0;
    jump = 0;
    std::string pirinfo1 = "squaredata.txt";
    std::ifstream fin1;
    fin1.open(pirinfo1); //открываем файл с информацией по квадратам
    if (!fin1.is_open())
    {
        textBox1->Text = "Ошибка чтения файла. Создайте хотя-бы однин квадрат";
    }
    else
    {
        char ch;
        while (fin1.get(ch))
        {
            str2 = ""; //затираем переменную, в которой сохранилась строка
            std::getline(fin1, str2); //считали первую строку, чтение данных прекращается при достижении пробела
            byte = fin1.tellg(); //получили информацию о том, сколько байт прочиталось
            bytebase1[k] = byte; //записываем в массив длинну первой строки в байтах
            k++; //увеличиваем счетчик итераций на 1
            byte = 0; //затираем переменную с байтами для следующей строки
            //по итогу имеем текущее кол-во строк в файле с инф. по пирамидам и сколько байт пройдено с чтением каждой новой строки
        }
        fin1.close(); //переоткрываем файл, чтобы чтение началось корректно
        fin1.open(pirinfo1);
        for (int j = 0; j < (k / 4); j++)
        {
            jump = bytebase1[2 + 4 * j]; //узнаем, сколько байт нужно пройти до нужной строки
            fin1.seekg(jump, std::ios_base::beg); //перемещаемся на строку с длинной стороны квадрата
            fin1 >> b[j]; //считываем строку с длинной стороны квадрата
        }
    }
    fin1.close(); //закрываем файл с информацией по квадратам 
    switch (k)
    {
    case 0: pictureBox1->Visible = false; //делаем элементы выдимыми 
        pictureBox2->Visible = false;
        pictureBox3->Visible = false;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 4: pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = false;
        pictureBox3->Visible = false;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 8:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = false;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 12:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = false;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 16:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = false;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 20:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = false;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 24:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = false;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 28:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = false;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 32:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = false;
        pictureBox10->Visible = false;
        break;
    case 36:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = true;
        pictureBox10->Visible = false;
        break;
    case 40:pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = true;
        pictureBox10->Visible = true;
        break;
    default:textBox1->Text = "Что-то пошло не так...";
        pictureBox1->Visible = true; //делаем элементы выдимыми 
        pictureBox2->Visible = true;
        pictureBox3->Visible = true;
        pictureBox4->Visible = true;
        pictureBox5->Visible = true;
        pictureBox6->Visible = true;
        pictureBox7->Visible = true;
        pictureBox8->Visible = true;
        pictureBox9->Visible = true;
        pictureBox10->Visible = true;
        break;
    }
    stor0 = b[0]; stor1 = b[1]; stor2 = b[2]; stor3 = b[3]; stor4 = b[4]; //присваиваем глобальным переменным длинны основания пирамиды значения, прописанные пользователем
    stor5 = b[5]; stor6 = b[6]; stor7 = b[7]; stor8 = b[8]; stor9 = b[9];   //при создании квадратов
    //отрисовка пирамид
    Piramide pir0(b[0], h[0]); //создание экземпляра класса Piramide со значениями стороны основания и высоты первой введенной пирамиды
    Draw(pir0, pictureBox1, mashtab1, Color::Aqua);               //вызов функции рисования на pictureBox1
    Piramide pir1(b[1], h[1]);//аналогично для второй введенной пирамиды
    Draw(pir1, pictureBox2, mashtab2, Color::Blue);               //аналогично для рисования на pictureBox2
    Piramide pir2(b[2], h[2]);
    Draw(pir2, pictureBox3, mashtab3, Color::DarkOrange);
    Piramide pir3(b[3], h[3]);
    Draw(pir3, pictureBox4, mashtab4, Color::Yellow);
    Piramide pir4(b[4], h[4]);
    Draw(pir4, pictureBox5, mashtab5, Color::Red);
    Piramide pir5(b[5], h[5]);
    Draw(pir5, pictureBox6, mashtab6, Color::DarkViolet);
    Piramide pir6(b[6], h[6]);
    Draw(pir6, pictureBox7, mashtab7, Color::Lime);
    Piramide pir7(b[7], h[7]);
    Draw(pir7, pictureBox8, mashtab8, Color::BurlyWood);
    Piramide pir8(b[8], h[8]);
    Draw(pir8, pictureBox9, mashtab9, Color::AntiqueWhite);
    Piramide pir9(b[9], h[9]);
    Draw(pir9, pictureBox10, mashtab10, Color::HotPink);
    textBox1->Text = "Нарисовано";
}
System::Void lisovski19atp::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    pictureBox21->Visible = true;//pictureBox, в котором рисуется пирамида с минимальной площадью поверхности
    int h[10] = { 0,0,0,0,0,0,0,0,0,0 };
    int bytebase[50];
    float fieldbase[10];
    std::string str1;
    std::string str2;
    int k = 0, byte = 0, jump = 0;
    std::string pirinfo = "piramidedata.txt";
    std::ifstream fin;
    fin.open(pirinfo);
    if (!fin.is_open())
    {
        textBox1->Text = "Ошибка чтения файла. Создайте хотя-бы одну пирамиду";
    }
    else
    {
        char ch;
        while (fin.get(ch))
        {
            str1 = ""; //затираем переменную, в которой сохранилась строка
            std::getline(fin, str1); //считали первую строку, чтение данных прекращается при достижении пробела
            byte = fin.tellg(); //получили информацию о том, сколько байт прочиталось
            bytebase[k] = byte; //записываем в массив длинну первой строки в байтах
            k++; //увеличиваем счетчик итераций на 1
            byte = 0; //затираем переменную с байтами для следующей строки
            //по итогу имеем текущее кол-во строк в файле с инф. по пирамидам и сколько байт пройдено с чтением каждой новой строки

        }
        fin.close(); //переоткрываем файл, чтобы чтение началось корректно
        fin.open(pirinfo);

        for (int j = 0; j < (k / 5); j++)
        {


            jump = bytebase[3 + 5 * j]; //узнаем, сколько байт нужно пройти до нужной строки
            fin.seekg(jump, std::ios_base::beg);//перемещаемся на строку с длинной высоты пирамиды
            fin >> h[j]; //считываем строку 
        }
    }
    fin.close(); //закрываем файл с информацией по пирамидам
    Piramide pirbase[10]; //массив пирамид
    Piramide pir0(stor0, h[0]);
    pirbase[0] = pir0;
    Piramide pir1(stor1, h[1]);
    pirbase[1] = pir1;
    Piramide pir2(stor2, h[2]);
    pirbase[2] = pir2;
    Piramide pir3(stor3, h[3]);
    pirbase[3] = pir3;
    Piramide pir4(stor4, h[4]);
    pirbase[4] = pir4;
    Piramide pir5(stor5, h[5]);
    pirbase[5] = pir5;
    Piramide pir6(stor6, h[6]);
    pirbase[6] = pir6;
    Piramide pir7(stor7, h[7]);
    pirbase[7] = pir7;
    Piramide pir8(stor8, h[8]);
    pirbase[8] = pir8;
    Piramide pir9(stor9, h[9]);
    pirbase[9] = pir9;
    pirbase[0].field(); //нахождение площадей поверхности каждой пирамиды
    pirbase[1].field();
    pirbase[2].field();
    pirbase[3].field();
    pirbase[4].field();
    pirbase[5].field();
    pirbase[6].field();
    pirbase[7].field();
    pirbase[8].field();
    pirbase[9].field();
    fieldbase[0] = pirbase[0].fip; //заполнение массива площадей поверхности пирамид
    fieldbase[1] = pirbase[1].fip;
    fieldbase[2] = pirbase[2].fip;
    fieldbase[3] = pirbase[3].fip;
    fieldbase[4] = pirbase[4].fip;
    fieldbase[5] = pirbase[5].fip;
    fieldbase[6] = pirbase[6].fip;
    fieldbase[7] = pirbase[7].fip;
    fieldbase[8] = pirbase[8].fip;
    fieldbase[9] = pirbase[9].fip;
    float minfield = fieldbase[0];
    k = 0;
    for (int i = 1; i <= 9; i++)//нахождение порядкового номера пирамиды, которой принадлежит наименьшая площадь поверхности
    {
        if (fieldbase[i] != 0)//остановка поиска, если пирамиды закончились(площадь равна нулю, значит пирамида отсутствует)
        {
            if (minfield > fieldbase[i])
            {
                minfield = fieldbase[i];
                k = i;
            }
        }
    }
    minpir = pirbase[k];
    Color clr;
    switch (k)//выбор цвета в соответствии с найденным порядковым номером
    {
    case 0: clr = Color::Aqua;
        break;
    case 1: clr = Color::Blue;
        break;
    case 2: clr = Color::DarkOrange;
        break;
    case 3: clr = Color::Yellow;
        break;
    case 4: clr = Color::Red;
        break;
    case 5: clr = Color::DarkViolet;
        break;
    case 6: clr = Color::Lime;
        break;
    case 7: clr = Color::BurlyWood;
        break;
    case 8: clr = Color::AntiqueWhite;
        break;
    case 9: clr = Color::HotPink;
        break;
    default: clr = Color::Aqua;
        break;
    }
    Draw(minpir, pictureBox21, mashtab21, clr); //отрисовка пирамиды
}
System::Void lisovski19atp::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv0(stor11); Kvadrat kv1(stor12); Kvadrat kv2(stor13); Kvadrat kv3(stor14); Kvadrat kv4(stor15);
    Kvadrat kv5(stor16); Kvadrat kv6(stor17); Kvadrat kv7(stor18); Kvadrat kv8(stor19); Kvadrat kv9(stor20);

    kv0.field(); kv1.field(); kv2.field(); kv3.field(); kv4.field();
    kv5.field(); kv6.field(); kv7.field(); kv8.field(); kv9.field();

    textBox3->ForeColor = Color::Firebrick;
    if (kvdrt != 0)
    {
        float srfiled = (kv0.fik + kv1.fik + kv2.fik + kv3.fik + kv4.fik + kv5.fik + kv6.fik + kv7.fik + kv8.fik + kv9.fik) / kvdrt;
        textBox3->Text = System::Convert::ToString(floor(srfiled * 100) / 100);       
    }
    else
        textBox2->Text = "Создайте хотя-бы один квадрат";
}
//--------------------------------------------------------------------------------------------------------------------
System::Void lisovski19atp::MyForm::numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab1 = System::Convert::ToInt32(numericUpDown1->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab2 = System::Convert::ToInt32(numericUpDown2->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab3 = System::Convert::ToInt32(numericUpDown3->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab4 = System::Convert::ToInt32(numericUpDown4->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab5 = System::Convert::ToInt32(numericUpDown5->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab6 = System::Convert::ToInt32(numericUpDown6->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab7 = System::Convert::ToInt32(numericUpDown7->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab8 = System::Convert::ToInt32(numericUpDown8->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown9_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab9 = System::Convert::ToInt32(numericUpDown9->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown10_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab10 = System::Convert::ToInt32(numericUpDown10->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown11_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab11 = System::Convert::ToInt32(numericUpDown11->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown12_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab12 = System::Convert::ToInt32(numericUpDown12->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown13_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab13 = System::Convert::ToInt32(numericUpDown13->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown14_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab14 = System::Convert::ToInt32(numericUpDown14->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown15_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab15 = System::Convert::ToInt32(numericUpDown15->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown16_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab16 = System::Convert::ToInt32(numericUpDown16->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown17_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab17 = System::Convert::ToInt32(numericUpDown17->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown18_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab18 = System::Convert::ToInt32(numericUpDown18->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown19_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab19 = System::Convert::ToInt32(numericUpDown19->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown20_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab20 = System::Convert::ToInt32(numericUpDown20->Value);
}
System::Void lisovski19atp::MyForm::numericUpDown21_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    mashtab21 = System::Convert::ToInt16(numericUpDown21->Value);
}
//---------------------------------------------------------------------------------------------------------------------
System::Void lisovski19atp::MyForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir0(stor0, visot0);
    pir0.apophem();
    pir0.field();
    pir0.sizep();
    label4->ForeColor = Color::Aqua;//задаем цвет
    label5->ForeColor = Color::Aqua;
    label6->ForeColor = Color::Aqua;
    label14->ForeColor = Color::Aqua;
    label18->ForeColor = Color::Aqua;
    label4->Text = System::Convert::ToString(pir0.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir0.fip);
    label6->Text = System::Convert::ToString(pir0.size);
    label14->Text = System::Convert::ToString(stor0);
    label18->Text = System::Convert::ToString(visot0);
}
System::Void lisovski19atp::MyForm::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir1(stor1, visot1);
    pir1.apophem();
    pir1.field();
    pir1.sizep();
    label4->ForeColor = Color::Blue;//задаем цвет
    label5->ForeColor = Color::Blue;
    label6->ForeColor = Color::Blue;
    label14->ForeColor = Color::Blue;
    label18->ForeColor = Color::Blue;
    label4->Text = System::Convert::ToString(pir1.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir1.fip);
    label6->Text = System::Convert::ToString(pir1.size);
    label14->Text = System::Convert::ToString(stor1);
    label18->Text = System::Convert::ToString(visot1);
}
System::Void lisovski19atp::MyForm::pictureBox3_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir2(stor2, visot2);
    pir2.apophem();
    pir2.field();
    pir2.sizep();
    label4->ForeColor = Color::DarkOrange;//задаем цвет
    label5->ForeColor = Color::DarkOrange;
    label6->ForeColor = Color::DarkOrange;
    label14->ForeColor = Color::DarkOrange;
    label18->ForeColor = Color::DarkOrange;
    label4->Text = System::Convert::ToString(pir2.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir2.fip);
    label6->Text = System::Convert::ToString(pir2.size);
    label14->Text = System::Convert::ToString(stor2);
    label18->Text = System::Convert::ToString(visot2);
}
System::Void lisovski19atp::MyForm::pictureBox4_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir3(stor3, visot3);
    pir3.apophem();
    pir3.field();
    pir3.sizep();
    label4->ForeColor = Color::Yellow;//задаем цвет
    label5->ForeColor = Color::Yellow;
    label6->ForeColor = Color::Yellow;
    label14->ForeColor = Color::Yellow;
    label18->ForeColor = Color::Yellow;
    label4->Text = System::Convert::ToString(pir3.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir3.fip);
    label6->Text = System::Convert::ToString(pir3.size);
    label14->Text = System::Convert::ToString(stor3);
    label18->Text = System::Convert::ToString(visot3);
}
System::Void lisovski19atp::MyForm::pictureBox5_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir4(stor4, visot4);
    pir4.apophem();
    pir4.field();
    pir4.sizep();
    label4->ForeColor = Color::Red;//задаем цвет
    label5->ForeColor = Color::Red;
    label6->ForeColor = Color::Red;
    label14->ForeColor = Color::Red;
    label18->ForeColor = Color::Red;
    label4->Text = System::Convert::ToString(pir4.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir4.fip);
    label6->Text = System::Convert::ToString(pir4.size);
    label14->Text = System::Convert::ToString(stor4);
    label18->Text = System::Convert::ToString(visot4);
}
System::Void lisovski19atp::MyForm::pictureBox6_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir5(stor5, visot5);
    pir5.apophem();
    pir5.field();
    pir5.sizep();
    label4->ForeColor = Color::DarkViolet;//задаем цвет
    label5->ForeColor = Color::DarkViolet;
    label6->ForeColor = Color::DarkViolet;
    label14->ForeColor = Color::DarkViolet;
    label18->ForeColor = Color::DarkViolet;
    label4->Text = System::Convert::ToString(pir5.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir5.fip);
    label6->Text = System::Convert::ToString(pir5.size);
    label14->Text = System::Convert::ToString(stor5);
    label18->Text = System::Convert::ToString(visot5);
}
System::Void lisovski19atp::MyForm::pictureBox7_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir6(stor6, visot6);
    pir6.apophem();
    pir6.field();
    pir6.sizep();
    label4->ForeColor = Color::Lime;//задаем цвет
    label5->ForeColor = Color::Lime;
    label6->ForeColor = Color::Lime;
    label14->ForeColor = Color::Lime;
    label18->ForeColor = Color::Lime;
    label4->Text = System::Convert::ToString(pir6.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir6.fip);
    label6->Text = System::Convert::ToString(pir6.size);
    label14->Text = System::Convert::ToString(stor6);
    label18->Text = System::Convert::ToString(visot6);
}
System::Void lisovski19atp::MyForm::pictureBox8_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir7(stor7, visot7);
    pir7.apophem();
    pir7.field();
    pir7.sizep();
    label4->ForeColor = Color::BurlyWood;//задаем цвет
    label5->ForeColor = Color::BurlyWood;
    label6->ForeColor = Color::BurlyWood;
    label14->ForeColor = Color::BurlyWood;
    label18->ForeColor = Color::BurlyWood;
    label4->Text = System::Convert::ToString(pir7.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir7.fip);
    label6->Text = System::Convert::ToString(pir7.size);
    label14->Text = System::Convert::ToString(stor7);
    label18->Text = System::Convert::ToString(visot7);
}
System::Void lisovski19atp::MyForm::pictureBox9_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir8(stor8, visot8);
    pir8.apophem();
    pir8.field();
    pir8.sizep();
    label4->ForeColor = Color::AntiqueWhite;//задаем цвет
    label5->ForeColor = Color::AntiqueWhite;
    label6->ForeColor = Color::AntiqueWhite;
    label14->ForeColor = Color::AntiqueWhite;
    label18->ForeColor = Color::AntiqueWhite;
    label4->Text = System::Convert::ToString(pir8.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir8.fip);
    label6->Text = System::Convert::ToString(pir8.size);
    label14->Text = System::Convert::ToString(stor8);
    label18->Text = System::Convert::ToString(visot8);
}
System::Void lisovski19atp::MyForm::pictureBox10_Click(System::Object^ sender, System::EventArgs^ e)
{
    Piramide pir9(stor9, visot9);
    pir9.apophem();
    pir9.field();
    pir9.sizep();
    label4->ForeColor = Color::HotPink;//задаем цвет
    label5->ForeColor = Color::HotPink;
    label6->ForeColor = Color::HotPink;
    label14->ForeColor = Color::HotPink;
    label18->ForeColor = Color::HotPink;
    label4->Text = System::Convert::ToString(pir9.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(pir9.fip);
    label6->Text = System::Convert::ToString(pir9.size);
    label14->Text = System::Convert::ToString(stor9);
    label18->Text = System::Convert::ToString(visot9);
}
System::Void lisovski19atp::MyForm::pictureBox11_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv0(stor11);
    kv0.field();
    kv0.perimeter();
    kv0.diagonal();
    label7->ForeColor = Color::Aqua;//задаем цвет
    label9->ForeColor = Color::Aqua;
    label8->ForeColor = Color::Aqua;
    label16->ForeColor = Color::Aqua;
    label7->Text = System::Convert::ToString(kv0.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv0.perim);
    label8->Text = System::Convert::ToString(kv0.dia);
    label16->Text = System::Convert::ToString(stor11);
}
System::Void lisovski19atp::MyForm::pictureBox12_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv1(stor12);
    kv1.field();
    kv1.perimeter();
    kv1.diagonal();
    label7->ForeColor = Color::Blue;//задаем цвет
    label9->ForeColor = Color::Blue;
    label8->ForeColor = Color::Blue;
    label16->ForeColor = Color::Blue;
    label7->Text = System::Convert::ToString(kv1.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv1.perim);
    label8->Text = System::Convert::ToString(kv1.dia);
    label16->Text = System::Convert::ToString(stor12);
}
System::Void lisovski19atp::MyForm::pictureBox13_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv2(stor13);
    kv2.field();
    kv2.perimeter();
    kv2.diagonal();
    label7->ForeColor = Color::DarkOrange;//задаем цвет
    label9->ForeColor = Color::DarkOrange;
    label8->ForeColor = Color::DarkOrange;
    label16->ForeColor = Color::DarkOrange;
    label7->Text = System::Convert::ToString(kv2.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv2.perim);
    label8->Text = System::Convert::ToString(kv2.dia);
    label16->Text = System::Convert::ToString(stor13);
}
System::Void lisovski19atp::MyForm::pictureBox14_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv3(stor14);
    kv3.field();
    kv3.perimeter();
    kv3.diagonal();
    label7->ForeColor = Color::Yellow;//задаем цвет
    label9->ForeColor = Color::Yellow;
    label8->ForeColor = Color::Yellow;
    label16->ForeColor = Color::Yellow;
    label7->Text = System::Convert::ToString(kv3.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv3.perim);
    label8->Text = System::Convert::ToString(kv3.dia);
    label16->Text = System::Convert::ToString(stor14);
}
System::Void lisovski19atp::MyForm::pictureBox15_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv4(stor15);
    kv4.field();
    kv4.perimeter();
    kv4.diagonal();
    label7->ForeColor = Color::Red;//задаем цвет
    label9->ForeColor = Color::Red;
    label8->ForeColor = Color::Red;
    label16->ForeColor = Color::Red;
    label7->Text = System::Convert::ToString(kv4.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv4.perim);
    label8->Text = System::Convert::ToString(kv4.dia);
    label16->Text = System::Convert::ToString(stor15);
}
System::Void lisovski19atp::MyForm::pictureBox16_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv5(stor16);
    kv5.field();
    kv5.perimeter();
    kv5.diagonal();
    label7->ForeColor = Color::DarkViolet;//задаем цвет
    label9->ForeColor = Color::DarkViolet;
    label8->ForeColor = Color::DarkViolet;
    label16->ForeColor = Color::DarkViolet;
    label7->Text = System::Convert::ToString(kv5.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv5.perim);
    label8->Text = System::Convert::ToString(kv5.dia);
    label16->Text = System::Convert::ToString(stor16);
}
System::Void lisovski19atp::MyForm::pictureBox17_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv6(stor17);
    kv6.field();
    kv6.perimeter();
    kv6.diagonal();
    label7->ForeColor = Color::Lime;//задаем цвет
    label9->ForeColor = Color::Lime;
    label8->ForeColor = Color::Lime;
    label16->ForeColor = Color::Lime;
    label7->Text = System::Convert::ToString(kv6.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv6.perim);
    label8->Text = System::Convert::ToString(kv6.dia);
    label16->Text = System::Convert::ToString(stor17);
}
System::Void lisovski19atp::MyForm::pictureBox18_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv7(stor18);
    kv7.field();
    kv7.perimeter();
    kv7.diagonal();
    label7->ForeColor = Color::BurlyWood;//задаем цвет
    label9->ForeColor = Color::BurlyWood;
    label8->ForeColor = Color::BurlyWood;
    label16->ForeColor = Color::BurlyWood;
    label7->Text = System::Convert::ToString(kv7.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv7.perim);
    label8->Text = System::Convert::ToString(kv7.dia);
    label16->Text = System::Convert::ToString(stor18);
}
System::Void lisovski19atp::MyForm::pictureBox19_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv8(stor19);
    kv8.field();
    kv8.perimeter();
    kv8.diagonal();
    label7->ForeColor = Color::AntiqueWhite;//задаем цвет
    label9->ForeColor = Color::AntiqueWhite;
    label8->ForeColor = Color::AntiqueWhite;
    label16->ForeColor = Color::AntiqueWhite;
    label7->Text = System::Convert::ToString(kv8.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv8.perim);
    label8->Text = System::Convert::ToString(kv8.dia);
    label16->Text = System::Convert::ToString(stor19);
}
System::Void lisovski19atp::MyForm::pictureBox20_Click(System::Object^ sender, System::EventArgs^ e)
{
    Kvadrat kv9(stor20);
    kv9.field();
    kv9.perimeter();
    kv9.diagonal();
    label7->ForeColor = Color::HotPink;//задаем цвет
    label9->ForeColor = Color::HotPink;
    label8->ForeColor = Color::HotPink;
    label16->ForeColor = Color::HotPink;
    label7->Text = System::Convert::ToString(kv9.fik);  //отображаем информацию о квадрате
    label9->Text = System::Convert::ToString(kv9.perim);
    label8->Text = System::Convert::ToString(kv9.dia);
    label16->Text = System::Convert::ToString(stor20);
}
System::Void lisovski19atp::MyForm::pictureBox21_Click(System::Object^ sender, System::EventArgs^ e)
{
    label4->ForeColor = Color::Firebrick;//задаем цвет
    label5->ForeColor = Color::Firebrick;
    label6->ForeColor = Color::Firebrick;
    label14->ForeColor = Color::Firebrick;
    label18->ForeColor = Color::Firebrick;

    minpir.apophem();
    minpir.field();
    minpir.sizep();

    label4->Text = System::Convert::ToString(minpir.apop); //отображаем данные о пирамиде
    label5->Text = System::Convert::ToString(minpir.fip);
    label6->Text = System::Convert::ToString(minpir.size);
    label14->Text = System::Convert::ToString(minpir.geta());
    label18->Text = System::Convert::ToString(minpir.get_h());
}
//---------------------------------------------------------------------------------------------------------------------
System::Void lisovski19atp::MyForm::toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    float fip[10], apop[10], sizep[11]; //для пирамиды
    int storp[10] = {stor0,stor1,stor2,stor3,stor4,stor5,stor6,stor7,stor8,stor9}, visot[10] = {visot0,visot1,visot2,visot3,visot4,visot5,visot6,visot7,visot8,visot9};
    float dia[10]; //для квадрата
    int fik[10], per[10], stork[10] = {stor11,stor12,stor13,stor14,stor15 ,stor16 ,stor17 ,stor18 ,stor19 ,stor20 };
    Piramide pir0(stor0, visot0); Piramide pir1(stor1, visot1); Piramide pir2(stor2, visot2); Piramide pir3(stor3, visot3); Piramide pir4(stor4, visot4);
    Piramide pir5(stor5, visot5); Piramide pir6(stor6, visot6); Piramide pir7(stor7, visot7); Piramide pir8(stor8, visot8); Piramide pir9(stor9, visot9);
    pir0.field();           //заполняем массив площадей поверхностей пирамид
    fip[0] = pir0.fip;
    pir1.field();
    fip[1] = pir1.fip;
    pir2.field();
    fip[2] = pir2.fip;
    pir3.field();
    fip[3] = pir3.fip;
    pir4.field();
    fip[4] = pir4.fip;
    pir5.field();
    fip[5] = pir5.fip;
    pir6.field();
    fip[6] = pir6.fip;
    pir7.field();
    fip[7] = pir7.fip;
    pir8.field();
    fip[8] = pir8.fip;
    pir0.field();
    fip[9] = pir9.fip;
    pir0.field();
    pir0.apophem();         //заполняем массив апофем пирамид
    apop[0] = pir0.apop;
    pir1.apophem();
    apop[1] = pir1.apop;
    pir2.apophem();
    apop[2] = pir2.apop;
    pir3.apophem();
    apop[3] = pir3.apop;
    pir4.apophem();
    apop[4] = pir4.apop;
    pir5.apophem();
    apop[5] = pir5.apop;
    pir6.apophem();
    apop[6] = pir6.apop;
    pir7.apophem();
    apop[7] = pir7.apop;
    pir8.apophem();
    apop[8] = pir8.apop;
    pir9.apophem();
    apop[9] = pir9.apop;
    pir0.sizep();               //заполняем массив объемов пирамид
    sizep[0] = pir0.size;
    pir1.sizep();
    sizep[1] = pir1.size;
    pir2.sizep();
    sizep[2] = pir2.size;
    pir3.sizep();
    sizep[3] = pir3.size;
    pir4.sizep();
    sizep[4] = pir4.size;
    pir5.sizep();
    sizep[5] = pir5.size;
    pir6.sizep();
    sizep[6] = pir6.size;
    pir7.sizep();
    sizep[7] = pir7.size;
    pir8.sizep();
    sizep[8] = pir8.size;
    pir9.sizep();
    sizep[9] = pir9.size;
    minpir.sizep();
    sizep[10] = minpir.size; //наименьший объём пирамид
    Kvadrat kv0(stor11); Kvadrat kv1(stor12); Kvadrat kv2(stor13); Kvadrat kv3(stor14); Kvadrat kv4(stor15);
    Kvadrat kv5(stor16); Kvadrat kv6(stor17); Kvadrat kv7(stor18); Kvadrat kv8(stor19); Kvadrat kv9(stor20);   
    kv0.diagonal();         //заполянем массив диагоналей квадратов
    dia[0] = kv0.dia;
    kv1.diagonal();
    dia[1] = kv1.dia;
    kv2.diagonal();
    dia[2] = kv2.dia;
    kv3.diagonal();
    dia[3] = kv3.dia;
    kv4.diagonal();
    dia[4] = kv4.dia;
    kv5.diagonal();
    dia[5] = kv5.dia;
    kv6.diagonal();
    dia[6] = kv6.dia;
    kv7.diagonal();
    dia[7] = kv7.dia;
    kv8.diagonal();
    dia[8] = kv8.dia;
    kv9.diagonal();
    dia[9] = kv9.dia;
    kv0.field();            //заполняем массив площадей квадратов
    fik[0] = kv0.fik;
    kv1.field();
    fik[1] = kv1.fik;
    kv2.field();
    fik[2] = kv2.fik;
    kv3.field();
    fik[3] = kv3.fik;
    kv4.field();
    fik[4] = kv4.fik;
    kv5.field();
    fik[5] = kv5.fik;
    kv6.field();
    fik[6] = kv6.fik;
    kv7.field();
    fik[7] = kv7.fik;
    kv8.field();
    fik[8] = kv8.fik;
    kv9.field();
    fik[9] = kv9.fik;
    kv0.perimeter();            //заполянем массив периметров квадратов
    per[0] = kv0.perim;
    kv1.perimeter();
    per[1] = kv1.perim;
    kv2.perimeter();
    per[2] = kv2.perim;
    kv3.perimeter();
    per[3] = kv3.perim;
    kv4.perimeter();
    per[4] = kv4.perim;
    kv5.perimeter();
    per[5] = kv5.perim;
    kv6.perimeter();
    per[6] = kv6.perim;
    kv7.perimeter();
    per[7] = kv7.perim;
    kv8.perimeter();
    per[8] = kv8.perim;
    kv9.perimeter();
    per[9] = kv9.perim;
    std::ofstream data("SAVED.txt"); //создание файла с инф. по созданным квадратам
    data << "СОХРАНЁННЫЕ ДАННЫЕ ВСЕХ СОЗДАННЫХ ФИГУР:" << std::endl <<"/////////////////////////////////////////////////////////" << std::endl << "ПИРАМИДЫ:" << std::endl << std::endl << std::endl;
    for (int i = 0; i < prmd; i++)
    {
        data << "ПИРАМИДА НОМЕР " << i  << " :" << std::endl << std::endl << "Площадь поверхности: " << fip[i] << std::endl << "Апофема: " << apop[i] << std::endl
            << "Объём: " << sizep[i] << std::endl << "Сторона основания: " << storp[i] << std::endl << "Высота: " << visot[i] << std::endl << std::endl << std::endl;
    }
    data << "Наименьший объем: " << sizep[10] << std::endl << std::endl;
    data << std::endl <<"/////////////////////////////////////////////////////////" << std::endl << "КВАДРАТЫ: " << std::endl << std::endl << std::endl;
    for (int i = 0; i < kvdrt; i++)
    {
        data << "КВАДРАТ НОМЕР "  << i  << " :" << std::endl << std::endl << "Площадь: " << fik[i] << std::endl << "Диагональ: " << dia[i] << std::endl
            << "Периметр: " << per[i] << std::endl << "Сторона: " << stork[i] << std::endl << std::endl << std::endl;
    }
    data << "Средняя площадь квадратов: " << (floor(((kv0.fik + kv1.fik + kv2.fik + kv3.fik + kv4.fik + kv5.fik + kv6.fik + kv7.fik + kv8.fik + kv9.fik) / (kvdrt))*100))/100 << std::endl << std::endl;
    data << std::endl <<"/////////////////////////////////////////////////////////" << std::endl << "Расчеты получены при помощи программы OOP." << std::endl << "BGTU, О-19-ATP-AUTP-B, 2021, Lisovski V.S." << std::endl;
    data.close();
}
System::Void lisovski19atp::MyForm::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm3^ frm = gcnew MyForm3;
    frm->Show(this);
}
System::Void lisovski19atp::MyForm::toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm4^ frm = gcnew MyForm4;
    frm->Show(this);
}




