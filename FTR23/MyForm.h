#pragma once
#include "proc.h"
#include "mem.h"

namespace FTR23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ Keyboard1;

	protected:

	private: System::Windows::Forms::RadioButton^ Controller4;

	private: System::Windows::Forms::RadioButton^ Controller3;

	private: System::Windows::Forms::RadioButton^ Controller2;

	private: System::Windows::Forms::RadioButton^ Controller1;
	private: System::Windows::Forms::LinkLabel^ PatreonLink;
	private: System::Windows::Forms::LinkLabel^ DiscordLink;
	private: System::Windows::Forms::Timer^ SetupUpdate;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>


	#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Keyboard1 = (gcnew System::Windows::Forms::RadioButton());
			this->Controller4 = (gcnew System::Windows::Forms::RadioButton());
			this->Controller3 = (gcnew System::Windows::Forms::RadioButton());
			this->Controller2 = (gcnew System::Windows::Forms::RadioButton());
			this->Controller1 = (gcnew System::Windows::Forms::RadioButton());
			this->PatreonLink = (gcnew System::Windows::Forms::LinkLabel());
			this->DiscordLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SetupUpdate = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Keyboard1);
			this->groupBox1->Controls->Add(this->Controller4);
			this->groupBox1->Controls->Add(this->Controller3);
			this->groupBox1->Controls->Add(this->Controller2);
			this->groupBox1->Controls->Add(this->Controller1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(108, 169);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"My Controller";
			// 
			// Keyboard1
			// 
			this->Keyboard1->AutoSize = true;
			this->Keyboard1->Location = System::Drawing::Point(6, 137);
			this->Keyboard1->Name = L"Keyboard1";
			this->Keyboard1->Size = System::Drawing::Size(92, 22);
			this->Keyboard1->TabIndex = 0;
			this->Keyboard1->TabStop = true;
			this->Keyboard1->Text = L"KEYBOARD";
			this->Keyboard1->UseVisualStyleBackColor = true;
			// 
			// Controller4
			// 
			this->Controller4->AutoSize = true;
			this->Controller4->Location = System::Drawing::Point(6, 109);
			this->Controller4->Name = L"Controller4";
			this->Controller4->Size = System::Drawing::Size(96, 22);
			this->Controller4->TabIndex = 0;
			this->Controller4->TabStop = true;
			this->Controller4->Text = L"Controller4";
			this->Controller4->UseVisualStyleBackColor = true;
			// 
			// Controller3
			// 
			this->Controller3->AutoSize = true;
			this->Controller3->Location = System::Drawing::Point(6, 81);
			this->Controller3->Name = L"Controller3";
			this->Controller3->Size = System::Drawing::Size(96, 22);
			this->Controller3->TabIndex = 0;
			this->Controller3->TabStop = true;
			this->Controller3->Text = L"Controller3";
			this->Controller3->UseVisualStyleBackColor = true;
			// 
			// Controller2
			// 
			this->Controller2->AutoSize = true;
			this->Controller2->Location = System::Drawing::Point(6, 53);
			this->Controller2->Name = L"Controller2";
			this->Controller2->Size = System::Drawing::Size(96, 22);
			this->Controller2->TabIndex = 0;
			this->Controller2->TabStop = true;
			this->Controller2->Text = L"Controller2";
			this->Controller2->UseVisualStyleBackColor = true;
			// 
			// Controller1
			// 
			this->Controller1->AutoSize = true;
			this->Controller1->Location = System::Drawing::Point(6, 25);
			this->Controller1->Name = L"Controller1";
			this->Controller1->Size = System::Drawing::Size(96, 22);
			this->Controller1->TabIndex = 0;
			this->Controller1->TabStop = true;
			this->Controller1->Text = L"Controller1";
			this->Controller1->UseVisualStyleBackColor = true;
			// 
			// PatreonLink
			// 
			this->PatreonLink->AutoSize = true;
			this->PatreonLink->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PatreonLink->Location = System::Drawing::Point(9, 184);
			this->PatreonLink->Name = L"PatreonLink";
			this->PatreonLink->Size = System::Drawing::Size(57, 18);
			this->PatreonLink->TabIndex = 1;
			this->PatreonLink->TabStop = true;
			this->PatreonLink->Text = L"Patreon";
			this->PatreonLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::PatreonLink_LinkClicked);
			// 
			// DiscordLink
			// 
			this->DiscordLink->AutoSize = true;
			this->DiscordLink->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiscordLink->Location = System::Drawing::Point(70, 184);
			this->DiscordLink->Name = L"DiscordLink";
			this->DiscordLink->Size = System::Drawing::Size(54, 18);
			this->DiscordLink->TabIndex = 1;
			this->DiscordLink->TabStop = true;
			this->DiscordLink->Text = L"Discord";
			this->DiscordLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::DiscordLink_LinkClicked);
			// 
			// SetupUpdate
			// 
			this->SetupUpdate->Enabled = true;
			this->SetupUpdate->Tick += gcnew System::EventHandler(this, &MyForm::SetupUpdate_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(132, 213);
			this->Controls->Add(this->DiscordLink);
			this->Controls->Add(this->PatreonLink);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChanChaeng";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void UpdateAddress()
	{
		controller1Addr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x118, 0x40 });
		controller2Addr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x120, 0x40 });
		controller3Addr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x128, 0x40 });
		controller4Addr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x130, 0x40 });
		keyboardAddr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x138, 0x40 });
		cpu1Addr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x1C8, 0x40 });
		cpu2Addr = FindMultiOffset(hProc, moduleBase, { 0x1E0, 0x1D0, 0x40 });
	}

	private: int GetCurrentController()
	{
		if (Controller2->Checked) return 1;
		if (Controller3->Checked) return 2;
		if (Controller4->Checked) return 3;
		if (Keyboard1->Checked) return 4;

		return 0;
	}

	private: System::Void SetupUpdate_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		pid = GetProcId(L"FIFA23.exe");
		if (pid == 0) groupBox1->Enabled = false;
		else
		{
			moduleBase = GetModuleBaseAddress(pid, L"FIFA23.exe") + 0xAB56B00;
			hProc = OpenProcess(PROCESS_ALL_ACCESS, NULL, pid);

			UpdateAddress();
			switch (GetCurrentController())
			{
			case 0:
				WriteProcessMemory(hProc, (BYTE*)controller1Addr, &c1, sizeof(c1), nullptr);
				break;
			case 1:
				WriteProcessMemory(hProc, (BYTE*)controller2Addr, &c2, sizeof(c2), nullptr);
				break;
			case 2:
				WriteProcessMemory(hProc, (BYTE*)controller3Addr, &c3, sizeof(c3), nullptr);
				break;
			case 3:
				WriteProcessMemory(hProc, (BYTE*)controller4Addr, &c4, sizeof(c4), nullptr);
				break;
			case 4:
				WriteProcessMemory(hProc, (BYTE*)keyboardAddr, &kb, sizeof(kb), nullptr);
				break;
			}

			WriteProcessMemory(hProc, (BYTE*)cpu1Addr, &home, sizeof(home), nullptr);
			WriteProcessMemory(hProc, (BYTE*)cpu2Addr, &away, sizeof(away), nullptr);
			groupBox1->Enabled = true;
		}
	}

	private: System::Void PatreonLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{
		Process::Start("https://www.patreon.com/ChanChaeng");
	}

	private: System::Void DiscordLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{
		Process::Start("https://discord.gg/UGBkzCM8bH");
	}
};
}
