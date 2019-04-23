#pragma once
#include <string>

#include "Employee.h"
using namespace std;


namespace PayrollApplication {

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
	private: System::Windows::Forms::Label^ labelEmployeeNumber;
	protected:


	private: System::Windows::Forms::Label^ labelNormalHours;
	private: System::Windows::Forms::TextBox^ textBoxNormalHours;



	private: System::Windows::Forms::Label^ labelGrossPay;
	private: System::Windows::Forms::Label^ labelNetPay;
	private: System::Windows::Forms::Button^ buttonCalculatePay;
	private: System::Windows::Forms::GroupBox^ groupBoxEmployeeNumber;
	private: System::Windows::Forms::Button^ buttonFindEmployee;

	private: System::Windows::Forms::GroupBox^ groupBoxHoursWorked;
	private: System::Windows::Forms::TextBox^ textBoxOvertimeHours;

	private: System::Windows::Forms::Label^ labelOvertimeHours;

	private: System::Windows::Forms::GroupBox^ groupBoxEmployeeDetails;
	private: System::Windows::Forms::Label^ labelEmployeeRole;


	private: System::Windows::Forms::Label^ labelEmployeeName;
	private: System::Windows::Forms::Button^ buttonAddHours;
	private: System::Windows::Forms::GroupBox^ groupBoxPay;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::TextBox^ textBoxEmployeeNumber;











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
			this->labelEmployeeNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxEmployeeNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelNormalHours = (gcnew System::Windows::Forms::Label());
			this->textBoxNormalHours = (gcnew System::Windows::Forms::TextBox());
			this->labelGrossPay = (gcnew System::Windows::Forms::Label());
			this->labelNetPay = (gcnew System::Windows::Forms::Label());
			this->buttonCalculatePay = (gcnew System::Windows::Forms::Button());
			this->groupBoxEmployeeNumber = (gcnew System::Windows::Forms::GroupBox());
			this->buttonFindEmployee = (gcnew System::Windows::Forms::Button());
			this->groupBoxHoursWorked = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxOvertimeHours = (gcnew System::Windows::Forms::TextBox());
			this->labelOvertimeHours = (gcnew System::Windows::Forms::Label());
			this->groupBoxEmployeeDetails = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddHours = (gcnew System::Windows::Forms::Button());
			this->labelEmployeeRole = (gcnew System::Windows::Forms::Label());
			this->labelEmployeeName = (gcnew System::Windows::Forms::Label());
			this->groupBoxPay = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->groupBoxEmployeeNumber->SuspendLayout();
			this->groupBoxHoursWorked->SuspendLayout();
			this->groupBoxEmployeeDetails->SuspendLayout();
			this->groupBoxPay->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelEmployeeNumber
			// 
			this->labelEmployeeNumber->AutoSize = true;
			this->labelEmployeeNumber->Location = System::Drawing::Point(57, 36);
			this->labelEmployeeNumber->Name = L"labelEmployeeNumber";
			this->labelEmployeeNumber->Size = System::Drawing::Size(96, 13);
			this->labelEmployeeNumber->TabIndex = 1;
			this->labelEmployeeNumber->Text = L"Employee Number:";
			this->labelEmployeeNumber->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// textBoxEmployeeNumber
			// 
			this->textBoxEmployeeNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxEmployeeNumber->Location = System::Drawing::Point(26, 61);
			this->textBoxEmployeeNumber->Name = L"textBoxEmployeeNumber";
			this->textBoxEmployeeNumber->Size = System::Drawing::Size(165, 20);
			this->textBoxEmployeeNumber->TabIndex = 2;
			this->textBoxEmployeeNumber->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxEmployeeNumber_TextChanged);
			// 
			// labelNormalHours
			// 
			this->labelNormalHours->AutoSize = true;
			this->labelNormalHours->Location = System::Drawing::Point(6, 33);
			this->labelNormalHours->Name = L"labelNormalHours";
			this->labelNormalHours->Size = System::Drawing::Size(74, 13);
			this->labelNormalHours->TabIndex = 9;
			this->labelNormalHours->Text = L"Normal Hours:";
			// 
			// textBoxNormalHours
			// 
			this->textBoxNormalHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNormalHours->Location = System::Drawing::Point(109, 33);
			this->textBoxNormalHours->Name = L"textBoxNormalHours";
			this->textBoxNormalHours->Size = System::Drawing::Size(145, 20);
			this->textBoxNormalHours->TabIndex = 10;
			// 
			// labelGrossPay
			// 
			this->labelGrossPay->AutoSize = true;
			this->labelGrossPay->Location = System::Drawing::Point(6, 33);
			this->labelGrossPay->Name = L"labelGrossPay";
			this->labelGrossPay->Size = System::Drawing::Size(58, 13);
			this->labelGrossPay->TabIndex = 15;
			this->labelGrossPay->Text = L"Gross Pay:";
			// 
			// labelNetPay
			// 
			this->labelNetPay->AutoSize = true;
			this->labelNetPay->Location = System::Drawing::Point(16, 57);
			this->labelNetPay->Name = L"labelNetPay";
			this->labelNetPay->Size = System::Drawing::Size(48, 13);
			this->labelNetPay->TabIndex = 16;
			this->labelNetPay->Text = L"Net Pay:";
			// 
			// buttonCalculatePay
			// 
			this->buttonCalculatePay->Location = System::Drawing::Point(143, 89);
			this->buttonCalculatePay->Name = L"buttonCalculatePay";
			this->buttonCalculatePay->Size = System::Drawing::Size(89, 23);
			this->buttonCalculatePay->TabIndex = 13;
			this->buttonCalculatePay->Text = L"Calculate Pay";
			this->buttonCalculatePay->UseVisualStyleBackColor = true;
			this->buttonCalculatePay->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// groupBoxEmployeeNumber
			// 
			this->groupBoxEmployeeNumber->Controls->Add(this->buttonFindEmployee);
			this->groupBoxEmployeeNumber->Controls->Add(this->labelEmployeeNumber);
			this->groupBoxEmployeeNumber->Controls->Add(this->textBoxEmployeeNumber);
			this->groupBoxEmployeeNumber->Location = System::Drawing::Point(15, 12);
			this->groupBoxEmployeeNumber->Name = L"groupBoxEmployeeNumber";
			this->groupBoxEmployeeNumber->Size = System::Drawing::Size(232, 135);
			this->groupBoxEmployeeNumber->TabIndex = 0;
			this->groupBoxEmployeeNumber->TabStop = false;
			this->groupBoxEmployeeNumber->Text = L"Employee Number";
			this->groupBoxEmployeeNumber->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox1_Enter);
			// 
			// buttonFindEmployee
			// 
			this->buttonFindEmployee->Location = System::Drawing::Point(64, 96);
			this->buttonFindEmployee->Name = L"buttonFindEmployee";
			this->buttonFindEmployee->Size = System::Drawing::Size(89, 23);
			this->buttonFindEmployee->TabIndex = 3;
			this->buttonFindEmployee->Text = L"Find Employee";
			this->buttonFindEmployee->UseVisualStyleBackColor = true;
			this->buttonFindEmployee->Click += gcnew System::EventHandler(this, &MyForm::ButtonFindEmployee_Click);
			// 
			// groupBoxHoursWorked
			// 
			this->groupBoxHoursWorked->Controls->Add(this->textBoxOvertimeHours);
			this->groupBoxHoursWorked->Controls->Add(this->labelOvertimeHours);
			this->groupBoxHoursWorked->Controls->Add(this->labelNormalHours);
			this->groupBoxHoursWorked->Controls->Add(this->buttonCalculatePay);
			this->groupBoxHoursWorked->Controls->Add(this->textBoxNormalHours);
			this->groupBoxHoursWorked->Location = System::Drawing::Point(15, 153);
			this->groupBoxHoursWorked->Name = L"groupBoxHoursWorked";
			this->groupBoxHoursWorked->Size = System::Drawing::Size(276, 122);
			this->groupBoxHoursWorked->TabIndex = 8;
			this->groupBoxHoursWorked->TabStop = false;
			this->groupBoxHoursWorked->Text = L"Hours Worked";
			this->groupBoxHoursWorked->Visible = false;
			// 
			// textBoxOvertimeHours
			// 
			this->textBoxOvertimeHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxOvertimeHours->Location = System::Drawing::Point(109, 63);
			this->textBoxOvertimeHours->Name = L"textBoxOvertimeHours";
			this->textBoxOvertimeHours->Size = System::Drawing::Size(145, 20);
			this->textBoxOvertimeHours->TabIndex = 12;
			// 
			// labelOvertimeHours
			// 
			this->labelOvertimeHours->AutoSize = true;
			this->labelOvertimeHours->Location = System::Drawing::Point(6, 63);
			this->labelOvertimeHours->Name = L"labelOvertimeHours";
			this->labelOvertimeHours->Size = System::Drawing::Size(83, 13);
			this->labelOvertimeHours->TabIndex = 11;
			this->labelOvertimeHours->Text = L"Overtime Hours:";
			// 
			// groupBoxEmployeeDetails
			// 
			this->groupBoxEmployeeDetails->Controls->Add(this->buttonAddHours);
			this->groupBoxEmployeeDetails->Controls->Add(this->labelEmployeeRole);
			this->groupBoxEmployeeDetails->Controls->Add(this->labelEmployeeName);
			this->groupBoxEmployeeDetails->Location = System::Drawing::Point(278, 12);
			this->groupBoxEmployeeDetails->Name = L"groupBoxEmployeeDetails";
			this->groupBoxEmployeeDetails->Size = System::Drawing::Size(232, 135);
			this->groupBoxEmployeeDetails->TabIndex = 4;
			this->groupBoxEmployeeDetails->TabStop = false;
			this->groupBoxEmployeeDetails->Text = L"Employee Details";
			this->groupBoxEmployeeDetails->Visible = false;
			this->groupBoxEmployeeDetails->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox1_Enter_1);
			// 
			// buttonAddHours
			// 
			this->buttonAddHours->Location = System::Drawing::Point(72, 86);
			this->buttonAddHours->Name = L"buttonAddHours";
			this->buttonAddHours->Size = System::Drawing::Size(89, 23);
			this->buttonAddHours->TabIndex = 7;
			this->buttonAddHours->Text = L"Add Hours";
			this->buttonAddHours->UseVisualStyleBackColor = true;
			// 
			// labelEmployeeRole
			// 
			this->labelEmployeeRole->AutoSize = true;
			this->labelEmployeeRole->Location = System::Drawing::Point(19, 53);
			this->labelEmployeeRole->Name = L"labelEmployeeRole";
			this->labelEmployeeRole->Size = System::Drawing::Size(81, 13);
			this->labelEmployeeRole->TabIndex = 6;
			this->labelEmployeeRole->Text = L"Employee Role:";
			// 
			// labelEmployeeName
			// 
			this->labelEmployeeName->AutoSize = true;
			this->labelEmployeeName->Location = System::Drawing::Point(19, 26);
			this->labelEmployeeName->Name = L"labelEmployeeName";
			this->labelEmployeeName->Size = System::Drawing::Size(87, 13);
			this->labelEmployeeName->TabIndex = 5;
			this->labelEmployeeName->Text = L"Employee Name:";
			// 
			// groupBoxPay
			// 
			this->groupBoxPay->Controls->Add(this->buttonSave);
			this->groupBoxPay->Controls->Add(this->labelGrossPay);
			this->groupBoxPay->Controls->Add(this->labelNetPay);
			this->groupBoxPay->Location = System::Drawing::Point(300, 153);
			this->groupBoxPay->Name = L"groupBoxPay";
			this->groupBoxPay->Size = System::Drawing::Size(210, 122);
			this->groupBoxPay->TabIndex = 14;
			this->groupBoxPay->TabStop = false;
			this->groupBoxPay->Text = L"Pay";
			this->groupBoxPay->Visible = false;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(50, 89);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(89, 23);
			this->buttonSave->TabIndex = 17;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 288);
			this->Controls->Add(this->groupBoxPay);
			this->Controls->Add(this->groupBoxEmployeeDetails);
			this->Controls->Add(this->groupBoxHoursWorked);
			this->Controls->Add(this->groupBoxEmployeeNumber);
			this->MaximumSize = System::Drawing::Size(542, 326);
			this->MinimumSize = System::Drawing::Size(542, 326);
			this->Name = L"MyForm";
			this->Text = L"Payroll Application";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBoxEmployeeNumber->ResumeLayout(false);
			this->groupBoxEmployeeNumber->PerformLayout();
			this->groupBoxHoursWorked->ResumeLayout(false);
			this->groupBoxHoursWorked->PerformLayout();
			this->groupBoxEmployeeDetails->ResumeLayout(false);
			this->groupBoxEmployeeDetails->PerformLayout();
			this->groupBoxPay->ResumeLayout(false);
			this->groupBoxPay->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GroupBox1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBoxEmployeeNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonFindEmployee_Click(System::Object^ sender, System::EventArgs^ e) {

		int employeeNumber = Convert::ToInt32(textBoxEmployeeNumber->Text);

		if (employeeNumber = 001) {
			
		}
		else if (employeeNumber = 002) {
			
		}
		else if (employeeNumber = 003) {
			
		}

		groupBoxEmployeeDetails->Show;
}
};

}
