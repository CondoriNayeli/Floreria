#pragma once
#include "Pedido.h"
#include "Cliente.h"

namespace Floreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			// Inicialización de las listas
			listaClientes = gcnew System::Collections::Generic::List<Cliente^>();
			listaPedidos = gcnew System::Collections::Generic::List<Pedido^>(); // Aquí inicializas listaPedidos
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtCosto;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ rbno;
	private: System::Windows::Forms::RadioButton^ rbsi;
	private: System::Windows::Forms::DateTimePicker^ dtpHoraLlegada;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private: System::Collections::Generic::List<Cliente^>^ listaClientes;
	private: System::Collections::Generic::List<Pedido^>^ listaPedidos;

	

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clienteId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pedidoID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costoTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalPagado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalAdeudado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LugardeEntrega;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaPedido;













private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreCliente;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ telefonoCliente;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ direccionClient;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;














































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtCosto = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rbno = (gcnew System::Windows::Forms::RadioButton());
			this->rbsi = (gcnew System::Windows::Forms::RadioButton());
			this->dtpHoraLlegada = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->clienteId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pedidoID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costoTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalPagado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalAdeudado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LugardeEntrega = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaPedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombreCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->telefonoCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->direccionClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(12, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(736, 69);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Informacion de los Clientes";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(328, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Teléfono: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(507, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Direccion: ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(561, 23);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(380, 23);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->groupBox6);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->dtpHoraLlegada);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(12, 109);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(834, 243);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Informacion de los Pedidos";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(163, 23);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 18;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton1);
			this->groupBox6->Controls->Add(this->radioButton2);
			this->groupBox6->Location = System::Drawing::Point(359, 169);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(219, 53);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Estado del pedido";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &Form1::groupBox6_Enter);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(126, 20);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Pendiente";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(44, 20);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 17);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Entregado";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(92, 179);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(220, 20);
			this->textBox12->TabIndex = 17;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(17, 182);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(66, 13);
			this->label20->TabIndex = 16;
			this->label20->Text = L"Descripcion:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->textBox9);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->txtCosto);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(34, 71);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(551, 85);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Información de Pago";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &Form1::groupBox4_Enter);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(492, 37);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Bs.";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(456, 34);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(31, 20);
			this->textBox9->TabIndex = 8;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(366, 37);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Total Adeudado:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(322, 37);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Bs.";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(287, 34);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(31, 20);
			this->textBox6->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(204, 37);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Total Pagado:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(152, 37);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Bs.";
			// 
			// txtCosto
			// 
			this->txtCosto->Location = System::Drawing::Point(124, 34);
			this->txtCosto->Margin = System::Windows::Forms::Padding(2);
			this->txtCosto->Name = L"txtCosto";
			this->txtCosto->Size = System::Drawing::Size(31, 20);
			this->txtCosto->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 37);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Costo del Pedido: ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rbno);
			this->groupBox3->Controls->Add(this->rbsi);
			this->groupBox3->Location = System::Drawing::Point(595, 18);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(219, 53);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Lugar de entrega";
			// 
			// rbno
			// 
			this->rbno->AutoSize = true;
			this->rbno->Location = System::Drawing::Point(126, 20);
			this->rbno->Margin = System::Windows::Forms::Padding(2);
			this->rbno->Name = L"rbno";
			this->rbno->Size = System::Drawing::Size(58, 17);
			this->rbno->TabIndex = 1;
			this->rbno->TabStop = true;
			this->rbno->Text = L"Tienda";
			this->rbno->UseVisualStyleBackColor = true;
			// 
			// rbsi
			// 
			this->rbsi->AutoSize = true;
			this->rbsi->Location = System::Drawing::Point(44, 20);
			this->rbsi->Margin = System::Windows::Forms::Padding(2);
			this->rbsi->Name = L"rbsi";
			this->rbsi->Size = System::Drawing::Size(67, 17);
			this->rbsi->TabIndex = 0;
			this->rbsi->TabStop = true;
			this->rbsi->Text = L"Domicilio";
			this->rbsi->UseVisualStyleBackColor = true;
			// 
			// dtpHoraLlegada
			// 
			this->dtpHoraLlegada->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpHoraLlegada->Location = System::Drawing::Point(453, 20);
			this->dtpHoraLlegada->Margin = System::Windows::Forms::Padding(2);
			this->dtpHoraLlegada->Name = L"dtpHoraLlegada";
			this->dtpHoraLlegada->ShowUpDown = true;
			this->dtpHoraLlegada->Size = System::Drawing::Size(95, 20);
			this->dtpHoraLlegada->TabIndex = 13;
			this->dtpHoraLlegada->ValueChanged += gcnew System::EventHandler(this, &Form1::dtpHoraLlegada_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(400, 26);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Hora: ";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"ID:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(38, 23);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(56, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(117, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Fecha:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->dataGridViewTextBoxColumn1,
					this->nombreCliente, this->telefonoCliente, this->direccionClient, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 404);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1262, 213);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick_1);
			// 
			// clienteId
			// 
			this->clienteId->Name = L"clienteId";
			// 
			// Nombre
			// 
			this->Nombre->Name = L"Nombre";
			// 
			// Telefono
			// 
			this->Telefono->Name = L"Telefono";
			// 
			// direccion
			// 
			this->direccion->Name = L"direccion";
			// 
			// pedidoID
			// 
			this->pedidoID->Name = L"pedidoID";
			// 
			// Descripcion
			// 
			this->Descripcion->Name = L"Descripcion";
			// 
			// costoTotal
			// 
			this->costoTotal->Name = L"costoTotal";
			// 
			// totalPagado
			// 
			this->totalPagado->Name = L"totalPagado";
			// 
			// totalAdeudado
			// 
			this->totalAdeudado->Name = L"totalAdeudado";
			// 
			// estado
			// 
			this->estado->Name = L"estado";
			// 
			// LugardeEntrega
			// 
			this->LugardeEntrega->Name = L"LugardeEntrega";
			// 
			// FechaPedido
			// 
			this->FechaPedido->Name = L"FechaPedido";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(495, 375);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(392, 375);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Actualizar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(300, 375);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Buscar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(201, 358);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Agregar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1016, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 225);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Cliente ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 78;
			// 
			// nombreCliente
			// 
			this->nombreCliente->HeaderText = L"Nombre";
			this->nombreCliente->Name = L"nombreCliente";
			this->nombreCliente->Width = 21;
			// 
			// telefonoCliente
			// 
			this->telefonoCliente->HeaderText = L"Telefono";
			this->telefonoCliente->Name = L"telefonoCliente";
			// 
			// direccionClient
			// 
			this->direccionClient->HeaderText = L"Direccion";
			this->direccionClient->Name = L"direccionClient";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ID Pedido";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Fecha";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Hora";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Lugar";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Costo Total";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Total Pagado";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Total Adeudado";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Descripción";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 707);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	

	private: System::Void ActualizarDataGridView() {
		dataGridView1->Rows->Clear();  // Limpiar las filas actuales

		// Combinamos los datos de clientes y pedidos en la misma fila
		for (int i = 0; i < listaClientes->Count; i++) {
			Cliente^ cliente = listaClientes[i];
			Pedido^ pedido = listaPedidos[i];

			// Agregar una nueva fila al DataGridView con los datos combinados
			dataGridView1->Rows->Add(cliente->Identificador, cliente->Nombre, cliente->Telefono, cliente->Direccion,
				pedido->Identificador, pedido->Fecha->ToString("dd/MM/yyyy"), pedido->Hora->ToString("HH:mm"), pedido->LugardeEntrega,
				pedido->CostoTotal.ToString(), pedido->TotalPagado.ToString(), pedido->TotalAdeudado.ToString(), pedido->Descripcion, pedido->Estado);
		}
		

		
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		ActualizarDataGridView();
	}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}

	   
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ idCliente = textBox1->Text;
		String^ idPedido = textBox5->Text;
		DateTime^ fecha = dateTimePicker1->Value;
		DateTime^ hora = dtpHoraLlegada->Value;
		String^ lugarEntrega = rbsi->Checked ? "Domicilio" : "Tienda";
		double costoTotal = Convert::ToDouble(txtCosto->Text);
		double totalPagado = Convert::ToDouble(textBox6->Text);
		double totalAdeudado = Convert::ToDouble(textBox9->Text);
		String^ descripcion = textBox12->Text;
		String^ estado = radioButton2->Checked ? "Entregado" : "Pendiente";

		String^ nombre = textBox2->Text;
		String^ telefono = textBox4->Text;
		String^ direccion = textBox3->Text;

		// Crear un nuevo pedido y agregarlo a la lista
		Pedido^ nuevoPedido = gcnew Pedido(idCliente, idPedido, fecha, hora, lugarEntrega, costoTotal, totalPagado, totalAdeudado, descripcion, estado);
		listaPedidos->Add(nuevoPedido);

		// Crear un nuevo cliente y agregarlo a la lista
		Cliente^ nuevoCliente = gcnew Cliente(idCliente, nombre, telefono, direccion);
		listaClientes->Add(nuevoCliente);

		// Actualizar el DataGridView para reflejar el nuevo pedido y cliente
		ActualizarDataGridView();

	}




	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ idBuscado = textBox1->Text;
		dataGridView1->Rows->Clear();  // Limpiar el DataGridView antes de agregar nuevos resultados

		// Variable para verificar si encontramos al cliente
		bool clienteEncontrado = false;

		// Buscar en la lista de Clientes y Pedidos
		for each (Cliente ^ cliente in listaClientes) {
			if (cliente->Identificador == idBuscado) {
				clienteEncontrado = true;  // Marcamos que encontramos el cliente

				// Buscar el pedido correspondiente al cliente
				Pedido^ pedidoEncontrado = nullptr;
				for each (Pedido ^ pedido in listaPedidos) {
					if (pedido->IdCliente == cliente->Identificador) {
						pedidoEncontrado = pedido;
						break; // Salimos del bucle si encontramos el pedido correspondiente
					}
				}

				// Si encontramos un pedido para el cliente, agregar la fila al DataGridView
				if (pedidoEncontrado != nullptr) {
					dataGridView1->Rows->Add(cliente->Identificador, cliente->Nombre, cliente->Telefono, cliente->Direccion,
						pedidoEncontrado->Identificador, pedidoEncontrado->Fecha->ToString("dd/MM/yyyy"), pedidoEncontrado->Hora->ToString("HH:mm"),
						pedidoEncontrado->LugardeEntrega, pedidoEncontrado->CostoTotal.ToString(),
						pedidoEncontrado->TotalPagado.ToString(), pedidoEncontrado->TotalAdeudado.ToString(),
						pedidoEncontrado->Descripcion, pedidoEncontrado->Estado);
				}
				else {
					// Si no encontramos el pedido, solo mostramos los datos del cliente
					dataGridView1->Rows->Add(cliente->Identificador, cliente->Nombre, cliente->Telefono, cliente->Direccion,
						"No hay pedido asociado", "N/A", "N/A", "N/A", "N/A", "N/A", "N/A", "N/A");
				}
				break; // Terminamos la búsqueda del cliente después de encontrarlo
			}
		}

		// Si no encontramos nada, muestra un mensaje
		if (!clienteEncontrado) {
			MessageBox::Show("No se encontraron resultados para el cliente con ID: " + idBuscado);
		}

		//// Obtener el texto de búsqueda (por ejemplo, el ID o nombre)
		//String^ busqueda = textBox1->Text;

		//// Limpiar el DataGridView antes de mostrar los resultados
		//dataGridView1->Rows->Clear();

		//// Buscar en listaClientes
		//for each (Cliente ^ cliente in listaClientes) {
		//	if (cliente->Identificador->Contains(busqueda) || cliente->Nombre->Contains(busqueda)) {
		//		// Si se encuentra una coincidencia, agregar la fila correspondiente al DataGridView
		//		dataGridView1->Rows->Add(cliente->Identificador, cliente->Nombre, cliente->Telefono, cliente->Direccion);
		//	}
		//}

		//// Buscar en listaPedidos
		//for each (Pedido ^ pedido in listaPedidos) {
		//	if (pedido->Identificador->Contains(busqueda) || pedido->Descripcion->Contains(busqueda)) {
		//		// Si se encuentra una coincidencia, agregar la fila correspondiente al DataGridView
		//		dataGridView1->Rows->Add(pedido->Identificador, pedido->Fecha->ToString("dd/MM/yyyy"), pedido->Hora->ToString("HH:mm"), pedido->LugardeEntrega,
		//			pedido->CostoTotal.ToString(), pedido->TotalPagado.ToString(), pedido->TotalAdeudado.ToString(), pedido->Descripcion);
		//	}
		//}
	}
	
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener la fila seleccionada en el DataGridView
		int rowIndex = dataGridView1->CurrentCell->RowIndex;

		if (rowIndex >= 0) {
			// Obtener el ID del cliente y el ID del pedido de la fila seleccionada
			String^ clienteId = dataGridView1->Rows[rowIndex]->Cells["clienteId"]->Value->ToString();
			String^ pedidoId = dataGridView1->Rows[rowIndex]->Cells["pedidoId"]->Value->ToString();

			// Buscar el cliente en la lista de clientes
			Cliente^ cliente = nullptr;
			for each (Cliente ^ c in listaClientes) {
				if (c->Identificador == clienteId) {
					cliente = c;
					break;
				}
			}

			// Buscar el pedido en la lista de pedidos
			Pedido^ pedido = nullptr;
			for each (Pedido ^ p in listaPedidos) {
				if (p->Identificador == pedidoId) {
					pedido = p;
					break;
				}
			}

			// Si encontramos el cliente y el pedido, actualizamos los datos
			if (cliente != nullptr && pedido != nullptr) {
				// Actualizar los datos del cliente
				cliente->Nombre = dataGridView1->Rows[rowIndex]->Cells["nombreCliente"]->Value->ToString();
				cliente->Telefono = dataGridView1->Rows[rowIndex]->Cells["telefonoCliente"]->Value->ToString();
				cliente->Direccion = dataGridView1->Rows[rowIndex]->Cells["direccionClient"]->Value->ToString();

				// Actualizar los datos del pedido
				pedido->CostoTotal = Convert::ToDouble(dataGridView1->Rows[rowIndex]->Cells["costoTotal"]->Value);
				pedido->TotalPagado = Convert::ToDouble(dataGridView1->Rows[rowIndex]->Cells["totalPagado"]->Value);
				pedido->TotalAdeudado = Convert::ToDouble(dataGridView1->Rows[rowIndex]->Cells["totalAdeudado"]->Value);
				pedido->Descripcion = dataGridView1->Rows[rowIndex]->Cells["descripcion"]->Value->ToString();
				pedido->Estado = dataGridView1->Rows[rowIndex]->Cells["estado"]->Value->ToString();

				// Mostrar un mensaje de confirmación
				MessageBox::Show("Datos del cliente y pedido actualizados correctamente.");
			}
			else {
				// Si no se encuentra el cliente o el pedido
				MessageBox::Show("Cliente o pedido no encontrado.");
			}
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila para editar.");
		}

	}

	private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Verificar si se está editando una celda en la columna correcta
		if (e->RowIndex >= 0) {
			// Obtener el ID del cliente y el ID del pedido que estamos editando
			String^ clienteId = dataGridView1->Rows[e->RowIndex]->Cells["clienteId"]->Value->ToString();
			String^ pedidoId = dataGridView1->Rows[e->RowIndex]->Cells["pedidoId"]->Value->ToString();

			// Buscar el cliente en la lista de clientes
			Cliente^ cliente = nullptr;
			for each (Cliente ^ c in listaClientes) {
				if (c->Identificador == clienteId) {
					cliente = c;
					break;
				}
			}

			// Buscar el pedido en la lista de pedidos
			Pedido^ pedido = nullptr;
			for each (Pedido ^ p in listaPedidos) {
				if (p->Identificador == pedidoId) {
					pedido = p;
					break;
				}
			}

			// Si encontramos el cliente y el pedido, actualizamos los datos
			if (cliente != nullptr && pedido != nullptr) {
				// Dependiendo de la columna editada, actualizamos los valores correspondientes
				if (e->ColumnIndex == dataGridView1->Columns["nombreCliente"]->Index) {
					cliente->Nombre = dataGridView1->Rows[e->RowIndex]->Cells["nombreCliente"]->Value->ToString();
				}
				else if (e->ColumnIndex == dataGridView1->Columns["telefonoCliente"]->Index) {
					cliente->Telefono = dataGridView1->Rows[e->RowIndex]->Cells["telefonoCliente"]->Value->ToString();
				}
				else if (e->ColumnIndex == dataGridView1->Columns["direccionClient"]->Index) {
					cliente->Direccion = dataGridView1->Rows[e->RowIndex]->Cells["direccionClient"]->Value->ToString();
				}
				else if (e->ColumnIndex == dataGridView1->Columns["costoTotal"]->Index) {
					pedido->CostoTotal = Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["costoTotal"]->Value);
				}
				else if (e->ColumnIndex == dataGridView1->Columns["totalPagado"]->Index) {
					pedido->TotalPagado = Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["totalPagado"]->Value);
				}
				else if (e->ColumnIndex == dataGridView1->Columns["totalAdeudado"]->Index) {
					pedido->TotalAdeudado = Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["totalAdeudado"]->Value);
				}
				else if (e->ColumnIndex == dataGridView1->Columns["descripcion"]->Index) {
					pedido->Descripcion = dataGridView1->Rows[e->RowIndex]->Cells["descripcion"]->Value->ToString();
				}
				else if (e->ColumnIndex == dataGridView1->Columns["estado"]->Index) {
					pedido->Estado = dataGridView1->Rows[e->RowIndex]->Cells["estado"]->Value->ToString();
				}
			}
		}
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si se seleccionó una fila
		if (dataGridView1->SelectedRows->Count > 0) {
			int selectedIndex = dataGridView1->SelectedRows[0]->Index;

			// Obtener los ID correspondientes del cliente y pedido
			String^ clienteId = dataGridView1->Rows[selectedIndex]->Cells["dataGridViewTextBoxColumn1"]->Value->ToString();
			String^ pedidoId = dataGridView1->Rows[selectedIndex]->Cells["dataGridViewTextBoxColumn2"]->Value->ToString();

			// Eliminar cliente de listaClientes
			for (int i = 0; i < listaClientes->Count; i++) {
				if (listaClientes[i]->Identificador == clienteId) {
					listaClientes->RemoveAt(i);  // Eliminar cliente
					break;
				}
			}

			// Eliminar pedido de listaPedidos
			for (int i = 0; i < listaPedidos->Count; i++) {
				if (listaPedidos[i]->Identificador == pedidoId) {
					listaPedidos->RemoveAt(i);  // Eliminar pedido
					break;
				}
			}

			// Actualizar el DataGridView
			ActualizarDataGridView();
		}
		else {
			MessageBox::Show("Por favor, selecciona una fila para eliminar.");
		}
	}

private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dtpHoraLlegada_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
