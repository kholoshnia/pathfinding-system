#pragma once

#include <SFML/Graphics.hpp>

#include <NEAT/Header Files/NEAT_Map.h>
#include <NEAT/Header Files/NEAT_Brain.h>
#include <NEAT/Header Files/NEAT_Logic.h>
#include <NEAT/Header Files/NEAT_Layers.h>
#include <NEAT/Header Files/NEAT_Population.h>

#include <Enums.h>

#include <QL/Header Files/QL_Map.h>
#include <QL/Header Files/QL_Table.h>
#include <QL/Header Files/QL_Logic.h>
#include <QL/Header Files/QL_Agent.h>

Pages page;
Modes mode;
Languages language;
Dimentions dimention;
LearningAlgorythms learning_algorithm;

std::string path;

sf::Font font;
sf::Sprite loading;
sf::Texture loading_texture;

int auto_exit, fps;
bool visualisation, auto_end, from_image, check_from_file;

namespace neat
{
	std::shared_ptr<Map> map;
	std::shared_ptr<Layers> layers;
	std::shared_ptr<Population> population;

	std::fstream fout, fin;
	std::string map_markup[80];
	std::vector<sf::Vector2f> pos;

	sf::RectangleShape rect;
	sf::CircleShape circle[2];
	sf::Text text[4], controls[3];
	sf::Vector2f goal_pos, dot_pos;

	float goal_radius;
	bool was_running, map_loaded;
	int direction_array_size, population_quantity, layers_quantity;
}

namespace ql
{
	std::shared_ptr<Map> map;
	std::shared_ptr<Table> table;
	std::shared_ptr<Agent> agent;

	sf::Text text[4];
	std::string image_path;
	std::fstream fout, fin;
	std::vector<int> initials;
	long long int finish_reward;
	bool was_running, map_loaded, finish_loaded;
	int map_size_x, map_size_y, width, height, finish_state, iterations;
}

namespace NNWay
{
	using namespace System;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;

	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
		{
			InitializeVariables();
			InitializeComponent();
		}
	protected:
		~menu() { if (components) delete components; }
	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::TextBox^ textBox4;
		System::Windows::Forms::TextBox^ textBox5;
		System::Windows::Forms::TextBox^ textBox6;
		System::Windows::Forms::TextBox^ textBox7;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::Windows::Forms::ComboBox^ comboBox2;
		System::Windows::Forms::ComboBox^ comboBox3;
		System::Windows::Forms::ComboBox^ comboBox4;
		System::Windows::Forms::CheckBox^ checkBox1;
		System::Windows::Forms::CheckBox^ checkBox2;
		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::ComponentModel::Container^ components;
		System::Windows::Forms::ToolStripMenuItem^ dToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ dToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ modeToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ nEATToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ learnToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ checkToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ languageToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ howToUseToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ dimensionToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ bugReportToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ qLearningToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ informationToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ learningAlgorithmToolStripMenuItem;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dimensionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->learningAlgorithmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nEATToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->qLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bugReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->learnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->settingsToolStripMenuItem,
					this->informationToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(676, 38);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dimensionToolStripMenuItem,
					this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(105, 34);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dToolStripMenuItem,
					this->dToolStripMenuItem1
			});
			this->dimensionToolStripMenuItem->Name = L"dimensionToolStripMenuItem";
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(306, 40);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Name = L"dToolStripMenuItem";
			this->dToolStripMenuItem->Size = System::Drawing::Size(157, 40);
			this->dToolStripMenuItem->Text = L"2D";
			this->dToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::DToolStripMenuItem_Click);
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Name = L"dToolStripMenuItem1";
			this->dToolStripMenuItem1->Size = System::Drawing::Size(157, 40);
			this->dToolStripMenuItem1->Text = L"3D";
			this->dToolStripMenuItem1->Click += gcnew System::EventHandler(this, &menu::DToolStripMenuItem1_Click);
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->englishToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
			this->languageToolStripMenuItem->Size = System::Drawing::Size(306, 40);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(207, 40);
			this->englishToolStripMenuItem->Text = L"English";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::EnglishToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(207, 40);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::�������ToolStripMenuItem_Click);
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nEATToolStripMenuItem,
					this->qLearningToolStripMenuItem
			});
			this->learningAlgorithmToolStripMenuItem->Name = L"learningAlgorithmToolStripMenuItem";
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(306, 40);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Name = L"nEATToolStripMenuItem";
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(235, 40);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			this->nEATToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::NEATToolStripMenuItem_Click);
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Name = L"qLearningToolStripMenuItem";
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(235, 40);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			this->qLearningToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::QLearningToolStripMenuItem_Click);
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->Name = L"modeToolStripMenuItem";
			this->modeToolStripMenuItem->Size = System::Drawing::Size(306, 40);
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aboutToolStripMenuItem,
					this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem
			});
			this->informationToolStripMenuItem->Name = L"informationToolStripMenuItem";
			this->informationToolStripMenuItem->Size = System::Drawing::Size(140, 34);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::AboutToolStripMenuItem_Click);
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Name = L"howToUseToolStripMenuItem";
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::bugReportToolStripMenuItem_Click);
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Name = L"bugReportToolStripMenuItem";
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Name = L"learnToolStripMenuItem";
			this->learnToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Name = L"checkToolStripMenuItem";
			this->checkToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(174, 74);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 68);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Main menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 270);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 35);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Dimention:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 185);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 35);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Language:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(15, 353);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 35);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Learning algorithm:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(15, 436);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 35);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Mode:";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 23);
			this->label7->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(458, 225);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"&OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &menu::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(458, 308);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 39);
			this->button2->TabIndex = 9;
			this->button2->Text = L"&OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &menu::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(458, 391);
			this->button3->Margin = System::Windows::Forms::Padding(6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 39);
			this->button3->TabIndex = 10;
			this->button3->Text = L"&OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &menu::Button3_Click);
			// 
			// button4
			// 
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(251, 583);
			this->button4->Margin = System::Windows::Forms::Padding(6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 129);
			this->button4->TabIndex = 20;
			this->button4->Text = L"&Go to";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &menu::Button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(458, 474);
			this->button6->Margin = System::Windows::Forms::Padding(6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(194, 39);
			this->button6->TabIndex = 24;
			this->button6->Text = L"&OK";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &menu::Button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(0, 0);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(0, 0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 29);
			this->textBox4->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(0, 0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 29);
			this->textBox5->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(0, 0);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 29);
			this->textBox6->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(0, 0);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 29);
			this->textBox7->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"English", L"�������" });
			this->comboBox1->Location = System::Drawing::Point(22, 225);
			this->comboBox1->Margin = System::Windows::Forms::Padding(6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(422, 32);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &menu::ComboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &menu::ComboBox1_KeyPress);
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"2D", L"3D" });
			this->comboBox2->Location = System::Drawing::Point(22, 308);
			this->comboBox2->Margin = System::Windows::Forms::Padding(6);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(422, 32);
			this->comboBox2->TabIndex = 28;
			this->comboBox2->Text = L"(Choose dimention)";
			// 
			// comboBox3
			// 
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NEAT", L"Q-Learning" });
			this->comboBox3->Location = System::Drawing::Point(22, 393);
			this->comboBox3->Margin = System::Windows::Forms::Padding(6);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(422, 32);
			this->comboBox3->TabIndex = 29;
			this->comboBox3->Text = L"(Choose learning algorithm)";
			// 
			// comboBox4
			// 
			this->comboBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Learn", L"Check" });
			this->comboBox4->Location = System::Drawing::Point(22, 474);
			this->comboBox4->Margin = System::Windows::Forms::Padding(6);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(422, 32);
			this->comboBox4->TabIndex = 30;
			this->comboBox4->Text = L"(Choose mode)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(0, 0);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(104, 24);
			this->checkBox1->TabIndex = 0;
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(0, 0);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 24);
			this->checkBox2->TabIndex = 0;
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 786);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NNWay";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		void InitializeComponentMainMenuEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(675, 42);
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(140, 34);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(174, 74);
			this->label1->Size = System::Drawing::Size(290, 68);
			this->label1->Text = L"Main menu";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(15, 270);
			this->label2->Size = System::Drawing::Size(143, 35);
			this->label2->Text = L"Dimention:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(15, 185);
			this->label3->Size = System::Drawing::Size(131, 35);
			this->label3->Text = L"Language:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(15, 353);
			this->label4->Size = System::Drawing::Size(236, 35);
			this->label4->Text = L"Learning algorithm:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(15, 436);
			this->label6->Size = System::Drawing::Size(91, 35);
			this->label6->Text = L"Mode:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(458, 225);
			this->button1->Size = System::Drawing::Size(194, 39);
			this->button1->Text = L"&OK";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(458, 308);
			this->button2->Size = System::Drawing::Size(194, 39);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(458, 391);
			this->button3->Size = System::Drawing::Size(194, 39);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(251, 583);
			this->button4->Size = System::Drawing::Size(196, 129);
			this->button4->Text = L"&Go to";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(458, 474);
			this->button6->Size = System::Drawing::Size(194, 39);
			this->button6->Text = L"&OK";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"English", L"�������" });
			this->comboBox1->Location = System::Drawing::Point(22, 225);
			this->comboBox1->Size = System::Drawing::Size(422, 32);
			this->comboBox1->Text = L"(Choose language)";
			// 
			// comboBox2
			// 
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"2D", L"3D" });
			this->comboBox2->Location = System::Drawing::Point(22, 308);
			this->comboBox2->Size = System::Drawing::Size(422, 32);
			this->comboBox2->Text = L"(Choose dimention)";
			// 
			// comboBox3
			// 
			this->comboBox3->Items->Clear();
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NEAT", L"Q-Learning" });
			this->comboBox3->Location = System::Drawing::Point(22, 393);
			this->comboBox3->Text = L"(Choose learning algorithm)";
			// 
			// comboBox4
			// 
			this->comboBox4->Items->Clear();
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Learn", L"Check" });
			this->comboBox4->Location = System::Drawing::Point(22, 474);
			this->comboBox4->Size = System::Drawing::Size(422, 32);
			this->comboBox4->Text = L"(Choose mode)";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentMainMenuRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(675, 42);
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(140, 34);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(236, 40);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(150, 74);
			this->label1->Size = System::Drawing::Size(290, 68);
			this->label1->Text = L"������� ����";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(15, 270);
			this->label2->Size = System::Drawing::Size(143, 35);
			this->label2->Text = L"���������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(15, 185);
			this->label3->Size = System::Drawing::Size(131, 35);
			this->label3->Text = L"����:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(15, 353);
			this->label4->Size = System::Drawing::Size(236, 35);
			this->label4->Text = L"�������� ��������:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(15, 436);
			this->label6->Size = System::Drawing::Size(91, 35);
			this->label6->Text = L"�����:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(458, 225);
			this->button1->Size = System::Drawing::Size(194, 39);
			this->button1->Text = L"&OK";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(458, 308);
			this->button2->Size = System::Drawing::Size(194, 39);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(458, 391);
			this->button3->Size = System::Drawing::Size(194, 39);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(251, 583);
			this->button4->Size = System::Drawing::Size(196, 129);
			this->button4->Text = L"&�������";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(458, 474);
			this->button6->Size = System::Drawing::Size(194, 39);
			this->button6->Text = L"&OK";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"English", L"�������" });
			this->comboBox1->Location = System::Drawing::Point(22, 225);
			this->comboBox1->Size = System::Drawing::Size(422, 32);
			this->comboBox1->Text = L"(�������� ����)";
			// 
			// comboBox2
			// 
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"2D", L"3D" });
			this->comboBox2->Location = System::Drawing::Point(22, 308);
			this->comboBox2->Size = System::Drawing::Size(422, 32);
			this->comboBox2->Text = L"(�������� ���������)";
			// 
			// comboBox3
			// 
			this->comboBox3->Items->Clear();
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NEAT", L"Q-Learning" });
			this->comboBox3->Location = System::Drawing::Point(22, 393);
			this->comboBox3->Text = L"(�������� �������� ��������)";
			// 
			// comboBox4
			// 
			this->comboBox4->Items->Clear();
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������", L"��������" });
			this->comboBox4->Location = System::Drawing::Point(22, 474);
			this->comboBox4->Size = System::Drawing::Size(422, 32);
			this->comboBox4->Text = L"(�������� �����)";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void InitializeComponentNEATLearn2DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(60, 40);
			this->label1->Size = System::Drawing::Size(237, 39);
			this->label1->Text = L"NEAT (Learn, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(160, 19);
			this->label2->Text = L"Set direction array size:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"Map configuration:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(154, 19);
			this->label4->Text = L"Set number of agents:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 349);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 236);
			this->label6->Size = System::Drawing::Size(146, 19);
			this->label6->Text = L"Set number of layers:";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(9, 392);
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->Text = L"Exit after:";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(8, 281);
			this->label8->Size = System::Drawing::Size(125, 19);
			this->label8->Text = L"Set mutation rate:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(198, 335);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Start";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 257);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(250, 302);
			this->button7->Size = System::Drawing::Size(106, 21);
			this->button7->Text = L"&OK";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"400";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"250";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 346);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 389);
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->Text = L"10";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 258);
			this->textBox5->Size = System::Drawing::Size(232, 20);
			this->textBox5->Text = L"3";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 303);
			this->textBox6->Size = System::Drawing::Size(232, 20);
			this->textBox6->Text = L"0.01";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Load from file", L"Create new" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(Choose action)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 329);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"Graphic visualization";
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(12, 372);
			this->checkBox2->Size = System::Drawing::Size(107, 17);
			this->checkBox2->Text = L"Exit automatically";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentNEATLearn3DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(60, 40);
			this->label1->Size = System::Drawing::Size(237, 39);
			this->label1->Text = L"NEAT (Learn, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(160, 19);
			this->label2->Text = L"Set direction array size:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"Map configuration:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(154, 19);
			this->label4->Text = L"Set number of agents:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 236);
			this->label6->Size = System::Drawing::Size(146, 19);
			this->label6->Text = L"Set number of layers:";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(9, 387);
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->Text = L"Exit after:";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(8, 281);
			this->label8->Size = System::Drawing::Size(125, 19);
			this->label8->Text = L"Set mutation rate:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(190, 338);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Start";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 257);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(250, 302);
			this->button7->Size = System::Drawing::Size(106, 21);
			this->button7->Text = L"&OK";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"400";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"250";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 346);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 384);
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->Text = L"10";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 258);
			this->textBox5->Size = System::Drawing::Size(232, 20);
			this->textBox5->Text = L"3";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 303);
			this->textBox6->Size = System::Drawing::Size(232, 20);
			this->textBox6->Text = L"0.01";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Load from file", L"Create new" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(Choose action)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 344);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"Graphic visualization";
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(12, 367);
			this->checkBox2->Size = System::Drawing::Size(107, 17);
			this->checkBox2->Text = L"Exit automatically";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentNEATCheck2DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(65, 40);
			this->label1->Size = System::Drawing::Size(244, 39);
			this->label1->Text = L"NEAT (Check, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"Load result file:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"Load map:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&Load";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&Load";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 205);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Check";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentNEATCheck3DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(65, 40);
			this->label1->Size = System::Drawing::Size(244, 39);
			this->label1->Text = L"NEAT (Check, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"Load result file:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"Load map:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&Load";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&Load";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 205);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Check";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void InitializeComponentNEATLearn2DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(60, 40);
			this->label1->Size = System::Drawing::Size(237, 39);
			this->label1->Text = L"NEAT (��������, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(160, 19);
			this->label2->Text = L"���������� ������ ������� �����������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"������������ �����:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(154, 19);
			this->label4->Text = L"���������� ���������� �������:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 349);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 236);
			this->label6->Size = System::Drawing::Size(146, 19);
			this->label6->Text = L"���������� ���������� �����:";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(9, 392);
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->Text = L"��������� �����:";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(8, 281);
			this->label8->Size = System::Drawing::Size(125, 19);
			this->label8->Text = L"���������� �������� mutation rate:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(198, 335);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&������";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 257);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(250, 302);
			this->button7->Size = System::Drawing::Size(106, 21);
			this->button7->Text = L"&OK";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"400";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"250";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 346);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 389);
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->Text = L"10";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 258);
			this->textBox5->Size = System::Drawing::Size(232, 20);
			this->textBox5->Text = L"3";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 303);
			this->textBox6->Size = System::Drawing::Size(232, 20);
			this->textBox6->Text = L"0.01";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������� �� �����", L"������� �����" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(�������� ��������)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 329);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"����������� ������������";
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(12, 372);
			this->checkBox2->Size = System::Drawing::Size(107, 17);
			this->checkBox2->Text = L"��������� �������������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentNEATLearn3DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(60, 40);
			this->label1->Size = System::Drawing::Size(237, 39);
			this->label1->Text = L"NEAT (��������, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(160, 19);
			this->label2->Text = L"���������� ������ ������� �����������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"������������ �����:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(154, 19);
			this->label4->Text = L"���������� ���������� �������:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 236);
			this->label6->Size = System::Drawing::Size(146, 19);
			this->label6->Text = L"���������� ���������� �����:";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(9, 387);
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->Text = L"��������� �����:";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(8, 281);
			this->label8->Size = System::Drawing::Size(125, 19);
			this->label8->Text = L"���������� �������� mutation rate:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(190, 338);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&������";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 257);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(250, 302);
			this->button7->Size = System::Drawing::Size(106, 21);
			this->button7->Text = L"&OK";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"400";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"250";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 346);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 384);
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->Text = L"10";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 258);
			this->textBox5->Size = System::Drawing::Size(232, 20);
			this->textBox5->Text = L"3";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 303);
			this->textBox6->Size = System::Drawing::Size(232, 20);
			this->textBox6->Text = L"0.01";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������� �� �����", L"������� �����" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(�������� ��������)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 344);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"����������� ������������";
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(12, 367);
			this->checkBox2->Size = System::Drawing::Size(107, 17);
			this->checkBox2->Text = L"��������� �������������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentNEATCheck2DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(65, 40);
			this->label1->Size = System::Drawing::Size(244, 39);
			this->label1->Text = L"NEAT (��������, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"��������� ���� � �����������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"��������� �����:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&���������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&���������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 205);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&���������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentNEATCheck3DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(65, 40);
			this->label1->Size = System::Drawing::Size(244, 39);
			this->label1->Text = L"NEAT (��������, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"��������� ���� � �����������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"��������� �����:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&���������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&���������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 205);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&��������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void InitializeComponentQLLearn2DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(30, 40);
			this->label1->Size = System::Drawing::Size(310, 39);
			this->label1->Text = L"Q-Learning (Learn, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(169, 19);
			this->label2->Text = L"Set number of iterations:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"Map configuration:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->Text = L"Set gamma:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 304);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 236);
			this->label6->Size = System::Drawing::Size(204, 19);
			this->label6->Text = L"Set number of fields (X and Y):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(194, 290);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Start";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 257);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"0.8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 301);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 258);
			this->textBox4->Size = System::Drawing::Size(111, 20);
			this->textBox4->Text = L"50";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 258);
			this->textBox5->Size = System::Drawing::Size(115, 20);
			this->textBox5->Text = L"50";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Load from file", L"Create new" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(Choose action)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 284);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"Graphic visualization";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentQLLearn3DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(30, 40);
			this->label1->Size = System::Drawing::Size(310, 39);
			this->label1->Text = L"Q-Learning (Learn, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(169, 19);
			this->label2->Text = L"Set number of iterations:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"Map configuration:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->Text = L"Set gamma:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 259);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(195, 248);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Start";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"0.8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 256);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Load from file", L"Create new" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(Choose action)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 239);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"Graphic visualization";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentQLCheck2DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(27, 40);
			this->label1->Size = System::Drawing::Size(317, 39);
			this->label1->Text = L"Q-Learning (Check, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"Load result file:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"Load map:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(7, 242);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 191);
			this->label6->Size = System::Drawing::Size(204, 19);
			this->label6->Text = L"Set number of fields (X and Y):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&Load";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&Load";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(191, 240);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Check";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 212);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(43, 239);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 213);
			this->textBox5->Size = System::Drawing::Size(115, 20);
			this->textBox5->Text = L"3";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(129, 213);
			this->textBox7->Size = System::Drawing::Size(115, 20);
			this->textBox7->Text = L"3";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentQLCheck3DEN(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"Dimension";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"Learning algorithm";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"Learn";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"Bug report";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(27, 40);
			this->label1->Size = System::Drawing::Size(317, 39);
			this->label1->Text = L"Q-Learning (Check, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"Load result file:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"Load map:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&Load";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&Load";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 205);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&Check";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void InitializeComponentQLLearn2DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(30, 40);
			this->label1->Size = System::Drawing::Size(310, 39);
			this->label1->Text = L"Q-Learning (��������, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(169, 19);
			this->label2->Text = L"���������� ���������� ��������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"������������ �����:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->Text = L"���������� �������� gamma:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 304);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 236);
			this->label6->Size = System::Drawing::Size(204, 19);
			this->label6->Text = L"���������� ���������� ����� (X � Y):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(194, 290);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&������";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 257);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"0.8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 301);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 258);
			this->textBox4->Size = System::Drawing::Size(111, 20);
			this->textBox4->Text = L"50";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 258);
			this->textBox5->Size = System::Drawing::Size(115, 20);
			this->textBox5->Text = L"50";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������� �� �����", L"������� �����" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(�������� ��������)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 284);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"����������� ������������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentQLLearn3DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(30, 40);
			this->label1->Size = System::Drawing::Size(310, 39);
			this->label1->Text = L"Q-Learning (��������, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(169, 19);
			this->label2->Text = L"���������� ���������� ��������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(131, 19);
			this->label3->Text = L"������������ �����:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 191);
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->Text = L"���������� �������� gamma:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 259);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 122);
			this->button1->Size = System::Drawing::Size(106, 21);
			this->button1->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 167);
			this->button2->Size = System::Drawing::Size(106, 21);
			this->button2->Text = L"&OK";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 212);
			this->button3->Size = System::Drawing::Size(106, 21);
			this->button3->Text = L"&OK";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(195, 248);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 168);
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->Text = L"3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 213);
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->Text = L"0.8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 256);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������� �� �����", L"������� �����" });
			this->comboBox1->Location = System::Drawing::Point(12, 122);
			this->comboBox1->Size = System::Drawing::Size(232, 21);
			this->comboBox1->Text = L"(�������� ��������)";
			// 
			// checkBox1
			// 
			this->checkBox1->Location = System::Drawing::Point(12, 239);
			this->checkBox1->Size = System::Drawing::Size(123, 17);
			this->checkBox1->Text = L"����������� �����������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentQLCheck2DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(27, 40);
			this->label1->Size = System::Drawing::Size(317, 39);
			this->label1->Text = L"Q-Learning (��������, 2D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"��������� ���� � �����������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"��������� �����:";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(7, 242);
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->Text = L"FPS:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 191);
			this->label6->Size = System::Drawing::Size(204, 19);
			this->label6->Text = L"���������� ���������� ����� (X � Y):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&���������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&���������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(191, 240);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&��������";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 212);
			this->button6->Size = System::Drawing::Size(106, 21);
			this->button6->Text = L"&OK";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(43, 239);
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->Text = L"60";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 213);
			this->textBox5->Size = System::Drawing::Size(115, 20);
			this->textBox5->Text = L"3";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(129, 213);
			this->textBox7->Size = System::Drawing::Size(115, 20);
			this->textBox7->Text = L"3";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void InitializeComponentQLCheck3DRU(void)
		{
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->Clear();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->settingsToolStripMenuItem, this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->Clear();
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) { this->dimensionToolStripMenuItem, this->languageToolStripMenuItem, this->learningAlgorithmToolStripMenuItem, this->modeToolStripMenuItem });
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"���������";
			// 
			// dimensionToolStripMenuItem
			// 
			this->dimensionToolStripMenuItem->DropDownItems->Clear();
			this->dimensionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->dToolStripMenuItem, this->dToolStripMenuItem1 });
			this->dimensionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->dimensionToolStripMenuItem->Text = L"���������";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem->Text = L"2D";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->dToolStripMenuItem1->Text = L"3D";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->Clear();
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->englishToolStripMenuItem, this->�������ToolStripMenuItem });
			this->languageToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->languageToolStripMenuItem->Text = L"����";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// learningAlgorithmToolStripMenuItem
			// 
			this->learningAlgorithmToolStripMenuItem->DropDownItems->Clear();
			this->learningAlgorithmToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->nEATToolStripMenuItem, this->qLearningToolStripMenuItem });
			this->learningAlgorithmToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->learningAlgorithmToolStripMenuItem->Text = L"�������� ��������";
			// 
			// nEATToolStripMenuItem
			// 
			this->nEATToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->nEATToolStripMenuItem->Text = L"NEAT";
			// 
			// qLearningToolStripMenuItem
			// 
			this->qLearningToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->qLearningToolStripMenuItem->Text = L"Q-Learning";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->Clear();
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->learnToolStripMenuItem, this->checkToolStripMenuItem });
			this->modeToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->modeToolStripMenuItem->Text = L"�����";
			// 
			// learnToolStripMenuItem
			// 
			this->learnToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->learnToolStripMenuItem->Text = L"��������";
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"��������";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->Clear();
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->aboutToolStripMenuItem, this->howToUseToolStripMenuItem, this->bugReportToolStripMenuItem });
			this->informationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->informationToolStripMenuItem->Text = L"����������";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"� �������";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"��� ������������";
			// 
			// bugReportToolStripMenuItem
			// 
			this->bugReportToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->bugReportToolStripMenuItem->Text = L"�������� �� ������";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(27, 40);
			this->label1->Size = System::Drawing::Size(317, 39);
			this->label1->Text = L"Q-Learning (��������, 3D)";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 146);
			this->label2->Size = System::Drawing::Size(109, 19);
			this->label2->Text = L"��������� ���� � �����������:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 100);
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->Text = L"��������� �����:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Size = System::Drawing::Size(344, 21);
			this->button1->Text = L"&���������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Size = System::Drawing::Size(344, 21);
			this->button2->Text = L"&���������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 205);
			this->button4->Size = System::Drawing::Size(107, 70);
			this->button4->Text = L"&���������";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void InitializeVariables(void)
		{
			page = Pages::MENU;
			mode = Modes::LEARN;
			language = Languages::EN;
			dimention = Dimentions::TWOD;
			learning_algorithm = LearningAlgorythms::NEAT;

			auto_exit = 10;
			neat::goal_radius = 10;
			neat::layers_quantity = 3;
			neat::population_quantity = 250;
			neat::direction_array_size = 400;

			ql::width = 800;
			ql::height = 800;
			ql::iterations = 3;
			ql::map_size_x = 10;
			ql::map_size_y = 10;
			ql::finish_reward = 100;

			auto_end = false;
			from_image = false;
			visualisation = false;
			check_from_file = false;
			ql::was_running = false;
			neat::was_running = false;
			ql::finish_loaded = false;

			loading_texture.loadFromFile("Resource Files/Textures/loading.png");
			loading.setOrigin(100, 25);
			loading.setPosition(400, 400);
			loading.setTexture(loading_texture);

			neat::circle[0].setRadius(neat::goal_radius);
			neat::circle[0].setFillColor(sf::Color::Red);
			neat::circle[0].setPosition(400, 400);

			neat::circle[1].setOrigin(4, 4);
			neat::circle[1].setFillColor(sf::Color::Black);
			neat::circle[1].setRadius(4.0f);
			neat::circle[1].setPosition(400, 300);

			neat::rect.setFillColor(sf::Color::Blue);
			neat::rect.setSize(sf::Vector2f(10, 10));

			font.loadFromFile("Resource Files/Fonts/arial.TTF");

			neat::text[0].setPosition(15, 10);
			neat::text[0].setString(L"Reached the goal: ");
			neat::text[1].setPosition(185, 10);
			neat::text[1].setString(L"No");
			neat::text[2].setPosition(15, 30);
			neat::text[2].setString(L"Gen: ");
			neat::text[3].setPosition(65, 30);
			neat::text[3].setString(L"0");

			for (int i = 0; i < 4; i++)
			{
				neat::text[i].setCharacterSize(20);
				neat::text[i].setFont(font);
				neat::text[i].setFillColor(sf::Color::Black);
				neat::text[i].setOutlineThickness(3);
				neat::text[i].setOutlineColor(sf::Color::White);
			}

			ql::text[0].setPosition(15, 10);
			ql::text[0].setString(L"Position: ");
			ql::text[1].setPosition(100, 10);
			ql::text[1].setString(L"0");
			ql::text[2].setPosition(15, 30);
			ql::text[2].setString(L"Iteration: ");
			ql::text[3].setPosition(100, 30);
			ql::text[3].setString(L"0");

			for (int i = 0; i < 4; i++)
			{
				ql::text[i].setCharacterSize(20);
				ql::text[i].setFont(font);
				ql::text[i].setFillColor(sf::Color::Black);
				ql::text[i].setOutlineThickness(3);
				ql::text[i].setOutlineColor(sf::Color::White);
			}

			neat::controls[0].setPosition(685, 10);
			neat::controls[0].setString(L"[Esc] - exit");
			neat::controls[1].setPosition(552, 10);
			neat::controls[1].setString(L"[Esc] - exit without saving\n[Enter] - save&exit");
			neat::controls[2].setPosition(612, 10);
			neat::controls[2].setString(L"[Alt] - move goal\n[LCtrl] - move object\n[Space] - fill around");

			for (int i = 0; i < 3; i++)
			{
				neat::controls[i].setCharacterSize(20);
				neat::controls[i].setFont(font);
				neat::controls[i].setFillColor(sf::Color::Black);
				neat::controls[i].setOutlineThickness(3);
				neat::controls[i].setOutlineColor(sf::Color::White);
			}
		}

		void ChooseInitializer(void)
		{
			if (mode == Modes::LEARN)
			{
				if (learning_algorithm == LearningAlgorythms::NEAT)
				{
					if (dimention == Dimentions::TWOD)
					{
						page = Pages::NEATLEARN2D;
						if (language == Languages::EN) InitializeComponentNEATLearn2DEN();
						else if (language == Languages::RU) InitializeComponentNEATLearn2DRU();
						
					}
					else if (dimention == Dimentions::THREED)
					{
						page = Pages::NEATLEARN3D;
						if (language == Languages::EN) InitializeComponentNEATLearn3DEN();
						else if (language == Languages::RU) InitializeComponentNEATLearn3DRU();
					}
				}
				else if (learning_algorithm == LearningAlgorythms::QL)
				{
					if (dimention == Dimentions::TWOD)
					{
						page = Pages::QLLEARN2D;
						if (language == Languages::EN) InitializeComponentQLLearn2DEN();
						else if (language == Languages::RU) InitializeComponentQLLearn2DRU();
					}
					else if (dimention == Dimentions::THREED)
					{
						page = Pages::QLLEARN3D;
						if (language == Languages::EN) InitializeComponentQLLearn3DEN();
						else if (language == Languages::RU) InitializeComponentQLLearn3DRU();
					}
				}
			}
			else if (mode == Modes::CHECK)
			{
				if (learning_algorithm == LearningAlgorythms::NEAT)
				{
					if (dimention == Dimentions::TWOD)
					{
						page = Pages::NEATCHECK2D;
						if (language == Languages::EN) InitializeComponentNEATCheck2DEN();
						else if (language == Languages::RU) InitializeComponentNEATCheck2DRU();
					}
					else if (dimention == Dimentions::THREED)
					{
						page = Pages::NEATCHECK3D;
						if (language == Languages::EN) InitializeComponentNEATCheck3DEN();
						else if (language == Languages::RU) InitializeComponentNEATCheck3DRU();
					}
				}
				else if (learning_algorithm == LearningAlgorythms::QL)
				{
					if (dimention == Dimentions::TWOD)
					{
						page = Pages::QLCHECK2D;
						if (language == Languages::EN) InitializeComponentQLCheck2DEN();
						else if (language == Languages::RU) InitializeComponentQLCheck2DRU();
					}
					else if (dimention == Dimentions::THREED)
					{
						page = Pages::QLCHECK3D;
						if (language == Languages::EN) InitializeComponentQLCheck3DEN();
						else if (language == Languages::RU) InitializeComponentQLCheck3DRU();
					}
				}
			}
		}
#pragma endregion
		System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (page == Pages::MENU)
			{
				if (comboBox1->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose language");
					else if (language == Languages::RU) MessageBox::Show("������, �������� ����");
				}
				else if (comboBox1->SelectedIndex == 0 && language != Languages::EN)
				{
					int s[4];
					s[0] = comboBox1->SelectedIndex;
					s[1] = comboBox2->SelectedIndex;
					s[2] = comboBox3->SelectedIndex;
					s[3] = comboBox4->SelectedIndex;
					language = Languages::EN;
					this->Controls->Clear();
					InitializeComponentMainMenuEN();
					comboBox1->SelectedIndex = s[0];
					comboBox2->SelectedIndex = s[1];
					comboBox3->SelectedIndex = s[2];
					comboBox4->SelectedIndex = s[3];
				}
				else if (comboBox1->SelectedIndex == 1 && language != Languages::RU)
				{
					int s[4];
					s[0] = comboBox1->SelectedIndex;
					s[1] = comboBox2->SelectedIndex;
					s[2] = comboBox3->SelectedIndex;
					s[3] = comboBox4->SelectedIndex;
					language = Languages::RU;
					this->Controls->Clear();
					InitializeComponentMainMenuRU();
					comboBox1->SelectedIndex = s[0];
					comboBox2->SelectedIndex = s[1];
					comboBox3->SelectedIndex = s[2];
					comboBox4->SelectedIndex = s[3];
				}
			}
			else
			{
				if (learning_algorithm == LearningAlgorythms::NEAT)
				{
					if (comboBox1->SelectedIndex == 0) neat::load_from_file();
					else if (comboBox1->SelectedIndex == 1) neat::create_new_map();
					else if (comboBox1->SelectedIndex == -1) language == Languages::EN ? MessageBox::Show("Please, select action") : MessageBox::Show("����������, �������� ��������");
				}
				else if (learning_algorithm == LearningAlgorythms::QL)
				{
					if (comboBox1->SelectedIndex == 0)
					{
						ql::load_from_file();

						if (from_image)
						{
							this->textBox2->Enabled = true;
							this->textBox5->Enabled = true;
						}
					}
					else if (comboBox1->SelectedIndex == 1) ql::create_new_map();
					else if (comboBox1->SelectedIndex == -1) language == Languages::EN ? MessageBox::Show("Please, select action") : MessageBox::Show("����������, �������� ��������");
				}
			}
		}
		System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (page == Pages::MENU)
			{
				if (comboBox2->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose dimention");
					else if (language == Languages::RU) MessageBox::Show("������, �������� ���������");
				}
				else if (comboBox2->SelectedIndex == 0) dimention = Dimentions::TWOD;
				else if (comboBox2->SelectedIndex == 1) dimention = Dimentions::THREED;
			}
			else if (mode == Modes::LEARN)
			{
				if (learning_algorithm == LearningAlgorythms::NEAT)
				{
					if (Convert::ToInt32(textBox1->Text) <= 0)
					{
						if (language == Languages::EN) MessageBox::Show("Error, incorrect number");
						else if (language == Languages::RU) MessageBox::Show("������, �������� �����");
					}
					else
						neat::direction_array_size = Convert::ToInt32(textBox1->Text);
				}
				else if (learning_algorithm == LearningAlgorythms::QL)
				{
					if (Convert::ToInt32(textBox1->Text) <= 0)
					{
						if (language == Languages::EN) MessageBox::Show("Error, incorrect number");
						else if (language == Languages::RU) MessageBox::Show("������, �������� �����");
					}
					else
						ql::iterations = Convert::ToInt32(textBox1->Text);
				}
			}
		}
		System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (page == Pages::MENU)
			{
				if (comboBox3->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose learning algorithm");
					else if (language == Languages::RU) MessageBox::Show("������, �������� �������� ��������");
				}
				else if (comboBox3->SelectedIndex == 0) learning_algorithm = LearningAlgorythms::NEAT;
				else if (comboBox3->SelectedIndex == 1) learning_algorithm = LearningAlgorythms::QL;
			}
			else if (mode == Modes::LEARN || mode == Modes::CHECK)
			{
				if (learning_algorithm == 0)
				{
					if (Convert::ToInt32(textBox2->Text) <= 0)
						language == Languages::EN ? MessageBox::Show("Error, incorrect number") : MessageBox::Show("������, �������� �����");
					else
						neat::population_quantity = Convert::ToInt32(textBox2->Text);
				}
				else
				{
					if (Convert::ToInt32(textBox2->Text) < 10 || Convert::ToInt32(textBox5->Text) < 10)
						language == Languages::EN ? MessageBox::Show("Error, incorrect number (< 10)") : MessageBox::Show("������, �������� ����� (< 10)");
					else
					{
						ql::map_size_x = Convert::ToInt32(textBox2->Text);
						ql::map_size_y = Convert::ToInt32(textBox5->Text);
					}

					ql::load_from_image();

					if (!ql::finish_loaded)
						language == Languages::EN ? MessageBox::Show("Error, finish coordinates not loaded, check file or change map size") : MessageBox::Show("������, ���������� ���� �� ���������, ��������� ���� ��� �������� ������ �����");
				}
			}
		}
		System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (page == Pages::MENU)
			{
				if (comboBox1->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose language");
					else if (language == Languages::RU) MessageBox::Show("������, �������� ����");
				}
				else if (comboBox2->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose dimention");
					else if (language == Languages::RU) MessageBox::Show("������, �������� ���������");
				}
				else if (comboBox3->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose learning algorithm");
					else if (language == Languages::RU) MessageBox::Show("������, �������� �������� ��������");
				}
				else if (comboBox4->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose mode");
					else if (language == Languages::RU) MessageBox::Show("������, �������� �����");
				}
				else
				{
					this->Controls->Clear();
					ChooseInitializer();
				}
			}
			else
			{
				fps = Convert::ToInt32(textBox3->Text);

				if (learning_algorithm == LearningAlgorythms::NEAT)
				{
					auto_exit = Convert::ToInt32(textBox4->Text);
					if (!neat::map_loaded)
					{
						if (language == Languages::EN) MessageBox::Show("Error, map not loaded");
						else if (language == Languages::RU) MessageBox::Show("������, ����� �� ���������");
					}
					else if (neat::layers_quantity = 0)
					{
						if (language == Languages::EN) MessageBox::Show("Error, wrong layers number");
						else if (language == Languages::RU) MessageBox::Show("������, �������� ����� �����");
					}
					else if (neat::population_quantity = 0)
					{
						if (language == Languages::EN) MessageBox::Show("Error, wrong agents number");
						else if (language == Languages::RU) MessageBox::Show("������, �������� ����� ��������");
					}
					else if (neat::direction_array_size = 0)
					{
						if (language == Languages::EN) MessageBox::Show("Error, wrong direction array size");
						else if (language == Languages::RU) MessageBox::Show("������, �������� ������ ������� �����������");
					}
					else if (comboBox1->SelectedIndex == -1)
					{
						if (language == Languages::EN) MessageBox::Show("Error, chose action with neat::map");
						else if (language == Languages::RU) MessageBox::Show("������, �������� �������� � ������");
					}
					else if (visualisation)
						neat::with_visualization();
					else
						neat::without_visualization();
				}
				else if (learning_algorithm == LearningAlgorythms::QL)
				{
					if (!ql::map_loaded)
					{
						if (language == Languages::EN) MessageBox::Show("Error, map not loaded");
						else if (language == Languages::RU) MessageBox::Show("������, ����� �� ���������");
					}
					else if (ql::iterations == 0)
					{
						if (language == Languages::EN) MessageBox::Show("Error, wrong iterations number");
						else if (language == Languages::RU) MessageBox::Show("������, �������� ����� ����������");
					}
					else if (comboBox1->SelectedIndex == -1)
					{
						if (language == Languages::EN) MessageBox::Show("Error, chose action with neat::map");
						else if (language == Languages::RU) MessageBox::Show("������, �������� �������� � ������");
					}
					else if (visualisation)
						ql::with_visualization();
					else
						ql::without_visualization();
				}
			}
		}
		System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (learning_algorithm == 0)
			{
				if (check_from_file)
				{
					if (comboBox1->SelectedIndex == -1 || neat::map.get() == nullptr) language == Languages::EN ? MessageBox::Show("Please, load map") : MessageBox::Show("����������, ��������� �����");
					else neat::check_from_file();
				}
				else
				{
					if (neat::was_running) neat::check();
					else language == Languages::EN ? MessageBox::Show("Error, the program has not started yet") : MessageBox::Show("������, ��������� ��� �� �����������");
				}
			}
			else
			{
				if (check_from_file)
				{
					if (comboBox1->SelectedIndex == -1 || ql::map.get() == nullptr) language == Languages::EN ? MessageBox::Show("Please, load map") : MessageBox::Show("����������, ��������� �����");
					else ql::check_from_file();
				}
				else
				{
					if (ql::was_running) ql::check();
					else language == Languages::EN ? MessageBox::Show("Error, the program has not started yet") : MessageBox::Show("������, ��������� ��� �� �����������");
				}
			}
		}
		System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (page == Pages::MENU)
			{
				if (comboBox4->SelectedIndex == -1)
				{
					if (language == Languages::EN) MessageBox::Show("Error, chose mode");
					else if (language == Languages::RU) MessageBox::Show("������, �������� �����");
				}
				else if (comboBox4->SelectedIndex == 0) mode = Modes::LEARN;
				else if (comboBox4->SelectedIndex == 1) mode = Modes::CHECK;
			}
			else
			{
				if (Convert::ToInt32(textBox5->Text) <= 0)
				{
					if (language == Languages::EN) MessageBox::Show("Error, incorrect number");
					else if (language == Languages::RU) MessageBox::Show("������, �������� �����");
				}
				else
					neat::layers_quantity = Convert::ToInt32(textBox5->Text);
			}
		}

		System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			textBox3->ReadOnly = !textBox3->ReadOnly;
			visualisation = !visualisation;
		}
		System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			textBox4->ReadOnly = !textBox4->ReadOnly;
			auto_end = !auto_end;
		}
		System::Void CheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { check_from_file = !check_from_file; }
		System::Void ComboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { e->Handled = true; }

		System::Void ComboBox1_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			if (!page == Pages::MENU)
			{
				if (learning_algorithm == LearningAlgorythms::QL)
				{
					this->textBox2->Enabled = false;
					this->textBox5->Enabled = false;
				}
				if (comboBox1->SelectedIndex == 0)
					language == Languages::EN ? button1->Text = L"Select" : button1->Text = L"�������";
				else if (comboBox1->SelectedIndex == 1)
					language == Languages::EN ? button1->Text = L"Create" : button1->Text = L"�������";
			}
		}
		System::Void NEATToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			mode = Modes::LEARN;
			dimention = Dimentions::TWOD;
			learning_algorithm = LearningAlgorythms::NEAT;

			auto_exit = 10;
			neat::goal_radius = 10;
			neat::layers_quantity = 3;
			neat::population_quantity = 250;
			neat::direction_array_size = 400;

			ql::width = 800;
			ql::height = 800;
			ql::iterations = 3;
			ql::map_size_x = 10;
			ql::map_size_y = 10;
			ql::finish_reward = 100;

			auto_end = false;
			from_image = false;
			visualisation = false;
			check_from_file = false;
			ql::was_running = false;
			neat::was_running = false;
			ql::finish_loaded = false;

			ChooseInitializer();
		}
		System::Void learnToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			mode = Modes::LEARN;
			ChooseInitializer();
		}
		System::Void checkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			mode = Modes::CHECK;
			ChooseInitializer();
		}
		System::Void AboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (learning_algorithm == LearningAlgorythms::NEAT)
			{
				if (language == Languages::EN)
					MessageBox::Show("The algorithm works according to the following principle: when the program starts, each object randomly forms an array of directions, represented as positions for displacements formed from corners, the size of this array can also be adjusted. After that, each object starts moving in accordance with the elements of the direction array. The object ceases move as soon as it touches a user-defined area, for example, a building on a map, reaches a goal or when elements in an array of directions end (the number of ode). After this, the best object for further study is selected: the �value� of agents is compared and the object with the highest value is remembered as the best (the value is given by a certain formula, for example, for a given algorithm, the value is greater for that object, to the goal is less than the rest).");
				else
					MessageBox::Show("�������� �������� �� ���������� ��������: ��� ������� ��������� ������ ������ ��������� ������� ��������� ������ �����������, �������������� � ���� ������� ��� �����������, ������������ �� �����, ������ ����� ������� ����� ����� ������������.����� ����� ������ ������ �������� �������� � ������������ � ���������� ������� �����������.������ ��������� ���������, ��� ������ �������� �������� ������������� �������, ��������, ������ �� �����, ��������� ���� ��� ����� ������������� �������� � ������� �����������(������������� ���������� �����).����� ����� ���������� ����� ������� ������� ��� ����������� �������� : ������������ ���������� �������� � ������ � ���������� ��������� ������������ ��� ������(�������� �������� �� ������������ �������, ���, ��������, ��� ������� ���������, �������� ������ � ���� �������, ���������� � �������� �� ���� ������ ��� � ���������).");
			}
			else if (learning_algorithm == LearningAlgorythms::QL)
			{
				if (language == Languages::EN)
					MessageBox::Show("When the algorithm starts, an array R (stateXactions) is created, which shows where the agent can go and where not, as well as the location of the targets on the map (the numbering starts at 0 and runs horizontally in ascending order). After this, training takes place: a second array Q is created and filled with zeros. He needs to check any such state (after creating the first array R, an array of initial states is also created). As a result, all possible subsequent actions. After that, the second array with weights is filled in accordance with the formula. After the training is completed, the second array, the user can enter any initial state and get the shortest route.");
				else
					MessageBox::Show("��� ������� ��������� ��������� ������ R (stateXactions), ������� ����������, ��� ����� ����� ���������, � ��� ���, � ����� ������������ ����� �� ����� (��������� ���������� � 0 � ���� ������������� �� �����������). ����� ����� ���������� ��������: �������� ������ ������ Q � ����������� ������. ��� ���������� ��������� ����� ����� ��������� (����� �������� ������� ������� R ����� ��������� ������ ��������� ���������). � ���������� ��� ��������� ����������� ��������. ����� ����� ������ ������ � ������ ����������� � ������������ � ��������. ����� ����, ��� �������� ���������, ������ ������ ������������ ����� ������ ����� ��������� ��������� � �������� ���������� �������.");
			}
		}

		System::Void EnglishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			language = Languages::EN;
			ChooseInitializer();
		}
		System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			language = Languages::RU;
			ChooseInitializer();
		}
		System::Void HowToUseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (learning_algorithm == LearningAlgorythms::NEAT)
			{
				if (language == Languages::EN)
					MessageBox::Show("Before launching the program, the user needs to add a map of the terrain on which the route should be laid, after selecting the number of measurements (two-dimensional or three-dimensional map). The user can choose the speed of learning NA and, accordingly, the speed of obtaining the desired result. The learning rate is regulated by changing the number of agents (conditional agents) (the more agents, the higher the learning rate), but for this it is necessary to increase the computing power. The accuracy of training is governed by the number of layers (the more there are, the higher the accuracy of training), this also requires an increase in computing power.");
				else
					MessageBox::Show("����� �������� ��������� ������������ ���������� �������� ����� ���������, �� ������� ���������� ��������� �������, �������������� ������ ���������� ��������� (���������� ��� ���������� �����). ������������ ����� ������� �������� �������� �� � �������������� �������� ��������� ��������� ����������. �������� �������� ������������ ����������� ��������� ���������� �������� (�������� ��������) (��� ������ ��������, ��� ���� �������� ��������), �� ��� ����� ���������� ����������� � �������������� ��������. �������� �������� ������������ ����������� ����� (��� �� ������, ��� �������� �������� ����), ��� ����� ����� ��������� ���������� �������������� ��������.");
			}
			else if (learning_algorithm == LearningAlgorythms::QL)
			{
				if (language == Languages::EN)
					MessageBox::Show("Pre-selected number of measurements (two-dimensional or three-dimensional map). The user can select the learning speed. The learning speed is regulated by changing gamma parameters and changing the size of the map and changes in the number of iterations.");
				else
					MessageBox::Show("����� �������� ��������� ������������ ���������� �������� ����� ���������, �� ������� ���������� ��������� �������, �������������� ������ ���������� ��������� (���������� ��� ���������� �����). ������������ ����� ������� �������� �������� �� � �������������� �������� ��������� ��������� ����������. �������� �������� ������������ ����������� ��������� ��������� gamma, ��������� ������� ����� � ��������� ���������� ����������.");
			}
		}
		System::Void QLearningToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			mode = Modes::LEARN;
			dimention = Dimentions::TWOD;
			learning_algorithm = LearningAlgorythms::QL;

			auto_exit = 10;
			neat::goal_radius = 10;
			neat::layers_quantity = 3;
			neat::population_quantity = 250;
			neat::direction_array_size = 400;

			ql::width = 800;
			ql::height = 800;
			ql::iterations = 3;
			ql::map_size_x = 10;
			ql::map_size_y = 10;
			ql::finish_reward = 100;

			auto_end = false;
			from_image = false;
			visualisation = false;
			check_from_file = false;
			ql::was_running = false;
			neat::was_running = false;
			ql::finish_loaded = false;

			ChooseInitializer();
		}

		System::Void DToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
		{
			dimention = Dimentions::TWOD;
			ChooseInitializer();
		}
		System::Void DToolStripMenuItem1_Click(Object^ sender, EventArgs^ e)
		{
			dimention = Dimentions::THREED;
			ChooseInitializer();
		}
		System::Void bugReportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show("e-mail: vhd-ru@yandex.ru"); }

		System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
				e->Handled = true;
		}
		System::Void TextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
				e->Handled = true;
		}
		System::Void TextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
				e->Handled = true;
		}
		System::Void TextBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
				e->Handled = true;
		}
		System::Void TextBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
				e->Handled = true;
		}
	};
}