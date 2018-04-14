#pragma once

namespace ProjetoSoft1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Sumário para JanelaPrincipal
	/// </summary>
	public ref class JanelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		JanelaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~JanelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button5;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(JanelaPrincipal::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(182, 258);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &JanelaPrincipal::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Abrir Lista";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &JanelaPrincipal::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(200, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Salvar Lista";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &JanelaPrincipal::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Adicionar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &JanelaPrincipal::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(102, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Gerar Fetiche:";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &JanelaPrincipal::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 324);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(359, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &JanelaPrincipal::ApertouEnter);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(200, 64);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(182, 197);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Lista Atual:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Digite um fetiche para adicionar a lista:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(193, 352);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->Visible = false;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &JanelaPrincipal::Salve);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &JanelaPrincipal::Abriu);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(200, 267);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(182, 28);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Limpar Lista";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &JanelaPrincipal::button5_Click);
			// 
			// JanelaPrincipal
			// 
			this->AcceptButton = this->button3;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 381);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(400, 420);
			this->MinimumSize = System::Drawing::Size(400, 420);
			this->Name = L"JanelaPrincipal";
			this->ShowIcon = false;
			this->Text = L"Soft Alpha 1.1a";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Não clica aí seu idiota.", "Para de cutucar a imagem com o pau.");
	}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (richTextBox1->TextLength == 0) {
		richTextBox1->AppendText(textBox2->Text);
		textBox2->Text = "";
	}
	else {
		richTextBox1->AppendText("\n" + textBox2->Text);
		textBox2->Text = "";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Visible = true;
	array<String^ >^ linha = gcnew array<String^>(richTextBox1->Text->Length); //Talvez não seja necessário.
	linha = richTextBox1->Text->Split('\n');
	Random^ rand = gcnew Random();
	int r = rand->Next(0, linha->Length);
	textBox1->Text = linha[r];
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->Filter = "Somente arquivos .txt. |*.txt";
	saveFileDialog1->Title = "Salva essas porras aí em .txt.";
	// MessageBox::Show("No final do nome do arquivo coloque .txt", "É um bug, consertarei em futuras versões."); -X Consertado.
	saveFileDialog1->ShowDialog();
}
private: System::Void Salve(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	String^ texto1 = richTextBox1->Text;
	String^ caminho = saveFileDialog1->FileName;
	File::WriteAllText(caminho, texto1);
	MessageBox::Show("Salvo com sucesso.");
}
private: System::Void ApertouEnter(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	/*if (e->KeyChar == Convert::ToChar(Keys::Return)) {
		button3->PerformClick(); -X Consertado.
	} 
	*/
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Filter = "Somente arquivos .txt |*.txt";
	openFileDialog1->ShowDialog();
}
private: System::Void Abriu(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	String^ caminho = openFileDialog1->FileName;
	String^ texto = File::ReadAllText(caminho);
	if (richTextBox1->TextLength == 0) {
		richTextBox1->Text = texto;
	}
	else {
		richTextBox1->AppendText("\n" + texto);
	}
	MessageBox::Show("Lista aberta com sucesso.", "Aproveite.");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Text = "";
}
};
}
