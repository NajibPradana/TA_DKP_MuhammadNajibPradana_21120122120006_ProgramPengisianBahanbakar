#pragma once
#include "Pengisian.h"
#include "Nota.h"

namespace TugasBesar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Pengisian^ PengisianInstance;
			double tksharga;
			double liter_myfrom;
			int kembalian;

			//
			//TODO: Add the constructor code here
			//
		}
	private : 
		double tksbeli_myfrom;
		double bayar_myfrom;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NamaToko;
	private: System::Windows::Forms::Label^ PilihBahanBakar;
	private: System::Windows::Forms::Label^ Nominal;
	private: System::Windows::Forms::ComboBox^ cmbjenis;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tksHarga;
	private: System::Windows::Forms::TextBox^ tksbeli;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tksbayar;

	private: System::Windows::Forms::CheckBox^ checkBox1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->NamaToko = (gcnew System::Windows::Forms::Label());
			this->PilihBahanBakar = (gcnew System::Windows::Forms::Label());
			this->Nominal = (gcnew System::Windows::Forms::Label());
			this->cmbjenis = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tksHarga = (gcnew System::Windows::Forms::TextBox());
			this->tksbeli = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tksbayar = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// NamaToko
			// 
			this->NamaToko->AutoSize = true;
			this->NamaToko->BackColor = System::Drawing::Color::Red;
			this->NamaToko->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->NamaToko->Location = System::Drawing::Point(123, 21);
			this->NamaToko->Name = L"NamaToko";
			this->NamaToko->Size = System::Drawing::Size(351, 36);
			this->NamaToko->TabIndex = 0;
			this->NamaToko->Text = L"Toko Pengsian Bahan Bakar";
			this->NamaToko->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// PilihBahanBakar
			// 
			this->PilihBahanBakar->AutoSize = true;
			this->PilihBahanBakar->BackColor = System::Drawing::Color::Red;
			this->PilihBahanBakar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PilihBahanBakar->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PilihBahanBakar->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->PilihBahanBakar->Location = System::Drawing::Point(24, 133);
			this->PilihBahanBakar->Name = L"PilihBahanBakar";
			this->PilihBahanBakar->Size = System::Drawing::Size(234, 38);
			this->PilihBahanBakar->TabIndex = 1;
			this->PilihBahanBakar->Text = L"Pilih Bahan Bakar";
			this->PilihBahanBakar->Click += gcnew System::EventHandler(this, &MyForm::PilihBahanBakar_Click);
			// 
			// Nominal
			// 
			this->Nominal->AutoSize = true;
			this->Nominal->BackColor = System::Drawing::Color::Red;
			this->Nominal->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nominal->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Nominal->Location = System::Drawing::Point(24, 228);
			this->Nominal->Name = L"Nominal";
			this->Nominal->Size = System::Drawing::Size(117, 36);
			this->Nominal->TabIndex = 2;
			this->Nominal->Text = L"Nominal";
			// 
			// cmbjenis
			// 
			this->cmbjenis->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbjenis->FormattingEnabled = true;
			this->cmbjenis->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pertalite", L"Pertamax", L"Solar" });
			this->cmbjenis->Location = System::Drawing::Point(262, 133);
			this->cmbjenis->Name = L"cmbjenis";
			this->cmbjenis->Size = System::Drawing::Size(207, 44);
			this->cmbjenis->TabIndex = 3;
			this->cmbjenis->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(24, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Harga";
			// 
			// tksHarga
			// 
			this->tksHarga->Location = System::Drawing::Point(262, 183);
			this->tksHarga->Name = L"tksHarga";
			this->tksHarga->Size = System::Drawing::Size(212, 40);
			this->tksHarga->TabIndex = 5;
			this->tksHarga->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// tksbeli
			// 
			this->tksbeli->Location = System::Drawing::Point(262, 229);
			this->tksbeli->Name = L"tksbeli";
			this->tksbeli->Size = System::Drawing::Size(212, 40);
			this->tksbeli->TabIndex = 6;
			this->tksbeli->TextChanged += gcnew System::EventHandler(this, &MyForm::tksbeli_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Chartreuse;
			this->button1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(129, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Lanjutkan";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(262, 363);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(24, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 36);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Pembayaran";
			// 
			// tksbayar
			// 
			this->tksbayar->Location = System::Drawing::Point(262, 278);
			this->tksbayar->Name = L"tksbayar";
			this->tksbayar->Size = System::Drawing::Size(212, 40);
			this->tksbayar->TabIndex = 10;
			this->tksbayar->TextChanged += gcnew System::EventHandler(this, &MyForm::tksbayar_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->checkBox1->Location = System::Drawing::Point(30, 330);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(328, 27);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Data yang saya masukan sudah benar";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(982, 558);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->tksbayar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tksbeli);
			this->Controls->Add(this->tksHarga);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbjenis);
			this->Controls->Add(this->Nominal);
			this->Controls->Add(this->PilihBahanBakar);
			this->Controls->Add(this->NamaToko);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PilihBahanBakar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ Pilihan = cmbjenis->Text;
	if (Pilihan == "Pertalite") {
		float tksharga = 10000;
		tksHarga->Text = tksharga.ToString(); // Mengisi nilai ke dalam TextBox
	}
	else if (Pilihan == "Pertamax") {
		float tksharga = 13000;
		tksHarga->Text = tksharga.ToString(); // Mengisi nilai ke dalam TextBox
	}
	else if (Pilihan == "Solar") {
		float tksharga = 15000;
		tksHarga->Text = tksharga.ToString(); // Mengisi nilai ke dalam TextBox
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	cmbjenis->SelectedIndex = -1; // Menghapus pilihan pada ComboBox
	tksHarga->Clear(); // Menghapus nilai pada TextBox tksHarga
	tksbeli->Clear(); // Menghapus nilai pada TextBox tksbeli
	tksbayar->Clear(); // Menghapus nilai pada TextBox tksbayar
	checkBox1->Checked = false; // Menghapus check pada CheckBox

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tksbeli_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked && !String::IsNullOrEmpty(tksHarga->Text) && !String::IsNullOrEmpty(tksbeli->Text) && !String::IsNullOrEmpty(tksbayar->Text)) {
		Pengisian^ a = gcnew Pengisian();
		MyForm::Hide();
		a->Show();

		//pengubahan string ke double
		tksbeli_myfrom = Double::Parse(tksbeli->Text);
		bayar_myfrom = Double::Parse(tksbayar->Text);

		//manggil textbox nya buat menyimpan nominal 
		a->jumlahbeli_Pengisian->Text = tksbeli->Text;

		//operasi perhitungan untuk jumalh liter
		double tksharga = Convert::ToSingle(tksHarga->Text);
		double tksbeli_myfrom = Convert::ToSingle(tksbeli->Text);
		double liter_myfrom = tksbeli_myfrom / tksharga;
		a->JumLiter_Pengisian->Text = liter_myfrom.ToString();
		


		//Perhitungan untuk Kembalian
		double kembalian = bayar_myfrom - tksbeli_myfrom;
		a->kembalian_pengisian->Text = kembalian.ToString();
		a->Jumbayar_pengisian->Text = tksbayar->Text;
		
	}
	else {
		MessageBox::Show("Harap isi semua lampiran sebelum melanjutkan.", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return; // Menghentikan eksekusi selanjutnya
	}
	
	
	

}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	 
private: System::Void tksbayar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
