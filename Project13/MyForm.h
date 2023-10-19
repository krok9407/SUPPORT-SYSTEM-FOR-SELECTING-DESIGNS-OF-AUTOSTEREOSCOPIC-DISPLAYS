#include <math.h>
#pragma once
namespace Project13 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageListContrast;
	private: System::Windows::Forms::ImageList^ imageListShadow;
	private: System::Windows::Forms::ImageList^ imageListRotate;
	protected:
	private: System::Windows::Forms::Button^ btn_Ok;
	private: System::Windows::Forms::Button^ btn_Start;
	private: System::Windows::Forms::Button^ btn_NO;

	private: System::Windows::Forms::Label^ Label_Question;
	private: System::Windows::Forms::Label^ label_answer;
	private: System::Windows::Forms::TextBox^ printAnswer;
	private: System::Windows::Forms::ComboBox^ lispVoxel;
	private: System::Windows::Forms::Label^ questionFive;
	private: System::Windows::Forms::CheckedListBox^ checkBoxLisp;
	private: System::Windows::Forms::VScrollBar^ brightScroll;
	private: System::Windows::Forms::PictureBox^ myImage;
	private: System::Windows::Forms::HScrollBar^ ScrollBarSpeed;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ImageList^ imageListMove;
	private: System::Windows::Forms::ImageList^ imageListSize;
	private: System::Windows::Forms::TextBox^ textHeight;
	private: System::Windows::Forms::TextBox^ textWidth;
	private: System::Windows::Forms::TextBox^ textDepth;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::ListBox^ listBoxBright;
	private: System::Windows::Forms::ListBox^ listBoxContrast;
	private: System::Windows::Forms::ListBox^ listBoxDiagonal;
	private: System::Windows::Forms::ListBox^ listBoxPixel;

	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageListContrast = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageListShadow = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageListRotate = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btn_Ok = (gcnew System::Windows::Forms::Button());
			this->btn_Start = (gcnew System::Windows::Forms::Button());
			this->btn_NO = (gcnew System::Windows::Forms::Button());
			this->Label_Question = (gcnew System::Windows::Forms::Label());
			this->label_answer = (gcnew System::Windows::Forms::Label());
			this->printAnswer = (gcnew System::Windows::Forms::TextBox());
			this->lispVoxel = (gcnew System::Windows::Forms::ComboBox());
			this->questionFive = (gcnew System::Windows::Forms::Label());
			this->checkBoxLisp = (gcnew System::Windows::Forms::CheckedListBox());
			this->brightScroll = (gcnew System::Windows::Forms::VScrollBar());
			this->myImage = (gcnew System::Windows::Forms::PictureBox());
			this->ScrollBarSpeed = (gcnew System::Windows::Forms::HScrollBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageListMove = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageListSize = (gcnew System::Windows::Forms::ImageList(this->components));
			this->textHeight = (gcnew System::Windows::Forms::TextBox());
			this->textWidth = (gcnew System::Windows::Forms::TextBox());
			this->textDepth = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBoxBright = (gcnew System::Windows::Forms::ListBox());
			this->listBoxContrast = (gcnew System::Windows::Forms::ListBox());
			this->listBoxDiagonal = (gcnew System::Windows::Forms::ListBox());
			this->listBoxPixel = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myImage))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"-30.jpg");
			this->imageList1->Images->SetKeyName(1, L"-29.jpg");
			this->imageList1->Images->SetKeyName(2, L"-28.jpg");
			this->imageList1->Images->SetKeyName(3, L"-27.jpg");
			this->imageList1->Images->SetKeyName(4, L"-26.jpg");
			this->imageList1->Images->SetKeyName(5, L"-25.jpg");
			this->imageList1->Images->SetKeyName(6, L"-24.jpg");
			this->imageList1->Images->SetKeyName(7, L"-23.jpg");
			this->imageList1->Images->SetKeyName(8, L"-22.jpg");
			this->imageList1->Images->SetKeyName(9, L"-21.jpg");
			this->imageList1->Images->SetKeyName(10, L"-20.jpg");
			this->imageList1->Images->SetKeyName(11, L"-19.jpg");
			this->imageList1->Images->SetKeyName(12, L"-18.jpg");
			this->imageList1->Images->SetKeyName(13, L"-17.jpg");
			this->imageList1->Images->SetKeyName(14, L"-16.jpg");
			this->imageList1->Images->SetKeyName(15, L"-15.jpg");
			this->imageList1->Images->SetKeyName(16, L"-14.jpg");
			this->imageList1->Images->SetKeyName(17, L"-13.jpg");
			this->imageList1->Images->SetKeyName(18, L"-12.jpg");
			this->imageList1->Images->SetKeyName(19, L"-11.jpg");
			this->imageList1->Images->SetKeyName(20, L"-10.jpg");
			this->imageList1->Images->SetKeyName(21, L"-9.jpg");
			this->imageList1->Images->SetKeyName(22, L"-8.jpg");
			this->imageList1->Images->SetKeyName(23, L"-7.jpg");
			this->imageList1->Images->SetKeyName(24, L"-6.jpg");
			this->imageList1->Images->SetKeyName(25, L"-5.jpg");
			this->imageList1->Images->SetKeyName(26, L"-4.jpg");
			this->imageList1->Images->SetKeyName(27, L"-3.jpg");
			this->imageList1->Images->SetKeyName(28, L"-2.jpg");
			this->imageList1->Images->SetKeyName(29, L"-1.jpg");
			this->imageList1->Images->SetKeyName(30, L"0.jpg");
			this->imageList1->Images->SetKeyName(31, L"1.jpg");
			this->imageList1->Images->SetKeyName(32, L"2.jpg");
			this->imageList1->Images->SetKeyName(33, L"3.jpg");
			this->imageList1->Images->SetKeyName(34, L"4.jpg");
			this->imageList1->Images->SetKeyName(35, L"5.jpg");
			this->imageList1->Images->SetKeyName(36, L"6.jpg");
			this->imageList1->Images->SetKeyName(37, L"7.jpg");
			this->imageList1->Images->SetKeyName(38, L"8.jpg");
			this->imageList1->Images->SetKeyName(39, L"9.jpg");
			this->imageList1->Images->SetKeyName(40, L"10.jpg");
			this->imageList1->Images->SetKeyName(41, L"11.jpg");
			this->imageList1->Images->SetKeyName(42, L"12.jpg");
			this->imageList1->Images->SetKeyName(43, L"13.jpg");
			this->imageList1->Images->SetKeyName(44, L"14.jpg");
			this->imageList1->Images->SetKeyName(45, L"15.jpg");
			this->imageList1->Images->SetKeyName(46, L"16.jpg");
			this->imageList1->Images->SetKeyName(47, L"17.jpg");
			this->imageList1->Images->SetKeyName(48, L"19.jpg");
			this->imageList1->Images->SetKeyName(49, L"20.jpg");
			this->imageList1->Images->SetKeyName(50, L"21.jpg");
			this->imageList1->Images->SetKeyName(51, L"22.jpg");
			this->imageList1->Images->SetKeyName(52, L"23.jpg");
			this->imageList1->Images->SetKeyName(53, L"24.jpg");
			this->imageList1->Images->SetKeyName(54, L"25.jpg");
			this->imageList1->Images->SetKeyName(55, L"26.jpg");
			this->imageList1->Images->SetKeyName(56, L"27.jpg");
			this->imageList1->Images->SetKeyName(57, L"28.jpg");
			this->imageList1->Images->SetKeyName(58, L"29.jpg");
			this->imageList1->Images->SetKeyName(59, L"30.jpg");
			this->imageList1->Images->SetKeyName(60, L"0.jpg");
			this->imageList1->Images->SetKeyName(61, L"1.jpg");
			this->imageList1->Images->SetKeyName(62, L"2.jpg");
			this->imageList1->Images->SetKeyName(63, L"3.jpg");
			this->imageList1->Images->SetKeyName(64, L"4.jpg");
			this->imageList1->Images->SetKeyName(65, L"5.jpg");
			this->imageList1->Images->SetKeyName(66, L"6.jpg");
			this->imageList1->Images->SetKeyName(67, L"7.jpg");
			this->imageList1->Images->SetKeyName(68, L"8.jpg");
			this->imageList1->Images->SetKeyName(69, L"9.jpg");
			this->imageList1->Images->SetKeyName(70, L"10.jpg");
			this->imageList1->Images->SetKeyName(71, L"11.jpg");
			this->imageList1->Images->SetKeyName(72, L"12.jpg");
			this->imageList1->Images->SetKeyName(73, L"13.jpg");
			this->imageList1->Images->SetKeyName(74, L"14.jpg");
			this->imageList1->Images->SetKeyName(75, L"15.jpg");
			this->imageList1->Images->SetKeyName(76, L"16.jpg");
			this->imageList1->Images->SetKeyName(77, L"17.jpg");
			this->imageList1->Images->SetKeyName(78, L"19.jpg");
			this->imageList1->Images->SetKeyName(79, L"20.jpg");
			this->imageList1->Images->SetKeyName(80, L"21.jpg");
			this->imageList1->Images->SetKeyName(81, L"22.jpg");
			this->imageList1->Images->SetKeyName(82, L"23.jpg");
			this->imageList1->Images->SetKeyName(83, L"24.jpg");
			this->imageList1->Images->SetKeyName(84, L"25.jpg");
			this->imageList1->Images->SetKeyName(85, L"26.jpg");
			this->imageList1->Images->SetKeyName(86, L"27.jpg");
			this->imageList1->Images->SetKeyName(87, L"28.jpg");
			this->imageList1->Images->SetKeyName(88, L"29.jpg");
			this->imageList1->Images->SetKeyName(89, L"30.jpg");
			// 
			// imageListContrast
			// 
			this->imageListContrast->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListContrast.ImageStream")));
			this->imageListContrast->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListContrast->Images->SetKeyName(0, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(1, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(2, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(3, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(4, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(5, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(6, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(7, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(8, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(9, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(10, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(11, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(12, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(13, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(14, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(15, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(16, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(17, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(18, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(19, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(20, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(21, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(22, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(23, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(24, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(25, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(26, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(27, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(28, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(29, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(30, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(31, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(32, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(33, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(34, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(35, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(36, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(37, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(38, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(39, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(40, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(41, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(42, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(43, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(44, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(45, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(46, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(47, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(48, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(49, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(50, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(51, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(52, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(53, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(54, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(55, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(56, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(57, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(58, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(59, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(60, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(61, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(62, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(63, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(64, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(65, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(66, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(67, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(68, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(69, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(70, L"0.jpg");
			this->imageListContrast->Images->SetKeyName(71, L"1.jpg");
			this->imageListContrast->Images->SetKeyName(72, L"2.jpg");
			this->imageListContrast->Images->SetKeyName(73, L"3.jpg");
			this->imageListContrast->Images->SetKeyName(74, L"4.jpg");
			this->imageListContrast->Images->SetKeyName(75, L"5.jpg");
			this->imageListContrast->Images->SetKeyName(76, L"6.jpg");
			this->imageListContrast->Images->SetKeyName(77, L"7.jpg");
			this->imageListContrast->Images->SetKeyName(78, L"8.jpg");
			this->imageListContrast->Images->SetKeyName(79, L"9.jpg");
			this->imageListContrast->Images->SetKeyName(80, L"10.jpg");
			// 
			// imageListShadow
			// 
			this->imageListShadow->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListShadow.ImageStream")));
			this->imageListShadow->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListShadow->Images->SetKeyName(0, L"0.jpg");
			this->imageListShadow->Images->SetKeyName(1, L"1.jpg");
			this->imageListShadow->Images->SetKeyName(2, L"2.jpg");
			this->imageListShadow->Images->SetKeyName(3, L"3.jpg");
			this->imageListShadow->Images->SetKeyName(4, L"4.jpg");
			this->imageListShadow->Images->SetKeyName(5, L"5.jpg");
			this->imageListShadow->Images->SetKeyName(6, L"6.jpg");
			this->imageListShadow->Images->SetKeyName(7, L"7.jpg");
			this->imageListShadow->Images->SetKeyName(8, L"8.jpg");
			this->imageListShadow->Images->SetKeyName(9, L"9.jpg");
			this->imageListShadow->Images->SetKeyName(10, L"10.jpg");
			this->imageListShadow->Images->SetKeyName(11, L"1.jpg");
			this->imageListShadow->Images->SetKeyName(12, L"2.jpg");
			this->imageListShadow->Images->SetKeyName(13, L"3.jpg");
			this->imageListShadow->Images->SetKeyName(14, L"4.jpg");
			this->imageListShadow->Images->SetKeyName(15, L"5.jpg");
			this->imageListShadow->Images->SetKeyName(16, L"6.jpg");
			this->imageListShadow->Images->SetKeyName(17, L"7.jpg");
			this->imageListShadow->Images->SetKeyName(18, L"8.jpg");
			this->imageListShadow->Images->SetKeyName(19, L"9.jpg");
			this->imageListShadow->Images->SetKeyName(20, L"10.jpg");
			this->imageListShadow->Images->SetKeyName(21, L"1.jpg");
			this->imageListShadow->Images->SetKeyName(22, L"2.jpg");
			this->imageListShadow->Images->SetKeyName(23, L"3.jpg");
			this->imageListShadow->Images->SetKeyName(24, L"4.jpg");
			this->imageListShadow->Images->SetKeyName(25, L"5.jpg");
			this->imageListShadow->Images->SetKeyName(26, L"6.jpg");
			this->imageListShadow->Images->SetKeyName(27, L"7.jpg");
			this->imageListShadow->Images->SetKeyName(28, L"8.jpg");
			this->imageListShadow->Images->SetKeyName(29, L"9.jpg");
			this->imageListShadow->Images->SetKeyName(30, L"10.jpg");
			this->imageListShadow->Images->SetKeyName(31, L"1.jpg");
			this->imageListShadow->Images->SetKeyName(32, L"2.jpg");
			this->imageListShadow->Images->SetKeyName(33, L"3.jpg");
			this->imageListShadow->Images->SetKeyName(34, L"4.jpg");
			this->imageListShadow->Images->SetKeyName(35, L"5.jpg");
			this->imageListShadow->Images->SetKeyName(36, L"6.jpg");
			this->imageListShadow->Images->SetKeyName(37, L"7.jpg");
			this->imageListShadow->Images->SetKeyName(38, L"8.jpg");
			this->imageListShadow->Images->SetKeyName(39, L"9.jpg");
			this->imageListShadow->Images->SetKeyName(40, L"10.jpg");
			this->imageListShadow->Images->SetKeyName(41, L"1.jpg");
			this->imageListShadow->Images->SetKeyName(42, L"2.jpg");
			this->imageListShadow->Images->SetKeyName(43, L"3.jpg");
			this->imageListShadow->Images->SetKeyName(44, L"4.jpg");
			this->imageListShadow->Images->SetKeyName(45, L"5.jpg");
			this->imageListShadow->Images->SetKeyName(46, L"6.jpg");
			this->imageListShadow->Images->SetKeyName(47, L"7.jpg");
			this->imageListShadow->Images->SetKeyName(48, L"8.jpg");
			this->imageListShadow->Images->SetKeyName(49, L"9.jpg");
			this->imageListShadow->Images->SetKeyName(50, L"10.jpg");
			this->imageListShadow->Images->SetKeyName(51, L"1.jpg");
			this->imageListShadow->Images->SetKeyName(52, L"2.jpg");
			this->imageListShadow->Images->SetKeyName(53, L"3.jpg");
			this->imageListShadow->Images->SetKeyName(54, L"4.jpg");
			this->imageListShadow->Images->SetKeyName(55, L"5.jpg");
			this->imageListShadow->Images->SetKeyName(56, L"6.jpg");
			this->imageListShadow->Images->SetKeyName(57, L"7.jpg");
			this->imageListShadow->Images->SetKeyName(58, L"8.jpg");
			this->imageListShadow->Images->SetKeyName(59, L"9.jpg");
			this->imageListShadow->Images->SetKeyName(60, L"10.jpg");
			// 
			// imageListRotate
			// 
			this->imageListRotate->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListRotate.ImageStream")));
			this->imageListRotate->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListRotate->Images->SetKeyName(0, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-0.jpg");
			this->imageListRotate->Images->SetKeyName(1, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-1.jpg");
			this->imageListRotate->Images->SetKeyName(2, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-2.jpg");
			this->imageListRotate->Images->SetKeyName(3, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-3.jpg");
			this->imageListRotate->Images->SetKeyName(4, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-4.jpg");
			this->imageListRotate->Images->SetKeyName(5, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-5.jpg");
			this->imageListRotate->Images->SetKeyName(6, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-6.jpg");
			this->imageListRotate->Images->SetKeyName(7, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-7.jpg");
			this->imageListRotate->Images->SetKeyName(8, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-8.jpg");
			this->imageListRotate->Images->SetKeyName(9, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-9.jpg");
			this->imageListRotate->Images->SetKeyName(10, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-10.jpg");
			this->imageListRotate->Images->SetKeyName(11, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-11.jpg");
			this->imageListRotate->Images->SetKeyName(12, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-12.jpg");
			this->imageListRotate->Images->SetKeyName(13, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-13.jpg");
			this->imageListRotate->Images->SetKeyName(14, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-14.jpg");
			this->imageListRotate->Images->SetKeyName(15, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-15.jpg");
			this->imageListRotate->Images->SetKeyName(16, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-16.jpg");
			this->imageListRotate->Images->SetKeyName(17, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-17.jpg");
			this->imageListRotate->Images->SetKeyName(18, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-18.jpg");
			this->imageListRotate->Images->SetKeyName(19, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-19.jpg");
			this->imageListRotate->Images->SetKeyName(20, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-20.jpg");
			this->imageListRotate->Images->SetKeyName(21, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-21.jpg");
			this->imageListRotate->Images->SetKeyName(22, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-22.jpg");
			this->imageListRotate->Images->SetKeyName(23, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-23.jpg");
			this->imageListRotate->Images->SetKeyName(24, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-24.jpg");
			this->imageListRotate->Images->SetKeyName(25, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-25.jpg");
			this->imageListRotate->Images->SetKeyName(26, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-26.jpg");
			this->imageListRotate->Images->SetKeyName(27, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-27.jpg");
			this->imageListRotate->Images->SetKeyName(28, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-28.jpg");
			this->imageListRotate->Images->SetKeyName(29, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-29.jpg");
			this->imageListRotate->Images->SetKeyName(30, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-30.jpg");
			this->imageListRotate->Images->SetKeyName(31, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-31.jpg");
			this->imageListRotate->Images->SetKeyName(32, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-32.jpg");
			this->imageListRotate->Images->SetKeyName(33, L"6f811a0cfe504ec8be0fbe3ffebe57f2eUEK9y3z6CMuzAyU-33.jpg");
			// 
			// btn_Ok
			// 
			this->btn_Ok->Location = System::Drawing::Point(204, 496);
			this->btn_Ok->Margin = System::Windows::Forms::Padding(4);
			this->btn_Ok->Name = L"btn_Ok";
			this->btn_Ok->Size = System::Drawing::Size(91, 28);
			this->btn_Ok->TabIndex = 0;
			this->btn_Ok->Text = L"Да";
			this->btn_Ok->UseVisualStyleBackColor = true;
			this->btn_Ok->Visible = false;
			this->btn_Ok->Click += gcnew System::EventHandler(this, &MyForm::btn_Ok_Click);
			// 
			// btn_Start
			// 
			this->btn_Start->Location = System::Drawing::Point(596, 496);
			this->btn_Start->Margin = System::Windows::Forms::Padding(4);
			this->btn_Start->Name = L"btn_Start";
			this->btn_Start->Size = System::Drawing::Size(93, 28);
			this->btn_Start->TabIndex = 1;
			this->btn_Start->Text = L"Начать";
			this->btn_Start->UseVisualStyleBackColor = true;
			this->btn_Start->Click += gcnew System::EventHandler(this, &MyForm::btn_Start_Click);
			// 
			// btn_NO
			// 
			this->btn_NO->Location = System::Drawing::Point(1009, 496);
			this->btn_NO->Margin = System::Windows::Forms::Padding(4);
			this->btn_NO->Name = L"btn_NO";
			this->btn_NO->Size = System::Drawing::Size(85, 28);
			this->btn_NO->TabIndex = 2;
			this->btn_NO->Text = L"Нет";
			this->btn_NO->UseVisualStyleBackColor = true;
			this->btn_NO->Visible = false;
			this->btn_NO->Click += gcnew System::EventHandler(this, &MyForm::btn_NO_Click);
			// 
			// Label_Question
			// 
			this->Label_Question->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Label_Question->Location = System::Drawing::Point(16, -14);
			this->Label_Question->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label_Question->Name = L"Label_Question";
			this->Label_Question->Size = System::Drawing::Size(1212, 220);
			this->Label_Question->TabIndex = 4;
			this->Label_Question->Text = resources->GetString(L"Label_Question.Text");
			this->Label_Question->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label_answer
			// 
			this->label_answer->AutoSize = true;
			this->label_answer->Location = System::Drawing::Point(325, 16);
			this->label_answer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_answer->Name = L"label_answer";
			this->label_answer->Size = System::Drawing::Size(0, 16);
			this->label_answer->TabIndex = 5;
			// 
			// printAnswer
			// 
			this->printAnswer->Location = System::Drawing::Point(479, 324);
			this->printAnswer->Margin = System::Windows::Forms::Padding(4);
			this->printAnswer->Name = L"printAnswer";
			this->printAnswer->Size = System::Drawing::Size(332, 22);
			this->printAnswer->TabIndex = 6;
			this->printAnswer->Visible = false;
			// 
			// lispVoxel
			// 
			this->lispVoxel->FormattingEnabled = true;
			this->lispVoxel->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"144", L"240", L"360", L"480", L"720" });
			this->lispVoxel->Location = System::Drawing::Point(539, 322);
			this->lispVoxel->Margin = System::Windows::Forms::Padding(4);
			this->lispVoxel->Name = L"lispVoxel";
			this->lispVoxel->Size = System::Drawing::Size(211, 24);
			this->lispVoxel->TabIndex = 7;
			this->lispVoxel->Text = L"Выберите значение";
			this->lispVoxel->Visible = false;
			// 
			// questionFive
			// 
			this->questionFive->AutoSize = true;
			this->questionFive->Location = System::Drawing::Point(516, 303);
			this->questionFive->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->questionFive->Name = L"questionFive";
			this->questionFive->Size = System::Drawing::Size(257, 16);
			this->questionFive->TabIndex = 8;
			this->questionFive->Text = L"Эквивалент трехмерного разрешения";
			this->questionFive->Visible = false;
			// 
			// checkBoxLisp
			// 
			this->checkBoxLisp->FormattingEnabled = true;
			this->checkBoxLisp->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Параллакс движения", L"Атмосферная перспектива",
					L"Тени", L"Линейная перспектива", L"Взаимное перекрытие объектов(окклюзия)", L"Вращение объектов", L"Относительность размеров",
					L"Градиент текстуры"
			});
			this->checkBoxLisp->Location = System::Drawing::Point(471, 257);
			this->checkBoxLisp->Margin = System::Windows::Forms::Padding(4);
			this->checkBoxLisp->Name = L"checkBoxLisp";
			this->checkBoxLisp->Size = System::Drawing::Size(332, 140);
			this->checkBoxLisp->TabIndex = 9;
			this->checkBoxLisp->Visible = false;
			// 
			// brightScroll
			// 
			this->brightScroll->Location = System::Drawing::Point(504, 226);
			this->brightScroll->Maximum = 89;
			this->brightScroll->Name = L"brightScroll";
			this->brightScroll->Size = System::Drawing::Size(22, 234);
			this->brightScroll->TabIndex = 10;
			this->brightScroll->Value = 45;
			this->brightScroll->Visible = false;
			this->brightScroll->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::brightScroll_Scroll);
			// 
			// myImage
			// 
			this->myImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myImage.Image")));
			this->myImage->Location = System::Drawing::Point(551, 257);
			this->myImage->Margin = System::Windows::Forms::Padding(4);
			this->myImage->Name = L"myImage";
			this->myImage->Size = System::Drawing::Size(187, 172);
			this->myImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->myImage->TabIndex = 11;
			this->myImage->TabStop = false;
			this->myImage->Visible = false;
			// 
			// ScrollBarSpeed
			// 
			this->ScrollBarSpeed->Location = System::Drawing::Point(504, 433);
			this->ScrollBarSpeed->Maximum = 500;
			this->ScrollBarSpeed->Minimum = 1;
			this->ScrollBarSpeed->Name = L"ScrollBarSpeed";
			this->ScrollBarSpeed->Size = System::Drawing::Size(279, 22);
			this->ScrollBarSpeed->TabIndex = 12;
			this->ScrollBarSpeed->Value = 250;
			this->ScrollBarSpeed->Visible = false;
			this->ScrollBarSpeed->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::ScrollBarSpeed_Scroll);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// imageListMove
			// 
			this->imageListMove->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListMove.ImageStream")));
			this->imageListMove->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListMove->Images->SetKeyName(0, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-0.jpg");
			this->imageListMove->Images->SetKeyName(1, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-1.jpg");
			this->imageListMove->Images->SetKeyName(2, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-2.jpg");
			this->imageListMove->Images->SetKeyName(3, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-3.jpg");
			this->imageListMove->Images->SetKeyName(4, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-4.jpg");
			this->imageListMove->Images->SetKeyName(5, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-5.jpg");
			this->imageListMove->Images->SetKeyName(6, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-6.jpg");
			this->imageListMove->Images->SetKeyName(7, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-7.jpg");
			this->imageListMove->Images->SetKeyName(8, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-8.jpg");
			this->imageListMove->Images->SetKeyName(9, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-9.jpg");
			this->imageListMove->Images->SetKeyName(10, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-10.jpg");
			this->imageListMove->Images->SetKeyName(11, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-11.jpg");
			this->imageListMove->Images->SetKeyName(12, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-12.jpg");
			this->imageListMove->Images->SetKeyName(13, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-13.jpg");
			this->imageListMove->Images->SetKeyName(14, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-14.jpg");
			this->imageListMove->Images->SetKeyName(15, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-15.jpg");
			this->imageListMove->Images->SetKeyName(16, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-16.jpg");
			this->imageListMove->Images->SetKeyName(17, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-17.jpg");
			this->imageListMove->Images->SetKeyName(18, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-18.jpg");
			this->imageListMove->Images->SetKeyName(19, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-19.jpg");
			this->imageListMove->Images->SetKeyName(20, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-20.jpg");
			this->imageListMove->Images->SetKeyName(21, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-21.jpg");
			this->imageListMove->Images->SetKeyName(22, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-22.jpg");
			this->imageListMove->Images->SetKeyName(23, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-23.jpg");
			this->imageListMove->Images->SetKeyName(24, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-24.jpg");
			this->imageListMove->Images->SetKeyName(25, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-25.jpg");
			this->imageListMove->Images->SetKeyName(26, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-26.jpg");
			this->imageListMove->Images->SetKeyName(27, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-27.jpg");
			this->imageListMove->Images->SetKeyName(28, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-28.jpg");
			this->imageListMove->Images->SetKeyName(29, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-29.jpg");
			this->imageListMove->Images->SetKeyName(30, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-30.jpg");
			this->imageListMove->Images->SetKeyName(31, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-31.jpg");
			this->imageListMove->Images->SetKeyName(32, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-32.jpg");
			this->imageListMove->Images->SetKeyName(33, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-33.jpg");
			this->imageListMove->Images->SetKeyName(34, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-34.jpg");
			this->imageListMove->Images->SetKeyName(35, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-35.jpg");
			this->imageListMove->Images->SetKeyName(36, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-36.jpg");
			this->imageListMove->Images->SetKeyName(37, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-37.jpg");
			this->imageListMove->Images->SetKeyName(38, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-38.jpg");
			this->imageListMove->Images->SetKeyName(39, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-39.jpg");
			this->imageListMove->Images->SetKeyName(40, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-40.jpg");
			this->imageListMove->Images->SetKeyName(41, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-41.jpg");
			this->imageListMove->Images->SetKeyName(42, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-42.jpg");
			this->imageListMove->Images->SetKeyName(43, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-43.jpg");
			this->imageListMove->Images->SetKeyName(44, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-44.jpg");
			this->imageListMove->Images->SetKeyName(45, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-45.jpg");
			this->imageListMove->Images->SetKeyName(46, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-46.jpg");
			this->imageListMove->Images->SetKeyName(47, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-47.jpg");
			this->imageListMove->Images->SetKeyName(48, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-48.jpg");
			this->imageListMove->Images->SetKeyName(49, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-49.jpg");
			this->imageListMove->Images->SetKeyName(50, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-50.jpg");
			this->imageListMove->Images->SetKeyName(51, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-51.jpg");
			this->imageListMove->Images->SetKeyName(52, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-52.jpg");
			this->imageListMove->Images->SetKeyName(53, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-53.jpg");
			this->imageListMove->Images->SetKeyName(54, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-54.jpg");
			this->imageListMove->Images->SetKeyName(55, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-55.jpg");
			this->imageListMove->Images->SetKeyName(56, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-56.jpg");
			this->imageListMove->Images->SetKeyName(57, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-57.jpg");
			this->imageListMove->Images->SetKeyName(58, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-58.jpg");
			this->imageListMove->Images->SetKeyName(59, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-59.jpg");
			this->imageListMove->Images->SetKeyName(60, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-60.jpg");
			this->imageListMove->Images->SetKeyName(61, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-61.jpg");
			this->imageListMove->Images->SetKeyName(62, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-62.jpg");
			this->imageListMove->Images->SetKeyName(63, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-63.jpg");
			this->imageListMove->Images->SetKeyName(64, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-64.jpg");
			this->imageListMove->Images->SetKeyName(65, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-65.jpg");
			this->imageListMove->Images->SetKeyName(66, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-66.jpg");
			this->imageListMove->Images->SetKeyName(67, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-67.jpg");
			this->imageListMove->Images->SetKeyName(68, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-68.jpg");
			this->imageListMove->Images->SetKeyName(69, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-69.jpg");
			this->imageListMove->Images->SetKeyName(70, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-70.jpg");
			this->imageListMove->Images->SetKeyName(71, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-71.jpg");
			this->imageListMove->Images->SetKeyName(72, L"0c523fe1c28a4201cd58cab3675a36b412v2VjHkOGDYE17U-72.jpg");
			// 
			// imageListSize
			// 
			this->imageListSize->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListSize.ImageStream")));
			this->imageListSize->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListSize->Images->SetKeyName(0, L"p-86-2-2.eps.jpg");
			// 
			// textHeight
			// 
			this->textHeight->Location = System::Drawing::Point(504, 356);
			this->textHeight->Margin = System::Windows::Forms::Padding(4);
			this->textHeight->Name = L"textHeight";
			this->textHeight->Size = System::Drawing::Size(43, 22);
			this->textHeight->TabIndex = 13;
			this->textHeight->Text = L"1";
			this->textHeight->Visible = false;
			// 
			// textWidth
			// 
			this->textWidth->Location = System::Drawing::Point(584, 433);
			this->textWidth->Margin = System::Windows::Forms::Padding(4);
			this->textWidth->Name = L"textWidth";
			this->textWidth->Size = System::Drawing::Size(43, 22);
			this->textWidth->TabIndex = 14;
			this->textWidth->Text = L"1";
			this->textWidth->Visible = false;
			// 
			// textDepth
			// 
			this->textDepth->Location = System::Drawing::Point(739, 385);
			this->textDepth->Margin = System::Windows::Forms::Padding(4);
			this->textDepth->Name = L"textDepth";
			this->textDepth->Size = System::Drawing::Size(43, 22);
			this->textDepth->TabIndex = 15;
			this->textDepth->Text = L"1";
			this->textDepth->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"", L"", L"", L"", L"" });
			this->listBox1->Location = System::Drawing::Point(204, 210);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(448, 84);
			this->listBox1->TabIndex = 16;
			this->listBox1->Visible = false;
			// 
			// listBoxBright
			// 
			this->listBoxBright->FormattingEnabled = true;
			this->listBoxBright->ItemHeight = 16;
			this->listBoxBright->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"", L"", L"", L"", L"" });
			this->listBoxBright->Location = System::Drawing::Point(204, 303);
			this->listBoxBright->Margin = System::Windows::Forms::Padding(4);
			this->listBoxBright->Name = L"listBoxBright";
			this->listBoxBright->Size = System::Drawing::Size(448, 84);
			this->listBoxBright->TabIndex = 17;
			this->listBoxBright->Visible = false;
			// 
			// listBoxContrast
			// 
			this->listBoxContrast->FormattingEnabled = true;
			this->listBoxContrast->ItemHeight = 16;
			this->listBoxContrast->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"", L"", L"", L"", L"" });
			this->listBoxContrast->Location = System::Drawing::Point(661, 210);
			this->listBoxContrast->Margin = System::Windows::Forms::Padding(4);
			this->listBoxContrast->Name = L"listBoxContrast";
			this->listBoxContrast->Size = System::Drawing::Size(448, 84);
			this->listBoxContrast->TabIndex = 18;
			this->listBoxContrast->Visible = false;
			// 
			// listBoxDiagonal
			// 
			this->listBoxDiagonal->FormattingEnabled = true;
			this->listBoxDiagonal->ItemHeight = 16;
			this->listBoxDiagonal->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"", L"", L"", L"", L"" });
			this->listBoxDiagonal->Location = System::Drawing::Point(661, 303);
			this->listBoxDiagonal->Margin = System::Windows::Forms::Padding(4);
			this->listBoxDiagonal->Name = L"listBoxDiagonal";
			this->listBoxDiagonal->Size = System::Drawing::Size(448, 84);
			this->listBoxDiagonal->TabIndex = 19;
			this->listBoxDiagonal->Visible = false;
			// 
			// listBoxPixel
			// 
			this->listBoxPixel->FormattingEnabled = true;
			this->listBoxPixel->ItemHeight = 16;
			this->listBoxPixel->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"", L"", L"", L"", L"" });
			this->listBoxPixel->Location = System::Drawing::Point(204, 395);
			this->listBoxPixel->Margin = System::Windows::Forms::Padding(4);
			this->listBoxPixel->Name = L"listBoxPixel";
			this->listBoxPixel->Size = System::Drawing::Size(905, 84);
			this->listBoxPixel->TabIndex = 20;
			this->listBoxPixel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 570);
			this->Controls->Add(this->listBoxPixel);
			this->Controls->Add(this->listBoxDiagonal);
			this->Controls->Add(this->listBoxContrast);
			this->Controls->Add(this->listBoxBright);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textDepth);
			this->Controls->Add(this->textWidth);
			this->Controls->Add(this->textHeight);
			this->Controls->Add(this->ScrollBarSpeed);
			this->Controls->Add(this->myImage);
			this->Controls->Add(this->brightScroll);
			this->Controls->Add(this->checkBoxLisp);
			this->Controls->Add(this->questionFive);
			this->Controls->Add(this->lispVoxel);
			this->Controls->Add(this->printAnswer);
			this->Controls->Add(this->label_answer);
			this->Controls->Add(this->Label_Question);
			this->Controls->Add(this->btn_NO);
			this->Controls->Add(this->btn_Start);
			this->Controls->Add(this->btn_Ok);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Система поддержки принятия решений";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		static array<double>^ answer = gcnew array<double>(18);
		static array<int>^ typeDisplay = gcnew array<int>(5);
		int i = 0;
	public: void getAsk() {
		switch (i)
		{
		case 0: {
			Label_Question->Text = "\n\n1-й вопрос\nВажна Вам возможность\n \"прикоснуться\" к формируемому изображению?";
			break;
		}
		case 1: {
			Label_Question->Text = "\n\n2-й вопрос\nВведите значение необходимого угла обзора";
			printAnswer->Visible = true;
			btn_Start->Visible = true;
			btn_Ok->Visible = false;
			btn_NO->Visible = false;
			printAnswer->Text = "0";
			btn_Start->Text = "Ответить";
			break;
		}
		case 2: {
				Label_Question->Text = "\n\n3-й вопрос\n\nВведите значение шага смены кадров\n(1 кадр на x - угол) (x = 0, если не имеет значения)";
			printAnswer->Text = "0";
			printAnswer->Visible = true;
			break;
		}
		case 3: {
			Label_Question->Text = "\n\n4-й вопрос\n\nВыберите необходимое трехмерное разрешение";
			printAnswer->Visible = false;
			lispVoxel->Visible = true;
			questionFive->Visible = true;
			break;
		}
		case 4: {
			Label_Question->Text = "\n\n5-й вопрос\n\nВыберите наиболее значимые монокулярные признаки";
			lispVoxel->Visible = false;
			questionFive->Visible = false;
			checkBoxLisp->Visible = true;
			break;
		}
		case 12: {
			Label_Question->Text = "\n\n6-й вопрос\n\nОтрегулируйте до приемлемого уровень яркости изображения";
			checkBoxLisp->Visible = false;
			brightScroll->Visible = true;
			myImage->Visible = true;
			myImage->Image = imageList1->Images[1];
			break;
		}
		case 13: {
			Label_Question->Text = "\n\n7-й вопрос\n\nОтрегулируйте до приемлемого уровень контрастности изображения";
			brightScroll->Maximum = 87;
			myImage->Image = imageListContrast->Images[1];
			break;
		}
		case 14: {
			Label_Question->Text = "\n\n8-й вопрос\n\nОтрегулируйте до приемлемого уровень теней изображения ";
			brightScroll->Maximum = 60;
			myImage->Image = imageListShadow->Images[1];
			break;
		}
		case 15: {
			Label_Question->Text = "\n\n9-й вопрос\n\nОпределите степень важности параллакса движения\nОтрегулируйте скорость движения";
			brightScroll->Visible = false;
			ScrollBarSpeed->Visible = true;
			timer1->Enabled = true;
			break;
		}
		case 16: {
			Label_Question->Text = "\n\n10-й вопрос\n\n Является вращение объекта важным?\nВыберите скорость вращения";
			myImage->Image = imageListMove->Images[1];
			break;
		}
		case 17: {
			Label_Question->Text = "\n\n11-й  вопрос\n\n Определите требуемый размер объемной фигуры\nВведите длину, ширину и высоту (см)";
			myImage->Image = imageListSize->Images[0];
			timer1->Enabled = false;
			ScrollBarSpeed->Visible = false;
			textWidth->Visible = true;
			textHeight->Visible = true;
			textDepth->Visible = true;
			break;
		}
			   //пишет ответы
		case 18: {
			btn_Start->Visible = false;
			Label_Question->Text = "\n\nБлагодарим Вас за ответы\n\nТехнические требования к продукту\nХарактеристики входного изображения";
			listBox1->Visible = true;
			textWidth->Visible = false;
			textHeight->Visible = false;
			textDepth->Visible = false;
			myImage->Visible = false;
			listBoxBright->Visible = true;
			listBoxContrast->Visible = true;
			listBoxDiagonal->Visible = true;
			listBoxPixel->Visible = true;
			if (answer[0] == 1) {
				listBox1->Items[0] = "Дисплей любого типа, кроме 4-го";
				typeDisplay[0] = 1;
				typeDisplay[1] = 1;
				typeDisplay[2] = 1;
				typeDisplay[3] = 0;
				typeDisplay[4] = 1;
				if (answer[1] < 180) {
					listBox1->Items[0] = "Дисплей любого типа, кроме 4-го";
					if (answer[2] == 0 && answer[5] == 1) {
						if (answer[3] == 1) {
							listBox1->Items[0] = "Дисплей 1-го, второго или 5-го типа";
							typeDisplay[0] = 1;
							typeDisplay[1] = 1;
							typeDisplay[2] = 0;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
						else{
							listBox1->Items[0] = "Дисплей 1-го или 5-го типа";
							typeDisplay[0] = 1;
							typeDisplay[1] = 0;
							typeDisplay[2] = 0;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
										}
					if (answer[2] > 5 && answer[2] < 180) {
					
						if (answer[3] == 1) {
							listBox1->Items[0] = "Дисплей 2-го, третьего или 5-го типа";
							typeDisplay[0] = 0;
							typeDisplay[1] = 1;
							typeDisplay[2] = 1;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
						else {
							listBox1->Items[0] = "Дисплей 3-го или 5-го типа";
							typeDisplay[0] = 0;
							typeDisplay[1] = 0;
							typeDisplay[2] = 1;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
						if (answer[5] == 1) {
							if (answer[3] == 1) {
								listBox1->Items[0] = "Дисплей 2-го или 5-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 1;
								typeDisplay[2] = 0;
								typeDisplay[3] = 0;
								typeDisplay[4] = 1;
							}
							else {
								listBox1->Items[0] = "Дисплей 5-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 0;
								typeDisplay[2] = 0;
								typeDisplay[3] = 0;
								typeDisplay[4] = 1;
							}
						}
						if (answer[17] > 8000) {
							if (answer[3] == 1) {
								listBox1->Items[0] = "Дисплей 2-го или 3-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 1;
								typeDisplay[2] = 1;
								typeDisplay[3] = 0;
								typeDisplay[4] = 0;
							}
							else {
								listBox1->Items[0] = "Дисплей 3-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 0;
								typeDisplay[2] = 1;
								typeDisplay[3] = 0;
								typeDisplay[4] = 0;
							}
						}
					}
				}
				else
				{
					listBox1->Items[0] = "Дисплей 5-го типа";
					typeDisplay[0] = 0;
					typeDisplay[1] = 0;
					typeDisplay[2] = 0;
					typeDisplay[3] = 0;
					typeDisplay[4] = 1;
				}
			}
			else {
				listBox1->Items[0] = "Дисплей любого типа";
				typeDisplay[0] = 1;
				typeDisplay[1] = 1;
				typeDisplay[2] = 1;
				typeDisplay[3] = 1;
				typeDisplay[4] = 1;
				if (answer[1] < 180) {
					listBox1->Items[0] = "Дисплей любого типа";
					if (answer[2] == 0 && answer[5] == 1) {
						if (answer[3] == 1) {
							listBox1->Items[0] = "Дисплей 1-го, 2-го или 5-го типа";
							typeDisplay[0] = 1;
							typeDisplay[1] = 1;
							typeDisplay[2] = 0;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
						else {
							listBox1->Items[0] = "Дисплей 1-го или 5-го типа";
							typeDisplay[0] = 1;
							typeDisplay[1] = 0;
							typeDisplay[2] = 0;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
					}
					if (answer[2] > 5 && answer[2] < 180) {
						listBox1->Items[0] = "Дисплей любого типа, кроме 1-го";
						typeDisplay[0] = 0;
						typeDisplay[1] = 1;
						typeDisplay[2] = 1;
						typeDisplay[3] = 1;
						typeDisplay[4] = 1;
						if (answer[3] == 1) {
							listBox1->Items[0] = "Дисплей 2-го, 3-го, 4-го или 5-го типа";
							typeDisplay[0] = 0;
							typeDisplay[1] = 1;
							typeDisplay[2] = 1;
							typeDisplay[3] = 1;
							typeDisplay[4] = 1;
						}
						else {
							listBox1->Items[0] = "Дисплей 3-го, 4-го или 5-го типа";
							typeDisplay[0] = 0;
							typeDisplay[1] = 0;
							typeDisplay[2] = 1;
							typeDisplay[3] = 1;
							typeDisplay[4] = 1;
						}
						if (answer[5] == 1) {
							if (answer[3] == 1) {
								listBox1->Items[0] = "Дисплей 2-го или 5-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 1;
								typeDisplay[2] = 0;
								typeDisplay[3] = 0;
								typeDisplay[4] = 1;
							}
						else
						{
							listBox1->Items[0] = "Дисплей 5-го типа";
							typeDisplay[0] = 0;
							typeDisplay[1] = 0;
							typeDisplay[2] = 0;
							typeDisplay[3] = 0;
							typeDisplay[4] = 1;
						}
						}
						if (answer[17] > 8000) {
							if (answer[3] == 1) {
								listBox1->Items[0] = "Дисплей 2-го или 3-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 1;
								typeDisplay[2] = 1;
								typeDisplay[3] = 0;
								typeDisplay[4] = 0;
							}
							else {
								listBox1->Items[0] = "Дисплей 3-го типа";
								typeDisplay[0] = 0;
								typeDisplay[1] = 0;
								typeDisplay[2] = 1;
								typeDisplay[3] = 0;
								typeDisplay[4] = 0;
							}
						}
					}
				}
				else
				{
					listBox1->Items[0] = "Дисплей 4-го или 5-го типа";
					typeDisplay[0] = 0;
					typeDisplay[1] = 0;
					typeDisplay[2] = 0;
					typeDisplay[3] = 1;
					typeDisplay[4] = 1;
					if (answer[5] == 1) {
						listBox1->Items[0] = "Дисплей 5-го типа";
						typeDisplay[0] = 0;
						typeDisplay[1] = 0;
						typeDisplay[2] = 0;
						typeDisplay[3] = 0;
						typeDisplay[4] = 1;
					}
					if (answer[17] > 1000) {
						listBox1->Items[0] = "Дисплей 5-го типа";
						typeDisplay[0] = 0;
						typeDisplay[1] = 0;
						typeDisplay[2] = 0;
						typeDisplay[3] = 0;
						typeDisplay[4] = 1;
					}
				}
			}
			int par = 1, bright1, bright2, bright3, bright4, bright5;
			int contrast1, contrast2, contrast3, contrast4, contrast5;
			int pixel=answer[3];
			double linsOrMirror = ceil(answer[1] / answer[2]);;
			if (answer[12] >= 0) {
				bright1 = answer[12] + answer[12] * 0.3;
				bright2 = answer[12] + answer[12] * 0.5;
				bright3 = answer[12] + answer[12] * 0.1;
				bright4 = answer[12] + answer[12] * 0.6;
				bright5 = answer[12] + answer[12] * 0.17;
				contrast1 = answer[13] + answer[12] * 0.3;
				contrast2 = answer[13] + answer[12] * 0.5;
				contrast3 = answer[13] + answer[12] * 0.1;
				contrast4 = answer[13] + answer[12] * 0.6;
				contrast5 = answer[13] + answer[12] * 0.17;
			}
			else {
				bright1 = answer[12] - answer[12] * 0.3;
				bright2 = answer[12] - answer[12] * 0.5;
				bright3 = answer[12] - answer[12] * 0.1;
				bright4 = answer[12] - answer[12] * 0.6;
				bright5 = answer[12] - answer[12] * 0.17;
				contrast1 = answer[13] + fabs(answer[12] * 0.3);
				contrast2 = answer[13] + fabs(answer[12] * 0.5);
				contrast3 = answer[13] + fabs(answer[12] * 0.1);
				contrast4 = answer[13] + fabs(answer[12] * 0.6);
				contrast5 = answer[13] + fabs(answer[12] * 0.17);
			}
			int cointer = 0, diagonal= sqrt(pow(Int32::Parse(w), 2) + pow(Int32::Parse(h), 2)) / 2.54;;
			if (typeDisplay[0] == 1) {
				listBoxBright->Items[cointer] = "Яркость для дисплея 1-го типа = " + bright1;
				listBoxContrast->Items[cointer] = "Контрастность для дисплея 1-го типа = " + contrast1;
				listBoxDiagonal->Items[cointer] = "Размер диагонали экрана для дисплея 1-го типа = " + diagonal;
				listBoxPixel->Items[cointer] = "Рекомендованное разрешение для дисплея 1-го типа = " + pixel+ " или выше";

				cointer++;
			}
			if (typeDisplay[1] == 1) {
				listBoxBright->Items[cointer] = "Яркость для дисплея 2-го типа = " + bright2;
				listBoxContrast->Items[cointer] = "Контрастность для дисплея 2-го типа = " + contrast2;
				listBoxDiagonal->Items[cointer] = "Размер диагонали экрана для дисплея 2-го типа = " + diagonal;
				listBoxPixel->Items[cointer] = "Рекомендованное разрешение для дисплея 2-го типа не меньше 720p ";
				if (linsOrMirror > 95) {
					linsOrMirror = 100;
				}
				else
				{
					if (linsOrMirror > 85) {
						linsOrMirror = 90;
					}
					else
					{
						if (linsOrMirror > 75) {
							linsOrMirror = 80;
						}
						else
						{
							if (linsOrMirror > 65) {
								linsOrMirror = 70;
							}
							else
							{
								if (linsOrMirror > 55) {
									linsOrMirror = 60;
								}
								else
								{
									if (linsOrMirror > 45) {
										linsOrMirror = 50;
									}
									else
									{
										if (linsOrMirror > 35) {
											linsOrMirror = 40;
										}
										else
										{
											if (linsOrMirror > 25) {
												linsOrMirror = 30;
											}
											else
											{
												if (linsOrMirror > 15) {
													linsOrMirror = 20;
												}
												else
												{
													if (linsOrMirror > 5) {
														linsOrMirror = 10;
													}
													else
													{
														linsOrMirror = 5;
													}
												}
											}
										}
									}
								}
							}

						}

					}
					
				}
				listBox1->Items[par] = "Минимальный LPI = " + linsOrMirror;
				par++;
				cointer++;
			}
			if (typeDisplay[2] == 1) {
				listBoxBright->Items[cointer] = "Яркость для дисплея 3-го типа = " + bright3;
				listBoxContrast->Items[cointer] = "Контрастность для дисплея 3-го типа = " + contrast3;
				listBoxDiagonal->Items[cointer] = "Размер диагонали экрана для дисплея 3-го типа = " + diagonal*4;
				listBoxPixel->Items[cointer] = "Рекомендованное разрешение для дисплея 3-го типа = " + pixel + " или выше";
				cointer++;
			}
			if (typeDisplay[3] == 1) {
				listBoxBright->Items[cointer] = "Яркость для дисплея 4-го типа = " + bright4;
				listBoxContrast->Items[cointer] = "Контрастность для дисплея 4-го типа = " + contrast4;
				listBoxDiagonal->Items[cointer] = "Размер диагонали экрана для дисплея 4-го типа = " + diagonal * linsOrMirror;
				listBoxPixel->Items[cointer] = "Рекомендованное разрешение для дисплея 4-го типа = " + pixel + " или выше";
				cointer++;
				listBox1->Items[par] = "Количество зеркал для дисплея 4-го типа = " + linsOrMirror;
				par++;
			}
			if (typeDisplay[4] == 1) {
				listBoxBright->Items[cointer] = "Яркость для дисплея 5-го типа = " + bright5;
				listBoxContrast->Items[cointer] = "Контрастность для дисплея 5-го типа = " + contrast5;
				int resolution = 0;
				if (pixel == 144) {
					resolution = 360;
					}
				else if (pixel == 240) {
					resolution = 480;
				}
				else if (pixel == 360) {
					resolution = 720;
				}
				else if (pixel == 480) {
					resolution = 1080;
				}
				else if (pixel == 720) {
					resolution = 1440;
				}
				listBoxPixel->Items[cointer] = "Рекомендованное разрешение для дисплея 5го типа = " + resolution + " или выше";
				
				listBoxDiagonal->Items[cointer] = "Размер диагонали экрана для дисплея 5 типа = " + diagonal * linsOrMirror/6;
				cointer++;
				listBox1->Items[par] = "Количество линз для дисплея 5-го типа =" + linsOrMirror;
				par++;
			}
			int fps = ceil((answer[15] + answer[16]) / 2);
			listBox1->Items[par] = "Количество кадров в секунду = не менее " + fps;
			par++;
			break;
		}
		
			   label_answer->Text = " ";
			   for (int i = 0; i < 18; i++) {
				   label_answer->Text = label_answer->Text + answer[i] + " ";
			   }
		}
	}

		
	private: System::Void btn_Ok_Click(System::Object^ sender, System::EventArgs^ e) {
		answer[i] = 1;
		i++;
		getAsk();
	}
		   String^ w;
		   String^ h;
		   String^ d;
private: System::Void btn_Start_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i == 0) {
		btn_Start->Visible = false;
		btn_Ok->Visible = true;
		btn_NO->Visible = true;

		for (int i = 0; i < 10; i++) {
			answer[i] = 0;
		}
	}
	else if (i == 3) {
		String^ s = lispVoxel->Text;
		answer[i] = Int32::Parse(s);
		i++;
	}
	else if (i > 3 && i < 12) {
		for (int j = 0; j < checkBoxLisp->Items->Count; j++) {
			if (checkBoxLisp->GetItemChecked(j)) {
				answer[i] = 1;
			}
			else
			{
				answer[i] = 0;
			}
			i++;
		}
	}
	else if (i == 12) {
		answer[i] = brightScroll->Value - 30;
		i++;
	} 
	else if (i == 13)
	{
		answer[i] = (brightScroll->Value - 39) * 5;
		i++;
	}
	else if (i == 14) {
		answer[i] = brightScroll->Value - 30;
		i++;
	}
	else if (i == 15)
	{
		answer[i] = floor(1000/ScrollBarSpeed->Value);
		j = 0;
		i++;
	}
	else if (i == 16)
	{
		answer[i] = floor(1000/ScrollBarSpeed->Value);
		i++;
	}
	else if (i == 17)
	{
		w = textWidth->Text;
		h = textHeight->Text;
		d = textDepth->Text;
		answer[i] = Int32::Parse(w)*Int32::Parse(h)*Int32::Parse(d);
		i++;
	}
	else {
		String^ s = printAnswer->Text;
		answer[i] = Int32::Parse(s);
		i++;
	}
	getAsk();
}
private: System::Void btn_NO_Click(System::Object^ sender, System::EventArgs^ e) {
	answer[i] = 0;
	i++;
	getAsk();
}
private: System::Void brightScroll_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	if (i == 12) {
		myImage->Image = imageList1->Images[brightScroll->Value];
	}
	else if (i == 13) {
		myImage->Image = imageListContrast->Images[brightScroll->Value];
	}
	else if (i == 14) {
		myImage->Image = imageListShadow->Images[brightScroll->Value];
	}

}
	   int j = 0;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (i == 15) {
		myImage->Image = imageListMove->Images[j];
		j++;
		if (j == 73) {
			j = 0;
		}
	}
	if (i == 16) {
		myImage->Image = imageListRotate->Images[j];
		j++;
		if (j == 34) {
			j = 0;
		}
	}
}
private: System::Void ScrollBarSpeed_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	timer1->Interval = ScrollBarSpeed->Value;
}
};
}
