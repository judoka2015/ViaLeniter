#pragma once

namespace ViaLeniter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Kampfzeitbildschirm
	/// </summary>
	public ref class Kampfzeitbildschirm : public System::Windows::Forms::Form
	{
	public:
		Kampfzeitbildschirm(void)
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
		~Kampfzeitbildschirm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Timer^  timer1;





















	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::Label^  label10;
	public: System::Windows::Forms::Label^  label11;
	public: System::Windows::Forms::Label^  label12;
	public: System::Windows::Forms::Label^  label13;
	public: System::Windows::Forms::Label^  label14;
	public: System::Windows::Forms::Label^  label15;
	public: System::Windows::Forms::Panel^  panel3;
	public: System::Windows::Forms::Label^  label16;


	public: System::Windows::Forms::Panel^  panel4;
	private: 

	public: System::Windows::Forms::Label^  label17;
	private: 
	public: System::Windows::Forms::Label^  label19;
	public: System::Windows::Forms::Label^  label18;
	public: System::Windows::Forms::Label^  label22;
	public: System::Windows::Forms::Label^  label23;
	public: System::Windows::Forms::Label^  label20;
	public: System::Windows::Forms::Label^  label21;
	public: System::Windows::Forms::ProgressBar^  progressBar1;

	public: 

	public: 







	public: 
	private: 

	private: System::ComponentModel::IContainer^  components;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Blue;
			this->panel2->Location = System::Drawing::Point(12, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(46, 126);
			this->panel2->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(796, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(46, 126);
			this->panel1->TabIndex = 54;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(314, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 98);
			this->label1->TabIndex = 55;
			this->label1->Text = L"0:00";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(383, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 98);
			this->label2->TabIndex = 56;
			this->label2->Text = L"I";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(383, 314);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 98);
			this->label3->TabIndex = 57;
			this->label3->Text = L"W";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(383, 436);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 98);
			this->label4->TabIndex = 58;
			this->label4->Text = L"Y";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(383, 554);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 98);
			this->label5->TabIndex = 59;
			this->label5->Text = L"S";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(62, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 98);
			this->label6->TabIndex = 60;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(62, 314);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 98);
			this->label7->TabIndex = 61;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(62, 436);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 98);
			this->label8->TabIndex = 62;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(62, 554);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 98);
			this->label9->TabIndex = 63;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(664, 554);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 98);
			this->label10->TabIndex = 67;
			this->label10->Text = L"0";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(664, 436);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 98);
			this->label11->TabIndex = 66;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(664, 314);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 98);
			this->label12->TabIndex = 65;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(664, 191);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 98);
			this->label13->TabIndex = 64;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Chiller", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(69, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 58);
			this->label14->TabIndex = 68;
			this->label14->Text = L"\?\?\?\?";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Chiller", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(503, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(97, 58);
			this->label15->TabIndex = 69;
			this->label15->Text = L"\?\?\?\?";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label16);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(854, 662);
			this->panel3->TabIndex = 70;
			this->panel3->Visible = false;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::LemonChiffon;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(0, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(854, 662);
			this->label16->TabIndex = 0;
			this->label16->Text = L"FINALE";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(854, 662);
			this->panel4->TabIndex = 71;
			this->panel4->Visible = false;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(580, 436);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(78, 48);
			this->label22->TabIndex = 6;
			this->label22->Text = L"UB";
			this->label22->Click += gcnew System::EventHandler(this, &Kampfzeitbildschirm::label22_Click);
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(74, 436);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(78, 48);
			this->label23->TabIndex = 5;
			this->label23->Text = L"UB";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(582, 351);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(76, 48);
			this->label20->TabIndex = 4;
			this->label20->Text = L"SP";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(74, 351);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(76, 48);
			this->label21->TabIndex = 3;
			this->label21->Text = L"SP";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(505, 257);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(231, 48);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Teamname";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(12, 257);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(231, 48);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Teamname";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(242, 175);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(371, 48);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Mannschaftskampf";
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->progressBar1->Location = System::Drawing::Point(79, 163);
			this->progressBar1->Maximum = 40;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(673, 26);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 7;
			this->progressBar1->Value = 20;
			// 
			// Kampfzeitbildschirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(854, 662);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->progressBar1);
			this->Name = L"Kampfzeitbildschirm";
			this->Text = L"Kampfzeitbildschirm";
			this->Load += gcnew System::EventHandler(this, &Kampfzeitbildschirm::Kampfzeitbildschirm_Load);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kampfzeitbildschirm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
