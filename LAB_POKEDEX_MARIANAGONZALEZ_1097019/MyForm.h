#pragma once
#include <windows.h>
#include <iostream>
#include "Pokemon.h"
#include <list>
#include <iterator> 
#include <vector> 
#include <fstream> 
#include "metodosdeordenamiento.h"
#include <msclr\marshal_cppstd.h>



Pokemon arrayPok[70];
namespace LABPOKEDEXMARIANAGONZALEZ1097019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnabrir;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::ListBox^  listBox7;
	private: System::Windows::Forms::Button^  btnbubblenn;
	private: System::Windows::Forms::Button^  btnquicknn;
	private: System::Windows::Forms::Button^  btnstupidnn;
	private: System::Windows::Forms::Button^  btnbubblegen;
	private: System::Windows::Forms::Button^  btnquickgen;
	private: System::Windows::Forms::Button^  btnstupidgen;
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
			this->btnabrir = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->btnbubblenn = (gcnew System::Windows::Forms::Button());
			this->btnquicknn = (gcnew System::Windows::Forms::Button());
			this->btnstupidnn = (gcnew System::Windows::Forms::Button());
			this->btnbubblegen = (gcnew System::Windows::Forms::Button());
			this->btnquickgen = (gcnew System::Windows::Forms::Button());
			this->btnstupidgen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnabrir
			// 
			this->btnabrir->Location = System::Drawing::Point(511, 24);
			this->btnabrir->Name = L"btnabrir";
			this->btnabrir->Size = System::Drawing::Size(163, 76);
			this->btnabrir->TabIndex = 0;
			this->btnabrir->Text = L"ABRIR ARCHIVO";
			this->btnabrir->UseVisualStyleBackColor = true;
			this->btnabrir->Click += gcnew System::EventHandler(this, &MyForm::btnabrir_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(54, 154);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(124, 340);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"SU TEXTO: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(349, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ORDENAR SEGÚN NATIONAL NUMBER";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(839, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ORDENAR SEGÚN GENERACIÓN";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(250, 154);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(124, 340);
			this->listBox2->TabIndex = 5;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(400, 154);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(124, 340);
			this->listBox3->TabIndex = 6;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(550, 154);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(124, 340);
			this->listBox4->TabIndex = 7;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(1042, 154);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(124, 340);
			this->listBox5->TabIndex = 10;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(892, 154);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(124, 340);
			this->listBox6->TabIndex = 9;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 16;
			this->listBox7->Location = System::Drawing::Point(742, 154);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(124, 340);
			this->listBox7->TabIndex = 8;
			// 
			// btnbubblenn
			// 
			this->btnbubblenn->Location = System::Drawing::Point(271, 512);
			this->btnbubblenn->Name = L"btnbubblenn";
			this->btnbubblenn->Size = System::Drawing::Size(75, 52);
			this->btnbubblenn->TabIndex = 11;
			this->btnbubblenn->Text = L"BUBBLE SORT";
			this->btnbubblenn->UseVisualStyleBackColor = true;
			this->btnbubblenn->Click += gcnew System::EventHandler(this, &MyForm::btnbubblenn_Click);
			// 
			// btnquicknn
			// 
			this->btnquicknn->Location = System::Drawing::Point(423, 512);
			this->btnquicknn->Name = L"btnquicknn";
			this->btnquicknn->Size = System::Drawing::Size(75, 52);
			this->btnquicknn->TabIndex = 12;
			this->btnquicknn->Text = L"QUICK SORT";
			this->btnquicknn->UseVisualStyleBackColor = true;
			this->btnquicknn->Click += gcnew System::EventHandler(this, &MyForm::btnquicknn_Click);
			// 
			// btnstupidnn
			// 
			this->btnstupidnn->Location = System::Drawing::Point(576, 512);
			this->btnstupidnn->Name = L"btnstupidnn";
			this->btnstupidnn->Size = System::Drawing::Size(75, 52);
			this->btnstupidnn->TabIndex = 13;
			this->btnstupidnn->Text = L"STUPID SORT";
			this->btnstupidnn->UseVisualStyleBackColor = true;
			// 
			// btnbubblegen
			// 
			this->btnbubblegen->Location = System::Drawing::Point(770, 512);
			this->btnbubblegen->Name = L"btnbubblegen";
			this->btnbubblegen->Size = System::Drawing::Size(75, 52);
			this->btnbubblegen->TabIndex = 17;
			this->btnbubblegen->Text = L"BUBBLE SORT";
			this->btnbubblegen->UseVisualStyleBackColor = true;
			// 
			// btnquickgen
			// 
			this->btnquickgen->Location = System::Drawing::Point(920, 512);
			this->btnquickgen->Name = L"btnquickgen";
			this->btnquickgen->Size = System::Drawing::Size(75, 52);
			this->btnquickgen->TabIndex = 18;
			this->btnquickgen->Text = L"QUICK SORT";
			this->btnquickgen->UseVisualStyleBackColor = true;
			// 
			// btnstupidgen
			// 
			this->btnstupidgen->Location = System::Drawing::Point(1072, 512);
			this->btnstupidgen->Name = L"btnstupidgen";
			this->btnstupidgen->Size = System::Drawing::Size(75, 52);
			this->btnstupidgen->TabIndex = 19;
			this->btnstupidgen->Text = L"STUPID SORT";
			this->btnstupidgen->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1224, 648);
			this->Controls->Add(this->btnstupidgen);
			this->Controls->Add(this->btnquickgen);
			this->Controls->Add(this->btnbubblegen);
			this->Controls->Add(this->btnstupidnn);
			this->Controls->Add(this->btnquicknn);
			this->Controls->Add(this->btnbubblenn);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnabrir);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnabrir_Click(System::Object^  sender, System::EventArgs^  e) {
	
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		string line;
		Pokemon linePokemon;
		vector<Pokemon> vectorPokemones;
		int coma;
		int nuevacoma;
		String^ nombre;
		string nuevalinea = "";
		msclr::interop::marshal_context context; 
		list<string> listastring;
		list<string>::iterator itr = listastring.begin(); 
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
		{
			String^ pathFile = openFileDialog1->FileName; 
			string standardPathFile = context.marshal_as<std::string>(pathFile);
			ifstream archivotxt(standardPathFile); 
			string linea;
			while (!archivotxt.eof()) { 
				archivotxt >> linea; 
				listastring.insert(itr, linea); 
			}
			archivotxt.close(); 
			for (itr = listastring.begin(); itr != listastring.end(); ++itr) {
				line += " " + *itr;
			}
		}
		for each (string laslineas in listastring)
		{
			vector<string> DatosPokemon;
			Pokemon newPokemon; 
			coma = laslineas.find(","); 
			DatosPokemon.push_back(laslineas.substr(0, coma)); 
			nuevalinea = laslineas.substr(coma + 1, laslineas.size()); 
			nuevacoma = nuevalinea.find(","); 
			DatosPokemon.push_back(nuevalinea.substr(0,nuevacoma));
			DatosPokemon.push_back(nuevalinea.substr(nuevacoma + 1, laslineas.size())); 
			newPokemon.nombree = DatosPokemon[0];
			newPokemon.nnacional = atoi(DatosPokemon[1].c_str());
			newPokemon.gen = atoi(DatosPokemon[2].c_str());
			vectorPokemones.push_back(newPokemon);
			String^ archivoo = gcnew String(laslineas.c_str());
			listBox1->Items->Add(archivoo->ToString());
		}
		int cont = 0;
		for each(Pokemon arrayPokemon in vectorPokemones) {
			arrayPok[cont] = arrayPokemon;
			cont++;
		}

		
	}
	private: System::Void btnbubblenn_Click(System::Object^  sender, System::EventArgs^  e) {
		metodosdeordenamiento metodoss;
		Pokemon arrayBBSort[70];
		Pokemon newArrPok[70];
		for (int i = 0; i < 70; i++)
		{
			arrayBBSort[i] = arrayPok[i];
		}
		for (int i = 0; i < 70; i++)
		{
			newArrPok[i] = metodoss.bubbleSort(arrayBBSort, 70)[i];
		}
		for each(Pokemon arrayPokemon in newArrPok) {
			String^ elnombre = gcnew String(arrayPokemon.nombree.c_str());
			listBox2->Items->Add(elnombre + "," + arrayPokemon.nnacional + "," + arrayPokemon.gen);
		}
	}
private: System::Void btnquicknn_Click(System::Object^  sender, System::EventArgs^  e) {
	metodosdeordenamiento metodoss;
	Pokemon arrayQSort[70];
	Pokemon newArrPok[70];
	for (int i = 0; i < 70; i++)
	{
		arrayQSort[i] = arrayPok[i];
	}
	for (int i = 0; i < 70; i++)
	{
		newArrPok[i] = metodoss.quickSort(arrayQSort, 0, 9)[i];
	}
	for each(Pokemon arrayPokemon in newArrPok) {
		String^ elnombre = gcnew String(arrayPokemon.nombree.c_str());
		listBox3->Items->Add(elnombre + "," + arrayPokemon.nnacional + "," + arrayPokemon.gen);
	}
}
};
}
