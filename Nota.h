#pragma once


namespace TugasBesar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Nota
	/// </summary>
	public ref class Nota : public System::Windows::Forms::Form
	{
	public:
		Nota(void)
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
		~Nota()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public : System::Windows::Forms::TextBox^ Jumlahbeli;
	public : System::Windows::Forms::TextBox^ kembalian;


	public : System::Windows::Forms::TextBox^ Jumbayar;

	public : System::Windows::Forms::TextBox^ Jumliter;
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
	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Jumlahbeli = (gcnew System::Windows::Forms::TextBox());
			this->kembalian = (gcnew System::Windows::Forms::TextBox());
			this->Jumbayar = (gcnew System::Windows::Forms::TextBox());
			this->Jumliter = (gcnew System::Windows::Forms::TextBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(157, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nota Pembelian";
			this->label1->Click += gcnew System::EventHandler(this, &Nota::label1_Click);
			// 
			// Jumlahbeli
			// 
			this->Jumlahbeli->Location = System::Drawing::Point(188, 145);
			this->Jumlahbeli->Name = L"Jumlahbeli";
			this->Jumlahbeli->Size = System::Drawing::Size(170, 26);
			this->Jumlahbeli->TabIndex = 1;
			this->Jumlahbeli->TextChanged += gcnew System::EventHandler(this, &Nota::Jumlahbeli_TextChanged);
			// 
			// kembalian
			// 
			this->kembalian->Location = System::Drawing::Point(188, 418);
			this->kembalian->Name = L"kembalian";
			this->kembalian->Size = System::Drawing::Size(170, 26);
			this->kembalian->TabIndex = 2;
			// 
			// Jumbayar
			// 
			this->Jumbayar->Location = System::Drawing::Point(188, 309);
			this->Jumbayar->Name = L"Jumbayar";
			this->Jumbayar->Size = System::Drawing::Size(170, 26);
			this->Jumbayar->TabIndex = 3;
			// 
			// Jumliter
			// 
			this->Jumliter->Location = System::Drawing::Point(188, 200);
			this->Jumliter->Name = L"Jumliter";
			this->Jumliter->Size = System::Drawing::Size(170, 26);
			this->Jumliter->TabIndex = 4;
			this->Jumliter->TextChanged += gcnew System::EventHandler(this, &Nota::Jumliter_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(202, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pembelian";
			this->label2->Click += gcnew System::EventHandler(this, &Nota::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(202, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 26);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Pembayaran";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(128, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 26);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Rp";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(128, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Liter";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(109, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(348, 26);
			this->label6->TabIndex = 9;
			this->label6->Text = L"........................................................";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(109, 267);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(348, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"........................................................";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(202, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 26);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Kembalian";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(80, 376);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(348, 26);
			this->label9->TabIndex = 12;
			this->label9->Text = L"........................................................";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(128, 309);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 26);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Rp";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(128, 418);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 26);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Rp";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(207, 464);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 33);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Nota::button1_Click);
			// 
			// Nota
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 531);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Jumliter);
			this->Controls->Add(this->Jumbayar);
			this->Controls->Add(this->kembalian);
			this->Controls->Add(this->Jumlahbeli);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Nota";
			this->Text = L"Nota";
			this->Load += gcnew System::EventHandler(this, &Nota::Nota_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Nota_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void Jumlahbeli_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Jumliter_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Nota::Hide();
}
};
}
