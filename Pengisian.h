#pragma once
#include "Nota.h"


namespace TugasBesar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pengisian
	/// </summary>
	public ref class Pengisian : public System::Windows::Forms::Form
	{
	private:
		
	public:
		Pengisian(void)
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
		~Pengisian()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ProgressBar^ barpengisisan;
	private: System::Windows::Forms::Button^ selesai;
	private: System::Windows::Forms::TextBox^ tksbeli;
	public : System::Windows::Forms::TextBox^ jumlahbeli_Pengisian;
	public : System::Windows::Forms::TextBox^ JumLiter_Pengisian;
	public : System::Windows::Forms::TextBox^ kembalian_pengisian;
	public : System::Windows::Forms::TextBox^ Jumbayar_pengisian;
	private: System::Windows::Forms::Button^ selesai_1;
	public:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pengisian::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->barpengisisan = (gcnew System::Windows::Forms::ProgressBar());
			this->selesai = (gcnew System::Windows::Forms::Button());
			this->jumlahbeli_Pengisian = (gcnew System::Windows::Forms::TextBox());
			this->JumLiter_Pengisian = (gcnew System::Windows::Forms::TextBox());
			this->kembalian_pengisian = (gcnew System::Windows::Forms::TextBox());
			this->Jumbayar_pengisian = (gcnew System::Windows::Forms::TextBox());
			this->selesai_1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(337, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 378);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Pengisian::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(430, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Isi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pengisian::button1_Click);
			// 
			// barpengisisan
			// 
			this->barpengisisan->Location = System::Drawing::Point(430, 405);
			this->barpengisisan->Name = L"barpengisisan";
			this->barpengisisan->Size = System::Drawing::Size(325, 32);
			this->barpengisisan->TabIndex = 4;
			this->barpengisisan->Click += gcnew System::EventHandler(this, &Pengisian::progressBar1_Click);
			// 
			// selesai
			// 
			this->selesai->Location = System::Drawing::Point(584, 452);
			this->selesai->Name = L"selesai";
			this->selesai->Size = System::Drawing::Size(171, 31);
			this->selesai->TabIndex = 5;
			this->selesai->Text = L"Cetak";
			this->selesai->UseVisualStyleBackColor = true;
			this->selesai->Click += gcnew System::EventHandler(this, &Pengisian::button2_Click);
			// 
			// jumlahbeli_Pengisian
			// 
			this->jumlahbeli_Pengisian->BackColor = System::Drawing::SystemColors::Info;
			this->jumlahbeli_Pengisian->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->jumlahbeli_Pengisian->Location = System::Drawing::Point(61, 217);
			this->jumlahbeli_Pengisian->Name = L"jumlahbeli_Pengisian";
			this->jumlahbeli_Pengisian->Size = System::Drawing::Size(163, 19);
			this->jumlahbeli_Pengisian->TabIndex = 6;
			this->jumlahbeli_Pengisian->TextChanged += gcnew System::EventHandler(this, &Pengisian::textBox1_TextChanged_1);
			// 
			// JumLiter_Pengisian
			// 
			this->JumLiter_Pengisian->Location = System::Drawing::Point(61, 260);
			this->JumLiter_Pengisian->Name = L"JumLiter_Pengisian";
			this->JumLiter_Pengisian->Size = System::Drawing::Size(147, 26);
			this->JumLiter_Pengisian->TabIndex = 7;
			this->JumLiter_Pengisian->TextChanged += gcnew System::EventHandler(this, &Pengisian::textBox1_TextChanged_2);
			// 
			// kembalian_pengisian
			// 
			this->kembalian_pengisian->Location = System::Drawing::Point(61, 316);
			this->kembalian_pengisian->Name = L"kembalian_pengisian";
			this->kembalian_pengisian->Size = System::Drawing::Size(147, 26);
			this->kembalian_pengisian->TabIndex = 8;
			// 
			// Jumbayar_pengisian
			// 
			this->Jumbayar_pengisian->Location = System::Drawing::Point(61, 364);
			this->Jumbayar_pengisian->Name = L"Jumbayar_pengisian";
			this->Jumbayar_pengisian->Size = System::Drawing::Size(147, 26);
			this->Jumbayar_pengisian->TabIndex = 9;
			// 
			// selesai_1
			// 
			this->selesai_1->BackColor = System::Drawing::Color::Red;
			this->selesai_1->Location = System::Drawing::Point(496, 489);
			this->selesai_1->Name = L"selesai_1";
			this->selesai_1->Size = System::Drawing::Size(171, 31);
			this->selesai_1->TabIndex = 10;
			this->selesai_1->Text = L"Keluar";
			this->selesai_1->UseVisualStyleBackColor = false;
			this->selesai_1->Click += gcnew System::EventHandler(this, &Pengisian::selesai_1_Click);
			// 
			// Pengisian
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1165, 570);
			this->Controls->Add(this->selesai_1);
			this->Controls->Add(this->Jumbayar_pengisian);
			this->Controls->Add(this->kembalian_pengisian);
			this->Controls->Add(this->JumLiter_Pengisian);
			this->Controls->Add(this->jumlahbeli_Pengisian);
			this->Controls->Add(this->selesai);
			this->Controls->Add(this->barpengisisan);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Pengisian";
			this->Text = L"Pengisian";
			this->Load += gcnew System::EventHandler(this, &Pengisian::Pengisian_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pengisian_Load(System::Object^ sender, System::EventArgs^ e) {
		jumlahbeli_Pengisian->Visible = false;
		JumLiter_Pengisian->Visible = false;
		kembalian_pengisian->Visible = false;
		Jumbayar_pengisian->Visible = false;
		selesai->Visible = false;
		selesai_1->Visible = false;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (barpengisisan->Value == barpengisisan->Maximum) {
			selesai->Visible = true;
		}
		else {
			selesai -> Visible= false;

		}
    
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	barpengisisan->Value = 0;
	for (int i = 0; i <= 100; i++) {

		barpengisisan->Value = i;

		System::Threading::Thread::Sleep(100);
		this->selesai->Show();
		this->selesai_1->Show();
	}
	barpengisisan->Value = barpengisisan->Maximum;
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Nota^ b = gcnew Nota();
	b->Jumlahbeli->Text = jumlahbeli_Pengisian->Text;
	b->Jumliter->Text = JumLiter_Pengisian->Text;
	b->Jumbayar->Text = Jumbayar_pengisian->Text;
	b->kembalian->Text = kembalian_pengisian->Text;
	b->Show();
}
private: System::Void coba_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tksbeli_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		  

	   }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void selesai_1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
