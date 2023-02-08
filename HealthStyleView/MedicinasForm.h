#pragma once
//using namespace HealthStyleController;
//using namespace HealthStyleModel;

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace HealthStyleController;
	using namespace HealthStyleModel;

	/// <summary>
	/// Resumen de MedicinasForm
	/// </summary>
	public ref class MedicinasForm : public System::Windows::Forms::Form
	{
	public:
		MedicinasForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MedicinasForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtMedicineId;
	private: System::Windows::Forms::TextBox^ txtMedicineName;
	private: System::Windows::Forms::TextBox^ txtMedicineDescription;
	private: System::Windows::Forms::TextBox^ txtMedicinePrice;
	private: System::Windows::Forms::TextBox^ txtMedicineStock;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Button^ btnSetImage;











	private: System::Windows::Forms::DataGridView^ dgvMedicine;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtMedicineId = (gcnew System::Windows::Forms::TextBox());
			this->txtMedicineName = (gcnew System::Windows::Forms::TextBox());
			this->txtMedicineDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtMedicinePrice = (gcnew System::Windows::Forms::TextBox());
			this->txtMedicineStock = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->dgvMedicine = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMedicine))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock:";
			// 
			// txtMedicineId
			// 
			this->txtMedicineId->Location = System::Drawing::Point(163, 38);
			this->txtMedicineId->Name = L"txtMedicineId";
			this->txtMedicineId->Size = System::Drawing::Size(47, 20);
			this->txtMedicineId->TabIndex = 5;
			// 
			// txtMedicineName
			// 
			this->txtMedicineName->Location = System::Drawing::Point(163, 68);
			this->txtMedicineName->Name = L"txtMedicineName";
			this->txtMedicineName->Size = System::Drawing::Size(139, 20);
			this->txtMedicineName->TabIndex = 6;
			// 
			// txtMedicineDescription
			// 
			this->txtMedicineDescription->Location = System::Drawing::Point(163, 94);
			this->txtMedicineDescription->Multiline = true;
			this->txtMedicineDescription->Name = L"txtMedicineDescription";
			this->txtMedicineDescription->Size = System::Drawing::Size(192, 47);
			this->txtMedicineDescription->TabIndex = 7;
			// 
			// txtMedicinePrice
			// 
			this->txtMedicinePrice->Location = System::Drawing::Point(165, 150);
			this->txtMedicinePrice->Name = L"txtMedicinePrice";
			this->txtMedicinePrice->Size = System::Drawing::Size(63, 20);
			this->txtMedicinePrice->TabIndex = 8;
			// 
			// txtMedicineStock
			// 
			this->txtMedicineStock->Location = System::Drawing::Point(165, 183);
			this->txtMedicineStock->Name = L"txtMedicineStock";
			this->txtMedicineStock->Size = System::Drawing::Size(62, 20);
			this->txtMedicineStock->TabIndex = 9;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(44, 233);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(87, 28);
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MedicinasForm::button1_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(223, 233);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(92, 28);
			this->btnUpdate->TabIndex = 11;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MedicinasForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(408, 233);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(87, 28);
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MedicinasForm::btnDelete_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(408, 38);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(120, 140);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 13;
			this->pbPhoto->TabStop = false;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(408, 189);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(120, 23);
			this->btnSetImage->TabIndex = 14;
			this->btnSetImage->Text = L"Establecer Imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &MedicinasForm::btnSetImage_Click);
			// 
			// dgvMedicine
			// 
			this->dgvMedicine->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMedicine->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dgvMedicine->Location = System::Drawing::Point(12, 277);
			this->dgvMedicine->Name = L"dgvMedicine";
			this->dgvMedicine->Size = System::Drawing::Size(523, 159);
			this->dgvMedicine->TabIndex = 15;
			this->dgvMedicine->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MedicinasForm::dgvMedicine_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 70;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 210;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Stock";
			this->Column4->Name = L"Column4";
			// 
			// MedicinasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 448);
			this->Controls->Add(this->dgvMedicine);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtMedicineStock);
			this->Controls->Add(this->txtMedicinePrice);
			this->Controls->Add(this->txtMedicineDescription);
			this->Controls->Add(this->txtMedicineName);
			this->Controls->Add(this->txtMedicineId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MedicinasForm";
			this->Text = L"MedicinasForm";
			this->Load += gcnew System::EventHandler(this, &MedicinasForm::MedicinasForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMedicine))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Medicinas^ medicina = gcnew Medicinas();
		//PersonalCareProduct->setId(Convert::ToInt32(txtPersonalCareId->Text));
		medicina->Id = Convert::ToInt32(txtMedicineId->Text);
		medicina->Name = txtMedicineName->Text;
		medicina->Description = txtMedicineDescription->Text;
		medicina->Price = Convert::ToDouble(txtMedicinePrice->Text);
		//product->PriceMaj = Convert::ToDouble(txtPersonalCarePriceMaj->Text);
		medicina->Stock = Convert::ToInt32(txtMedicineStock->Text);
		
		
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			medicina->Photo = ms->ToArray();
		}

		Controller::AddMedicine(medicina);

		CleanControl();
		ShowMedicines();
	}
	
		   void ShowMedicines() {

			   List<Medicinas^>^ myMedicineList = Controller::QueryAllMedicines();

			   dgvMedicine->Rows->Clear();
			   for (int i = 0; i < myMedicineList->Count; i++) {
				   dgvMedicine->Rows->Add(gcnew array<String^>{
					   "" + myMedicineList[i]->Id,
						   myMedicineList[i]->Name,
						   "" + myMedicineList[i]->Price,
						   "" + myMedicineList[i]->Stock
				   });
			   }
		   }

		   void CleanControl() {
			   txtMedicineId->Clear();
			   txtMedicineName->Clear();
			   txtMedicineDescription->Clear();
			   txtMedicinePrice->Clear();
			   txtMedicineStock->Clear();
			   pbPhoto->Image = nullptr;
		   }
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Medicinas^ medicina = gcnew Medicinas();
	//product->setId(Convert::ToInt32(txtCareProductId->Text));
	medicina->Id = Convert::ToInt32(txtMedicineId->Text);
	medicina->Name = txtMedicineName->Text;
	medicina->Description = txtMedicineDescription->Text;
	medicina->Price = Convert::ToDouble(txtMedicinePrice->Text);
	medicina->Stock = Convert::ToInt32(txtMedicineStock->Text);
	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		medicina->Photo = ms->ToArray();
	}

	Controller::UpdateMedicine(medicina);
	CleanControl();
	ShowMedicines();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtMedicineId->Text->Trim() == "") {
		MessageBox::Show("Debe seleccionar un medicamento");
		return;
	}
	Controller::DeleteMedicine(Convert::ToInt32(txtMedicineId->Text->Trim()));
	CleanControl();
	ShowMedicines();
}
private: System::Void dgvMedicine_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvMedicine->SelectedCells[0]->RowIndex;
	int medicineId = Convert::ToInt32(dgvMedicine->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Medicinas^ p = Controller::QueryMedicineById(medicineId);
	//txtPersonalCareId->Text = "" + p->getId();
	txtMedicineId->Text = "" + p->Id;
	txtMedicineName->Text = p->Name;
	txtMedicineDescription->Text = p->Description;
	txtMedicinePrice->Text = "" + p->Price;
	txtMedicineStock->Text = "" + p->Stock;
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}
}
private: System::Void btnSetImage_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void MedicinasForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowMedicines();
}
};
}
