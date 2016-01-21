#pragma once

namespace ViaLeniter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ListenAnzeigen
	/// </summary>
	public ref class ListenAnzeigen : public System::Windows::Forms::Form
	{
	public:
		ListenAnzeigen(void)
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
		~ListenAnzeigen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown20;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown21;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown22;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown23;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown24;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown25;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown26;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown27;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown28;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown29;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown30;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown31;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown32;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown33;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown34;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown35;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown36;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown37;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown38;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown39;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown40;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown41;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown42;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Panel^  panel24;
private: System::Windows::Forms::Panel^  panel23;
private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::Panel^  panel21;
private: System::Windows::Forms::Panel^  panel20;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Panel^  panel26;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Panel^  panel25;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Panel^  panel27;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Panel^  panel28;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Panel^  panel32;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Panel^  panel31;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Panel^  panel30;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Panel^  panel29;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Panel^  panel36;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Panel^  panel35;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Panel^  panel34;
private: System::Windows::Forms::Panel^  panel33;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Panel^  panel38;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Panel^  panel37;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Label^  label75;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ListenAnzeigen::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown23 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown24 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown25 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown26 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown27 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown28 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown29 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown30 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown31 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown32 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown33 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown34 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown35 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown36 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown37 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown38 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown39 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown40 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown41 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown42 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown42))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel31->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel33->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label75);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 78);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1234, 569);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListenAnzeigen::panel1_Paint);
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(10, 549);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(842, 119);
			this->label75->TabIndex = 1;
			this->label75->Text = resources->GetString(L"label75.Text");
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 11;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.09091F)));
			this->tableLayoutPanel1->Controls->Add(this->label25, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 10, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label6, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->label7, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->label8, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->label9, 7, 7);
			this->tableLayoutPanel1->Controls->Add(this->label10, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown1, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown2, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown3, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown4, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown5, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown6, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown8, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown9, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown10, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown11, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown12, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown13, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown14, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown15, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown16, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown17, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown18, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown19, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown20, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown21, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown22, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown23, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown24, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown25, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown26, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown27, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown28, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown29, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown30, 5, 7);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown31, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown32, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown33, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown34, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown35, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown36, 6, 7);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown37, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown38, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown39, 7, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown40, 7, 4);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown41, 7, 5);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown42, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->label11, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->label12, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 8, 3);
			this->tableLayoutPanel1->Controls->Add(this->label14, 8, 4);
			this->tableLayoutPanel1->Controls->Add(this->label15, 8, 5);
			this->tableLayoutPanel1->Controls->Add(this->label16, 8, 6);
			this->tableLayoutPanel1->Controls->Add(this->label17, 8, 7);
			this->tableLayoutPanel1->Controls->Add(this->label18, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->label19, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->label20, 9, 3);
			this->tableLayoutPanel1->Controls->Add(this->label21, 9, 4);
			this->tableLayoutPanel1->Controls->Add(this->label22, 9, 5);
			this->tableLayoutPanel1->Controls->Add(this->label23, 9, 6);
			this->tableLayoutPanel1->Controls->Add(this->label24, 9, 7);
			this->tableLayoutPanel1->Controls->Add(this->label26, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label27, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label28, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label29, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label30, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label31, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label32, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label33, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label34, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label35, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label36, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label37, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label38, 7, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(10, 19);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5.0005F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57136F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1154, 518);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(4, 27);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 17);
			this->label25->TabIndex = 1;
			this->label25->Text = L"label25";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(836, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Siegpunkte";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1044, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Platz";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(940, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Unterbewertung";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(212, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 69);
			this->label5->TabIndex = 4;
			this->label5->Text = L"X";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(316, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 69);
			this->label4->TabIndex = 5;
			this->label4->Text = L"X";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(420, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 69);
			this->label6->TabIndex = 6;
			this->label6->Text = L"X";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(524, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 69);
			this->label7->TabIndex = 7;
			this->label7->Text = L"X";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(628, 377);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 69);
			this->label8->TabIndex = 8;
			this->label8->Text = L"X";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(732, 447);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 70);
			this->label9->TabIndex = 9;
			this->label9->Text = L"X";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(108, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 69);
			this->label10->TabIndex = 10;
			this->label10->Text = L"X";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown1->Location = System::Drawing::Point(108, 100);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(97, 22);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown2->Location = System::Drawing::Point(108, 170);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(97, 22);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown3->Location = System::Drawing::Point(108, 240);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(97, 22);
			this->numericUpDown3->TabIndex = 13;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown4->Location = System::Drawing::Point(108, 310);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(97, 22);
			this->numericUpDown4->TabIndex = 14;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown5->Location = System::Drawing::Point(108, 380);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(97, 22);
			this->numericUpDown5->TabIndex = 15;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown6->Location = System::Drawing::Point(108, 450);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(97, 22);
			this->numericUpDown6->TabIndex = 16;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown7->Location = System::Drawing::Point(212, 30);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(97, 22);
			this->numericUpDown7->TabIndex = 17;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown7_Validated);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown8->Location = System::Drawing::Point(212, 170);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(97, 22);
			this->numericUpDown8->TabIndex = 18;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown2_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown9->Location = System::Drawing::Point(212, 240);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(97, 22);
			this->numericUpDown9->TabIndex = 19;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown3_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown10->Location = System::Drawing::Point(212, 310);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(97, 22);
			this->numericUpDown10->TabIndex = 20;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown4_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown11->Location = System::Drawing::Point(212, 380);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(97, 22);
			this->numericUpDown11->TabIndex = 21;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown5_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown12->Location = System::Drawing::Point(212, 450);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(97, 22);
			this->numericUpDown12->TabIndex = 22;
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown6_ValueChanged);
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown13->Location = System::Drawing::Point(316, 30);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(97, 22);
			this->numericUpDown13->TabIndex = 23;
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown7_Validated);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown14->Location = System::Drawing::Point(316, 100);
			this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(97, 22);
			this->numericUpDown14->TabIndex = 24;
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown1_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown15->Location = System::Drawing::Point(316, 240);
			this->numericUpDown15->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(97, 22);
			this->numericUpDown15->TabIndex = 25;
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown3_ValueChanged);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown16->Location = System::Drawing::Point(316, 310);
			this->numericUpDown16->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(97, 22);
			this->numericUpDown16->TabIndex = 26;
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown4_ValueChanged);
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown17->Location = System::Drawing::Point(316, 380);
			this->numericUpDown17->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(97, 22);
			this->numericUpDown17->TabIndex = 27;
			this->numericUpDown17->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown5_ValueChanged);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown18->Location = System::Drawing::Point(316, 450);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(97, 22);
			this->numericUpDown18->TabIndex = 28;
			this->numericUpDown18->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown6_ValueChanged);
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown19->Location = System::Drawing::Point(420, 30);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(97, 22);
			this->numericUpDown19->TabIndex = 29;
			this->numericUpDown19->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown7_Validated);
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown20->Location = System::Drawing::Point(420, 100);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(97, 22);
			this->numericUpDown20->TabIndex = 30;
			this->numericUpDown20->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown1_ValueChanged);
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown21->Location = System::Drawing::Point(420, 170);
			this->numericUpDown21->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(97, 22);
			this->numericUpDown21->TabIndex = 31;
			this->numericUpDown21->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown2_ValueChanged);
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown22->Location = System::Drawing::Point(420, 310);
			this->numericUpDown22->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(97, 22);
			this->numericUpDown22->TabIndex = 32;
			this->numericUpDown22->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown4_ValueChanged);
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown23->Location = System::Drawing::Point(420, 380);
			this->numericUpDown23->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(97, 22);
			this->numericUpDown23->TabIndex = 33;
			this->numericUpDown23->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown5_ValueChanged);
			// 
			// numericUpDown24
			// 
			this->numericUpDown24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown24->Location = System::Drawing::Point(420, 450);
			this->numericUpDown24->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown24->Name = L"numericUpDown24";
			this->numericUpDown24->Size = System::Drawing::Size(97, 22);
			this->numericUpDown24->TabIndex = 34;
			this->numericUpDown24->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown6_ValueChanged);
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown25->Location = System::Drawing::Point(524, 30);
			this->numericUpDown25->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(97, 22);
			this->numericUpDown25->TabIndex = 35;
			this->numericUpDown25->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown7_Validated);
			// 
			// numericUpDown26
			// 
			this->numericUpDown26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown26->Location = System::Drawing::Point(524, 100);
			this->numericUpDown26->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown26->Name = L"numericUpDown26";
			this->numericUpDown26->Size = System::Drawing::Size(97, 22);
			this->numericUpDown26->TabIndex = 36;
			this->numericUpDown26->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown1_ValueChanged);
			// 
			// numericUpDown27
			// 
			this->numericUpDown27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown27->Location = System::Drawing::Point(524, 170);
			this->numericUpDown27->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown27->Name = L"numericUpDown27";
			this->numericUpDown27->Size = System::Drawing::Size(97, 22);
			this->numericUpDown27->TabIndex = 37;
			this->numericUpDown27->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown2_ValueChanged);
			// 
			// numericUpDown28
			// 
			this->numericUpDown28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown28->Location = System::Drawing::Point(524, 240);
			this->numericUpDown28->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown28->Name = L"numericUpDown28";
			this->numericUpDown28->Size = System::Drawing::Size(97, 22);
			this->numericUpDown28->TabIndex = 38;
			this->numericUpDown28->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown3_ValueChanged);
			// 
			// numericUpDown29
			// 
			this->numericUpDown29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown29->Location = System::Drawing::Point(524, 380);
			this->numericUpDown29->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown29->Name = L"numericUpDown29";
			this->numericUpDown29->Size = System::Drawing::Size(97, 22);
			this->numericUpDown29->TabIndex = 39;
			this->numericUpDown29->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown5_ValueChanged);
			// 
			// numericUpDown30
			// 
			this->numericUpDown30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown30->Location = System::Drawing::Point(524, 450);
			this->numericUpDown30->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown30->Name = L"numericUpDown30";
			this->numericUpDown30->Size = System::Drawing::Size(97, 22);
			this->numericUpDown30->TabIndex = 40;
			this->numericUpDown30->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown6_ValueChanged);
			// 
			// numericUpDown31
			// 
			this->numericUpDown31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown31->Location = System::Drawing::Point(628, 30);
			this->numericUpDown31->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown31->Name = L"numericUpDown31";
			this->numericUpDown31->Size = System::Drawing::Size(97, 22);
			this->numericUpDown31->TabIndex = 41;
			this->numericUpDown31->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown7_Validated);
			// 
			// numericUpDown32
			// 
			this->numericUpDown32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown32->Location = System::Drawing::Point(628, 100);
			this->numericUpDown32->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown32->Name = L"numericUpDown32";
			this->numericUpDown32->Size = System::Drawing::Size(97, 22);
			this->numericUpDown32->TabIndex = 42;
			this->numericUpDown32->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown1_ValueChanged);
			// 
			// numericUpDown33
			// 
			this->numericUpDown33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown33->Location = System::Drawing::Point(628, 170);
			this->numericUpDown33->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown33->Name = L"numericUpDown33";
			this->numericUpDown33->Size = System::Drawing::Size(97, 22);
			this->numericUpDown33->TabIndex = 43;
			this->numericUpDown33->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown2_ValueChanged);
			// 
			// numericUpDown34
			// 
			this->numericUpDown34->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown34->Location = System::Drawing::Point(628, 240);
			this->numericUpDown34->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown34->Name = L"numericUpDown34";
			this->numericUpDown34->Size = System::Drawing::Size(97, 22);
			this->numericUpDown34->TabIndex = 44;
			this->numericUpDown34->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown3_ValueChanged);
			// 
			// numericUpDown35
			// 
			this->numericUpDown35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown35->Location = System::Drawing::Point(628, 310);
			this->numericUpDown35->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown35->Name = L"numericUpDown35";
			this->numericUpDown35->Size = System::Drawing::Size(97, 22);
			this->numericUpDown35->TabIndex = 45;
			this->numericUpDown35->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown4_ValueChanged);
			// 
			// numericUpDown36
			// 
			this->numericUpDown36->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown36->Location = System::Drawing::Point(628, 450);
			this->numericUpDown36->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown36->Name = L"numericUpDown36";
			this->numericUpDown36->Size = System::Drawing::Size(97, 22);
			this->numericUpDown36->TabIndex = 46;
			this->numericUpDown36->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown6_ValueChanged);
			// 
			// numericUpDown37
			// 
			this->numericUpDown37->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown37->Location = System::Drawing::Point(732, 30);
			this->numericUpDown37->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown37->Name = L"numericUpDown37";
			this->numericUpDown37->Size = System::Drawing::Size(97, 22);
			this->numericUpDown37->TabIndex = 47;
			this->numericUpDown37->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown7_Validated);
			// 
			// numericUpDown38
			// 
			this->numericUpDown38->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown38->Location = System::Drawing::Point(732, 100);
			this->numericUpDown38->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown38->Name = L"numericUpDown38";
			this->numericUpDown38->Size = System::Drawing::Size(97, 22);
			this->numericUpDown38->TabIndex = 48;
			this->numericUpDown38->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown1_ValueChanged);
			// 
			// numericUpDown39
			// 
			this->numericUpDown39->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown39->Location = System::Drawing::Point(732, 170);
			this->numericUpDown39->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown39->Name = L"numericUpDown39";
			this->numericUpDown39->Size = System::Drawing::Size(97, 22);
			this->numericUpDown39->TabIndex = 49;
			this->numericUpDown39->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown2_ValueChanged);
			// 
			// numericUpDown40
			// 
			this->numericUpDown40->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown40->Location = System::Drawing::Point(732, 240);
			this->numericUpDown40->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown40->Name = L"numericUpDown40";
			this->numericUpDown40->Size = System::Drawing::Size(97, 22);
			this->numericUpDown40->TabIndex = 50;
			this->numericUpDown40->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown3_ValueChanged);
			// 
			// numericUpDown41
			// 
			this->numericUpDown41->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown41->Location = System::Drawing::Point(732, 310);
			this->numericUpDown41->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown41->Name = L"numericUpDown41";
			this->numericUpDown41->Size = System::Drawing::Size(97, 22);
			this->numericUpDown41->TabIndex = 51;
			this->numericUpDown41->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown4_ValueChanged);
			// 
			// numericUpDown42
			// 
			this->numericUpDown42->Dock = System::Windows::Forms::DockStyle::Fill;
			this->numericUpDown42->Location = System::Drawing::Point(732, 380);
			this->numericUpDown42->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown42->Name = L"numericUpDown42";
			this->numericUpDown42->Size = System::Drawing::Size(97, 22);
			this->numericUpDown42->TabIndex = 52;
			this->numericUpDown42->ValueChanged += gcnew System::EventHandler(this, &ListenAnzeigen::numericUpDown5_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(836, 27);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 69);
			this->label11->TabIndex = 53;
			this->label11->Text = L"0";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(836, 97);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(97, 69);
			this->label12->TabIndex = 54;
			this->label12->Text = L"0";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Window;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(836, 167);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 69);
			this->label13->TabIndex = 55;
			this->label13->Text = L"0";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Window;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(836, 237);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 69);
			this->label14->TabIndex = 56;
			this->label14->Text = L"0";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Window;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Location = System::Drawing::Point(836, 307);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(97, 69);
			this->label15->TabIndex = 57;
			this->label15->Text = L"0";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Window;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Location = System::Drawing::Point(836, 377);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(97, 69);
			this->label16->TabIndex = 58;
			this->label16->Text = L"0";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Window;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Location = System::Drawing::Point(836, 447);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 70);
			this->label17->TabIndex = 59;
			this->label17->Text = L"0";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Window;
			this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label18->Location = System::Drawing::Point(940, 27);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 69);
			this->label18->TabIndex = 60;
			this->label18->Text = L"0";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Window;
			this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label19->Location = System::Drawing::Point(940, 97);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(97, 69);
			this->label19->TabIndex = 61;
			this->label19->Text = L"0";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Window;
			this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label20->Location = System::Drawing::Point(940, 167);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(97, 69);
			this->label20->TabIndex = 62;
			this->label20->Text = L"0";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::Window;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Location = System::Drawing::Point(940, 237);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(97, 69);
			this->label21->TabIndex = 63;
			this->label21->Text = L"0";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Window;
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Location = System::Drawing::Point(940, 307);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(97, 69);
			this->label22->TabIndex = 64;
			this->label22->Text = L"0";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::Window;
			this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label23->Location = System::Drawing::Point(940, 377);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(97, 69);
			this->label23->TabIndex = 65;
			this->label23->Text = L"0";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::Window;
			this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label24->Location = System::Drawing::Point(940, 447);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(97, 70);
			this->label24->TabIndex = 66;
			this->label24->Text = L"0";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(4, 97);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(54, 17);
			this->label26->TabIndex = 67;
			this->label26->Text = L"label26";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(4, 167);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(54, 17);
			this->label27->TabIndex = 68;
			this->label27->Text = L"label27";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(4, 237);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(54, 17);
			this->label28->TabIndex = 69;
			this->label28->Text = L"label28";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(4, 307);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 17);
			this->label29->TabIndex = 70;
			this->label29->Text = L"label29";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(4, 377);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(54, 17);
			this->label30->TabIndex = 71;
			this->label30->Text = L"label30";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(4, 447);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 17);
			this->label31->TabIndex = 72;
			this->label31->Text = L"label31";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(108, 1);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(54, 17);
			this->label32->TabIndex = 73;
			this->label32->Text = L"label32";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(212, 1);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(54, 17);
			this->label33->TabIndex = 74;
			this->label33->Text = L"label33";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(316, 1);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(54, 17);
			this->label34->TabIndex = 75;
			this->label34->Text = L"label34";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(420, 1);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(54, 17);
			this->label35->TabIndex = 76;
			this->label35->Text = L"label35";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(524, 1);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(54, 17);
			this->label36->TabIndex = 77;
			this->label36->Text = L"label36";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(628, 1);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(54, 17);
			this->label37->TabIndex = 78;
			this->label37->Text = L"label37";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(732, 1);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(54, 17);
			this->label38->TabIndex = 79;
			this->label38->Text = L"label38";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"JudoWettkampfGewichtsgrupppenDatei|*.jcl";
			this->openFileDialog1->RestoreDirectory = true;
			this->openFileDialog1->SupportMultiDottedExtensions = true;
			this->openFileDialog1->Title = L"Gewichtsklasse auswählen";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &ListenAnzeigen::openFileDialog1_FileOk);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel38);
			this->panel2->Controls->Add(this->panel37);
			this->panel2->Controls->Add(this->panel36);
			this->panel2->Controls->Add(this->panel35);
			this->panel2->Controls->Add(this->panel34);
			this->panel2->Controls->Add(this->panel32);
			this->panel2->Controls->Add(this->panel31);
			this->panel2->Controls->Add(this->panel30);
			this->panel2->Controls->Add(this->panel29);
			this->panel2->Controls->Add(this->panel27);
			this->panel2->Controls->Add(this->panel28);
			this->panel2->Controls->Add(this->panel26);
			this->panel2->Controls->Add(this->panel25);
			this->panel2->Controls->Add(this->panel24);
			this->panel2->Controls->Add(this->panel23);
			this->panel2->Controls->Add(this->panel22);
			this->panel2->Controls->Add(this->panel21);
			this->panel2->Controls->Add(this->panel20);
			this->panel2->Controls->Add(this->panel19);
			this->panel2->Controls->Add(this->panel18);
			this->panel2->Controls->Add(this->panel17);
			this->panel2->Controls->Add(this->panel16);
			this->panel2->Controls->Add(this->panel15);
			this->panel2->Controls->Add(this->panel14);
			this->panel2->Controls->Add(this->panel13);
			this->panel2->Controls->Add(this->panel12);
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel33);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, -493);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1234, 571);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListenAnzeigen::panel2_Paint);
			// 
			// panel38
			// 
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Controls->Add(this->label73);
			this->panel38->Location = System::Drawing::Point(490, 460);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(212, 23);
			this->panel38->TabIndex = 34;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(3, 4);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(23, 17);
			this->label73->TabIndex = 1;
			this->label73->Text = L"---";
			// 
			// panel37
			// 
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Controls->Add(this->label72);
			this->panel37->Location = System::Drawing::Point(490, 384);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(212, 23);
			this->panel37->TabIndex = 33;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(3, 4);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(23, 17);
			this->label72->TabIndex = 1;
			this->label72->Text = L"---";
			// 
			// panel36
			// 
			this->panel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel36->Controls->Add(this->button20);
			this->panel36->Controls->Add(this->button19);
			this->panel36->Controls->Add(this->label55);
			this->panel36->Location = System::Drawing::Point(468, 446);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(24, 58);
			this->panel36->TabIndex = 32;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(3, 38);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(17, 17);
			this->button20->TabIndex = 35;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button20_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(17, 17);
			this->button19->TabIndex = 35;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button19_Click);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(-1, 17);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(24, 17);
			this->label55->TabIndex = 22;
			this->label55->Text = L"10";
			// 
			// panel35
			// 
			this->panel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel35->Controls->Add(this->button18);
			this->panel35->Controls->Add(this->button17);
			this->panel35->Controls->Add(this->label54);
			this->panel35->Location = System::Drawing::Point(468, 364);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(24, 58);
			this->panel35->TabIndex = 31;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(3, 39);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(17, 17);
			this->button18->TabIndex = 35;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(3, 1);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(17, 17);
			this->button17->TabIndex = 35;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button17_Click);
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(3, 17);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(16, 17);
			this->label54->TabIndex = 22;
			this->label54->Text = L"9";
			// 
			// panel34
			// 
			this->panel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel34->Controls->Add(this->label71);
			this->panel34->Location = System::Drawing::Point(257, 481);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(212, 23);
			this->panel34->TabIndex = 30;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(1, 4);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(23, 17);
			this->label71->TabIndex = 33;
			this->label71->Text = L"---";
			// 
			// panel32
			// 
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel32->Controls->Add(this->label53);
			this->panel32->Location = System::Drawing::Point(257, 364);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(212, 23);
			this->panel32->TabIndex = 28;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(1, 2);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(26, 17);
			this->label53->TabIndex = 24;
			this->label53->Text = L"(8)";
			// 
			// panel31
			// 
			this->panel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel31->Controls->Add(this->label52);
			this->panel31->Location = System::Drawing::Point(257, 446);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(212, 23);
			this->panel31->TabIndex = 27;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(1, 2);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(26, 17);
			this->label52->TabIndex = 24;
			this->label52->Text = L"(7)";
			// 
			// panel30
			// 
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Controls->Add(this->button16);
			this->panel30->Controls->Add(this->button15);
			this->panel30->Controls->Add(this->label51);
			this->panel30->Location = System::Drawing::Point(235, 468);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(24, 52);
			this->panel30->TabIndex = 26;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(2, 32);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(17, 17);
			this->button16->TabIndex = 34;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(17, 17);
			this->button15->TabIndex = 34;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button15_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(3, 17);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(16, 17);
			this->label51->TabIndex = 22;
			this->label51->Text = L"6";
			// 
			// panel29
			// 
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Controls->Add(this->button14);
			this->panel29->Controls->Add(this->button13);
			this->panel29->Controls->Add(this->label50);
			this->panel29->Location = System::Drawing::Point(235, 386);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(24, 52);
			this->panel29->TabIndex = 23;
			this->panel29->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListenAnzeigen::panel29_Paint);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(3, 32);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(17, 17);
			this->button14->TabIndex = 35;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(17, 17);
			this->button13->TabIndex = 34;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button13_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(3, 17);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(16, 17);
			this->label50->TabIndex = 22;
			this->label50->Text = L"5";
			// 
			// panel27
			// 
			this->panel27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel27->Controls->Add(this->label48);
			this->panel27->Location = System::Drawing::Point(24, 497);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(212, 23);
			this->panel27->TabIndex = 25;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(1, 2);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(26, 17);
			this->label48->TabIndex = 25;
			this->label48->Text = L"(4)";
			// 
			// panel28
			// 
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel28->Controls->Add(this->label49);
			this->panel28->Location = System::Drawing::Point(24, 468);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(212, 23);
			this->panel28->TabIndex = 24;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(1, 2);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(26, 17);
			this->label49->TabIndex = 24;
			this->label49->Text = L"(2)";
			// 
			// panel26
			// 
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Controls->Add(this->label47);
			this->panel26->Location = System::Drawing::Point(24, 415);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(212, 23);
			this->panel26->TabIndex = 23;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(1, 2);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(26, 17);
			this->label47->TabIndex = 25;
			this->label47->Text = L"(3)";
			// 
			// panel25
			// 
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Controls->Add(this->label46);
			this->panel25->Location = System::Drawing::Point(24, 386);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(212, 23);
			this->panel25->TabIndex = 22;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(1, 2);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(26, 17);
			this->label46->TabIndex = 24;
			this->label46->Text = L"(1)";
			// 
			// panel24
			// 
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Controls->Add(this->label74);
			this->panel24->Location = System::Drawing::Point(724, 162);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(212, 23);
			this->panel24->TabIndex = 21;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(2, 2);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(23, 17);
			this->label74->TabIndex = 34;
			this->label74->Text = L"---";
			// 
			// panel23
			// 
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel23->Controls->Add(this->button22);
			this->panel23->Controls->Add(this->button21);
			this->panel23->Controls->Add(this->label45);
			this->panel23->Location = System::Drawing::Point(702, 80);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(24, 189);
			this->panel23->TabIndex = 20;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(3, 167);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(17, 17);
			this->button22->TabIndex = 35;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(3, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(17, 17);
			this->button21->TabIndex = 35;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button21_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(-1, 85);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(24, 17);
			this->label45->TabIndex = 23;
			this->label45->Text = L"11";
			// 
			// panel22
			// 
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel22->Controls->Add(this->label68);
			this->panel22->Location = System::Drawing::Point(491, 80);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(212, 23);
			this->panel22->TabIndex = 19;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(2, 3);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(23, 17);
			this->label68->TabIndex = 2;
			this->label68->Text = L"---";
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->label69);
			this->panel21->Location = System::Drawing::Point(491, 246);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(212, 23);
			this->panel21->TabIndex = 18;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(2, 4);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(23, 17);
			this->label69->TabIndex = 33;
			this->label69->Text = L"---";
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->button12);
			this->panel20->Controls->Add(this->button11);
			this->panel20->Controls->Add(this->label44);
			this->panel20->Location = System::Drawing::Point(468, 206);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(24, 103);
			this->panel20->TabIndex = 17;
			this->panel20->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListenAnzeigen::panel20_Paint);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(3, 81);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(17, 17);
			this->button12->TabIndex = 34;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(3, 1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(17, 17);
			this->button11->TabIndex = 34;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button11_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(3, 42);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(16, 17);
			this->label44->TabIndex = 23;
			this->label44->Text = L"8";
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->button10);
			this->panel19->Controls->Add(this->button9);
			this->panel19->Controls->Add(this->label43);
			this->panel19->Location = System::Drawing::Point(468, 41);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(24, 103);
			this->panel19->TabIndex = 16;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(2, 81);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(17, 17);
			this->button10->TabIndex = 34;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(3, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(17, 17);
			this->button9->TabIndex = 34;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button9_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(3, 42);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(16, 17);
			this->label43->TabIndex = 23;
			this->label43->Text = L"7";
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->label67);
			this->panel18->Location = System::Drawing::Point(257, 285);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(212, 23);
			this->panel18->TabIndex = 15;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(3, 4);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(23, 17);
			this->label67->TabIndex = 1;
			this->label67->Text = L"---";
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->label66);
			this->panel17->Location = System::Drawing::Point(257, 206);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(212, 23);
			this->panel17->TabIndex = 14;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(3, 1);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(23, 17);
			this->label66->TabIndex = 1;
			this->label66->Text = L"---";
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->label65);
			this->panel16->Location = System::Drawing::Point(257, 120);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(212, 23);
			this->panel16->TabIndex = 13;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(3, 4);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(23, 17);
			this->label65->TabIndex = 1;
			this->label65->Text = L"---";
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->label64);
			this->panel15->Location = System::Drawing::Point(257, 41);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(212, 23);
			this->panel15->TabIndex = 12;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(3, 3);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(23, 17);
			this->label64->TabIndex = 0;
			this->label64->Text = L"---";
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->button8);
			this->panel14->Controls->Add(this->button7);
			this->panel14->Controls->Add(this->label42);
			this->panel14->Location = System::Drawing::Point(235, 272);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(24, 52);
			this->panel14->TabIndex = 11;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(3, 33);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(17, 17);
			this->button8->TabIndex = 34;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(3, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(17, 17);
			this->button7->TabIndex = 34;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button7_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(3, 17);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(16, 17);
			this->label42->TabIndex = 23;
			this->label42->Text = L"4";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->button6);
			this->panel13->Controls->Add(this->button5);
			this->panel13->Controls->Add(this->label41);
			this->panel13->Location = System::Drawing::Point(235, 194);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(24, 52);
			this->panel13->TabIndex = 10;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(3, 33);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(17, 17);
			this->button6->TabIndex = 34;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(17, 17);
			this->button5->TabIndex = 34;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button5_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(3, 17);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(16, 17);
			this->label41->TabIndex = 23;
			this->label41->Text = L"3";
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->button4);
			this->panel12->Controls->Add(this->button3);
			this->panel12->Controls->Add(this->label40);
			this->panel12->Location = System::Drawing::Point(235, 108);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(24, 52);
			this->panel12->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(3, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(17, 17);
			this->button4->TabIndex = 34;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(17, 17);
			this->button3->TabIndex = 34;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button3_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(3, 16);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(16, 17);
			this->label40->TabIndex = 23;
			this->label40->Text = L"2";
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->button2);
			this->panel11->Controls->Add(this->button1);
			this->panel11->Controls->Add(this->label39);
			this->panel11->Location = System::Drawing::Point(235, 28);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(24, 52);
			this->panel11->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(17, 17);
			this->button2->TabIndex = 34;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(17, 17);
			this->button1->TabIndex = 33;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListenAnzeigen::button1_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(3, 17);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(16, 17);
			this->label39->TabIndex = 22;
			this->label39->Text = L"1";
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label63);
			this->panel10->Location = System::Drawing::Point(24, 301);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(212, 23);
			this->panel10->TabIndex = 7;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(3, 4);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(54, 17);
			this->label63->TabIndex = 33;
			this->label63->Text = L"label63";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label62);
			this->panel9->Location = System::Drawing::Point(24, 272);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(212, 23);
			this->panel9->TabIndex = 6;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(3, 4);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(54, 17);
			this->label62->TabIndex = 33;
			this->label62->Text = L"label62";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label61);
			this->panel8->Location = System::Drawing::Point(24, 223);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(212, 23);
			this->panel8->TabIndex = 5;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(3, 4);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(54, 17);
			this->label61->TabIndex = 5;
			this->label61->Text = L"label61";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label60);
			this->panel7->Location = System::Drawing::Point(24, 194);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(212, 23);
			this->panel7->TabIndex = 4;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(3, 5);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(54, 17);
			this->label60->TabIndex = 4;
			this->label60->Text = L"label60";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label59);
			this->panel6->Location = System::Drawing::Point(24, 137);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(212, 23);
			this->panel6->TabIndex = 3;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(3, 5);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(54, 17);
			this->label59->TabIndex = 3;
			this->label59->Text = L"label59";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label58);
			this->panel5->Location = System::Drawing::Point(24, 108);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(212, 23);
			this->panel5->TabIndex = 2;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(3, 3);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(54, 17);
			this->label58->TabIndex = 3;
			this->label58->Text = L"label58";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label57);
			this->panel4->Location = System::Drawing::Point(24, 57);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(212, 23);
			this->panel4->TabIndex = 1;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(3, 4);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(54, 17);
			this->label57->TabIndex = 3;
			this->label57->Text = L"label57";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label56);
			this->panel3->Location = System::Drawing::Point(24, 28);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(212, 23);
			this->panel3->TabIndex = 0;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(3, 4);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(54, 17);
			this->label56->TabIndex = 2;
			this->label56->Text = L"label56";
			// 
			// panel33
			// 
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel33->Controls->Add(this->label70);
			this->panel33->Location = System::Drawing::Point(257, 399);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(212, 23);
			this->panel33->TabIndex = 29;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(4, 4);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(23, 17);
			this->label70->TabIndex = 33;
			this->label70->Text = L"---";
			// 
			// ListenAnzeigen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1234, 647);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"ListenAnzeigen";
			this->Text = L"Liste";
			this->Load += gcnew System::EventHandler(this, &ListenAnzeigen::ListenAnzeigen_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown42))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel36->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void numericUpDown7_Validated(System::Object^  sender, System::EventArgs^  e) {
				 this->label18->Text = Convert::ToString(this->numericUpDown7->Value+this->numericUpDown13->Value+this->numericUpDown19->Value+this->numericUpDown25->Value+this->numericUpDown31->Value+this->numericUpDown37->Value);
				 this->label11->Text = "0";
				 if(this->numericUpDown7->Value!=0)
				 {
					 this->label11->Text = Convert::ToString(Convert::ToInt32(this->label11->Text)+1);
				 }
				 if(this->numericUpDown13->Value!=0)
				 {
					 this->label11->Text = Convert::ToString(Convert::ToInt32(this->label11->Text)+1);
				 }
				 if(this->numericUpDown19->Value!=0)
				 {
					 this->label11->Text = Convert::ToString(Convert::ToInt32(this->label11->Text)+1);
				 }
				 if(this->numericUpDown25->Value!=0)
				 {
					 this->label11->Text = Convert::ToString(Convert::ToInt32(this->label11->Text)+1);
				 }
				 if(this->numericUpDown31->Value!=0)
				 {
					 this->label11->Text = Convert::ToString(Convert::ToInt32(this->label11->Text)+1);
				 }
				 if(this->numericUpDown37->Value!=0)
				 {
					 this->label11->Text = Convert::ToString(Convert::ToInt32(this->label11->Text)+1);
				 }
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->label19->Text = Convert::ToString(this->numericUpDown1->Value+this->numericUpDown14->Value+this->numericUpDown20->Value+this->numericUpDown26->Value+this->numericUpDown32->Value+this->numericUpDown38->Value);
				 this->label12->Text = "0";
				 if(this->numericUpDown1->Value!=0)
				 {
					 this->label12->Text = Convert::ToString(Convert::ToInt32(this->label12->Text)+1);
				 }
				 if(this->numericUpDown14->Value!=0)
				 {
					 this->label12->Text = Convert::ToString(Convert::ToInt32(this->label12->Text)+1);
				 }
				 if(this->numericUpDown20->Value!=0)
				 {
					 this->label12->Text = Convert::ToString(Convert::ToInt32(this->label12->Text)+1);
				 }
				 if(this->numericUpDown26->Value!=0)
				 {
					 this->label12->Text = Convert::ToString(Convert::ToInt32(this->label12->Text)+1);
				 }
				 if(this->numericUpDown32->Value!=0)
				 {
					 this->label12->Text = Convert::ToString(Convert::ToInt32(this->label12->Text)+1);
				 }
				 if(this->numericUpDown38->Value!=0)
				 {
					 this->label12->Text = Convert::ToString(Convert::ToInt32(this->label12->Text)+1);
				 }
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->label20->Text = Convert::ToString(this->numericUpDown2->Value+this->numericUpDown8->Value+this->numericUpDown21->Value+this->numericUpDown27->Value+this->numericUpDown33->Value+this->numericUpDown39->Value);
				 this->label13->Text = "0";
				 if(this->numericUpDown2->Value!=0)
				 {
					 this->label13->Text = Convert::ToString(Convert::ToInt32(this->label13->Text)+1);
				 }
				 if(this->numericUpDown8->Value!=0)
				 {
					 this->label13->Text = Convert::ToString(Convert::ToInt32(this->label13->Text)+1);
				 }
				 if(this->numericUpDown21->Value!=0)
				 {
					 this->label13->Text = Convert::ToString(Convert::ToInt32(this->label13->Text)+1);
				 }
				 if(this->numericUpDown27->Value!=0)
				 {
					 this->label13->Text = Convert::ToString(Convert::ToInt32(this->label13->Text)+1);
				 }
				 if(this->numericUpDown33->Value!=0)
				 {
					 this->label13->Text = Convert::ToString(Convert::ToInt32(this->label13->Text)+1);
				 }
				 if(this->numericUpDown39->Value!=0)
				 {
					 this->label13->Text = Convert::ToString(Convert::ToInt32(this->label13->Text)+1);
				 }
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->label21->Text = Convert::ToString(this->numericUpDown3->Value+this->numericUpDown9->Value+this->numericUpDown15->Value+this->numericUpDown28->Value+this->numericUpDown34->Value+this->numericUpDown40->Value);
				 this->label14->Text = "0";
				 if(this->numericUpDown3->Value!=0)
				 {
					 this->label14->Text = Convert::ToString(Convert::ToInt32(this->label14->Text)+1);
				 }
				 if(this->numericUpDown9->Value!=0)
				 {
					 this->label14->Text = Convert::ToString(Convert::ToInt32(this->label14->Text)+1);
				 }
				 if(this->numericUpDown15->Value!=0)
				 {
					 this->label14->Text = Convert::ToString(Convert::ToInt32(this->label14->Text)+1);
				 }
				 if(this->numericUpDown28->Value!=0)
				 {
					 this->label14->Text = Convert::ToString(Convert::ToInt32(this->label14->Text)+1);
				 }
				 if(this->numericUpDown34->Value!=0)
				 {
					 this->label14->Text = Convert::ToString(Convert::ToInt32(this->label14->Text)+1);
				 }
				 if(this->numericUpDown40->Value!=0)
				 {
					 this->label14->Text = Convert::ToString(Convert::ToInt32(this->label14->Text)+1);
				 }
		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {	
			 this->label22->Text = Convert::ToString(this->numericUpDown4->Value+this->numericUpDown10->Value+this->numericUpDown16->Value+this->numericUpDown22->Value+this->numericUpDown35->Value+this->numericUpDown41->Value);
				 this->label15->Text = "0";
				 if(this->numericUpDown4->Value!=0)
				 {
					 this->label15->Text = Convert::ToString(Convert::ToInt32(this->label15->Text)+1);
				 }
				 if(this->numericUpDown10->Value!=0)
				 {
					 this->label15->Text = Convert::ToString(Convert::ToInt32(this->label15->Text)+1);
				 }
				 if(this->numericUpDown16->Value!=0)
				 {
					 this->label15->Text = Convert::ToString(Convert::ToInt32(this->label15->Text)+1);
				 }
				 if(this->numericUpDown22->Value!=0)
				 {
					 this->label15->Text = Convert::ToString(Convert::ToInt32(this->label15->Text)+1);
				 }
				 if(this->numericUpDown35->Value!=0)
				 {
					 this->label15->Text = Convert::ToString(Convert::ToInt32(this->label15->Text)+1);
				 }
				 if(this->numericUpDown41->Value!=0)
				 {
					 this->label15->Text = Convert::ToString(Convert::ToInt32(this->label15->Text)+1);
				 }
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->label23->Text = Convert::ToString(this->numericUpDown5->Value+this->numericUpDown11->Value+this->numericUpDown17->Value+this->numericUpDown23->Value+this->numericUpDown29->Value+this->numericUpDown42->Value);
				 this->label16->Text = "0";
				 if(this->numericUpDown5->Value!=0)
				 {
					 this->label16->Text = Convert::ToString(Convert::ToInt32(this->label16->Text)+1);
				 }
				 if(this->numericUpDown11->Value!=0)
				 {
					 this->label16->Text = Convert::ToString(Convert::ToInt32(this->label16->Text)+1);
				 }
				 if(this->numericUpDown17->Value!=0)
				 {
					 this->label16->Text = Convert::ToString(Convert::ToInt32(this->label16->Text)+1);
				 }
				 if(this->numericUpDown23->Value!=0)
				 {
					 this->label16->Text = Convert::ToString(Convert::ToInt32(this->label16->Text)+1);
				 }
				 if(this->numericUpDown29->Value!=0)
				 {
					 this->label16->Text = Convert::ToString(Convert::ToInt32(this->label16->Text)+1);
				 }
				 if(this->numericUpDown42->Value!=0)
				 {
					 this->label16->Text = Convert::ToString(Convert::ToInt32(this->label16->Text)+1);
				 }
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->label24->Text = Convert::ToString(this->numericUpDown6->Value+this->numericUpDown12->Value+this->numericUpDown18->Value+this->numericUpDown24->Value+this->numericUpDown30->Value+this->numericUpDown36->Value);
				 this->label17->Text = "0";
				 if(this->numericUpDown6->Value!=0)
				 {
					 this->label17->Text = Convert::ToString(Convert::ToInt32(this->label17->Text)+1);
				 }
				 if(this->numericUpDown12->Value!=0)
				 {
					 this->label17->Text = Convert::ToString(Convert::ToInt32(this->label17->Text)+1);
				 }
				 if(this->numericUpDown18->Value!=0)
				 {
					 this->label17->Text = Convert::ToString(Convert::ToInt32(this->label17->Text)+1);
				 }
				 if(this->numericUpDown24->Value!=0)
				 {
					 this->label17->Text = Convert::ToString(Convert::ToInt32(this->label17->Text)+1);
				 }
				 if(this->numericUpDown30->Value!=0)
				 {
					 this->label17->Text = Convert::ToString(Convert::ToInt32(this->label17->Text)+1);
				 }
				 if(this->numericUpDown36->Value!=0)
				 {
					 this->label17->Text = Convert::ToString(Convert::ToInt32(this->label17->Text)+1);
				 }
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 StreamReader^ din2 = File::OpenText(this->openFileDialog1->FileName);
				 String^ line;
				 line = din2->ReadLine();
				 if(line=="pool")
				 {
					 this->panel1->Visible = true;
					 this->label25->Text = din2->ReadLine();
					 this->label26->Text = din2->ReadLine();
					 this->label27->Text = din2->ReadLine();
					 this->label28->Text = din2->ReadLine();
					 this->label29->Text = din2->ReadLine();
					 this->label30->Text = din2->ReadLine();
					 this->label31->Text = din2->ReadLine();
					 this->label32->Text = this->label25->Text;
					 this->label33->Text = this->label26->Text;
					 this->label34->Text = this->label27->Text;
					 this->label35->Text = this->label28->Text;
					 this->label36->Text = this->label29->Text;
					 this->label37->Text = this->label30->Text;
					 this->label38->Text = this->label31->Text;
				 }
				 else if(line=="ko-8")
				 {
					 this->panel2->Visible = true;
					 this->label56->Text = din2->ReadLine();
					 this->label57->Text = din2->ReadLine();
					 this->label58->Text = din2->ReadLine();
					 this->label59->Text = din2->ReadLine();
					 this->label60->Text = din2->ReadLine();
					 this->label61->Text = din2->ReadLine();
					 this->label62->Text = din2->ReadLine();
					 this->label63->Text = din2->ReadLine();
				 }
				 din2->Close();
		 }
private: System::Void ListenAnzeigen_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->openFileDialog1->ShowDialog();
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label64->Text = this->label56->Text;
			 this->label46->Text = this->label57->Text;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label64->Text = this->label57->Text;
			 this->label46->Text = this->label56->Text;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label65->Text = this->label58->Text;
			 this->label49->Text = this->label59->Text;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label65->Text = this->label59->Text;
			 this->label49->Text = this->label58->Text;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label66->Text = this->label60->Text;
			 this->label47->Text = this->label61->Text;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label66->Text = this->label61->Text;
			 this->label47->Text = this->label60->Text;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label67->Text = this->label62->Text;
			 this->label48->Text = this->label63->Text;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label67->Text = this->label63->Text;
			 this->label48->Text = this->label62->Text;
		 }
private: System::Void panel29_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label70->Text = this->label46->Text;
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label70->Text = this->label47->Text;
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label71->Text = this->label49->Text;
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label71->Text = this->label48->Text;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label68->Text = this->label64->Text;
			 this->label52->Text = this->label65->Text;
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label68->Text = this->label65->Text;
			 this->label52->Text = this->label64->Text;
		 }
private: System::Void panel20_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label69->Text = this->label66->Text;
			 this->label53->Text = this->label67->Text;
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label69->Text = this->label67->Text;
			 this->label53->Text = this->label66->Text;
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label72->Text = this->label53->Text;
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label72->Text = this->label70->Text;
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label73->Text = this->label52->Text;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label73->Text = this->label71->Text;
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label74->Text = this->label68->Text;
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label74->Text = this->label69->Text;
		 }
};
}
