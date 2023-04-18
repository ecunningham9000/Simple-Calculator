#pragma once

namespace SimpleCalculatorC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	protected:
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCe;
	private: System::Windows::Forms::Button^ btnPlusMinus;
	private: System::Windows::Forms::TextBox^ txtDisp;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnMul;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnEqu;
	private: System::Windows::Forms::Button^ btnDec;
	private: System::Windows::Forms::Button^ btn0;

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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCe = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->txtDisp = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEqu = (gcnew System::Windows::Forms::Button());
			this->btnDec = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(12, 70);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(65, 65);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Calculator::btnBack_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(83, 70);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(65, 65);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &Calculator::btnC_Click);
			// 
			// btnCe
			// 
			this->btnCe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCe->Location = System::Drawing::Point(154, 70);
			this->btnCe->Name = L"btnCe";
			this->btnCe->Size = System::Drawing::Size(65, 65);
			this->btnCe->TabIndex = 2;
			this->btnCe->Text = L"CE";
			this->btnCe->UseVisualStyleBackColor = true;
			this->btnCe->Click += gcnew System::EventHandler(this, &Calculator::btnCe_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusMinus->Location = System::Drawing::Point(236, 70);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(65, 65);
			this->btnPlusMinus->TabIndex = 3;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &Calculator::btnPlusMinus_Click);
			// 
			// txtDisp
			// 
			this->txtDisp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisp->Location = System::Drawing::Point(12, 12);
			this->txtDisp->Name = L"txtDisp";
			this->txtDisp->Size = System::Drawing::Size(285, 44);
			this->txtDisp->TabIndex = 4;
			this->txtDisp->Text = L"0";
			this->txtDisp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisp->TextChanged += gcnew System::EventHandler(this, &Calculator::txtDisp_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(236, 141);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(65, 65);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Calculator::ArithmeticOP);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(154, 141);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(65, 65);
			this->btn9->TabIndex = 7;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(83, 141);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(65, 65);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 141);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(65, 65);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(236, 212);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(65, 65);
			this->btnSub->TabIndex = 12;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &Calculator::ArithmeticOP);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(154, 212);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(65, 65);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(83, 211);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(65, 65);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 211);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(65, 65);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btnMul
			// 
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(236, 282);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(65, 65);
			this->btnMul->TabIndex = 16;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &Calculator::ArithmeticOP);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(154, 283);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(65, 65);
			this->btn3->TabIndex = 15;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(83, 283);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(65, 65);
			this->btn2->TabIndex = 14;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 282);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(65, 65);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(236, 353);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(65, 65);
			this->btnDiv->TabIndex = 20;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Calculator::ArithmeticOP);
			// 
			// btnEqu
			// 
			this->btnEqu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqu->Location = System::Drawing::Point(154, 353);
			this->btnEqu->Name = L"btnEqu";
			this->btnEqu->Size = System::Drawing::Size(65, 65);
			this->btnEqu->TabIndex = 19;
			this->btnEqu->Text = L"=";
			this->btnEqu->UseVisualStyleBackColor = true;
			this->btnEqu->Click += gcnew System::EventHandler(this, &Calculator::btnEqu_Click);
			// 
			// btnDec
			// 
			this->btnDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDec->Location = System::Drawing::Point(83, 353);
			this->btnDec->Name = L"btnDec";
			this->btnDec->Size = System::Drawing::Size(65, 65);
			this->btnDec->TabIndex = 18;
			this->btnDec->Text = L".";
			this->btnDec->UseVisualStyleBackColor = true;
			this->btnDec->Click += gcnew System::EventHandler(this, &Calculator::btnDec_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 353);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(65, 65);
			this->btn0->TabIndex = 17;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Calculator::NumbersOnly);
			// 
			// Calculator
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 429);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnEqu);
			this->Controls->Add(this->btnDec);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisp);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnCe);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnBack);
			this->Name = L"Calculator";
			this->Text = L"Simple Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// Declare Variables

		double firstnum, secondnum, answer;
		String^ charOP;

#pragma endregion
	private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	// Register button input from User
private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {

	Button^ numb = safe_cast<Button^>(sender);
	
	if(txtDisp->Text == "0")
	{ 
		txtDisp->Text = numb->Text;
	}
	else
	{
		txtDisp->Text = txtDisp->Text + numb->Text;
	}
}

	// Arithmetic Operators input from User
private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {

	Button^ Aop = safe_cast<Button^>(sender);

	firstnum = Double::Parse(txtDisp->Text);
	txtDisp->Text = "";
	charOP = Aop->Text;
}

	// Clear Text using Clear button and set to 0
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisp->Text = "0";
}
	// Clear Text Using Clear Entry button
private: System::Void btnCe_Click(System::Object^ sender, System::EventArgs^ e) {

	txtDisp->Text = "0";
}
	// Button for Decimal Point 
private: System::Void btnDec_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisp->Text->Contains("."))
	{
		txtDisp->Text = txtDisp->Text + ".";
	}
}

	// Backspace button 
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisp->Text->Length > 0)
	{
		txtDisp->Text = txtDisp->Text->Remove(txtDisp->Text->Length - 1, 1);
	}
}

	// Text Box 
private: System::Void txtDisp_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisp->Text == "")
	{
		txtDisp->Text = "0";
	}
}

	// Plus Minus Button
private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisp->Text->Contains("-"))
	{
		txtDisp->Text = txtDisp->Text->Remove(0, 1);
	}
	else
	{
		txtDisp->Text = "-" + txtDisp->Text;
	}
}
	 // Equals Button
private: System::Void btnEqu_Click(System::Object^ sender, System::EventArgs^ e) {

	secondnum = Double::Parse(txtDisp->Text);

	// Addition
	if (charOP == "+")
	{
		answer = firstnum + secondnum;
		txtDisp->Text = System::Convert::ToString(answer);
	}
	// Subtraction
	else if (charOP == "-")
	{
		answer = firstnum - secondnum;
		txtDisp->Text = System::Convert::ToString(answer);

	}
	// Multiplication
	else if (charOP == "*")
	{
		answer = firstnum * secondnum;
		txtDisp->Text = System::Convert::ToString(answer);
	}
	// Division
	else if (charOP == "/")
	{
		answer = firstnum / secondnum;
		txtDisp->Text = System::Convert::ToString(answer);
	}	
}
};
}
