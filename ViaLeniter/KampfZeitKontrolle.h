#pragma once
#include "Kampfzeitbildschirm.h"

namespace ViaLeniter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ViaLeniter;

	/// <summary>
	/// Summary for KampfZeitKontrolle
	/// </summary>
	public ref class KampfZeitKontrolle : public System::Windows::Forms::Form
	{
	public:
		KampfZeitKontrolle(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KampfZeitKontrolle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Button^  button19;
	private: Kampfzeitbildschirm^ kzb;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Timer^  timer2;

	private: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private: 

	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(KampfZeitKontrolle::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(1, 99);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::White;
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::Blue;
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(565, 32);
			this->splitContainer1->SplitterDistance = 282;
			this->splitContainer1->SplitterWidth = 1;
			this->splitContainer1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SIEGER";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SIEGER";
			this->label2->Visible = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(188, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(91, 64);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(285, 12);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {59, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(91, 64);
			this->numericUpDown2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(382, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 64);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(49, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 64);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 173);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(252, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"+ Waza-ari";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"- Waza-ari";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 292);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(252, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"- Yuko";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 263);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(252, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"+ Yuko";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 388);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(252, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"- Shido";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 359);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(252, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"+ Shido";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(301, 388);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(252, 23);
			this->button9->TabIndex = 19;
			this->button9->Text = L"- Shido";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(301, 359);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(252, 23);
			this->button10->TabIndex = 18;
			this->button10->Text = L"+ Shido";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(301, 292);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(252, 23);
			this->button11->TabIndex = 17;
			this->button11->Text = L"- Yuko";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(301, 263);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(252, 23);
			this->button12->TabIndex = 16;
			this->button12->Text = L"+ Yuko";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(301, 202);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(252, 23);
			this->button13->TabIndex = 15;
			this->button13->Text = L"- Waza-ari";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(301, 173);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(252, 23);
			this->button14->TabIndex = 14;
			this->button14->Text = L"+ Waza-ari";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(5, 417);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(274, 30);
			this->button15->TabIndex = 20;
			this->button15->Text = L"+ Ippon";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(285, 417);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(274, 30);
			this->button16->TabIndex = 21;
			this->button16->Text = L"+ Ippon";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(285, 453);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(274, 30);
			this->button17->TabIndex = 23;
			this->button17->Text = L"- Ippon";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(5, 453);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(274, 30);
			this->button18->TabIndex = 22;
			this->button18->Text = L"- Ippon";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button18_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &KampfZeitKontrolle::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(567, 99);
			this->panel1->TabIndex = 24;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(12, 137);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(252, 22);
			this->numericUpDown3->TabIndex = 8;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(301, 137);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(252, 22);
			this->numericUpDown4->TabIndex = 25;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(12, 235);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(252, 22);
			this->numericUpDown5->TabIndex = 26;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(301, 235);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(252, 22);
			this->numericUpDown6->TabIndex = 27;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(12, 331);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(252, 22);
			this->numericUpDown7->TabIndex = 28;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::numericUpDown7_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(301, 331);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(252, 22);
			this->numericUpDown8->TabIndex = 29;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::numericUpDown8_ValueChanged);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(1, 607);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(171, 23);
			this->button19->TabIndex = 30;
			this->button19->Text = L"Anzeige Vollbildschirm";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(369, 607);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(184, 23);
			this->button20->TabIndex = 31;
			this->button20->Text = L"Schließen Vollbildschirm";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(178, 607);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(185, 23);
			this->button21->TabIndex = 32;
			this->button21->Text = L"Maximieren Vollbildschirm";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button21_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 579);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"\?\?\?\?";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(285, 579);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(274, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"\?\?\?\?";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::textBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Location = System::Drawing::Point(592, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(370, 171);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kämpfe";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {L"FINALE", L"Kampf um Platz 3", L"Matte 1", L"Matte 2", 
				L"Matte 3", L"Matte 4", L"Matte 5", L"SIEGEREHRUNG", L"Platz 1", L"Platz 2", L"Platz 3"});
			this->comboBox1->Location = System::Drawing::Point(23, 89);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(322, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &KampfZeitKontrolle::comboBox1_TextUpdate);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Text ändern";
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(23, 33);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(322, 23);
			this->button22->TabIndex = 0;
			this->button22->Text = L"Finalkampfanzeige an/aus";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button22_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Location = System::Drawing::Point(592, 202);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(370, 171);
			this->groupBox2->TabIndex = 34;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mannschaftskampf";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(245, 143);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 9;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(14, 143);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 8;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &KampfZeitKontrolle::textBox8_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(172, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"UB";
			this->label5->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(245, 116);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(14, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(245, 88);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(14, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(146, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Teamname";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(172, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"SP";
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(23, 33);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(322, 23);
			this->button23->TabIndex = 0;
			this->button23->Text = L"Mannschaftskampf an/aus";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button23_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 503);
			this->progressBar1->Maximum = 40;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(541, 23);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 35;
			this->progressBar1->Value = 20;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(12, 532);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(84, 23);
			this->button24->TabIndex = 36;
			this->button24->Text = L"Oseakomi";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(470, 532);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(83, 23);
			this->button25->TabIndex = 37;
			this->button25->Text = L"Oseakomi";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(247, 532);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(84, 23);
			this->button26->TabIndex = 38;
			this->button26->Text = L"Toketa";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &KampfZeitKontrolle::button26_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &KampfZeitKontrolle::timer2_Tick);
			// 
			// KampfZeitKontrolle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 642);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"KampfZeitKontrolle";
			this->Text = L"Kampfzeitkontrolle";
			this->Load += gcnew System::EventHandler(this, &KampfZeitKontrolle::KampfZeitKontrolle_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KampfZeitKontrolle_Load(System::Object^  sender, System::EventArgs^  e) {				 
			 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label1->Visible = true;
			 this->label2->Visible = false;
			 try {
				 this->kzb->label13->Text = "0";
			 } catch(...) {}
			 try {
				 this->kzb->label6->Text = "1";
			 } catch(...) {}
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label1->Visible = false;
			 try {
				 this->kzb->label6->Text = "0";
			 } catch(...) {}
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label2->Visible = true;
			 try {
				 this->kzb->label6->Text = "0";
			 } catch(...) {}
			 this->label1->Visible = false;
			 try {
				 this->kzb->label13->Text = "1";
			 } catch(...) {}
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label2->Visible = false;
			 try {
				 this->kzb->label13->Text = "0";
			 } catch(...) {}
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Enabled = true;
			 this->panel1->BackColor = System::Drawing::SystemColors::Control;
			 try {
					this->kzb->BackColor = System::Drawing::Color::LightGreen;
				} catch(...) {}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Enabled = false;
			 this->panel1->BackColor = System::Drawing::SystemColors::Control;
			 try {
					this->kzb->BackColor = System::Drawing::Color::LemonChiffon;
				} catch(...) {}
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown2->Value == 0)
			 {
				 if(this->numericUpDown1->Value == 0)
				 {
					 this->panel1->BackColor = System::Drawing::Color::Red;
					 try {
					this->kzb->BackColor = System::Drawing::Color::LemonChiffon;
				} catch(...) {}
					 this->timer1->Enabled = false;
				 } else {
					 this->numericUpDown1->Value = this->numericUpDown1->Value-1;
					 this->numericUpDown2->Value = 59;
					 try {
						this->kzb->label1->Text = Convert::ToString(this->numericUpDown1->Value) + ":" + Convert::ToString(this->numericUpDown2->Value);
					} catch(...) {}
				 }
			 } else {
				 this->numericUpDown2->Value = this->numericUpDown2->Value-1;
				 try {
					this->kzb->label1->Text = Convert::ToString(this->numericUpDown1->Value) + ":" + Convert::ToString(this->numericUpDown2->Value);
				} catch(...) {}
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown3->Value < 2)
			 {
				 this->numericUpDown3->Value = this->numericUpDown3->Value+1;
				 if(this->numericUpDown3->Value == 2)
				 {
					 this->button15->PerformClick();
				 }
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown3->Value > 0)
			 {
				 this->numericUpDown3->Value = this->numericUpDown3->Value-1;
				 if(this->numericUpDown4->Value != 2)
				 {
					 this->button18->PerformClick();
				 }
			 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown4->Value < 2)
			 {
				 this->numericUpDown4->Value = this->numericUpDown4->Value+1;
				 if(this->numericUpDown4->Value == 2)
				 {
					 this->button16->PerformClick();
				 }
			 }
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown4->Value > 0)
			 {
				 this->numericUpDown4->Value = this->numericUpDown4->Value-1;
				 if(this->numericUpDown4->Value != 2)
				 {
					 this->button17->PerformClick();
				 }
			 }
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->kzb = gcnew Kampfzeitbildschirm();
			 this->kzb->Show();
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->Close();
			 } catch(...) {}
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->kzb->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			 } catch(...) {}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown5->Value < 100)
			 {
				 this->numericUpDown5->Value = this->numericUpDown5->Value+1;
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown5->Value > 0)
			 {
				 this->numericUpDown5->Value = this->numericUpDown5->Value-1;
			 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown6->Value < 100)
			 {
				 this->numericUpDown6->Value = this->numericUpDown6->Value+1;
			 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown6->Value > 0)
			 {
				 this->numericUpDown6->Value = this->numericUpDown6->Value-1;
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown7->Value < 4)
			 {
				 this->numericUpDown7->Value = this->numericUpDown7->Value+1;
				 if(this->numericUpDown7->Value == 4)
				 {
					 this->button16->PerformClick();
				 }
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown7->Value > 0)
			 {
				 this->numericUpDown7->Value = this->numericUpDown7->Value-1;
				 if(this->numericUpDown7->Value != 4)
				 {
					 this->button17->PerformClick();
				 }
			 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown8->Value < 4)
			 {
				 this->numericUpDown8->Value = this->numericUpDown8->Value+1;
				 if(this->numericUpDown8->Value == 4)
				 {
					 this->button15->PerformClick();
				 }
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown8->Value > 0)
			 {
				 this->numericUpDown8->Value = this->numericUpDown8->Value-1;
				 if(this->numericUpDown8->Value != 4)
				 {
					 this->button18->PerformClick();
				 }
			 }
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label7->Text = Convert::ToString(this->numericUpDown3->Value);
			 } catch(...) {}
		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label12->Text = Convert::ToString(this->numericUpDown4->Value);
			 } catch(...) {}
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label8->Text = Convert::ToString(this->numericUpDown5->Value);
			 } catch(...) {}
		 }
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label9->Text = Convert::ToString(this->numericUpDown7->Value);
			 } catch(...) {}
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label11->Text = Convert::ToString(this->numericUpDown6->Value);
			 } catch(...) {}
		 }
private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label10->Text = Convert::ToString(this->numericUpDown8->Value);
			 } catch(...) {}
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label15->Text = this->textBox1->Text;
			 } catch(...) {}
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label14->Text = this->textBox2->Text;
			 } catch(...) {}
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->panel3->Visible = !this->kzb->panel3->Visible;
				 this->kzb->label16->Text = this->comboBox1->Text;
			 } catch(...) {}
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->panel4->Visible = !this->kzb->panel4->Visible;
				 this->kzb->label18->Text = this->textBox3->Text;
				 this->kzb->label19->Text = this->textBox4->Text;
				 this->kzb->label21->Text = this->textBox5->Text;
				 this->kzb->label20->Text = this->textBox6->Text;
				 this->kzb->label22->Text = this->textBox7->Text;
				 this->kzb->label23->Text = this->textBox8->Text;
			 } catch(...) {}
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->button25->BackColor = System::Drawing::SystemColors::ControlDark;
			 this->button24->BackColor = System::Drawing::SystemColors::Control;
			 this->timer2->Enabled = true;
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->button24->BackColor = System::Drawing::SystemColors::ControlDark;
			 this->button25->BackColor = System::Drawing::SystemColors::Control;
			 this->timer2->Enabled = true;
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->progressBar1->Value = 20;
			 this->timer2->Enabled = false;
			 this->button25->BackColor = System::Drawing::SystemColors::Control;
			 this->button24->BackColor = System::Drawing::SystemColors::Control;
			 try {
				 this->kzb->progressBar1->Value = this->progressBar1->Value;
			 } catch(...) {}
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->button25->BackColor == System::Drawing::SystemColors::ControlDark)
			 {
				 if(this->progressBar1->Value > 20) {
					 this->progressBar1->Value = 20;
				 } else {
					 if(this->progressBar1->Value > 0)
					 {
						 this->progressBar1->Value = this->progressBar1->Value - 1;
						 if(this->progressBar1->Value == 20-10)
					 {
						 this->numericUpDown6->Value = this->numericUpDown6->Value+1;
					 }
					 if(this->progressBar1->Value == 20-15)
					 {
						 this->button14->PerformClick();
						 this->numericUpDown6->Value = this->numericUpDown6->Value-1;
					 }
					 if(this->progressBar1->Value == 20-20)
					 {
						 this->button13->PerformClick();
						 this->button16->PerformClick();
					 }
					 }
				 }

			 } else if(this->button24->BackColor == System::Drawing::SystemColors::ControlDark)
			 {
				 if(this->progressBar1->Value < 20) {
					 this->progressBar1->Value = 20;
				 } else {
					 if(this->progressBar1->Value < 40)
					 {
						 this->progressBar1->Value = this->progressBar1->Value + 1;
						 if(this->progressBar1->Value == 20+10)
					 {
						 this->numericUpDown5->Value = this->numericUpDown5->Value+1;
					 }
					 if(this->progressBar1->Value == 20+15)
					 {
						 this->button3->PerformClick();
						 this->numericUpDown5->Value = this->numericUpDown5->Value-1;
					 }
					 if(this->progressBar1->Value == 20+20)
					 {
						 this->button4->PerformClick();
						 this->button15->PerformClick();
					 }
					 }
				 }

			 }
			 try {
				 this->kzb->progressBar1->Value = 40-this->progressBar1->Value;
			 } catch(...) {}
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label16->Text = this->comboBox1->Text;
			 } catch(...) {}
		 }
private: System::Void comboBox1_TextUpdate(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->kzb->label16->Text = this->comboBox1->Text;
			 } catch(...) {}
		 }
};
}
