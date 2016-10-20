#pragma once

namespace BitFields {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  intUniversePower;
	protected: 
	private: System::Windows::Forms::TextBox^  stringFirstOperand;
	private: System::Windows::Forms::TextBox^  stringSecondOperand;
	private: System::Windows::Forms::TextBox^  stringResult;
	private: System::Windows::Forms::TextBox^  stringAddTextbox;
	private: System::Windows::Forms::TextBox^  stringDelTextbox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  AddTo1Button;
	private: System::Windows::Forms::Button^  DelFrom1Button;
	private: System::Windows::Forms::RadioButton^  InvertRadioButton;
	private: System::Windows::Forms::RadioButton^  UniteRadioButton;
	private: System::Windows::Forms::RadioButton^  CrossRadioButton;
	private: System::Windows::Forms::Button^  RunButton;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  AddTo2Button;
	private: System::Windows::Forms::Button^  DelFrom2Button;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->intUniversePower = (gcnew System::Windows::Forms::NumericUpDown());
			this->stringFirstOperand = (gcnew System::Windows::Forms::TextBox());
			this->stringSecondOperand = (gcnew System::Windows::Forms::TextBox());
			this->stringResult = (gcnew System::Windows::Forms::TextBox());
			this->stringAddTextbox = (gcnew System::Windows::Forms::TextBox());
			this->stringDelTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AddTo1Button = (gcnew System::Windows::Forms::Button());
			this->DelFrom1Button = (gcnew System::Windows::Forms::Button());
			this->InvertRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->UniteRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->CrossRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->RunButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AddTo2Button = (gcnew System::Windows::Forms::Button());
			this->DelFrom2Button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intUniversePower))->BeginInit();
			this->SuspendLayout();
			// 
			// intUniversePower
			// 
			resources->ApplyResources(this->intUniversePower, L"intUniversePower");
			this->intUniversePower->Name = L"intUniversePower";
			// 
			// stringFirstOperand
			// 
			resources->ApplyResources(this->stringFirstOperand, L"stringFirstOperand");
			this->stringFirstOperand->Name = L"stringFirstOperand";
			// 
			// stringSecondOperand
			// 
			resources->ApplyResources(this->stringSecondOperand, L"stringSecondOperand");
			this->stringSecondOperand->Name = L"stringSecondOperand";
			// 
			// stringResult
			// 
			resources->ApplyResources(this->stringResult, L"stringResult");
			this->stringResult->Name = L"stringResult";
			this->stringResult->ReadOnly = true;
			// 
			// stringAddTextbox
			// 
			resources->ApplyResources(this->stringAddTextbox, L"stringAddTextbox");
			this->stringAddTextbox->Name = L"stringAddTextbox";
			// 
			// stringDelTextbox
			// 
			resources->ApplyResources(this->stringDelTextbox, L"stringDelTextbox");
			this->stringDelTextbox->Name = L"stringDelTextbox";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// AddTo1Button
			// 
			resources->ApplyResources(this->AddTo1Button, L"AddTo1Button");
			this->AddTo1Button->Name = L"AddTo1Button";
			this->AddTo1Button->UseVisualStyleBackColor = true;
			// 
			// DelFrom1Button
			// 
			resources->ApplyResources(this->DelFrom1Button, L"DelFrom1Button");
			this->DelFrom1Button->Name = L"DelFrom1Button";
			this->DelFrom1Button->UseVisualStyleBackColor = true;
			// 
			// InvertRadioButton
			// 
			resources->ApplyResources(this->InvertRadioButton, L"InvertRadioButton");
			this->InvertRadioButton->Name = L"InvertRadioButton";
			this->InvertRadioButton->TabStop = true;
			this->InvertRadioButton->UseVisualStyleBackColor = true;
			// 
			// UniteRadioButton
			// 
			resources->ApplyResources(this->UniteRadioButton, L"UniteRadioButton");
			this->UniteRadioButton->Name = L"UniteRadioButton";
			this->UniteRadioButton->TabStop = true;
			this->UniteRadioButton->UseVisualStyleBackColor = true;
			// 
			// CrossRadioButton
			// 
			resources->ApplyResources(this->CrossRadioButton, L"CrossRadioButton");
			this->CrossRadioButton->Name = L"CrossRadioButton";
			this->CrossRadioButton->TabStop = true;
			this->CrossRadioButton->UseVisualStyleBackColor = true;
			// 
			// RunButton
			// 
			resources->ApplyResources(this->RunButton, L"RunButton");
			this->RunButton->Name = L"RunButton";
			this->RunButton->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// AddTo2Button
			// 
			resources->ApplyResources(this->AddTo2Button, L"AddTo2Button");
			this->AddTo2Button->Name = L"AddTo2Button";
			this->AddTo2Button->UseVisualStyleBackColor = true;
			// 
			// DelFrom2Button
			// 
			resources->ApplyResources(this->DelFrom2Button, L"DelFrom2Button");
			this->DelFrom2Button->Name = L"DelFrom2Button";
			this->DelFrom2Button->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->DelFrom2Button);
			this->Controls->Add(this->AddTo2Button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->RunButton);
			this->Controls->Add(this->CrossRadioButton);
			this->Controls->Add(this->UniteRadioButton);
			this->Controls->Add(this->InvertRadioButton);
			this->Controls->Add(this->DelFrom1Button);
			this->Controls->Add(this->AddTo1Button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stringDelTextbox);
			this->Controls->Add(this->stringAddTextbox);
			this->Controls->Add(this->stringResult);
			this->Controls->Add(this->stringSecondOperand);
			this->Controls->Add(this->stringFirstOperand);
			this->Controls->Add(this->intUniversePower);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intUniversePower))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}

