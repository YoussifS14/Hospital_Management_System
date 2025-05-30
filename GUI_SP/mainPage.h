#pragma once
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include"Structs.h"
#include"mainFun.h"
#include"ListOfHopsital.h"
#include"ListOfPatient.h"
#include"AddPage.h"
namespace GUISP {

	 using namespace System;
	 using namespace System::ComponentModel;
	 using namespace System::Collections;
	 using namespace System::Windows::Forms;
	 using namespace System::Data;
	 using namespace System::Drawing;

	 public ref class mainPage : public System::Windows::Forms::Form
	 {
	 public:
		  msclr::interop::marshal_context context;
		  mainPage(void)
		  {
			   InitializeComponent();
			  
		  }
		property bool DialogResultCustom;
		  void personalinfo();
		  void searchHindex(string Ser);
		  void searchRindex(int Ser);
		  void searchPindex(string Ser);
		  void searchSPindex(string Ser);
		  void searchDindex(string Ser);
		  void searchLABRindex(string Ser);
		  void searchCLindex(string Ser);
		  void displayHinfo();
		  void displayPinfo();
		  void AddHospital(Hospitals hos[]);
		  void modifyHospital();
		  void modifyHSC();
		  void DisplayRInfo();
		  void makeReservation();
		  void modifyReservation();
		  void EditPersonalInfo();
		  void Registration();
		  void viewAllHospitals();

	 protected:
	
		  ~mainPage()
		  {
			   if (components)
			   {
					delete components;
			   }
		  }


	 protected:
	 protected:
	 private: System::Windows::Forms::TextBox^ userBox;
	 private: System::Windows::Forms::TextBox^ passBox;

	 private: System::Windows::Forms::Panel^ StartUP_page;
	 private: System::Windows::Forms::Label^ RequsetToRegis;


	 private: System::Windows::Forms::Button^ request_regis_but;
	 private: System::Windows::Forms::Panel^ regis_pn;
	 private: System::Windows::Forms::Label^ regis_name_lab;
	 private: System::Windows::Forms::Label^ regis_username_lab;
	 private: System::Windows::Forms::TextBox^ regis_username_textbox;
	 private: System::Windows::Forms::TextBox^ regis_name_textbox;
	 private: System::Windows::Forms::Label^ regis_phonenumber_lab;
	 private: System::Windows::Forms::TextBox^ regis_age_textbox;
	 private: System::Windows::Forms::Label^ warning_massage;

	 private: System::Windows::Forms::Panel^ AD_conpage;
	 private: System::Windows::Forms::Panel^ side_AD_bar_pn;
	 private: System::Windows::Forms::Panel^ PA_conpage;
	 private: System::Windows::Forms::Button^ PA_logout_but;
	 private: System::Windows::Forms::Panel^ AD_info_pn;
	 private: System::Windows::Forms::PictureBox^ AD_pic;
	 private: System::Windows::Forms::Label^ userType_lab;
	 private: System::Windows::Forms::Label^ FName_AD_lab;
	 private: System::Windows::Forms::Panel^ side_PA_bar_pn;
	 private: System::Windows::Forms::Panel^ PA_info_pn;
	 private: System::Windows::Forms::Label^ FName_PA_lab;
	 private: System::Windows::Forms::Label^ uesrType_PA_lab;
	 private: System::Windows::Forms::Button^ registration_but;
	 private: System::Windows::Forms::TextBox^ regis_phonenumber_textbox;
	 private: System::Windows::Forms::Label^ regis_age_lab;
	 private: System::Windows::Forms::TextBox^ regis_ConPass_TBox;
	 private: System::Windows::Forms::Label^ regis_ConPass_lab;
	 private: System::Windows::Forms::TextBox^ regis_Pass_TBox;
	 private: System::Windows::Forms::Label^ regis_pass_lab;
	 private: System::Windows::Forms::Button^ regis_ShowPass_but;
	 private: System::Windows::Forms::Button^ login_ShowPass_but;
	 private: System::Windows::Forms::Button^ AD_addORdel_hos_but;
	 private: System::Windows::Forms::Button^ AD_dispatient_hos_but;
	 private: System::Windows::Forms::Button^ AD_dispaly_hos_but;
	 private: System::Windows::Forms::Button^ AD_modify_hos_but;
	 private: System::Windows::Forms::Button^ AD_logout_but;
	 private: System::Windows::Forms::Button^ PA_view_hosInfo;
	 private: System::Windows::Forms::Button^ view_PInfo;
	 private: System::Windows::Forms::Button^ edit_PInfo;
	 private: System::Windows::Forms::Button^ PA_ViewReserveList;
	 private: System::Windows::Forms::Button^ PA_addORdelReserv;
	 private: System::Windows::Forms::Button^ PA_MOReserv;
	 private: System::Windows::Forms::Button^ edit_AInfo;
	 private: System::Windows::Forms::Button^ view_AInfo;
	 private: System::Windows::Forms::Panel^ AD_pages;
	 private: System::Windows::Forms::Panel^ AD_startWindow;
	 private: System::Windows::Forms::Panel^ AD_modify_Hinfo;
	 private: System::Windows::Forms::Panel^ AD_edit_Hlist;
	 private: System::Windows::Forms::Panel^ AD_view_Pinfo;
	 private: System::Windows::Forms::Panel^ AD_view_Hinfo;


	 private: System::Windows::Forms::Panel^ AD_editAinfo;
	 private: System::Windows::Forms::Panel^ AD_viewAinfo;
	 private: System::Windows::Forms::Label^ AD_AID;
	 private: System::Windows::Forms::Panel^ PA_pages;
	 private: System::Windows::Forms::Panel^ PA_startwindow;

	 private: System::Windows::Forms::Panel^ PA_viewHinfo;
	 private: System::Windows::Forms::Label^ PA_Hinfo_ID;
	 private: System::Windows::Forms::Panel^ PA_reservlist;
	 private: System::Windows::Forms::Label^ PA_viewR_RoomID;
	 private: System::Windows::Forms::Panel^ PA_ModifyReserv;
	 private: System::Windows::Forms::Panel^ PA_editReserv;

	 private: System::Windows::Forms::Panel^ PA_viewPinfo;
private: System::Windows::Forms::PictureBox^ PA_pic;

private: System::Windows::Forms::ComboBox^ AD_Hlist_combox;
private: System::Windows::Forms::Panel^ AD_headerModify;
private: System::Windows::Forms::Panel^ AD_groupchoice;
private: System::Windows::Forms::Button^ AD_HNselected;
private: System::Windows::Forms::Button^ AD_HRselected;
private: System::Windows::Forms::Button^ AD_BPselected;
private: System::Windows::Forms::Button^ AD_RPselected;
private: System::Windows::Forms::Button^ AD_PRRselected;
private: System::Windows::Forms::Button^ AD_IDselected;
private: System::Windows::Forms::Button^ AD_HCselected;
private: System::Windows::Forms::Button^ AD_HSselected;
private: System::Windows::Forms::Panel^ AD_Modifyinput;
private: System::Windows::Forms::TextBox^ AD_TBinput;
private: System::Windows::Forms::Label^ AD_nameOfinput;
private: System::Windows::Forms::Button^ AD_closeModify;
private: System::Windows::Forms::Button^ AD_deleteHSC;
private: System::Windows::Forms::Button^ AD_addHSC;
private: System::Windows::Forms::Panel^ AD_modifyHSC_layout;
private: System::Windows::Forms::Label^ AD_HSCorder;
private: System::Windows::Forms::ComboBox^ AD_HSClist;
private: System::Windows::Forms::Label^ AD_stateHSC1;
private: System::Windows::Forms::Button^ AD_selectHSC;
private: System::Windows::Forms::Button^ AD_confirmAdd;
private: System::Windows::Forms::Panel^ AD_addHlayout;
private: System::Windows::Forms::Button^ AD_addH;
private: System::Windows::Forms::ComboBox^ AD_HListDEL;
private: System::Windows::Forms::Label^ AD_HNorder_lab;
private: System::Windows::Forms::TextBox^ AD_HNorder_TB;
private: System::Windows::Forms::Label^ AD_Herror;
private: System::Windows::Forms::Button^ AD_selectHD;
private: System::Windows::Forms::Button^ AD_deleteH;
private: System::Windows::Forms::Button^ AD_addH_but;
private: System::Windows::Forms::Panel^ AD_deleteHlayout;
private: System::Windows::Forms::Panel^ AD_header_editH;
private: System::Windows::Forms::Panel^ AD_waitingP;
private: System::Windows::Forms::Label^ AD_messegeState;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ AD_HIDorder_lab;
private: System::Windows::Forms::TextBox^ AD_HIDorder_TB;
private: System::Windows::Forms::Label^ AD_HRateorder_lab;
private: System::Windows::Forms::TextBox^ AD_HRateorder_TB;
private: System::Windows::Forms::Label^ AD_HRPorder_lab;
private: System::Windows::Forms::TextBox^ AD_HRPorder_TB;
private: System::Windows::Forms::Label^ AD_HBPorder_lab;
private: System::Windows::Forms::TextBox^ AD_HBPorder_TB;
private: System::Windows::Forms::Label^ AD_HPRBsorder_lab;
private: System::Windows::Forms::TextBox^ AD_HPRBsorder_TB;
private: System::Windows::Forms::Label^ AD_AEmail;
private: System::Windows::Forms::Label^ AD_AGender;
private: System::Windows::Forms::Label^ AD_AphoneN;
private: System::Windows::Forms::Label^ AD_Aage;
private: System::Windows::Forms::Button^ AD_confirmedit;
private: System::Windows::Forms::ComboBox^ AD_ModifyHSClist;
private: System::Windows::Forms::Label^ PA_PEmail;
private: System::Windows::Forms::Label^ PA_PGender;
private: System::Windows::Forms::Label^ PA_PphoneN;
private: System::Windows::Forms::Label^ PA_Page;
private: System::Windows::Forms::Label^ PA_PID;
private: System::Windows::Forms::Label^ PA_Ptotalpaid;
private: System::Windows::Forms::Label^ PA_PNreservation;
private: System::Windows::Forms::Panel^ PA_header_editRlist;
private: System::Windows::Forms::Button^ PA_delRlist;
private: System::Windows::Forms::Button^ PA_addRlist;
private: System::Windows::Forms::Panel^ PA_delRlayout;
private: System::Windows::Forms::Label^ PA_delRlist_state;
private: System::Windows::Forms::ComboBox^ PA_delRlist_COM;
private: System::Windows::Forms::Button^ PA_delRlist_but;
private: System::Windows::Forms::Panel^ PA_waitingeditRlist;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Panel^ PA_addRlayout;
private: System::Windows::Forms::Label^ PA_DayenterH_lab;
private: System::Windows::Forms::Label^ PA_PAord_lab;
private: System::Windows::Forms::TextBox^ PA_PAord_TB;
private: System::Windows::Forms::Label^ PA_selectHforR_lab;
private: System::Windows::Forms::Label^ PA_RSClist_lab;
private: System::Windows::Forms::Label^ PA_PphNord_lab;
private: System::Windows::Forms::TextBox^ PA_PphNord_TB;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ PA_PNord_lab;
private: System::Windows::Forms::TextBox^ PA_PNord_TB;
private: System::Windows::Forms::Label^ PA_warningM;
private: System::Windows::Forms::RadioButton^ PA_askwhoreserv_RB2;
private: System::Windows::Forms::RadioButton^ PA_askwhoreserv_RB1;
private: System::Windows::Forms::Label^ PA_askwhoreserv_lab;
private: System::Windows::Forms::ComboBox^ PA_selectHforR_COM;
private: System::Windows::Forms::ComboBox^ PA_DayenterH_COM;
private: System::Windows::Forms::RadioButton^ PA_RtypeCheck_RB2;
private: System::Windows::Forms::RadioButton^ PA_RtypeCheck_RB1;
private: System::Windows::Forms::Panel^ PA_headerM;
private: System::Windows::Forms::Button^ PA_Rlistmodify_but;
private: System::Windows::Forms::ComboBox^ PA_Rlistmodify_com;
private: System::Windows::Forms::Panel^ PA_groupCmodify;
private: System::Windows::Forms::Button^ PA_MNumOfdays;
private: System::Windows::Forms::Button^ PA_MPRday;
private: System::Windows::Forms::Button^ PA_MPRtype;
private: System::Windows::Forms::Button^ PA_MRH;
private: System::Windows::Forms::Button^ PA_MPphNum;
private: System::Windows::Forms::Button^ PA_MPage;
private: System::Windows::Forms::Button^ PA_MPName;
private: System::Windows::Forms::Label^ PA_modifyRord_lab;
private: System::Windows::Forms::Panel^ PA_editNAPhnumlayout;
private: System::Windows::Forms::Label^ PA_modifyRstate_lab;
private: System::Windows::Forms::TextBox^ PA_modifyRord_TB;
private: System::Windows::Forms::Panel^ PA_modifyHRTRDsLayout;
private: System::Windows::Forms::ComboBox^ PA_listOfHRtypeRdays;
private: System::Windows::Forms::Label^ PA_StateOflist;
private: System::Windows::Forms::Label^ PA_OrderOflist;
private: System::Windows::Forms::Panel^ PA_viewHinfoHeader;
private: System::Windows::Forms::ComboBox^ PA_viewHList;
private: System::Windows::Forms::Label^ PA_Hinfo_bedsAva;
private: System::Windows::Forms::Label^ PA_Hinfo_rate;
private: System::Windows::Forms::Label^ PA_Hinfo_Name;
private: System::Windows::Forms::Label^ PA_Hinfo_Bedprice;
private: System::Windows::Forms::Label^ PA_Hinfo_surgeryprice;
private: System::Windows::Forms::Label^ PA_Hinfo_Rprice;
private: System::Windows::Forms::Button^ PA_viewHButton;
private: System::Windows::Forms::Label^ AD_viewHinfo_BedsPrice;
private: System::Windows::Forms::Label^ AD_viewHinfo_surgeryPrice;
private: System::Windows::Forms::Label^ AD_viewHinfo_Rprice;
private: System::Windows::Forms::Label^ AD_viewHinfo_bedsAva;
private: System::Windows::Forms::Label^ AD_viewHinfo_Rate;
private: System::Windows::Forms::Label^ AD_viewHinfo_Name;
private: System::Windows::Forms::Panel^ AD_viewHinfoHeader;
private: System::Windows::Forms::Button^ AD_viewHbutton;
private: System::Windows::Forms::ComboBox^ AD_viewHList;
private: System::Windows::Forms::Label^ AD_viewHinfo_ID;
private: System::Windows::Forms::Label^ PA_viewR_bedPrice;
private: System::Windows::Forms::Label^ PA_viewR_SurgeryPrice;
private: System::Windows::Forms::Label^ PA_viewR_ChandTPrice;
private: System::Windows::Forms::Label^ PA_viewR_phoneN;
private: System::Windows::Forms::Label^ PA_viewR_Day;
private: System::Windows::Forms::Label^ PA_viewR_HReserved;
private: System::Windows::Forms::Label^ PA_viewR_PName;
private: System::Windows::Forms::Panel^ PA_reservlist_header;
private: System::Windows::Forms::Button^ PA_viewRButton;
private: System::Windows::Forms::ComboBox^ PA_viewRlist;
private: System::Windows::Forms::Label^ PA_viewR_HSpCl;
private: System::Windows::Forms::Label^ AD_viewPinfo_NumOfR;
private: System::Windows::Forms::Label^ AD_viewPinfo_Totalpaid;
private: System::Windows::Forms::Label^ AD_viewPinfo_Email;
private: System::Windows::Forms::Label^ AD_viewPinfo_Gender;
private: System::Windows::Forms::Label^ AD_viewPinfo_PhNum;
private: System::Windows::Forms::Label^ AD_viewPinfo_Age;
private: System::Windows::Forms::Panel^ AD_viewPlist_header;
private: System::Windows::Forms::Button^ AD_viewPButton;
private: System::Windows::Forms::ComboBox^ AD_viewPlist;
private: System::Windows::Forms::Panel^ AD_GofCHEditAinfo;
private: System::Windows::Forms::Button^ AD_editPhNum;
private: System::Windows::Forms::Button^ AD_editpass_button;
private: System::Windows::Forms::Button^ AD_editusername;
private: System::Windows::Forms::Button^ AD_editAge;
private: System::Windows::Forms::Button^ AD_editName;
private: System::Windows::Forms::Panel^ AD_editpass;
private: System::Windows::Forms::Panel^ AD_editRemain;
private: System::Windows::Forms::Label^ AD_editRemain_state;
private: System::Windows::Forms::TextBox^ AD_editRemain_TB;
private: System::Windows::Forms::Label^ AD_editRemain_lab;
private: System::Windows::Forms::Label^ AD_askOldPass_lab;
private: System::Windows::Forms::TextBox^ AD_askconfPass_TB;
private: System::Windows::Forms::Label^ AD_askconfPass_lab;
private: System::Windows::Forms::TextBox^ AD_askNewPass_TB;
private: System::Windows::Forms::Label^ AD_askNewPass_lab;
private: System::Windows::Forms::TextBox^ AD_askOldPass_TB;
private: System::Windows::Forms::Panel^ PA_editPinfo;
private: System::Windows::Forms::Panel^ PA_editpass;
private: System::Windows::Forms::TextBox^ PA_askconfPass_TB;
private: System::Windows::Forms::Label^ PA_askconfPass_lab;
private: System::Windows::Forms::TextBox^ PA_askNewPass_TB;
private: System::Windows::Forms::Label^ PA_askNewPass_lab;
private: System::Windows::Forms::TextBox^ PA_askOldPass_TB;
private: System::Windows::Forms::Label^ PA_askOldPass_lab;
private: System::Windows::Forms::Panel^ PA_editRemain;
private: System::Windows::Forms::Label^ PA_editRemain_state;
private: System::Windows::Forms::TextBox^ PA_editRemain_TB;
private: System::Windows::Forms::Label^ PA_editRemain_lab;
private: System::Windows::Forms::Panel^ PA_GofCHEditPinfo;
private: System::Windows::Forms::Button^ PA_editPhNum;
private: System::Windows::Forms::Button^ PA_editpass_but;
private: System::Windows::Forms::Button^ PA_editusername;
private: System::Windows::Forms::Button^ PA_editAge;
private: System::Windows::Forms::Button^ PA_editName;
private: System::Windows::Forms::Panel^ AD_edit_wiating;

private: System::Windows::Forms::Panel^ PA_edit_waiting;

private: System::Windows::Forms::ListBox^ AD_viewHinfo_HCllist;
private: System::Windows::Forms::ListBox^ AD_viewHinfo_HSplist;
private: System::Windows::Forms::Label^ AD_text2;
private: System::Windows::Forms::Label^ AD_text1;
private: System::Windows::Forms::Label^ PA_text2;
private: System::Windows::Forms::Label^ PA_text1;
private: System::Windows::Forms::ListBox^ PA_Hinfo_HSplist;
private: System::Windows::Forms::ListBox^ PA_Hinfo_HCLlist;



private: System::Windows::Forms::Label^ AD_viewPinfo_ID;
private: System::Windows::Forms::Label^ AD_DELhospitalRate;
private: System::Windows::Forms::Label^ AD_DELhospitalID;
private: System::Windows::Forms::CheckBox^ checkBox1;

private: System::Windows::Forms::Label^ AD_HSPorder_lab;

private: System::Windows::Forms::TextBox^ AD_HSPorder_TB;

private: System::Windows::Forms::Panel^ AD_ADDHSC_lay;
private: System::Windows::Forms::Panel^ AD_DELHSC_lay;
private: System::Windows::Forms::Label^ AD_stateHSC2;
private: System::Windows::Forms::Label^ AD_AskHSC;
private: System::Windows::Forms::Button^ CloseTab1;
private: System::Windows::Forms::Button^ CloseTab2;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::Label^ AD_warning1;
private: System::Windows::Forms::TextBox^ AD_TBforAddHSC;
private: System::Windows::Forms::Label^ PA_viewR_PAge;
private: System::Windows::Forms::Panel^ PA_Check1;
private: System::Windows::Forms::Panel^ PA_Check2;
private: System::Windows::Forms::Label^ PA_RtypeCheck;
private: System::Windows::Forms::ComboBox^ PA_RSClist_COM;
private: System::Windows::Forms::Label^ PA_PNumOfDays_lab;
private: System::Windows::Forms::TextBox^ PA_PNumOfDays_TB;
private: System::Windows::Forms::Label^ PA_text4;
private: System::Windows::Forms::Label^ PA_text3;
private: System::Windows::Forms::Button^ PA_editRbutton;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ PA_Rnumbofdays;
private: System::Windows::Forms::Label^ PA_numofdays;
private: System::Windows::Forms::Label^ messege;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ AD_Changepass;
private: System::Windows::Forms::Button^ PA_Changepass;
private: System::Windows::Forms::Label^ PA_passState;
private: System::Windows::Forms::Label^ AD_passState;
private: System::Windows::Forms::Button^ AD_ShowNewPass;
private: System::Windows::Forms::Button^ AD_ShowOldPass;
private: System::Windows::Forms::Button^ PA_ShowNewPass;
private: System::Windows::Forms::Button^ PA_ShowOldPass;
private: System::Windows::Forms::Panel^ Requset1;





private: System::Windows::Forms::Label^ regis_state;
private: System::Windows::Forms::CheckBox^ regis_readPolicies;
private: System::Windows::Forms::ComboBox^ regis_selectgender;
private: System::Windows::Forms::Panel^ PA_SortingH;
private: System::Windows::Forms::RadioButton^ PA_Optionsort2;
private: System::Windows::Forms::RadioButton^ PA_Optionsort3;
private: System::Windows::Forms::RadioButton^ PA_Optionsort4;



private: System::Windows::Forms::Label^ PA_messege;
private: System::Windows::Forms::RadioButton^ PA_Optionsort1;
private: System::Windows::Forms::ListBox^ PA_SortingHlist;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ PA_SortHospital;
private: System::Windows::Forms::Panel^ AD_SortingH;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::ListBox^ AD_SortingHlist;
private: System::Windows::Forms::RadioButton^ AD_Optionsort2;
private: System::Windows::Forms::RadioButton^ AD_Optionsort3;
private: System::Windows::Forms::RadioButton^ AD_Optionsort4;
private: System::Windows::Forms::Label^ AD_messege;
private: System::Windows::Forms::RadioButton^ AD_Optionsort1;
private: System::Windows::Forms::Button^ AD_SortHospital;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ AD_viewPinfo_Name;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::RadioButton^ requsetid;
private: System::Windows::Forms::RadioButton^ requsetpass;
private: System::Windows::Forms::Label^ Sgender;

private: System::Windows::Forms::LinkLabel^ ProjectInfo;
private: System::Windows::Forms::Panel^ Info;






private: System::Windows::Forms::Label^ member1;
private: System::Windows::Forms::Label^ IDMember7;
private: System::Windows::Forms::Label^ member7;


private: System::Windows::Forms::Label^ IDMember6;
private: System::Windows::Forms::Label^ member6;


private: System::Windows::Forms::Label^ IDMember5;
private: System::Windows::Forms::Label^ member5;


private: System::Windows::Forms::Label^ IDMember3;
private: System::Windows::Forms::Label^ member3;



private: System::Windows::Forms::Label^ IDMember4;
private: System::Windows::Forms::Label^ member4;


private: System::Windows::Forms::Label^ IDMember2;
private: System::Windows::Forms::Label^ member2;




private: System::Windows::Forms::Label^ IDMember1;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::LinkLabel^ backtolog;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Panel^ login_pn;
private: System::Windows::Forms::Panel^ SIgnUP_IN;
private: System::Windows::Forms::Button^ SignIUP_but;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ PA_Editlaboratory_but;

private: System::Windows::Forms::Panel^ PA_Editlaboratory;
private: System::Windows::Forms::Panel^ PA_Addlabo_layout;
private: System::Windows::Forms::Panel^ PA_chechwho;






private: System::Windows::Forms::Label^ PA_LABwho_lab;

private: System::Windows::Forms::RadioButton^ PA_LABwho_RB2;

private: System::Windows::Forms::RadioButton^ PA_LABwho_RB1;
private: System::Windows::Forms::Panel^ PA_checkwhere;


private: System::Windows::Forms::RadioButton^ PA_LAB_RB2;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::RadioButton^ PA_LAB_RB1;
private: System::Windows::Forms::ComboBox^ PA_LABPHorLN_CB;


private: System::Windows::Forms::ComboBox^ PA_LABPtestN_CB;
private: System::Windows::Forms::ComboBox^ PA_LABPgender_CB;



private: System::Windows::Forms::Label^ PA_LABPHorLN_lab;

private: System::Windows::Forms::Label^ PA_LABPage_lab;
private: System::Windows::Forms::TextBox^ PA_LABPage_TB;


private: System::Windows::Forms::Label^ PA_LABPgender_lab;
private: System::Windows::Forms::Label^ PA_LABPtestN_lab;


private: System::Windows::Forms::Label^ PA_LABPphN_lab;
private: System::Windows::Forms::TextBox^ PA_LABPphN_TB;
private: System::Windows::Forms::Button^ PA_LABadd;



private: System::Windows::Forms::Label^ PA_LABPname_lab;
private: System::Windows::Forms::TextBox^ PA_LABPname_TB;
















private: System::Windows::Forms::Panel^ PA_headerLAb;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ PA_viewLABR;
private: System::Windows::Forms::Label^ PA_labRage;
private: System::Windows::Forms::Label^ PA_labRtestN;


private: System::Windows::Forms::Label^ PA_labRphN;




private: System::Windows::Forms::Label^ PA_labRgender;
private: System::Windows::Forms::Label^ PA_labRplace;


private: System::Windows::Forms::Label^ PA_labRname;


private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ PA_viewAllHButton;

private: System::Windows::Forms::FlowLayoutPanel^ PA_AllhospitalData;
private: System::Windows::Forms::Button^ AD_viewAllH;
private: System::Windows::Forms::FlowLayoutPanel^ AD_AllhospitalData;
private: System::Windows::Forms::Button^ AddNewAdminbut;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::FlowLayoutPanel^ AD_allpatient;
private: System::Windows::Forms::Button^ AD_DelAcc;
private: System::Windows::Forms::Button^ PA_del;

































 protected:
	 private:
		  System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		  void InitializeComponent(void)
		  {
			  System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainPage::typeid));
			  this->userBox = (gcnew System::Windows::Forms::TextBox());
			  this->passBox = (gcnew System::Windows::Forms::TextBox());
			  this->StartUP_page = (gcnew System::Windows::Forms::Panel());
			  this->SIgnUP_IN = (gcnew System::Windows::Forms::Panel());
			  this->login_pn = (gcnew System::Windows::Forms::Panel());
			  this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			  this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			  this->SignIUP_but = (gcnew System::Windows::Forms::Button());
			  this->warning_massage = (gcnew System::Windows::Forms::Label());
			  this->ProjectInfo = (gcnew System::Windows::Forms::LinkLabel());
			  this->label7 = (gcnew System::Windows::Forms::Label());
			  this->requsetid = (gcnew System::Windows::Forms::RadioButton());
			  this->requsetpass = (gcnew System::Windows::Forms::RadioButton());
			  this->login_ShowPass_but = (gcnew System::Windows::Forms::Button());
			  this->regis_pn = (gcnew System::Windows::Forms::Panel());
			  this->Sgender = (gcnew System::Windows::Forms::Label());
			  this->regis_selectgender = (gcnew System::Windows::Forms::ComboBox());
			  this->regis_readPolicies = (gcnew System::Windows::Forms::CheckBox());
			  this->regis_state = (gcnew System::Windows::Forms::Label());
			  this->regis_ShowPass_but = (gcnew System::Windows::Forms::Button());
			  this->regis_ConPass_TBox = (gcnew System::Windows::Forms::TextBox());
			  this->regis_ConPass_lab = (gcnew System::Windows::Forms::Label());
			  this->regis_Pass_TBox = (gcnew System::Windows::Forms::TextBox());
			  this->regis_pass_lab = (gcnew System::Windows::Forms::Label());
			  this->regis_phonenumber_textbox = (gcnew System::Windows::Forms::TextBox());
			  this->regis_age_lab = (gcnew System::Windows::Forms::Label());
			  this->registration_but = (gcnew System::Windows::Forms::Button());
			  this->regis_age_textbox = (gcnew System::Windows::Forms::TextBox());
			  this->regis_username_textbox = (gcnew System::Windows::Forms::TextBox());
			  this->regis_name_textbox = (gcnew System::Windows::Forms::TextBox());
			  this->regis_phonenumber_lab = (gcnew System::Windows::Forms::Label());
			  this->regis_username_lab = (gcnew System::Windows::Forms::Label());
			  this->regis_name_lab = (gcnew System::Windows::Forms::Label());
			  this->Requset1 = (gcnew System::Windows::Forms::Panel());
			  this->request_regis_but = (gcnew System::Windows::Forms::Button());
			  this->RequsetToRegis = (gcnew System::Windows::Forms::Label());
			  this->Info = (gcnew System::Windows::Forms::Panel());
			  this->label10 = (gcnew System::Windows::Forms::Label());
			  this->backtolog = (gcnew System::Windows::Forms::LinkLabel());
			  this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			  this->label19 = (gcnew System::Windows::Forms::Label());
			  this->IDMember7 = (gcnew System::Windows::Forms::Label());
			  this->member7 = (gcnew System::Windows::Forms::Label());
			  this->IDMember6 = (gcnew System::Windows::Forms::Label());
			  this->member6 = (gcnew System::Windows::Forms::Label());
			  this->IDMember5 = (gcnew System::Windows::Forms::Label());
			  this->member5 = (gcnew System::Windows::Forms::Label());
			  this->IDMember3 = (gcnew System::Windows::Forms::Label());
			  this->member3 = (gcnew System::Windows::Forms::Label());
			  this->IDMember4 = (gcnew System::Windows::Forms::Label());
			  this->member4 = (gcnew System::Windows::Forms::Label());
			  this->IDMember2 = (gcnew System::Windows::Forms::Label());
			  this->member2 = (gcnew System::Windows::Forms::Label());
			  this->IDMember1 = (gcnew System::Windows::Forms::Label());
			  this->member1 = (gcnew System::Windows::Forms::Label());
			  this->AD_conpage = (gcnew System::Windows::Forms::Panel());
			  this->AD_pages = (gcnew System::Windows::Forms::Panel());
			  this->AD_view_Pinfo = (gcnew System::Windows::Forms::Panel());
			  this->AD_allpatient = (gcnew System::Windows::Forms::FlowLayoutPanel());
			  this->AD_viewPinfo_ID = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPinfo_NumOfR = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPinfo_Totalpaid = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPinfo_Email = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPinfo_Gender = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPinfo_PhNum = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPinfo_Age = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPlist_header = (gcnew System::Windows::Forms::Panel());
			  this->button6 = (gcnew System::Windows::Forms::Button());
			  this->label17 = (gcnew System::Windows::Forms::Label());
			  this->AD_viewPButton = (gcnew System::Windows::Forms::Button());
			  this->AD_viewPlist = (gcnew System::Windows::Forms::ComboBox());
			  this->AD_viewPinfo_Name = (gcnew System::Windows::Forms::Label());
			  this->AD_view_Hinfo = (gcnew System::Windows::Forms::Panel());
			  this->AD_AllhospitalData = (gcnew System::Windows::Forms::FlowLayoutPanel());
			  this->AD_text2 = (gcnew System::Windows::Forms::Label());
			  this->AD_text1 = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_HSplist = (gcnew System::Windows::Forms::ListBox());
			  this->AD_viewHinfo_HCllist = (gcnew System::Windows::Forms::ListBox());
			  this->AD_viewHinfo_ID = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_BedsPrice = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_surgeryPrice = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_Rprice = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_bedsAva = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_Rate = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfo_Name = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHinfoHeader = (gcnew System::Windows::Forms::Panel());
			  this->AD_viewAllH = (gcnew System::Windows::Forms::Button());
			  this->label16 = (gcnew System::Windows::Forms::Label());
			  this->AD_viewHbutton = (gcnew System::Windows::Forms::Button());
			  this->AD_viewHList = (gcnew System::Windows::Forms::ComboBox());
			  this->AD_SortingH = (gcnew System::Windows::Forms::Panel());
			  this->label5 = (gcnew System::Windows::Forms::Label());
			  this->AD_SortingHlist = (gcnew System::Windows::Forms::ListBox());
			  this->AD_Optionsort2 = (gcnew System::Windows::Forms::RadioButton());
			  this->AD_Optionsort3 = (gcnew System::Windows::Forms::RadioButton());
			  this->AD_Optionsort4 = (gcnew System::Windows::Forms::RadioButton());
			  this->AD_messege = (gcnew System::Windows::Forms::Label());
			  this->AD_Optionsort1 = (gcnew System::Windows::Forms::RadioButton());
			  this->AD_editAinfo = (gcnew System::Windows::Forms::Panel());
			  this->AD_editRemain = (gcnew System::Windows::Forms::Panel());
			  this->button3 = (gcnew System::Windows::Forms::Button());
			  this->AD_editRemain_state = (gcnew System::Windows::Forms::Label());
			  this->AD_editRemain_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_editRemain_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_editpass = (gcnew System::Windows::Forms::Panel());
			  this->AD_ShowNewPass = (gcnew System::Windows::Forms::Button());
			  this->AD_ShowOldPass = (gcnew System::Windows::Forms::Button());
			  this->AD_passState = (gcnew System::Windows::Forms::Label());
			  this->AD_Changepass = (gcnew System::Windows::Forms::Button());
			  this->AD_askconfPass_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_askconfPass_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_askNewPass_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_askNewPass_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_askOldPass_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_askOldPass_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_edit_wiating = (gcnew System::Windows::Forms::Panel());
			  this->AD_GofCHEditAinfo = (gcnew System::Windows::Forms::Panel());
			  this->AD_editPhNum = (gcnew System::Windows::Forms::Button());
			  this->AD_editpass_button = (gcnew System::Windows::Forms::Button());
			  this->AD_editusername = (gcnew System::Windows::Forms::Button());
			  this->AD_editAge = (gcnew System::Windows::Forms::Button());
			  this->AD_editName = (gcnew System::Windows::Forms::Button());
			  this->AD_modify_Hinfo = (gcnew System::Windows::Forms::Panel());
			  this->AD_Modifyinput = (gcnew System::Windows::Forms::Panel());
			  this->label8 = (gcnew System::Windows::Forms::Label());
			  this->AD_modifyHSC_layout = (gcnew System::Windows::Forms::Panel());
			  this->AD_ADDHSC_lay = (gcnew System::Windows::Forms::Panel());
			  this->AD_TBforAddHSC = (gcnew System::Windows::Forms::TextBox());
			  this->CloseTab2 = (gcnew System::Windows::Forms::Button());
			  this->AD_stateHSC2 = (gcnew System::Windows::Forms::Label());
			  this->AD_confirmAdd = (gcnew System::Windows::Forms::Button());
			  this->AD_HSCorder = (gcnew System::Windows::Forms::Label());
			  this->AD_DELHSC_lay = (gcnew System::Windows::Forms::Panel());
			  this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			  this->CloseTab1 = (gcnew System::Windows::Forms::Button());
			  this->AD_AskHSC = (gcnew System::Windows::Forms::Label());
			  this->AD_selectHSC = (gcnew System::Windows::Forms::Button());
			  this->AD_HSClist = (gcnew System::Windows::Forms::ComboBox());
			  this->AD_stateHSC1 = (gcnew System::Windows::Forms::Label());
			  this->AD_warning1 = (gcnew System::Windows::Forms::Label());
			  this->AD_ModifyHSClist = (gcnew System::Windows::Forms::ComboBox());
			  this->AD_confirmedit = (gcnew System::Windows::Forms::Button());
			  this->AD_deleteHSC = (gcnew System::Windows::Forms::Button());
			  this->AD_addHSC = (gcnew System::Windows::Forms::Button());
			  this->AD_closeModify = (gcnew System::Windows::Forms::Button());
			  this->AD_TBinput = (gcnew System::Windows::Forms::TextBox());
			  this->AD_nameOfinput = (gcnew System::Windows::Forms::Label());
			  this->AD_groupchoice = (gcnew System::Windows::Forms::Panel());
			  this->AD_HCselected = (gcnew System::Windows::Forms::Button());
			  this->AD_HSselected = (gcnew System::Windows::Forms::Button());
			  this->AD_HNselected = (gcnew System::Windows::Forms::Button());
			  this->AD_HRselected = (gcnew System::Windows::Forms::Button());
			  this->AD_BPselected = (gcnew System::Windows::Forms::Button());
			  this->AD_RPselected = (gcnew System::Windows::Forms::Button());
			  this->AD_PRRselected = (gcnew System::Windows::Forms::Button());
			  this->AD_IDselected = (gcnew System::Windows::Forms::Button());
			  this->AD_headerModify = (gcnew System::Windows::Forms::Panel());
			  this->label3 = (gcnew System::Windows::Forms::Label());
			  this->AD_Hlist_combox = (gcnew System::Windows::Forms::ComboBox());
			  this->AD_edit_Hlist = (gcnew System::Windows::Forms::Panel());
			  this->AD_addHlayout = (gcnew System::Windows::Forms::Panel());
			  this->AD_HSPorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HSPorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_HPRBsorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HPRBsorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_HIDorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HIDorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_HRateorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HRateorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_HRPorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HRPorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_HBPorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HBPorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_addH = (gcnew System::Windows::Forms::Button());
			  this->AD_HNorder_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_HNorder_TB = (gcnew System::Windows::Forms::TextBox());
			  this->AD_Herror = (gcnew System::Windows::Forms::Label());
			  this->AD_waitingP = (gcnew System::Windows::Forms::Panel());
			  this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			  this->AD_deleteHlayout = (gcnew System::Windows::Forms::Panel());
			  this->label15 = (gcnew System::Windows::Forms::Label());
			  this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			  this->AD_DELhospitalRate = (gcnew System::Windows::Forms::Label());
			  this->AD_DELhospitalID = (gcnew System::Windows::Forms::Label());
			  this->AD_messegeState = (gcnew System::Windows::Forms::Label());
			  this->AD_HListDEL = (gcnew System::Windows::Forms::ComboBox());
			  this->AD_selectHD = (gcnew System::Windows::Forms::Button());
			  this->AD_header_editH = (gcnew System::Windows::Forms::Panel());
			  this->AD_deleteH = (gcnew System::Windows::Forms::Button());
			  this->AD_addH_but = (gcnew System::Windows::Forms::Button());
			  this->AD_viewAinfo = (gcnew System::Windows::Forms::Panel());
			  this->AD_AEmail = (gcnew System::Windows::Forms::Label());
			  this->AD_AGender = (gcnew System::Windows::Forms::Label());
			  this->AD_AphoneN = (gcnew System::Windows::Forms::Label());
			  this->AD_Aage = (gcnew System::Windows::Forms::Label());
			  this->AD_AID = (gcnew System::Windows::Forms::Label());
			  this->AD_startWindow = (gcnew System::Windows::Forms::Panel());
			  this->side_AD_bar_pn = (gcnew System::Windows::Forms::Panel());
			  this->AD_SortHospital = (gcnew System::Windows::Forms::Button());
			  this->AD_logout_but = (gcnew System::Windows::Forms::Button());
			  this->AD_dispatient_hos_but = (gcnew System::Windows::Forms::Button());
			  this->AD_dispaly_hos_but = (gcnew System::Windows::Forms::Button());
			  this->AD_modify_hos_but = (gcnew System::Windows::Forms::Button());
			  this->AD_addORdel_hos_but = (gcnew System::Windows::Forms::Button());
			  this->AD_info_pn = (gcnew System::Windows::Forms::Panel());
			  this->AD_DelAcc = (gcnew System::Windows::Forms::Button());
			  this->AddNewAdminbut = (gcnew System::Windows::Forms::Button());
			  this->edit_AInfo = (gcnew System::Windows::Forms::Button());
			  this->view_AInfo = (gcnew System::Windows::Forms::Button());
			  this->userType_lab = (gcnew System::Windows::Forms::Label());
			  this->FName_AD_lab = (gcnew System::Windows::Forms::Label());
			  this->AD_pic = (gcnew System::Windows::Forms::PictureBox());
			  this->PA_conpage = (gcnew System::Windows::Forms::Panel());
			  this->PA_pages = (gcnew System::Windows::Forms::Panel());
			  this->PA_viewHinfo = (gcnew System::Windows::Forms::Panel());
			  this->PA_AllhospitalData = (gcnew System::Windows::Forms::FlowLayoutPanel());
			  this->PA_Hinfo_HSplist = (gcnew System::Windows::Forms::ListBox());
			  this->PA_Hinfo_HCLlist = (gcnew System::Windows::Forms::ListBox());
			  this->PA_text2 = (gcnew System::Windows::Forms::Label());
			  this->PA_text1 = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_Bedprice = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_surgeryprice = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_Rprice = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_bedsAva = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_rate = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_Name = (gcnew System::Windows::Forms::Label());
			  this->PA_Hinfo_ID = (gcnew System::Windows::Forms::Label());
			  this->PA_viewHinfoHeader = (gcnew System::Windows::Forms::Panel());
			  this->PA_viewAllHButton = (gcnew System::Windows::Forms::Button());
			  this->label6 = (gcnew System::Windows::Forms::Label());
			  this->PA_viewHButton = (gcnew System::Windows::Forms::Button());
			  this->PA_viewHList = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_ModifyReserv = (gcnew System::Windows::Forms::Panel());
			  this->PA_modifyHRTRDsLayout = (gcnew System::Windows::Forms::Panel());
			  this->panel1 = (gcnew System::Windows::Forms::Panel());
			  this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			  this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			  this->label11 = (gcnew System::Windows::Forms::Label());
			  this->PA_Rnumbofdays = (gcnew System::Windows::Forms::TextBox());
			  this->PA_numofdays = (gcnew System::Windows::Forms::Label());
			  this->PA_Rlistmodify_but = (gcnew System::Windows::Forms::Button());
			  this->PA_listOfHRtypeRdays = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_StateOflist = (gcnew System::Windows::Forms::Label());
			  this->PA_OrderOflist = (gcnew System::Windows::Forms::Label());
			  this->PA_editNAPhnumlayout = (gcnew System::Windows::Forms::Panel());
			  this->PA_editRbutton = (gcnew System::Windows::Forms::Button());
			  this->PA_modifyRstate_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_modifyRord_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_modifyRord_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_groupCmodify = (gcnew System::Windows::Forms::Panel());
			  this->PA_MNumOfdays = (gcnew System::Windows::Forms::Button());
			  this->PA_MPRday = (gcnew System::Windows::Forms::Button());
			  this->PA_MPRtype = (gcnew System::Windows::Forms::Button());
			  this->PA_MRH = (gcnew System::Windows::Forms::Button());
			  this->PA_MPphNum = (gcnew System::Windows::Forms::Button());
			  this->PA_MPage = (gcnew System::Windows::Forms::Button());
			  this->PA_MPName = (gcnew System::Windows::Forms::Button());
			  this->PA_headerM = (gcnew System::Windows::Forms::Panel());
			  this->label14 = (gcnew System::Windows::Forms::Label());
			  this->messege = (gcnew System::Windows::Forms::Label());
			  this->PA_Rlistmodify_com = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_editReserv = (gcnew System::Windows::Forms::Panel());
			  this->PA_delRlayout = (gcnew System::Windows::Forms::Panel());
			  this->label2 = (gcnew System::Windows::Forms::Label());
			  this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			  this->PA_text4 = (gcnew System::Windows::Forms::Label());
			  this->PA_text3 = (gcnew System::Windows::Forms::Label());
			  this->PA_delRlist_state = (gcnew System::Windows::Forms::Label());
			  this->PA_delRlist_COM = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_delRlist_but = (gcnew System::Windows::Forms::Button());
			  this->PA_addRlayout = (gcnew System::Windows::Forms::Panel());
			  this->PA_PNumOfDays_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_PNumOfDays_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_Check1 = (gcnew System::Windows::Forms::Panel());
			  this->PA_askwhoreserv_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_askwhoreserv_RB2 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_askwhoreserv_RB1 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_Check2 = (gcnew System::Windows::Forms::Panel());
			  this->PA_RtypeCheck_RB2 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_RtypeCheck = (gcnew System::Windows::Forms::Label());
			  this->PA_RtypeCheck_RB1 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_DayenterH_COM = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_RSClist_COM = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_selectHforR_COM = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_DayenterH_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_PAord_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_PAord_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_selectHforR_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_RSClist_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_PphNord_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_PphNord_TB = (gcnew System::Windows::Forms::TextBox());
			  this->button1 = (gcnew System::Windows::Forms::Button());
			  this->PA_PNord_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_PNord_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_warningM = (gcnew System::Windows::Forms::Label());
			  this->PA_waitingeditRlist = (gcnew System::Windows::Forms::Panel());
			  this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			  this->PA_header_editRlist = (gcnew System::Windows::Forms::Panel());
			  this->PA_delRlist = (gcnew System::Windows::Forms::Button());
			  this->PA_addRlist = (gcnew System::Windows::Forms::Button());
			  this->PA_editPinfo = (gcnew System::Windows::Forms::Panel());
			  this->PA_editpass = (gcnew System::Windows::Forms::Panel());
			  this->PA_ShowNewPass = (gcnew System::Windows::Forms::Button());
			  this->PA_ShowOldPass = (gcnew System::Windows::Forms::Button());
			  this->PA_passState = (gcnew System::Windows::Forms::Label());
			  this->PA_Changepass = (gcnew System::Windows::Forms::Button());
			  this->PA_askconfPass_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_askconfPass_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_askNewPass_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_askNewPass_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_askOldPass_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_askOldPass_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_editRemain = (gcnew System::Windows::Forms::Panel());
			  this->button2 = (gcnew System::Windows::Forms::Button());
			  this->PA_editRemain_state = (gcnew System::Windows::Forms::Label());
			  this->PA_editRemain_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_editRemain_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_edit_waiting = (gcnew System::Windows::Forms::Panel());
			  this->PA_GofCHEditPinfo = (gcnew System::Windows::Forms::Panel());
			  this->PA_editPhNum = (gcnew System::Windows::Forms::Button());
			  this->PA_editpass_but = (gcnew System::Windows::Forms::Button());
			  this->PA_editusername = (gcnew System::Windows::Forms::Button());
			  this->PA_editAge = (gcnew System::Windows::Forms::Button());
			  this->PA_editName = (gcnew System::Windows::Forms::Button());
			  this->PA_SortingH = (gcnew System::Windows::Forms::Panel());
			  this->label4 = (gcnew System::Windows::Forms::Label());
			  this->PA_SortingHlist = (gcnew System::Windows::Forms::ListBox());
			  this->PA_Optionsort2 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_Optionsort3 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_Optionsort4 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_messege = (gcnew System::Windows::Forms::Label());
			  this->PA_Optionsort1 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_viewPinfo = (gcnew System::Windows::Forms::Panel());
			  this->PA_PNreservation = (gcnew System::Windows::Forms::Label());
			  this->PA_Ptotalpaid = (gcnew System::Windows::Forms::Label());
			  this->PA_PEmail = (gcnew System::Windows::Forms::Label());
			  this->PA_PGender = (gcnew System::Windows::Forms::Label());
			  this->PA_PphoneN = (gcnew System::Windows::Forms::Label());
			  this->PA_Page = (gcnew System::Windows::Forms::Label());
			  this->PA_PID = (gcnew System::Windows::Forms::Label());
			  this->PA_reservlist = (gcnew System::Windows::Forms::Panel());
			  this->PA_viewR_PAge = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_HSpCl = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_bedPrice = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_SurgeryPrice = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_ChandTPrice = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_phoneN = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_Day = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_HReserved = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_PName = (gcnew System::Windows::Forms::Label());
			  this->PA_viewR_RoomID = (gcnew System::Windows::Forms::Label());
			  this->PA_reservlist_header = (gcnew System::Windows::Forms::Panel());
			  this->label12 = (gcnew System::Windows::Forms::Label());
			  this->PA_viewRButton = (gcnew System::Windows::Forms::Button());
			  this->PA_viewRlist = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_viewLABR = (gcnew System::Windows::Forms::Panel());
			  this->PA_labRage = (gcnew System::Windows::Forms::Label());
			  this->PA_labRtestN = (gcnew System::Windows::Forms::Label());
			  this->PA_labRphN = (gcnew System::Windows::Forms::Label());
			  this->PA_labRgender = (gcnew System::Windows::Forms::Label());
			  this->PA_labRplace = (gcnew System::Windows::Forms::Label());
			  this->PA_labRname = (gcnew System::Windows::Forms::Label());
			  this->panel3 = (gcnew System::Windows::Forms::Panel());
			  this->label27 = (gcnew System::Windows::Forms::Label());
			  this->button4 = (gcnew System::Windows::Forms::Button());
			  this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_Editlaboratory = (gcnew System::Windows::Forms::Panel());
			  this->PA_Addlabo_layout = (gcnew System::Windows::Forms::Panel());
			  this->PA_chechwho = (gcnew System::Windows::Forms::Panel());
			  this->PA_LABwho_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABwho_RB2 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_LABwho_RB1 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_checkwhere = (gcnew System::Windows::Forms::Panel());
			  this->PA_LAB_RB2 = (gcnew System::Windows::Forms::RadioButton());
			  this->label9 = (gcnew System::Windows::Forms::Label());
			  this->PA_LAB_RB1 = (gcnew System::Windows::Forms::RadioButton());
			  this->PA_LABPHorLN_CB = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_LABPtestN_CB = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_LABPgender_CB = (gcnew System::Windows::Forms::ComboBox());
			  this->PA_LABPHorLN_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABPage_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABPage_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_LABPgender_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABPtestN_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABPphN_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABPphN_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_LABadd = (gcnew System::Windows::Forms::Button());
			  this->PA_LABPname_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_LABPname_TB = (gcnew System::Windows::Forms::TextBox());
			  this->PA_headerLAb = (gcnew System::Windows::Forms::Panel());
			  this->label1 = (gcnew System::Windows::Forms::Label());
			  this->PA_startwindow = (gcnew System::Windows::Forms::Panel());
			  this->side_PA_bar_pn = (gcnew System::Windows::Forms::Panel());
			  this->button5 = (gcnew System::Windows::Forms::Button());
			  this->PA_Editlaboratory_but = (gcnew System::Windows::Forms::Button());
			  this->PA_SortHospital = (gcnew System::Windows::Forms::Button());
			  this->PA_addORdelReserv = (gcnew System::Windows::Forms::Button());
			  this->PA_MOReserv = (gcnew System::Windows::Forms::Button());
			  this->PA_ViewReserveList = (gcnew System::Windows::Forms::Button());
			  this->PA_view_hosInfo = (gcnew System::Windows::Forms::Button());
			  this->PA_info_pn = (gcnew System::Windows::Forms::Panel());
			  this->PA_del = (gcnew System::Windows::Forms::Button());
			  this->edit_PInfo = (gcnew System::Windows::Forms::Button());
			  this->view_PInfo = (gcnew System::Windows::Forms::Button());
			  this->uesrType_PA_lab = (gcnew System::Windows::Forms::Label());
			  this->FName_PA_lab = (gcnew System::Windows::Forms::Label());
			  this->PA_pic = (gcnew System::Windows::Forms::PictureBox());
			  this->PA_logout_but = (gcnew System::Windows::Forms::Button());
			  this->StartUP_page->SuspendLayout();
			  this->SIgnUP_IN->SuspendLayout();
			  this->login_pn->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			  this->regis_pn->SuspendLayout();
			  this->Requset1->SuspendLayout();
			  this->Info->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			  this->AD_conpage->SuspendLayout();
			  this->AD_pages->SuspendLayout();
			  this->AD_view_Pinfo->SuspendLayout();
			  this->AD_viewPlist_header->SuspendLayout();
			  this->AD_view_Hinfo->SuspendLayout();
			  this->AD_viewHinfoHeader->SuspendLayout();
			  this->AD_SortingH->SuspendLayout();
			  this->AD_editAinfo->SuspendLayout();
			  this->AD_editRemain->SuspendLayout();
			  this->AD_editpass->SuspendLayout();
			  this->AD_GofCHEditAinfo->SuspendLayout();
			  this->AD_modify_Hinfo->SuspendLayout();
			  this->AD_Modifyinput->SuspendLayout();
			  this->AD_modifyHSC_layout->SuspendLayout();
			  this->AD_ADDHSC_lay->SuspendLayout();
			  this->AD_DELHSC_lay->SuspendLayout();
			  this->AD_groupchoice->SuspendLayout();
			  this->AD_headerModify->SuspendLayout();
			  this->AD_edit_Hlist->SuspendLayout();
			  this->AD_addHlayout->SuspendLayout();
			  this->AD_waitingP->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			  this->AD_deleteHlayout->SuspendLayout();
			  this->AD_header_editH->SuspendLayout();
			  this->AD_viewAinfo->SuspendLayout();
			  this->side_AD_bar_pn->SuspendLayout();
			  this->AD_info_pn->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AD_pic))->BeginInit();
			  this->PA_conpage->SuspendLayout();
			  this->PA_pages->SuspendLayout();
			  this->PA_viewHinfo->SuspendLayout();
			  this->PA_viewHinfoHeader->SuspendLayout();
			  this->PA_ModifyReserv->SuspendLayout();
			  this->PA_modifyHRTRDsLayout->SuspendLayout();
			  this->panel1->SuspendLayout();
			  this->PA_editNAPhnumlayout->SuspendLayout();
			  this->PA_groupCmodify->SuspendLayout();
			  this->PA_headerM->SuspendLayout();
			  this->PA_editReserv->SuspendLayout();
			  this->PA_delRlayout->SuspendLayout();
			  this->PA_addRlayout->SuspendLayout();
			  this->PA_Check1->SuspendLayout();
			  this->PA_Check2->SuspendLayout();
			  this->PA_waitingeditRlist->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			  this->PA_header_editRlist->SuspendLayout();
			  this->PA_editPinfo->SuspendLayout();
			  this->PA_editpass->SuspendLayout();
			  this->PA_editRemain->SuspendLayout();
			  this->PA_GofCHEditPinfo->SuspendLayout();
			  this->PA_SortingH->SuspendLayout();
			  this->PA_viewPinfo->SuspendLayout();
			  this->PA_reservlist->SuspendLayout();
			  this->PA_reservlist_header->SuspendLayout();
			  this->PA_viewLABR->SuspendLayout();
			  this->panel3->SuspendLayout();
			  this->PA_Editlaboratory->SuspendLayout();
			  this->PA_Addlabo_layout->SuspendLayout();
			  this->PA_chechwho->SuspendLayout();
			  this->PA_checkwhere->SuspendLayout();
			  this->PA_headerLAb->SuspendLayout();
			  this->side_PA_bar_pn->SuspendLayout();
			  this->PA_info_pn->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA_pic))->BeginInit();
			  this->SuspendLayout();
			  // 
			  // userBox
			  // 
			  this->userBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->userBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->userBox->Location = System::Drawing::Point(377, 372);
			  this->userBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->userBox->Name = L"userBox";
			  this->userBox->Size = System::Drawing::Size(333, 34);
			  this->userBox->TabIndex = 3;
			  this->userBox->Enter += gcnew System::EventHandler(this, &mainPage::userBox_Enter);
			  this->userBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::userBox_KeyPress);
			  this->userBox->Leave += gcnew System::EventHandler(this, &mainPage::userBox_Leave);
			  // 
			  // passBox
			  // 
			  this->passBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->passBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->passBox->Location = System::Drawing::Point(377, 421);
			  this->passBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->passBox->Name = L"passBox";
			  this->passBox->Size = System::Drawing::Size(333, 34);
			  this->passBox->TabIndex = 4;
			  this->passBox->Enter += gcnew System::EventHandler(this, &mainPage::passBox_Enter);
			  this->passBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::passBox_KeyPress);
			  this->passBox->Leave += gcnew System::EventHandler(this, &mainPage::passBox_Leave);
			  // 
			  // StartUP_page
			  // 
			  this->StartUP_page->Controls->Add(this->SIgnUP_IN);
			  this->StartUP_page->Controls->Add(this->Requset1);
			  this->StartUP_page->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->StartUP_page->Location = System::Drawing::Point(0, 0);
			  this->StartUP_page->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->StartUP_page->Name = L"StartUP_page";
			  this->StartUP_page->Size = System::Drawing::Size(1536, 841);
			  this->StartUP_page->TabIndex = 6;
			  // 
			  // SIgnUP_IN
			  // 
			  this->SIgnUP_IN->Controls->Add(this->login_pn);
			  this->SIgnUP_IN->Controls->Add(this->regis_pn);
			  this->SIgnUP_IN->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->SIgnUP_IN->Location = System::Drawing::Point(0, 0);
			  this->SIgnUP_IN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->SIgnUP_IN->Name = L"SIgnUP_IN";
			  this->SIgnUP_IN->Size = System::Drawing::Size(1147, 841);
			  this->SIgnUP_IN->TabIndex = 23;
			  // 
			  // login_pn
			  // 
			  this->login_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_pn.BackgroundImage")));
			  this->login_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->login_pn->Controls->Add(this->pictureBox4);
			  this->login_pn->Controls->Add(this->pictureBox3);
			  this->login_pn->Controls->Add(this->SignIUP_but);
			  this->login_pn->Controls->Add(this->warning_massage);
			  this->login_pn->Controls->Add(this->ProjectInfo);
			  this->login_pn->Controls->Add(this->label7);
			  this->login_pn->Controls->Add(this->requsetid);
			  this->login_pn->Controls->Add(this->requsetpass);
			  this->login_pn->Controls->Add(this->login_ShowPass_but);
			  this->login_pn->Controls->Add(this->passBox);
			  this->login_pn->Controls->Add(this->userBox);
			  this->login_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->login_pn->Location = System::Drawing::Point(0, 0);
			  this->login_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->login_pn->Name = L"login_pn";
			  this->login_pn->Size = System::Drawing::Size(1147, 841);
			  this->login_pn->TabIndex = 23;
			  // 
			  // pictureBox4
			  // 
			  this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			  this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			  this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->pictureBox4->Location = System::Drawing::Point(328, 370);
			  this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			  this->pictureBox4->Name = L"pictureBox4";
			  this->pictureBox4->Size = System::Drawing::Size(32, 32);
			  this->pictureBox4->TabIndex = 25;
			  this->pictureBox4->TabStop = false;
			  // 
			  // pictureBox3
			  // 
			  this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			  this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			  this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->pictureBox3->Location = System::Drawing::Point(327, 420);
			  this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			  this->pictureBox3->Name = L"pictureBox3";
			  this->pictureBox3->Size = System::Drawing::Size(33, 33);
			  this->pictureBox3->TabIndex = 24;
			  this->pictureBox3->TabStop = false;
			  // 
			  // SignIUP_but
			  // 
			  this->SignIUP_but->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				  static_cast<System::Int32>(static_cast<System::Byte>(214)));
			  this->SignIUP_but->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				  static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			  this->SignIUP_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->SignIUP_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->SignIUP_but->ForeColor = System::Drawing::SystemColors::Control;
			  this->SignIUP_but->Location = System::Drawing::Point(376, 534);
			  this->SignIUP_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->SignIUP_but->Name = L"SignIUP_but";
			  this->SignIUP_but->Size = System::Drawing::Size(336, 39);
			  this->SignIUP_but->TabIndex = 23;
			  this->SignIUP_but->Text = L"Log in";
			  this->SignIUP_but->UseVisualStyleBackColor = false;
			  this->SignIUP_but->Click += gcnew System::EventHandler(this, &mainPage::SignIUP_but_Click);
			  this->SignIUP_but->Leave += gcnew System::EventHandler(this, &mainPage::SignIUP_but_Leave);
			  // 
			  // warning_massage
			  // 
			  this->warning_massage->AutoSize = true;
			  this->warning_massage->BackColor = System::Drawing::Color::Transparent;
			  this->warning_massage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.753846F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->warning_massage->ForeColor = System::Drawing::Color::DarkRed;
			  this->warning_massage->Location = System::Drawing::Point(359, 480);
			  this->warning_massage->Name = L"warning_massage";
			  this->warning_massage->Size = System::Drawing::Size(10, 16);
			  this->warning_massage->TabIndex = 6;
			  this->warning_massage->Text = L".";
			  // 
			  // ProjectInfo
			  // 
			  this->ProjectInfo->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				  static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			  this->ProjectInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			  this->ProjectInfo->AutoSize = true;
			  this->ProjectInfo->BackColor = System::Drawing::Color::Transparent;
			  this->ProjectInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->ProjectInfo->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				  static_cast<System::Int32>(static_cast<System::Byte>(224)));
			  this->ProjectInfo->Location = System::Drawing::Point(15, 798);
			  this->ProjectInfo->Name = L"ProjectInfo";
			  this->ProjectInfo->Size = System::Drawing::Size(121, 31);
			  this->ProjectInfo->TabIndex = 22;
			  this->ProjectInfo->TabStop = true;
			  this->ProjectInfo->Text = L"About us";
			  this->ProjectInfo->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &mainPage::ProjectInfo_LinkClicked);
			  // 
			  // label7
			  // 
			  this->label7->AutoSize = true;
			  this->label7->BackColor = System::Drawing::Color::Transparent;
			  this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			  this->label7->Location = System::Drawing::Point(348, 185);
			  this->label7->Name = L"label7";
			  this->label7->Size = System::Drawing::Size(128, 36);
			  this->label7->TabIndex = 21;
			  this->label7->Text = L"login by ";
			  // 
			  // requsetid
			  // 
			  this->requsetid->AutoSize = true;
			  this->requsetid->BackColor = System::Drawing::Color::Transparent;
			  this->requsetid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->requsetid->Location = System::Drawing::Point(593, 250);
			  this->requsetid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->requsetid->Name = L"requsetid";
			  this->requsetid->Size = System::Drawing::Size(136, 40);
			  this->requsetid->TabIndex = 20;
			  this->requsetid->Text = L"User ID";
			  this->requsetid->UseVisualStyleBackColor = false;
			  this->requsetid->CheckedChanged += gcnew System::EventHandler(this, &mainPage::requsetid_CheckedChanged);
			  // 
			  // requsetpass
			  // 
			  this->requsetpass->AutoSize = true;
			  this->requsetpass->BackColor = System::Drawing::Color::Transparent;
			  this->requsetpass->Checked = true;
			  this->requsetpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->requsetpass->Location = System::Drawing::Point(335, 250);
			  this->requsetpass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->requsetpass->Name = L"requsetpass";
			  this->requsetpass->Size = System::Drawing::Size(168, 40);
			  this->requsetpass->TabIndex = 19;
			  this->requsetpass->TabStop = true;
			  this->requsetpass->Text = L"Password";
			  this->requsetpass->UseVisualStyleBackColor = false;
			  // 
			  // login_ShowPass_but
			  // 
			  this->login_ShowPass_but->BackColor = System::Drawing::Color::WhiteSmoke;
			  this->login_ShowPass_but->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_ShowPass_but.BackgroundImage")));
			  this->login_ShowPass_but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->login_ShowPass_but->FlatAppearance->BorderSize = 0;
			  this->login_ShowPass_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->login_ShowPass_but->Location = System::Drawing::Point(728, 423);
			  this->login_ShowPass_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->login_ShowPass_but->Name = L"login_ShowPass_but";
			  this->login_ShowPass_but->Size = System::Drawing::Size(36, 32);
			  this->login_ShowPass_but->TabIndex = 17;
			  this->login_ShowPass_but->UseVisualStyleBackColor = false;
			  this->login_ShowPass_but->Click += gcnew System::EventHandler(this, &mainPage::login_ShowPass_but_Click);
			  // 
			  // regis_pn
			  // 
			  this->regis_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"regis_pn.BackgroundImage")));
			  this->regis_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->regis_pn->Controls->Add(this->Sgender);
			  this->regis_pn->Controls->Add(this->regis_selectgender);
			  this->regis_pn->Controls->Add(this->regis_readPolicies);
			  this->regis_pn->Controls->Add(this->regis_state);
			  this->regis_pn->Controls->Add(this->regis_ShowPass_but);
			  this->regis_pn->Controls->Add(this->regis_ConPass_TBox);
			  this->regis_pn->Controls->Add(this->regis_ConPass_lab);
			  this->regis_pn->Controls->Add(this->regis_Pass_TBox);
			  this->regis_pn->Controls->Add(this->regis_pass_lab);
			  this->regis_pn->Controls->Add(this->regis_phonenumber_textbox);
			  this->regis_pn->Controls->Add(this->regis_age_lab);
			  this->regis_pn->Controls->Add(this->registration_but);
			  this->regis_pn->Controls->Add(this->regis_age_textbox);
			  this->regis_pn->Controls->Add(this->regis_username_textbox);
			  this->regis_pn->Controls->Add(this->regis_name_textbox);
			  this->regis_pn->Controls->Add(this->regis_phonenumber_lab);
			  this->regis_pn->Controls->Add(this->regis_username_lab);
			  this->regis_pn->Controls->Add(this->regis_name_lab);
			  this->regis_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->regis_pn->Location = System::Drawing::Point(0, 0);
			  this->regis_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_pn->Name = L"regis_pn";
			  this->regis_pn->Size = System::Drawing::Size(1147, 841);
			  this->regis_pn->TabIndex = 7;
			  // 
			  // Sgender
			  // 
			  this->Sgender->AutoSize = true;
			  this->Sgender->BackColor = System::Drawing::Color::Transparent;
			  this->Sgender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->Sgender->ForeColor = System::Drawing::Color::White;
			  this->Sgender->Location = System::Drawing::Point(25, 550);
			  this->Sgender->Name = L"Sgender";
			  this->Sgender->Size = System::Drawing::Size(234, 39);
			  this->Sgender->TabIndex = 23;
			  this->Sgender->Text = L"Select Gender";
			  // 
			  // regis_selectgender
			  // 
			  this->regis_selectgender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->regis_selectgender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_selectgender->FormattingEnabled = true;
			  this->regis_selectgender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			  this->regis_selectgender->Location = System::Drawing::Point(404, 549);
			  this->regis_selectgender->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_selectgender->Name = L"regis_selectgender";
			  this->regis_selectgender->Size = System::Drawing::Size(489, 48);
			  this->regis_selectgender->TabIndex = 22;
			  // 
			  // regis_readPolicies
			  // 
			  this->regis_readPolicies->AutoSize = true;
			  this->regis_readPolicies->BackColor = System::Drawing::Color::Transparent;
			  this->regis_readPolicies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_readPolicies->ForeColor = System::Drawing::Color::White;
			  this->regis_readPolicies->Location = System::Drawing::Point(25, 711);
			  this->regis_readPolicies->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_readPolicies->Name = L"regis_readPolicies";
			  this->regis_readPolicies->Size = System::Drawing::Size(298, 29);
			  this->regis_readPolicies->TabIndex = 21;
			  this->regis_readPolicies->Text = L"I read all policies and agree";
			  this->regis_readPolicies->UseVisualStyleBackColor = false;
			  this->regis_readPolicies->CheckedChanged += gcnew System::EventHandler(this, &mainPage::regis_readPolicies_CheckedChanged);
			  // 
			  // regis_state
			  // 
			  this->regis_state->AutoSize = true;
			  this->regis_state->BackColor = System::Drawing::Color::Transparent;
			  this->regis_state->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->regis_state->ForeColor = System::Drawing::Color::White;
			  this->regis_state->Location = System::Drawing::Point(29, 641);
			  this->regis_state->Name = L"regis_state";
			  this->regis_state->Size = System::Drawing::Size(12, 18);
			  this->regis_state->TabIndex = 20;
			  this->regis_state->Text = L".";
			  // 
			  // regis_ShowPass_but
			  // 
			  this->regis_ShowPass_but->BackColor = System::Drawing::Color::Transparent;
			  this->regis_ShowPass_but->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"regis_ShowPass_but.BackgroundImage")));
			  this->regis_ShowPass_but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->regis_ShowPass_but->FlatAppearance->BorderSize = 2;
			  this->regis_ShowPass_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->regis_ShowPass_but->Location = System::Drawing::Point(941, 414);
			  this->regis_ShowPass_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_ShowPass_but->Name = L"regis_ShowPass_but";
			  this->regis_ShowPass_but->Size = System::Drawing::Size(29, 28);
			  this->regis_ShowPass_but->TabIndex = 16;
			  this->regis_ShowPass_but->UseVisualStyleBackColor = true;
			  this->regis_ShowPass_but->Click += gcnew System::EventHandler(this, &mainPage::regis_ShowPass_but_Click);
			  // 
			  // regis_ConPass_TBox
			  // 
			  this->regis_ConPass_TBox->BackColor = System::Drawing::SystemColors::Window;
			  this->regis_ConPass_TBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->regis_ConPass_TBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_ConPass_TBox->Location = System::Drawing::Point(405, 470);
			  this->regis_ConPass_TBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_ConPass_TBox->Name = L"regis_ConPass_TBox";
			  this->regis_ConPass_TBox->Size = System::Drawing::Size(488, 42);
			  this->regis_ConPass_TBox->TabIndex = 15;
			  this->regis_ConPass_TBox->UseSystemPasswordChar = true;
			  // 
			  // regis_ConPass_lab
			  // 
			  this->regis_ConPass_lab->AutoSize = true;
			  this->regis_ConPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->regis_ConPass_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_ConPass_lab->ForeColor = System::Drawing::Color::White;
			  this->regis_ConPass_lab->Location = System::Drawing::Point(25, 471);
			  this->regis_ConPass_lab->Name = L"regis_ConPass_lab";
			  this->regis_ConPass_lab->Size = System::Drawing::Size(313, 39);
			  this->regis_ConPass_lab->TabIndex = 14;
			  this->regis_ConPass_lab->Text = L"Confirm Password :";
			  // 
			  // regis_Pass_TBox
			  // 
			  this->regis_Pass_TBox->BackColor = System::Drawing::SystemColors::Window;
			  this->regis_Pass_TBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->regis_Pass_TBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_Pass_TBox->Location = System::Drawing::Point(403, 391);
			  this->regis_Pass_TBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_Pass_TBox->Name = L"regis_Pass_TBox";
			  this->regis_Pass_TBox->Size = System::Drawing::Size(489, 42);
			  this->regis_Pass_TBox->TabIndex = 13;
			  this->regis_Pass_TBox->UseSystemPasswordChar = true;
			  // 
			  // regis_pass_lab
			  // 
			  this->regis_pass_lab->AutoSize = true;
			  this->regis_pass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->regis_pass_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->regis_pass_lab->ForeColor = System::Drawing::Color::White;
			  this->regis_pass_lab->Location = System::Drawing::Point(25, 393);
			  this->regis_pass_lab->Name = L"regis_pass_lab";
			  this->regis_pass_lab->Size = System::Drawing::Size(185, 39);
			  this->regis_pass_lab->TabIndex = 12;
			  this->regis_pass_lab->Text = L"Password :";
			  // 
			  // regis_phonenumber_textbox
			  // 
			  this->regis_phonenumber_textbox->BackColor = System::Drawing::SystemColors::Window;
			  this->regis_phonenumber_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->regis_phonenumber_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_phonenumber_textbox->Location = System::Drawing::Point(403, 313);
			  this->regis_phonenumber_textbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_phonenumber_textbox->Name = L"regis_phonenumber_textbox";
			  this->regis_phonenumber_textbox->Size = System::Drawing::Size(489, 42);
			  this->regis_phonenumber_textbox->TabIndex = 11;
			  this->regis_phonenumber_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::regis_phonenumber_textbox_KeyPress);
			  // 
			  // regis_age_lab
			  // 
			  this->regis_age_lab->AutoSize = true;
			  this->regis_age_lab->BackColor = System::Drawing::Color::Transparent;
			  this->regis_age_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->regis_age_lab->ForeColor = System::Drawing::Color::White;
			  this->regis_age_lab->Location = System::Drawing::Point(25, 235);
			  this->regis_age_lab->Name = L"regis_age_lab";
			  this->regis_age_lab->Size = System::Drawing::Size(105, 39);
			  this->regis_age_lab->TabIndex = 10;
			  this->regis_age_lab->Text = L"Age  :";
			  // 
			  // registration_but
			  // 
			  this->registration_but->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				  static_cast<System::Int32>(static_cast<System::Byte>(104)));
			  this->registration_but->FlatAppearance->BorderColor = System::Drawing::Color::White;
			  this->registration_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->registration_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->registration_but->ForeColor = System::Drawing::Color::White;
			  this->registration_but->Location = System::Drawing::Point(555, 698);
			  this->registration_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->registration_but->Name = L"registration_but";
			  this->registration_but->Size = System::Drawing::Size(195, 52);
			  this->registration_but->TabIndex = 9;
			  this->registration_but->Text = L"registration";
			  this->registration_but->UseVisualStyleBackColor = false;
			  this->registration_but->Visible = false;
			  this->registration_but->Click += gcnew System::EventHandler(this, &mainPage::registration_but_Click);
			  // 
			  // regis_age_textbox
			  // 
			  this->regis_age_textbox->BackColor = System::Drawing::SystemColors::Window;
			  this->regis_age_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->regis_age_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_age_textbox->Location = System::Drawing::Point(405, 234);
			  this->regis_age_textbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_age_textbox->Name = L"regis_age_textbox";
			  this->regis_age_textbox->Size = System::Drawing::Size(489, 42);
			  this->regis_age_textbox->TabIndex = 7;
			  this->regis_age_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::regis_age_textbox_KeyPress);
			  // 
			  // regis_username_textbox
			  // 
			  this->regis_username_textbox->BackColor = System::Drawing::SystemColors::Window;
			  this->regis_username_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->regis_username_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_username_textbox->Location = System::Drawing::Point(405, 155);
			  this->regis_username_textbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_username_textbox->Name = L"regis_username_textbox";
			  this->regis_username_textbox->Size = System::Drawing::Size(489, 42);
			  this->regis_username_textbox->TabIndex = 5;
			  this->regis_username_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::regis_username_textbox_KeyPress);
			  // 
			  // regis_name_textbox
			  // 
			  this->regis_name_textbox->BackColor = System::Drawing::SystemColors::Window;
			  this->regis_name_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->regis_name_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_name_textbox->Location = System::Drawing::Point(405, 76);
			  this->regis_name_textbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->regis_name_textbox->Name = L"regis_name_textbox";
			  this->regis_name_textbox->Size = System::Drawing::Size(491, 42);
			  this->regis_name_textbox->TabIndex = 4;
			  // 
			  // regis_phonenumber_lab
			  // 
			  this->regis_phonenumber_lab->AutoSize = true;
			  this->regis_phonenumber_lab->BackColor = System::Drawing::Color::Transparent;
			  this->regis_phonenumber_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_phonenumber_lab->ForeColor = System::Drawing::Color::White;
			  this->regis_phonenumber_lab->Location = System::Drawing::Point(25, 314);
			  this->regis_phonenumber_lab->Name = L"regis_phonenumber_lab";
			  this->regis_phonenumber_lab->Size = System::Drawing::Size(258, 39);
			  this->regis_phonenumber_lab->TabIndex = 3;
			  this->regis_phonenumber_lab->Text = L"Phone number :";
			  // 
			  // regis_username_lab
			  // 
			  this->regis_username_lab->AutoSize = true;
			  this->regis_username_lab->BackColor = System::Drawing::Color::Transparent;
			  this->regis_username_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->regis_username_lab->ForeColor = System::Drawing::Color::White;
			  this->regis_username_lab->Location = System::Drawing::Point(25, 156);
			  this->regis_username_lab->Name = L"regis_username_lab";
			  this->regis_username_lab->Size = System::Drawing::Size(192, 39);
			  this->regis_username_lab->TabIndex = 1;
			  this->regis_username_lab->Text = L"Username :";
			  // 
			  // regis_name_lab
			  // 
			  this->regis_name_lab->AutoSize = true;
			  this->regis_name_lab->BackColor = System::Drawing::Color::Transparent;
			  this->regis_name_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->regis_name_lab->ForeColor = System::Drawing::Color::White;
			  this->regis_name_lab->Location = System::Drawing::Point(25, 78);
			  this->regis_name_lab->Name = L"regis_name_lab";
			  this->regis_name_lab->Size = System::Drawing::Size(191, 39);
			  this->regis_name_lab->TabIndex = 0;
			  this->regis_name_lab->Text = L"Full Name :";
			  // 
			  // Requset1
			  // 
			  this->Requset1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				  static_cast<System::Int32>(static_cast<System::Byte>(74)));
			  this->Requset1->Controls->Add(this->request_regis_but);
			  this->Requset1->Controls->Add(this->RequsetToRegis);
			  this->Requset1->Dock = System::Windows::Forms::DockStyle::Right;
			  this->Requset1->Location = System::Drawing::Point(1147, 0);
			  this->Requset1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->Requset1->Name = L"Requset1";
			  this->Requset1->Size = System::Drawing::Size(389, 841);
			  this->Requset1->TabIndex = 18;
			  // 
			  // request_regis_but
			  // 
			  this->request_regis_but->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				  static_cast<System::Int32>(static_cast<System::Byte>(74)));
			  this->request_regis_but->FlatAppearance->BorderColor = System::Drawing::Color::White;
			  this->request_regis_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->request_regis_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->request_regis_but->ForeColor = System::Drawing::SystemColors::Control;
			  this->request_regis_but->Location = System::Drawing::Point(57, 359);
			  this->request_regis_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->request_regis_but->Name = L"request_regis_but";
			  this->request_regis_but->Size = System::Drawing::Size(213, 44);
			  this->request_regis_but->TabIndex = 8;
			  this->request_regis_but->Text = L"Sign UP";
			  this->request_regis_but->UseVisualStyleBackColor = false;
			  this->request_regis_but->Click += gcnew System::EventHandler(this, &mainPage::request_regis_but_Click);
			  // 
			  // RequsetToRegis
			  // 
			  this->RequsetToRegis->AutoSize = true;
			  this->RequsetToRegis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->RequsetToRegis->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			  this->RequsetToRegis->Location = System::Drawing::Point(5, 287);
			  this->RequsetToRegis->Name = L"RequsetToRegis";
			  this->RequsetToRegis->Size = System::Drawing::Size(318, 31);
			  this->RequsetToRegis->TabIndex = 7;
			  this->RequsetToRegis->Text = L"You don\'t have account \?";
			  // 
			  // Info
			  // 
			  this->Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				  static_cast<System::Int32>(static_cast<System::Byte>(109)));
			  this->Info->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->Info->Controls->Add(this->label10);
			  this->Info->Controls->Add(this->backtolog);
			  this->Info->Controls->Add(this->pictureBox5);
			  this->Info->Controls->Add(this->label19);
			  this->Info->Controls->Add(this->IDMember7);
			  this->Info->Controls->Add(this->member7);
			  this->Info->Controls->Add(this->IDMember6);
			  this->Info->Controls->Add(this->member6);
			  this->Info->Controls->Add(this->IDMember5);
			  this->Info->Controls->Add(this->member5);
			  this->Info->Controls->Add(this->IDMember3);
			  this->Info->Controls->Add(this->member3);
			  this->Info->Controls->Add(this->IDMember4);
			  this->Info->Controls->Add(this->member4);
			  this->Info->Controls->Add(this->IDMember2);
			  this->Info->Controls->Add(this->member2);
			  this->Info->Controls->Add(this->IDMember1);
			  this->Info->Controls->Add(this->member1);
			  this->Info->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->Info->Location = System::Drawing::Point(0, 0);
			  this->Info->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->Info->Name = L"Info";
			  this->Info->Size = System::Drawing::Size(1536, 841);
			  this->Info->TabIndex = 23;
			  // 
			  // label10
			  // 
			  this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->label10->AutoSize = true;
			  this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label10->ForeColor = System::Drawing::Color::White;
			  this->label10->Location = System::Drawing::Point(248, 62);
			  this->label10->Name = L"label10";
			  this->label10->Size = System::Drawing::Size(131, 36);
			  this->label10->TabIndex = 25;
			  this->label10->Text = L"GEN_45";
			  // 
			  // backtolog
			  // 
			  this->backtolog->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				  static_cast<System::Int32>(static_cast<System::Byte>(0)));
			  this->backtolog->AutoSize = true;
			  this->backtolog->Dock = System::Windows::Forms::DockStyle::Right;
			  this->backtolog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->backtolog->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				  static_cast<System::Int32>(static_cast<System::Byte>(224)));
			  this->backtolog->Location = System::Drawing::Point(462, 0);
			  this->backtolog->Name = L"backtolog";
			  this->backtolog->Size = System::Drawing::Size(166, 31);
			  this->backtolog->TabIndex = 23;
			  this->backtolog->TabStop = true;
			  this->backtolog->Text = L"back to login";
			  this->backtolog->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				  static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			  this->backtolog->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &mainPage::backtolog_LinkClicked);
			  // 
			  // pictureBox5
			  // 
			  this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			  this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Right;
			  this->pictureBox5->Location = System::Drawing::Point(628, 0);
			  this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			  this->pictureBox5->Name = L"pictureBox5";
			  this->pictureBox5->Size = System::Drawing::Size(908, 841);
			  this->pictureBox5->TabIndex = 24;
			  this->pictureBox5->TabStop = false;
			  // 
			  // label19
			  // 
			  this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->label19->AutoSize = true;
			  this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label19->ForeColor = System::Drawing::Color::White;
			  this->label19->Location = System::Drawing::Point(191, 126);
			  this->label19->Name = L"label19";
			  this->label19->Size = System::Drawing::Size(216, 36);
			  this->label19->TabIndex = 14;
			  this->label19->Text = L"Team members";
			  // 
			  // IDMember7
			  // 
			  this->IDMember7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember7->AutoSize = true;
			  this->IDMember7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember7->ForeColor = System::Drawing::Color::White;
			  this->IDMember7->Location = System::Drawing::Point(332, 649);
			  this->IDMember7->Name = L"IDMember7";
			  this->IDMember7->Size = System::Drawing::Size(222, 36);
			  this->IDMember7->TabIndex = 13;
			  this->IDMember7->Text = L"ID:2023170152";
			  // 
			  // member7
			  // 
			  this->member7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member7->AutoSize = true;
			  this->member7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member7->ForeColor = System::Drawing::Color::White;
			  this->member7->Location = System::Drawing::Point(57, 649);
			  this->member7->Name = L"member7";
			  this->member7->Size = System::Drawing::Size(183, 36);
			  this->member7->TabIndex = 12;
			  this->member7->Text = L"Toka Ahmed";
			  // 
			  // IDMember6
			  // 
			  this->IDMember6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember6->AutoSize = true;
			  this->IDMember6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember6->ForeColor = System::Drawing::Color::White;
			  this->IDMember6->Location = System::Drawing::Point(332, 574);
			  this->IDMember6->Name = L"IDMember6";
			  this->IDMember6->Size = System::Drawing::Size(222, 36);
			  this->IDMember6->TabIndex = 11;
			  this->IDMember6->Text = L"ID:2023170186";
			  // 
			  // member6
			  // 
			  this->member6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member6->AutoSize = true;
			  this->member6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member6->ForeColor = System::Drawing::Color::White;
			  this->member6->Location = System::Drawing::Point(57, 574);
			  this->member6->Name = L"member6";
			  this->member6->Size = System::Drawing::Size(210, 36);
			  this->member6->TabIndex = 10;
			  this->member6->Text = L"Habiba Khaled";
			  // 
			  // IDMember5
			  // 
			  this->IDMember5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember5->AutoSize = true;
			  this->IDMember5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember5->ForeColor = System::Drawing::Color::White;
			  this->IDMember5->Location = System::Drawing::Point(332, 500);
			  this->IDMember5->Name = L"IDMember5";
			  this->IDMember5->Size = System::Drawing::Size(222, 36);
			  this->IDMember5->TabIndex = 9;
			  this->IDMember5->Text = L"ID:2023170570";
			  // 
			  // member5
			  // 
			  this->member5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member5->AutoSize = true;
			  this->member5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member5->ForeColor = System::Drawing::Color::White;
			  this->member5->Location = System::Drawing::Point(57, 500);
			  this->member5->Name = L"member5";
			  this->member5->Size = System::Drawing::Size(215, 36);
			  this->member5->TabIndex = 8;
			  this->member5->Text = L"Marwan Sobhy";
			  // 
			  // IDMember3
			  // 
			  this->IDMember3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember3->AutoSize = true;
			  this->IDMember3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember3->ForeColor = System::Drawing::Color::White;
			  this->IDMember3->Location = System::Drawing::Point(332, 352);
			  this->IDMember3->Name = L"IDMember3";
			  this->IDMember3->Size = System::Drawing::Size(222, 36);
			  this->IDMember3->TabIndex = 7;
			  this->IDMember3->Text = L"ID:2023170585";
			  // 
			  // member3
			  // 
			  this->member3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member3->AutoSize = true;
			  this->member3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member3->ForeColor = System::Drawing::Color::White;
			  this->member3->Location = System::Drawing::Point(57, 352);
			  this->member3->Name = L"member3";
			  this->member3->Size = System::Drawing::Size(188, 36);
			  this->member3->TabIndex = 6;
			  this->member3->Text = L"Mariam Said ";
			  // 
			  // IDMember4
			  // 
			  this->IDMember4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember4->AutoSize = true;
			  this->IDMember4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember4->ForeColor = System::Drawing::Color::White;
			  this->IDMember4->Location = System::Drawing::Point(332, 426);
			  this->IDMember4->Name = L"IDMember4";
			  this->IDMember4->Size = System::Drawing::Size(222, 36);
			  this->IDMember4->TabIndex = 5;
			  this->IDMember4->Text = L"ID:2023170184";
			  // 
			  // member4
			  // 
			  this->member4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member4->AutoSize = true;
			  this->member4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member4->ForeColor = System::Drawing::Color::White;
			  this->member4->Location = System::Drawing::Point(57, 426);
			  this->member4->Name = L"member4";
			  this->member4->Size = System::Drawing::Size(191, 36);
			  this->member4->TabIndex = 4;
			  this->member4->Text = L"Habiba Basel";
			  // 
			  // IDMember2
			  // 
			  this->IDMember2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember2->AutoSize = true;
			  this->IDMember2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember2->ForeColor = System::Drawing::Color::White;
			  this->IDMember2->Location = System::Drawing::Point(332, 278);
			  this->IDMember2->Name = L"IDMember2";
			  this->IDMember2->Size = System::Drawing::Size(222, 36);
			  this->IDMember2->TabIndex = 3;
			  this->IDMember2->Text = L"ID:2023170271";
			  // 
			  // member2
			  // 
			  this->member2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member2->AutoSize = true;
			  this->member2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member2->ForeColor = System::Drawing::Color::White;
			  this->member2->Location = System::Drawing::Point(57, 278);
			  this->member2->Name = L"member2";
			  this->member2->Size = System::Drawing::Size(245, 36);
			  this->member2->TabIndex = 2;
			  this->member2->Text = L"Samaa Mohamed";
			  // 
			  // IDMember1
			  // 
			  this->IDMember1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->IDMember1->AutoSize = true;
			  this->IDMember1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->IDMember1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->IDMember1->ForeColor = System::Drawing::Color::White;
			  this->IDMember1->Location = System::Drawing::Point(332, 204);
			  this->IDMember1->Name = L"IDMember1";
			  this->IDMember1->Size = System::Drawing::Size(222, 36);
			  this->IDMember1->TabIndex = 1;
			  this->IDMember1->Text = L"ID:2023170714";
			  // 
			  // member1
			  // 
			  this->member1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left));
			  this->member1->AutoSize = true;
			  this->member1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->member1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->member1->ForeColor = System::Drawing::Color::White;
			  this->member1->Location = System::Drawing::Point(57, 204);
			  this->member1->Name = L"member1";
			  this->member1->Size = System::Drawing::Size(251, 36);
			  this->member1->TabIndex = 0;
			  this->member1->Text = L"Youssif El-Sayed ";
			  // 
			  // AD_conpage
			  // 
			  this->AD_conpage->Controls->Add(this->AD_pages);
			  this->AD_conpage->Controls->Add(this->side_AD_bar_pn);
			  this->AD_conpage->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_conpage->Location = System::Drawing::Point(0, 0);
			  this->AD_conpage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_conpage->Name = L"AD_conpage";
			  this->AD_conpage->Size = System::Drawing::Size(1536, 841);
			  this->AD_conpage->TabIndex = 8;
			  // 
			  // AD_pages
			  // 
			  this->AD_pages->Controls->Add(this->AD_view_Pinfo);
			  this->AD_pages->Controls->Add(this->AD_view_Hinfo);
			  this->AD_pages->Controls->Add(this->AD_SortingH);
			  this->AD_pages->Controls->Add(this->AD_editAinfo);
			  this->AD_pages->Controls->Add(this->AD_modify_Hinfo);
			  this->AD_pages->Controls->Add(this->AD_edit_Hlist);
			  this->AD_pages->Controls->Add(this->AD_viewAinfo);
			  this->AD_pages->Controls->Add(this->AD_startWindow);
			  this->AD_pages->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_pages->Location = System::Drawing::Point(343, 0);
			  this->AD_pages->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_pages->Name = L"AD_pages";
			  this->AD_pages->Size = System::Drawing::Size(1193, 841);
			  this->AD_pages->TabIndex = 1;
			  // 
			  // AD_view_Pinfo
			  // 
			  this->AD_view_Pinfo->Controls->Add(this->AD_allpatient);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_ID);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_NumOfR);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Totalpaid);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Email);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Gender);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_PhNum);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Age);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPlist_header);
			  this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Name);
			  this->AD_view_Pinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_view_Pinfo->Location = System::Drawing::Point(0, 0);
			  this->AD_view_Pinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_view_Pinfo->Name = L"AD_view_Pinfo";
			  this->AD_view_Pinfo->Size = System::Drawing::Size(1193, 841);
			  this->AD_view_Pinfo->TabIndex = 1;
			  this->AD_view_Pinfo->Leave += gcnew System::EventHandler(this, &mainPage::AD_view_Pinfo_Leave);
			  // 
			  // AD_allpatient
			  // 
			  this->AD_allpatient->AutoScroll = true;
			  this->AD_allpatient->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_allpatient->Location = System::Drawing::Point(0, 106);
			  this->AD_allpatient->Name = L"AD_allpatient";
			  this->AD_allpatient->Size = System::Drawing::Size(1193, 735);
			  this->AD_allpatient->TabIndex = 8;
			  this->AD_allpatient->Visible = false;
			  // 
			  // AD_viewPinfo_ID
			  // 
			  this->AD_viewPinfo_ID->AutoSize = true;
			  this->AD_viewPinfo_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_ID->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_ID->Location = System::Drawing::Point(35, 657);
			  this->AD_viewPinfo_ID->Name = L"AD_viewPinfo_ID";
			  this->AD_viewPinfo_ID->Size = System::Drawing::Size(163, 39);
			  this->AD_viewPinfo_ID->TabIndex = 7;
			  this->AD_viewPinfo_ID->Text = L"patient ID";
			  // 
			  // AD_viewPinfo_NumOfR
			  // 
			  this->AD_viewPinfo_NumOfR->AutoSize = true;
			  this->AD_viewPinfo_NumOfR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_NumOfR->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_NumOfR->Location = System::Drawing::Point(35, 575);
			  this->AD_viewPinfo_NumOfR->Name = L"AD_viewPinfo_NumOfR";
			  this->AD_viewPinfo_NumOfR->Size = System::Drawing::Size(323, 39);
			  this->AD_viewPinfo_NumOfR->TabIndex = 6;
			  this->AD_viewPinfo_NumOfR->Text = L"Number Of reserved";
			  // 
			  // AD_viewPinfo_Totalpaid
			  // 
			  this->AD_viewPinfo_Totalpaid->AutoSize = true;
			  this->AD_viewPinfo_Totalpaid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_Totalpaid->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_Totalpaid->Location = System::Drawing::Point(35, 500);
			  this->AD_viewPinfo_Totalpaid->Name = L"AD_viewPinfo_Totalpaid";
			  this->AD_viewPinfo_Totalpaid->Size = System::Drawing::Size(171, 39);
			  this->AD_viewPinfo_Totalpaid->TabIndex = 5;
			  this->AD_viewPinfo_Totalpaid->Text = L"Total Paid";
			  // 
			  // AD_viewPinfo_Email
			  // 
			  this->AD_viewPinfo_Email->AutoSize = true;
			  this->AD_viewPinfo_Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_Email->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_Email->Location = System::Drawing::Point(35, 425);
			  this->AD_viewPinfo_Email->Name = L"AD_viewPinfo_Email";
			  this->AD_viewPinfo_Email->Size = System::Drawing::Size(214, 39);
			  this->AD_viewPinfo_Email->TabIndex = 4;
			  this->AD_viewPinfo_Email->Text = L"Patient email";
			  // 
			  // AD_viewPinfo_Gender
			  // 
			  this->AD_viewPinfo_Gender->AutoSize = true;
			  this->AD_viewPinfo_Gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_Gender->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_Gender->Location = System::Drawing::Point(35, 350);
			  this->AD_viewPinfo_Gender->Name = L"AD_viewPinfo_Gender";
			  this->AD_viewPinfo_Gender->Size = System::Drawing::Size(238, 39);
			  this->AD_viewPinfo_Gender->TabIndex = 3;
			  this->AD_viewPinfo_Gender->Text = L"Patient gender";
			  // 
			  // AD_viewPinfo_PhNum
			  // 
			  this->AD_viewPinfo_PhNum->AutoSize = true;
			  this->AD_viewPinfo_PhNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_PhNum->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_PhNum->Location = System::Drawing::Point(35, 274);
			  this->AD_viewPinfo_PhNum->Name = L"AD_viewPinfo_PhNum";
			  this->AD_viewPinfo_PhNum->Size = System::Drawing::Size(351, 39);
			  this->AD_viewPinfo_PhNum->TabIndex = 2;
			  this->AD_viewPinfo_PhNum->Text = L"Patient phone number";
			  // 
			  // AD_viewPinfo_Age
			  // 
			  this->AD_viewPinfo_Age->AutoSize = true;
			  this->AD_viewPinfo_Age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_Age->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_Age->Location = System::Drawing::Point(35, 199);
			  this->AD_viewPinfo_Age->Name = L"AD_viewPinfo_Age";
			  this->AD_viewPinfo_Age->Size = System::Drawing::Size(193, 39);
			  this->AD_viewPinfo_Age->TabIndex = 1;
			  this->AD_viewPinfo_Age->Text = L"Patient Age";
			  // 
			  // AD_viewPlist_header
			  // 
			  this->AD_viewPlist_header->BackColor = System::Drawing::SystemColors::AppWorkspace;
			  this->AD_viewPlist_header->Controls->Add(this->button6);
			  this->AD_viewPlist_header->Controls->Add(this->label17);
			  this->AD_viewPlist_header->Controls->Add(this->AD_viewPButton);
			  this->AD_viewPlist_header->Controls->Add(this->AD_viewPlist);
			  this->AD_viewPlist_header->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_viewPlist_header->Location = System::Drawing::Point(0, 0);
			  this->AD_viewPlist_header->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewPlist_header->Name = L"AD_viewPlist_header";
			  this->AD_viewPlist_header->Size = System::Drawing::Size(1193, 106);
			  this->AD_viewPlist_header->TabIndex = 2;
			  // 
			  // button6
			  // 
			  this->button6->FlatAppearance->BorderSize = 0;
			  this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			  this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->button6->Location = System::Drawing::Point(998, 27);
			  this->button6->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->button6->Name = L"button6";
			  this->button6->Size = System::Drawing::Size(153, 36);
			  this->button6->TabIndex = 8;
			  this->button6->Text = L"View All";
			  this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->button6->UseVisualStyleBackColor = true;
			  this->button6->Click += gcnew System::EventHandler(this, &mainPage::button6_Click);
			  // 
			  // label17
			  // 
			  this->label17->AutoSize = true;
			  this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label17->Location = System::Drawing::Point(47, 14);
			  this->label17->Name = L"label17";
			  this->label17->Size = System::Drawing::Size(123, 29);
			  this->label17->TabIndex = 7;
			  this->label17->Text = L"Patient list";
			  // 
			  // AD_viewPButton
			  // 
			  this->AD_viewPButton->FlatAppearance->BorderSize = 0;
			  this->AD_viewPButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_viewPButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_viewPButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_viewPButton.Image")));
			  this->AD_viewPButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_viewPButton->Location = System::Drawing::Point(451, 25);
			  this->AD_viewPButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->AD_viewPButton->Name = L"AD_viewPButton";
			  this->AD_viewPButton->Size = System::Drawing::Size(119, 36);
			  this->AD_viewPButton->TabIndex = 6;
			  this->AD_viewPButton->Text = L"View";
			  this->AD_viewPButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_viewPButton->UseVisualStyleBackColor = true;
			  this->AD_viewPButton->Click += gcnew System::EventHandler(this, &mainPage::AD_viewPButton_Click);
			  // 
			  // AD_viewPlist
			  // 
			  this->AD_viewPlist->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->AD_viewPlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_viewPlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPlist->FormattingEnabled = true;
			  this->AD_viewPlist->Location = System::Drawing::Point(45, 49);
			  this->AD_viewPlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewPlist->Name = L"AD_viewPlist";
			  this->AD_viewPlist->Size = System::Drawing::Size(247, 37);
			  this->AD_viewPlist->TabIndex = 1;
			  // 
			  // AD_viewPinfo_Name
			  // 
			  this->AD_viewPinfo_Name->AutoSize = true;
			  this->AD_viewPinfo_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewPinfo_Name->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->AD_viewPinfo_Name->Location = System::Drawing::Point(35, 126);
			  this->AD_viewPinfo_Name->Name = L"AD_viewPinfo_Name";
			  this->AD_viewPinfo_Name->Size = System::Drawing::Size(223, 39);
			  this->AD_viewPinfo_Name->TabIndex = 1;
			  this->AD_viewPinfo_Name->Text = L"Patient Name";
			  // 
			  // AD_view_Hinfo
			  // 
			  this->AD_view_Hinfo->Controls->Add(this->AD_AllhospitalData);
			  this->AD_view_Hinfo->Controls->Add(this->AD_text2);
			  this->AD_view_Hinfo->Controls->Add(this->AD_text1);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_HSplist);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_HCllist);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_ID);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_BedsPrice);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_surgeryPrice);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_Rprice);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_bedsAva);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_Rate);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_Name);
			  this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfoHeader);
			  this->AD_view_Hinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_view_Hinfo->Location = System::Drawing::Point(0, 0);
			  this->AD_view_Hinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_view_Hinfo->Name = L"AD_view_Hinfo";
			  this->AD_view_Hinfo->Size = System::Drawing::Size(1193, 841);
			  this->AD_view_Hinfo->TabIndex = 0;
			  this->AD_view_Hinfo->Leave += gcnew System::EventHandler(this, &mainPage::AD_view_Hinfo_Leave);
			  // 
			  // AD_AllhospitalData
			  // 
			  this->AD_AllhospitalData->AutoScroll = true;
			  this->AD_AllhospitalData->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_AllhospitalData->Location = System::Drawing::Point(0, 106);
			  this->AD_AllhospitalData->Margin = System::Windows::Forms::Padding(4);
			  this->AD_AllhospitalData->Name = L"AD_AllhospitalData";
			  this->AD_AllhospitalData->Size = System::Drawing::Size(1193, 735);
			  this->AD_AllhospitalData->TabIndex = 14;
			  this->AD_AllhospitalData->Visible = false;
			  // 
			  // AD_text2
			  // 
			  this->AD_text2->AutoSize = true;
			  this->AD_text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_text2->ForeColor = System::Drawing::Color::White;
			  this->AD_text2->Location = System::Drawing::Point(693, 453);
			  this->AD_text2->Name = L"AD_text2";
			  this->AD_text2->Size = System::Drawing::Size(132, 24);
			  this->AD_text2->TabIndex = 13;
			  this->AD_text2->Text = L"Specialties List";
			  this->AD_text2->Visible = false;
			  // 
			  // AD_text1
			  // 
			  this->AD_text1->AutoSize = true;
			  this->AD_text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_text1->ForeColor = System::Drawing::Color::White;
			  this->AD_text1->Location = System::Drawing::Point(692, 164);
			  this->AD_text1->Name = L"AD_text1";
			  this->AD_text1->Size = System::Drawing::Size(105, 25);
			  this->AD_text1->TabIndex = 12;
			  this->AD_text1->Text = L"Clinic List";
			  this->AD_text1->Visible = false;
			  // 
			  // AD_viewHinfo_HSplist
			  // 
			  this->AD_viewHinfo_HSplist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_HSplist->FormattingEnabled = true;
			  this->AD_viewHinfo_HSplist->ItemHeight = 25;
			  this->AD_viewHinfo_HSplist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Specialties List" });
			  this->AD_viewHinfo_HSplist->Location = System::Drawing::Point(693, 482);
			  this->AD_viewHinfo_HSplist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewHinfo_HSplist->Name = L"AD_viewHinfo_HSplist";
			  this->AD_viewHinfo_HSplist->Size = System::Drawing::Size(353, 154);
			  this->AD_viewHinfo_HSplist->TabIndex = 11;
			  // 
			  // AD_viewHinfo_HCllist
			  // 
			  this->AD_viewHinfo_HCllist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_HCllist->FormattingEnabled = true;
			  this->AD_viewHinfo_HCllist->ItemHeight = 25;
			  this->AD_viewHinfo_HCllist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Clinic List" });
			  this->AD_viewHinfo_HCllist->Location = System::Drawing::Point(692, 193);
			  this->AD_viewHinfo_HCllist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewHinfo_HCllist->Name = L"AD_viewHinfo_HCllist";
			  this->AD_viewHinfo_HCllist->Size = System::Drawing::Size(355, 129);
			  this->AD_viewHinfo_HCllist->TabIndex = 10;
			  // 
			  // AD_viewHinfo_ID
			  // 
			  this->AD_viewHinfo_ID->AutoSize = true;
			  this->AD_viewHinfo_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_ID->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_ID->Location = System::Drawing::Point(16, 172);
			  this->AD_viewHinfo_ID->Name = L"AD_viewHinfo_ID";
			  this->AD_viewHinfo_ID->Size = System::Drawing::Size(185, 39);
			  this->AD_viewHinfo_ID->TabIndex = 0;
			  this->AD_viewHinfo_ID->Text = L"Hospital ID";
			  // 
			  // AD_viewHinfo_BedsPrice
			  // 
			  this->AD_viewHinfo_BedsPrice->AutoSize = true;
			  this->AD_viewHinfo_BedsPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_BedsPrice->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_BedsPrice->Location = System::Drawing::Point(17, 575);
			  this->AD_viewHinfo_BedsPrice->Name = L"AD_viewHinfo_BedsPrice";
			  this->AD_viewHinfo_BedsPrice->Size = System::Drawing::Size(182, 39);
			  this->AD_viewHinfo_BedsPrice->TabIndex = 7;
			  this->AD_viewHinfo_BedsPrice->Text = L"Beds Price";
			  // 
			  // AD_viewHinfo_surgeryPrice
			  // 
			  this->AD_viewHinfo_surgeryPrice->AutoSize = true;
			  this->AD_viewHinfo_surgeryPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_surgeryPrice->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_surgeryPrice->Location = System::Drawing::Point(16, 506);
			  this->AD_viewHinfo_surgeryPrice->Name = L"AD_viewHinfo_surgeryPrice";
			  this->AD_viewHinfo_surgeryPrice->Size = System::Drawing::Size(223, 39);
			  this->AD_viewHinfo_surgeryPrice->TabIndex = 6;
			  this->AD_viewHinfo_surgeryPrice->Text = L"Surgery Price";
			  // 
			  // AD_viewHinfo_Rprice
			  // 
			  this->AD_viewHinfo_Rprice->AutoSize = true;
			  this->AD_viewHinfo_Rprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_Rprice->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_Rprice->Location = System::Drawing::Point(16, 437);
			  this->AD_viewHinfo_Rprice->Name = L"AD_viewHinfo_Rprice";
			  this->AD_viewHinfo_Rprice->Size = System::Drawing::Size(260, 39);
			  this->AD_viewHinfo_Rprice->TabIndex = 5;
			  this->AD_viewHinfo_Rprice->Text = L"Check-UP Price";
			  // 
			  // AD_viewHinfo_bedsAva
			  // 
			  this->AD_viewHinfo_bedsAva->AutoSize = true;
			  this->AD_viewHinfo_bedsAva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_bedsAva->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_bedsAva->Location = System::Drawing::Point(16, 368);
			  this->AD_viewHinfo_bedsAva->Name = L"AD_viewHinfo_bedsAva";
			  this->AD_viewHinfo_bedsAva->Size = System::Drawing::Size(244, 39);
			  this->AD_viewHinfo_bedsAva->TabIndex = 4;
			  this->AD_viewHinfo_bedsAva->Text = L"Beds Avaliable";
			  // 
			  // AD_viewHinfo_Rate
			  // 
			  this->AD_viewHinfo_Rate->AutoSize = true;
			  this->AD_viewHinfo_Rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_Rate->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_Rate->Location = System::Drawing::Point(16, 299);
			  this->AD_viewHinfo_Rate->Name = L"AD_viewHinfo_Rate";
			  this->AD_viewHinfo_Rate->Size = System::Drawing::Size(222, 39);
			  this->AD_viewHinfo_Rate->TabIndex = 3;
			  this->AD_viewHinfo_Rate->Text = L"Hospital Rate";
			  // 
			  // AD_viewHinfo_Name
			  // 
			  this->AD_viewHinfo_Name->AutoSize = true;
			  this->AD_viewHinfo_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHinfo_Name->ForeColor = System::Drawing::Color::White;
			  this->AD_viewHinfo_Name->Location = System::Drawing::Point(15, 230);
			  this->AD_viewHinfo_Name->Name = L"AD_viewHinfo_Name";
			  this->AD_viewHinfo_Name->Size = System::Drawing::Size(241, 39);
			  this->AD_viewHinfo_Name->TabIndex = 2;
			  this->AD_viewHinfo_Name->Text = L"Hospital Name";
			  // 
			  // AD_viewHinfoHeader
			  // 
			  this->AD_viewHinfoHeader->BackColor = System::Drawing::Color::DarkGray;
			  this->AD_viewHinfoHeader->Controls->Add(this->AD_viewAllH);
			  this->AD_viewHinfoHeader->Controls->Add(this->label16);
			  this->AD_viewHinfoHeader->Controls->Add(this->AD_viewHbutton);
			  this->AD_viewHinfoHeader->Controls->Add(this->AD_viewHList);
			  this->AD_viewHinfoHeader->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_viewHinfoHeader->Location = System::Drawing::Point(0, 0);
			  this->AD_viewHinfoHeader->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewHinfoHeader->Name = L"AD_viewHinfoHeader";
			  this->AD_viewHinfoHeader->Size = System::Drawing::Size(1193, 106);
			  this->AD_viewHinfoHeader->TabIndex = 1;
			  // 
			  // AD_viewAllH
			  // 
			  this->AD_viewAllH->FlatAppearance->BorderSize = 0;
			  this->AD_viewAllH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_viewAllH->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_viewAllH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_viewAllH.Image")));
			  this->AD_viewAllH->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_viewAllH->Location = System::Drawing::Point(984, 32);
			  this->AD_viewAllH->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->AD_viewAllH->Name = L"AD_viewAllH";
			  this->AD_viewAllH->Size = System::Drawing::Size(167, 36);
			  this->AD_viewAllH->TabIndex = 7;
			  this->AD_viewAllH->Text = L"View All";
			  this->AD_viewAllH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_viewAllH->UseVisualStyleBackColor = true;
			  this->AD_viewAllH->Click += gcnew System::EventHandler(this, &mainPage::AD_viewAllH_Click);
			  // 
			  // label16
			  // 
			  this->label16->AutoSize = true;
			  this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label16->Location = System::Drawing::Point(35, 10);
			  this->label16->Name = L"label16";
			  this->label16->Size = System::Drawing::Size(137, 29);
			  this->label16->TabIndex = 6;
			  this->label16->Text = L"Hospital list";
			  // 
			  // AD_viewHbutton
			  // 
			  this->AD_viewHbutton->FlatAppearance->BorderSize = 0;
			  this->AD_viewHbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_viewHbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_viewHbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_viewHbutton.Image")));
			  this->AD_viewHbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_viewHbutton->Location = System::Drawing::Point(465, 34);
			  this->AD_viewHbutton->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->AD_viewHbutton->Name = L"AD_viewHbutton";
			  this->AD_viewHbutton->Size = System::Drawing::Size(119, 36);
			  this->AD_viewHbutton->TabIndex = 5;
			  this->AD_viewHbutton->Text = L"View";
			  this->AD_viewHbutton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_viewHbutton->UseVisualStyleBackColor = true;
			  this->AD_viewHbutton->Click += gcnew System::EventHandler(this, &mainPage::AD_viewHbutton_Click);
			  // 
			  // AD_viewHList
			  // 
			  this->AD_viewHList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->AD_viewHList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_viewHList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_viewHList->FormattingEnabled = true;
			  this->AD_viewHList->Location = System::Drawing::Point(29, 53);
			  this->AD_viewHList->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewHList->Name = L"AD_viewHList";
			  this->AD_viewHList->Size = System::Drawing::Size(247, 37);
			  this->AD_viewHList->TabIndex = 0;
			  // 
			  // AD_SortingH
			  // 
			  this->AD_SortingH->Controls->Add(this->label5);
			  this->AD_SortingH->Controls->Add(this->AD_SortingHlist);
			  this->AD_SortingH->Controls->Add(this->AD_Optionsort2);
			  this->AD_SortingH->Controls->Add(this->AD_Optionsort3);
			  this->AD_SortingH->Controls->Add(this->AD_Optionsort4);
			  this->AD_SortingH->Controls->Add(this->AD_messege);
			  this->AD_SortingH->Controls->Add(this->AD_Optionsort1);
			  this->AD_SortingH->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_SortingH->Location = System::Drawing::Point(0, 0);
			  this->AD_SortingH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_SortingH->Name = L"AD_SortingH";
			  this->AD_SortingH->Size = System::Drawing::Size(1193, 841);
			  this->AD_SortingH->TabIndex = 9;
			  this->AD_SortingH->Leave += gcnew System::EventHandler(this, &mainPage::AD_SortingH_Leave);
			  // 
			  // label5
			  // 
			  this->label5->AutoSize = true;
			  this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label5->ForeColor = System::Drawing::Color::White;
			  this->label5->Location = System::Drawing::Point(491, 185);
			  this->label5->Name = L"label5";
			  this->label5->Size = System::Drawing::Size(144, 29);
			  this->label5->TabIndex = 6;
			  this->label5->Text = L"Hospital List";
			  this->label5->Visible = false;
			  // 
			  // AD_SortingHlist
			  // 
			  this->AD_SortingHlist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				  | System::Windows::Forms::AnchorStyles::Left)
				  | System::Windows::Forms::AnchorStyles::Right));
			  this->AD_SortingHlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_SortingHlist->FormattingEnabled = true;
			  this->AD_SortingHlist->ItemHeight = 31;
			  this->AD_SortingHlist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Hospital List" });
			  this->AD_SortingHlist->Location = System::Drawing::Point(495, 229);
			  this->AD_SortingHlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_SortingHlist->Name = L"AD_SortingHlist";
			  this->AD_SortingHlist->Size = System::Drawing::Size(445, 159);
			  this->AD_SortingHlist->TabIndex = 5;
			  // 
			  // AD_Optionsort2
			  // 
			  this->AD_Optionsort2->AutoSize = true;
			  this->AD_Optionsort2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Optionsort2->Location = System::Drawing::Point(35, 171);
			  this->AD_Optionsort2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Optionsort2->Name = L"AD_Optionsort2";
			  this->AD_Optionsort2->Size = System::Drawing::Size(279, 44);
			  this->AD_Optionsort2->TabIndex = 4;
			  this->AD_Optionsort2->TabStop = true;
			  this->AD_Optionsort2->Text = L"Beds Avaliable";
			  this->AD_Optionsort2->UseVisualStyleBackColor = true;
			  this->AD_Optionsort2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::AD_Optionsort2_CheckedChanged);
			  // 
			  // AD_Optionsort3
			  // 
			  this->AD_Optionsort3->AutoSize = true;
			  this->AD_Optionsort3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Optionsort3->Location = System::Drawing::Point(36, 213);
			  this->AD_Optionsort3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Optionsort3->Name = L"AD_Optionsort3";
			  this->AD_Optionsort3->Size = System::Drawing::Size(116, 44);
			  this->AD_Optionsort3->TabIndex = 3;
			  this->AD_Optionsort3->TabStop = true;
			  this->AD_Optionsort3->Text = L"Rate";
			  this->AD_Optionsort3->UseVisualStyleBackColor = true;
			  this->AD_Optionsort3->CheckedChanged += gcnew System::EventHandler(this, &mainPage::AD_Optionsort3_CheckedChanged);
			  // 
			  // AD_Optionsort4
			  // 
			  this->AD_Optionsort4->AutoSize = true;
			  this->AD_Optionsort4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Optionsort4->Location = System::Drawing::Point(36, 255);
			  this->AD_Optionsort4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Optionsort4->Name = L"AD_Optionsort4";
			  this->AD_Optionsort4->Size = System::Drawing::Size(220, 44);
			  this->AD_Optionsort4->TabIndex = 2;
			  this->AD_Optionsort4->TabStop = true;
			  this->AD_Optionsort4->Text = L"Beds Price";
			  this->AD_Optionsort4->UseVisualStyleBackColor = true;
			  this->AD_Optionsort4->CheckedChanged += gcnew System::EventHandler(this, &mainPage::AD_Optionsort4_CheckedChanged);
			  // 
			  // AD_messege
			  // 
			  this->AD_messege->AutoSize = true;
			  this->AD_messege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_messege->ForeColor = System::Drawing::Color::White;
			  this->AD_messege->Location = System::Drawing::Point(43, 32);
			  this->AD_messege->Name = L"AD_messege";
			  this->AD_messege->Size = System::Drawing::Size(701, 69);
			  this->AD_messege->TabIndex = 1;
			  this->AD_messege->Text = L"What do you want sort by";
			  // 
			  // AD_Optionsort1
			  // 
			  this->AD_Optionsort1->AutoSize = true;
			  this->AD_Optionsort1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Optionsort1->Location = System::Drawing::Point(35, 129);
			  this->AD_Optionsort1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Optionsort1->Name = L"AD_Optionsort1";
			  this->AD_Optionsort1->Size = System::Drawing::Size(132, 44);
			  this->AD_Optionsort1->TabIndex = 0;
			  this->AD_Optionsort1->TabStop = true;
			  this->AD_Optionsort1->Text = L"Name";
			  this->AD_Optionsort1->UseVisualStyleBackColor = true;
			  this->AD_Optionsort1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::AD_Optionsort1_CheckedChanged);
			  // 
			  // AD_editAinfo
			  // 
			  this->AD_editAinfo->Controls->Add(this->AD_editRemain);
			  this->AD_editAinfo->Controls->Add(this->AD_editpass);
			  this->AD_editAinfo->Controls->Add(this->AD_edit_wiating);
			  this->AD_editAinfo->Controls->Add(this->AD_GofCHEditAinfo);
			  this->AD_editAinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_editAinfo->Location = System::Drawing::Point(0, 0);
			  this->AD_editAinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editAinfo->Name = L"AD_editAinfo";
			  this->AD_editAinfo->Size = System::Drawing::Size(1193, 841);
			  this->AD_editAinfo->TabIndex = 6;
			  // 
			  // AD_editRemain
			  // 
			  this->AD_editRemain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_editRemain.BackgroundImage")));
			  this->AD_editRemain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->AD_editRemain->Controls->Add(this->button3);
			  this->AD_editRemain->Controls->Add(this->AD_editRemain_state);
			  this->AD_editRemain->Controls->Add(this->AD_editRemain_TB);
			  this->AD_editRemain->Controls->Add(this->AD_editRemain_lab);
			  this->AD_editRemain->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_editRemain->Location = System::Drawing::Point(253, 0);
			  this->AD_editRemain->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editRemain->Name = L"AD_editRemain";
			  this->AD_editRemain->Size = System::Drawing::Size(940, 841);
			  this->AD_editRemain->TabIndex = 14;
			  // 
			  // button3
			  // 
			  this->button3->BackColor = System::Drawing::Color::Transparent;
			  this->button3->FlatAppearance->BorderSize = 0;
			  this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			  this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->button3->Location = System::Drawing::Point(104, 303);
			  this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->button3->Name = L"button3";
			  this->button3->Size = System::Drawing::Size(91, 42);
			  this->button3->TabIndex = 13;
			  this->button3->Text = L"Edit";
			  this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->button3->UseVisualStyleBackColor = false;
			  this->button3->Click += gcnew System::EventHandler(this, &mainPage::button3_Click);
			  this->button3->Leave += gcnew System::EventHandler(this, &mainPage::button3_Leave);
			  // 
			  // AD_editRemain_state
			  // 
			  this->AD_editRemain_state->AutoSize = true;
			  this->AD_editRemain_state->BackColor = System::Drawing::Color::Transparent;
			  this->AD_editRemain_state->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_editRemain_state->ForeColor = System::Drawing::Color::Black;
			  this->AD_editRemain_state->Location = System::Drawing::Point(100, 204);
			  this->AD_editRemain_state->Name = L"AD_editRemain_state";
			  this->AD_editRemain_state->Size = System::Drawing::Size(12, 18);
			  this->AD_editRemain_state->TabIndex = 2;
			  this->AD_editRemain_state->Text = L".";
			  // 
			  // AD_editRemain_TB
			  // 
			  this->AD_editRemain_TB->BackColor = System::Drawing::SystemColors::ScrollBar;
			  this->AD_editRemain_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_editRemain_TB->Location = System::Drawing::Point(88, 138);
			  this->AD_editRemain_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editRemain_TB->Name = L"AD_editRemain_TB";
			  this->AD_editRemain_TB->Size = System::Drawing::Size(361, 37);
			  this->AD_editRemain_TB->TabIndex = 1;
			  this->AD_editRemain_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_editRemain_TB_KeyPress);
			  // 
			  // AD_editRemain_lab
			  // 
			  this->AD_editRemain_lab->AutoSize = true;
			  this->AD_editRemain_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_editRemain_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editRemain_lab->Location = System::Drawing::Point(84, 81);
			  this->AD_editRemain_lab->Name = L"AD_editRemain_lab";
			  this->AD_editRemain_lab->Size = System::Drawing::Size(107, 40);
			  this->AD_editRemain_lab->TabIndex = 0;
			  this->AD_editRemain_lab->Text = L"label2";
			  // 
			  // AD_editpass
			  // 
			  this->AD_editpass->BackColor = System::Drawing::Color::Transparent;
			  this->AD_editpass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_editpass.BackgroundImage")));
			  this->AD_editpass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->AD_editpass->Controls->Add(this->AD_ShowNewPass);
			  this->AD_editpass->Controls->Add(this->AD_ShowOldPass);
			  this->AD_editpass->Controls->Add(this->AD_passState);
			  this->AD_editpass->Controls->Add(this->AD_Changepass);
			  this->AD_editpass->Controls->Add(this->AD_askconfPass_TB);
			  this->AD_editpass->Controls->Add(this->AD_askconfPass_lab);
			  this->AD_editpass->Controls->Add(this->AD_askNewPass_TB);
			  this->AD_editpass->Controls->Add(this->AD_askNewPass_lab);
			  this->AD_editpass->Controls->Add(this->AD_askOldPass_TB);
			  this->AD_editpass->Controls->Add(this->AD_askOldPass_lab);
			  this->AD_editpass->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_editpass->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editpass->Location = System::Drawing::Point(253, 0);
			  this->AD_editpass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editpass->Name = L"AD_editpass";
			  this->AD_editpass->Size = System::Drawing::Size(940, 841);
			  this->AD_editpass->TabIndex = 13;
			  // 
			  // AD_ShowNewPass
			  // 
			  this->AD_ShowNewPass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_ShowNewPass.BackgroundImage")));
			  this->AD_ShowNewPass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->AD_ShowNewPass->FlatAppearance->BorderSize = 0;
			  this->AD_ShowNewPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_ShowNewPass->Location = System::Drawing::Point(707, 324);
			  this->AD_ShowNewPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_ShowNewPass->Name = L"AD_ShowNewPass";
			  this->AD_ShowNewPass->Size = System::Drawing::Size(41, 36);
			  this->AD_ShowNewPass->TabIndex = 19;
			  this->AD_ShowNewPass->UseVisualStyleBackColor = true;
			  this->AD_ShowNewPass->Click += gcnew System::EventHandler(this, &mainPage::AD_ShowNewPass_Click);
			  // 
			  // AD_ShowOldPass
			  // 
			  this->AD_ShowOldPass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_ShowOldPass.BackgroundImage")));
			  this->AD_ShowOldPass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->AD_ShowOldPass->FlatAppearance->BorderSize = 0;
			  this->AD_ShowOldPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_ShowOldPass->Location = System::Drawing::Point(707, 143);
			  this->AD_ShowOldPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_ShowOldPass->Name = L"AD_ShowOldPass";
			  this->AD_ShowOldPass->Size = System::Drawing::Size(41, 36);
			  this->AD_ShowOldPass->TabIndex = 18;
			  this->AD_ShowOldPass->UseVisualStyleBackColor = true;
			  this->AD_ShowOldPass->Click += gcnew System::EventHandler(this, &mainPage::AD_ShowOldPass_Click);
			  // 
			  // AD_passState
			  // 
			  this->AD_passState->AutoSize = true;
			  this->AD_passState->BackColor = System::Drawing::Color::White;
			  this->AD_passState->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_passState->ForeColor = System::Drawing::Color::Black;
			  this->AD_passState->Location = System::Drawing::Point(45, 485);
			  this->AD_passState->Name = L"AD_passState";
			  this->AD_passState->Size = System::Drawing::Size(15, 23);
			  this->AD_passState->TabIndex = 17;
			  this->AD_passState->Text = L".";
			  // 
			  // AD_Changepass
			  // 
			  this->AD_Changepass->BackColor = System::Drawing::Color::Transparent;
			  this->AD_Changepass->FlatAppearance->BorderSize = 2;
			  this->AD_Changepass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_Changepass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Changepass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_Changepass.Image")));
			  this->AD_Changepass->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_Changepass->Location = System::Drawing::Point(67, 561);
			  this->AD_Changepass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Changepass->Name = L"AD_Changepass";
			  this->AD_Changepass->Size = System::Drawing::Size(184, 59);
			  this->AD_Changepass->TabIndex = 14;
			  this->AD_Changepass->Text = L"Change ";
			  this->AD_Changepass->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_Changepass->UseVisualStyleBackColor = false;
			  this->AD_Changepass->Click += gcnew System::EventHandler(this, &mainPage::AD_Changepass_Click);
			  this->AD_Changepass->Leave += gcnew System::EventHandler(this, &mainPage::AD_Changepass_Leave);
			  // 
			  // AD_askconfPass_TB
			  // 
			  this->AD_askconfPass_TB->BackColor = System::Drawing::SystemColors::ActiveBorder;
			  this->AD_askconfPass_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_askconfPass_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_askconfPass_TB->Location = System::Drawing::Point(65, 412);
			  this->AD_askconfPass_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_askconfPass_TB->Name = L"AD_askconfPass_TB";
			  this->AD_askconfPass_TB->Size = System::Drawing::Size(556, 30);
			  this->AD_askconfPass_TB->TabIndex = 6;
			  this->AD_askconfPass_TB->UseSystemPasswordChar = true;
			  // 
			  // AD_askconfPass_lab
			  // 
			  this->AD_askconfPass_lab->AutoSize = true;
			  this->AD_askconfPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_askconfPass_lab->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_askconfPass_lab->Location = System::Drawing::Point(57, 358);
			  this->AD_askconfPass_lab->Name = L"AD_askconfPass_lab";
			  this->AD_askconfPass_lab->Size = System::Drawing::Size(392, 40);
			  this->AD_askconfPass_lab->TabIndex = 5;
			  this->AD_askconfPass_lab->Text = L"Confirm new password";
			  // 
			  // AD_askNewPass_TB
			  // 
			  this->AD_askNewPass_TB->BackColor = System::Drawing::SystemColors::ActiveBorder;
			  this->AD_askNewPass_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_askNewPass_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_askNewPass_TB->Location = System::Drawing::Point(65, 277);
			  this->AD_askNewPass_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_askNewPass_TB->Name = L"AD_askNewPass_TB";
			  this->AD_askNewPass_TB->Size = System::Drawing::Size(556, 30);
			  this->AD_askNewPass_TB->TabIndex = 4;
			  this->AD_askNewPass_TB->UseSystemPasswordChar = true;
			  // 
			  // AD_askNewPass_lab
			  // 
			  this->AD_askNewPass_lab->AutoSize = true;
			  this->AD_askNewPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_askNewPass_lab->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_askNewPass_lab->Location = System::Drawing::Point(57, 218);
			  this->AD_askNewPass_lab->Name = L"AD_askNewPass_lab";
			  this->AD_askNewPass_lab->Size = System::Drawing::Size(365, 40);
			  this->AD_askNewPass_lab->TabIndex = 3;
			  this->AD_askNewPass_lab->Text = L"Enter new password ";
			  // 
			  // AD_askOldPass_TB
			  // 
			  this->AD_askOldPass_TB->BackColor = System::Drawing::SystemColors::ActiveBorder;
			  this->AD_askOldPass_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_askOldPass_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_askOldPass_TB->Location = System::Drawing::Point(65, 142);
			  this->AD_askOldPass_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_askOldPass_TB->Name = L"AD_askOldPass_TB";
			  this->AD_askOldPass_TB->Size = System::Drawing::Size(556, 30);
			  this->AD_askOldPass_TB->TabIndex = 2;
			  this->AD_askOldPass_TB->UseSystemPasswordChar = true;
			  // 
			  // AD_askOldPass_lab
			  // 
			  this->AD_askOldPass_lab->AutoSize = true;
			  this->AD_askOldPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_askOldPass_lab->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_askOldPass_lab->Location = System::Drawing::Point(57, 76);
			  this->AD_askOldPass_lab->Name = L"AD_askOldPass_lab";
			  this->AD_askOldPass_lab->Size = System::Drawing::Size(335, 40);
			  this->AD_askOldPass_lab->TabIndex = 1;
			  this->AD_askOldPass_lab->Text = L"Enter old password";
			  // 
			  // AD_edit_wiating
			  // 
			  this->AD_edit_wiating->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_edit_wiating.BackgroundImage")));
			  this->AD_edit_wiating->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			  this->AD_edit_wiating->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_edit_wiating->Location = System::Drawing::Point(253, 0);
			  this->AD_edit_wiating->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_edit_wiating->Name = L"AD_edit_wiating";
			  this->AD_edit_wiating->Size = System::Drawing::Size(940, 841);
			  this->AD_edit_wiating->TabIndex = 15;
			  // 
			  // AD_GofCHEditAinfo
			  // 
			  this->AD_GofCHEditAinfo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->AD_GofCHEditAinfo->Controls->Add(this->AD_editPhNum);
			  this->AD_GofCHEditAinfo->Controls->Add(this->AD_editpass_button);
			  this->AD_GofCHEditAinfo->Controls->Add(this->AD_editusername);
			  this->AD_GofCHEditAinfo->Controls->Add(this->AD_editAge);
			  this->AD_GofCHEditAinfo->Controls->Add(this->AD_editName);
			  this->AD_GofCHEditAinfo->Dock = System::Windows::Forms::DockStyle::Left;
			  this->AD_GofCHEditAinfo->Location = System::Drawing::Point(0, 0);
			  this->AD_GofCHEditAinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_GofCHEditAinfo->Name = L"AD_GofCHEditAinfo";
			  this->AD_GofCHEditAinfo->Size = System::Drawing::Size(253, 841);
			  this->AD_GofCHEditAinfo->TabIndex = 12;
			  // 
			  // AD_editPhNum
			  // 
			  this->AD_editPhNum->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_editPhNum->FlatAppearance->BorderSize = 0;
			  this->AD_editPhNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_editPhNum->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editPhNum->Location = System::Drawing::Point(0, 488);
			  this->AD_editPhNum->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editPhNum->Name = L"AD_editPhNum";
			  this->AD_editPhNum->Size = System::Drawing::Size(253, 122);
			  this->AD_editPhNum->TabIndex = 6;
			  this->AD_editPhNum->Text = L"Edit Phone Number";
			  this->AD_editPhNum->UseVisualStyleBackColor = true;
			  this->AD_editPhNum->Click += gcnew System::EventHandler(this, &mainPage::AD_editPhNum_Click);
			  // 
			  // AD_editpass_button
			  // 
			  this->AD_editpass_button->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_editpass_button->FlatAppearance->BorderSize = 0;
			  this->AD_editpass_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_editpass_button->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editpass_button->Location = System::Drawing::Point(0, 366);
			  this->AD_editpass_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editpass_button->Name = L"AD_editpass_button";
			  this->AD_editpass_button->Size = System::Drawing::Size(253, 122);
			  this->AD_editpass_button->TabIndex = 5;
			  this->AD_editpass_button->Text = L"Change password";
			  this->AD_editpass_button->UseVisualStyleBackColor = true;
			  this->AD_editpass_button->Click += gcnew System::EventHandler(this, &mainPage::AD_editpass_button_Click);
			  // 
			  // AD_editusername
			  // 
			  this->AD_editusername->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_editusername->FlatAppearance->BorderSize = 0;
			  this->AD_editusername->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_editusername->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editusername->Location = System::Drawing::Point(0, 244);
			  this->AD_editusername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editusername->Name = L"AD_editusername";
			  this->AD_editusername->Size = System::Drawing::Size(253, 122);
			  this->AD_editusername->TabIndex = 4;
			  this->AD_editusername->Text = L"Edit username";
			  this->AD_editusername->UseVisualStyleBackColor = true;
			  this->AD_editusername->Click += gcnew System::EventHandler(this, &mainPage::AD_editusername_Click);
			  // 
			  // AD_editAge
			  // 
			  this->AD_editAge->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->AD_editAge->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_editAge->FlatAppearance->BorderSize = 0;
			  this->AD_editAge->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_editAge->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editAge->Location = System::Drawing::Point(0, 122);
			  this->AD_editAge->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editAge->Name = L"AD_editAge";
			  this->AD_editAge->Size = System::Drawing::Size(253, 122);
			  this->AD_editAge->TabIndex = 3;
			  this->AD_editAge->Text = L"Edit Age";
			  this->AD_editAge->UseVisualStyleBackColor = true;
			  this->AD_editAge->Click += gcnew System::EventHandler(this, &mainPage::AD_editAge_Click);
			  // 
			  // AD_editName
			  // 
			  this->AD_editName->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_editName->FlatAppearance->BorderSize = 0;
			  this->AD_editName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_editName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_editName->Location = System::Drawing::Point(0, 0);
			  this->AD_editName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_editName->Name = L"AD_editName";
			  this->AD_editName->Size = System::Drawing::Size(253, 122);
			  this->AD_editName->TabIndex = 2;
			  this->AD_editName->Text = L"Edit Name";
			  this->AD_editName->UseVisualStyleBackColor = true;
			  this->AD_editName->Click += gcnew System::EventHandler(this, &mainPage::AD_editName_Click);
			  // 
			  // AD_modify_Hinfo
			  // 
			  this->AD_modify_Hinfo->Controls->Add(this->AD_Modifyinput);
			  this->AD_modify_Hinfo->Controls->Add(this->AD_groupchoice);
			  this->AD_modify_Hinfo->Controls->Add(this->AD_headerModify);
			  this->AD_modify_Hinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_modify_Hinfo->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_modify_Hinfo->Location = System::Drawing::Point(0, 0);
			  this->AD_modify_Hinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_modify_Hinfo->Name = L"AD_modify_Hinfo";
			  this->AD_modify_Hinfo->Size = System::Drawing::Size(1193, 841);
			  this->AD_modify_Hinfo->TabIndex = 3;
			  // 
			  // AD_Modifyinput
			  // 
			  this->AD_Modifyinput->Controls->Add(this->label8);
			  this->AD_Modifyinput->Controls->Add(this->AD_modifyHSC_layout);
			  this->AD_Modifyinput->Controls->Add(this->AD_warning1);
			  this->AD_Modifyinput->Controls->Add(this->AD_ModifyHSClist);
			  this->AD_Modifyinput->Controls->Add(this->AD_confirmedit);
			  this->AD_Modifyinput->Controls->Add(this->AD_deleteHSC);
			  this->AD_Modifyinput->Controls->Add(this->AD_addHSC);
			  this->AD_Modifyinput->Controls->Add(this->AD_closeModify);
			  this->AD_Modifyinput->Controls->Add(this->AD_TBinput);
			  this->AD_Modifyinput->Controls->Add(this->AD_nameOfinput);
			  this->AD_Modifyinput->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_Modifyinput->Location = System::Drawing::Point(277, 71);
			  this->AD_Modifyinput->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Modifyinput->Name = L"AD_Modifyinput";
			  this->AD_Modifyinput->Size = System::Drawing::Size(916, 770);
			  this->AD_Modifyinput->TabIndex = 12;
			  this->AD_Modifyinput->Visible = false;
			  // 
			  // label8
			  // 
			  this->label8->AutoSize = true;
			  this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label8->ForeColor = System::Drawing::Color::White;
			  this->label8->Location = System::Drawing::Point(511, 53);
			  this->label8->Name = L"label8";
			  this->label8->Size = System::Drawing::Size(235, 41);
			  this->label8->TabIndex = 9;
			  this->label8->Text = L"Choose form list";
			  // 
			  // AD_modifyHSC_layout
			  // 
			  this->AD_modifyHSC_layout->Controls->Add(this->AD_ADDHSC_lay);
			  this->AD_modifyHSC_layout->Controls->Add(this->AD_DELHSC_lay);
			  this->AD_modifyHSC_layout->Dock = System::Windows::Forms::DockStyle::Bottom;
			  this->AD_modifyHSC_layout->Location = System::Drawing::Point(0, 408);
			  this->AD_modifyHSC_layout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_modifyHSC_layout->Name = L"AD_modifyHSC_layout";
			  this->AD_modifyHSC_layout->Size = System::Drawing::Size(916, 362);
			  this->AD_modifyHSC_layout->TabIndex = 3;
			  // 
			  // AD_ADDHSC_lay
			  // 
			  this->AD_ADDHSC_lay->Controls->Add(this->AD_TBforAddHSC);
			  this->AD_ADDHSC_lay->Controls->Add(this->CloseTab2);
			  this->AD_ADDHSC_lay->Controls->Add(this->AD_stateHSC2);
			  this->AD_ADDHSC_lay->Controls->Add(this->AD_confirmAdd);
			  this->AD_ADDHSC_lay->Controls->Add(this->AD_HSCorder);
			  this->AD_ADDHSC_lay->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_ADDHSC_lay->Location = System::Drawing::Point(0, 0);
			  this->AD_ADDHSC_lay->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_ADDHSC_lay->Name = L"AD_ADDHSC_lay";
			  this->AD_ADDHSC_lay->Size = System::Drawing::Size(916, 362);
			  this->AD_ADDHSC_lay->TabIndex = 6;
			  // 
			  // AD_TBforAddHSC
			  // 
			  this->AD_TBforAddHSC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_TBforAddHSC->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_TBforAddHSC->Location = System::Drawing::Point(40, 82);
			  this->AD_TBforAddHSC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_TBforAddHSC->Name = L"AD_TBforAddHSC";
			  this->AD_TBforAddHSC->Size = System::Drawing::Size(355, 35);
			  this->AD_TBforAddHSC->TabIndex = 8;
			  this->AD_TBforAddHSC->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_TBforAddHSC_KeyPress);
			  // 
			  // CloseTab2
			  // 
			  this->CloseTab2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			  this->CloseTab2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CloseTab2.BackgroundImage")));
			  this->CloseTab2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->CloseTab2->FlatAppearance->BorderSize = 0;
			  this->CloseTab2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->CloseTab2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->CloseTab2->Location = System::Drawing::Point(876, 12);
			  this->CloseTab2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->CloseTab2->Name = L"CloseTab2";
			  this->CloseTab2->Size = System::Drawing::Size(29, 26);
			  this->CloseTab2->TabIndex = 7;
			  this->CloseTab2->UseVisualStyleBackColor = true;
			  this->CloseTab2->Click += gcnew System::EventHandler(this, &mainPage::CloseTab2_Click);
			  // 
			  // AD_stateHSC2
			  // 
			  this->AD_stateHSC2->AutoSize = true;
			  this->AD_stateHSC2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_stateHSC2->ForeColor = System::Drawing::Color::White;
			  this->AD_stateHSC2->Location = System::Drawing::Point(37, 146);
			  this->AD_stateHSC2->Name = L"AD_stateHSC2";
			  this->AD_stateHSC2->Size = System::Drawing::Size(52, 18);
			  this->AD_stateHSC2->TabIndex = 6;
			  this->AD_stateHSC2->Text = L"label2";
			  // 
			  // AD_confirmAdd
			  // 
			  this->AD_confirmAdd->FlatAppearance->BorderSize = 2;
			  this->AD_confirmAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_confirmAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_confirmAdd->Location = System::Drawing::Point(519, 82);
			  this->AD_confirmAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_confirmAdd->Name = L"AD_confirmAdd";
			  this->AD_confirmAdd->Size = System::Drawing::Size(112, 48);
			  this->AD_confirmAdd->TabIndex = 5;
			  this->AD_confirmAdd->Text = L"Add";
			  this->AD_confirmAdd->UseVisualStyleBackColor = true;
			  this->AD_confirmAdd->Click += gcnew System::EventHandler(this, &mainPage::AD_confirmAdd_Click);
			  this->AD_confirmAdd->Leave += gcnew System::EventHandler(this, &mainPage::AD_confirmAdd_Leave);
			  // 
			  // AD_HSCorder
			  // 
			  this->AD_HSCorder->AutoSize = true;
			  this->AD_HSCorder->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HSCorder->ForeColor = System::Drawing::Color::White;
			  this->AD_HSCorder->Location = System::Drawing::Point(35, 25);
			  this->AD_HSCorder->Name = L"AD_HSCorder";
			  this->AD_HSCorder->Size = System::Drawing::Size(157, 31);
			  this->AD_HSCorder->TabIndex = 1;
			  this->AD_HSCorder->Text = L"Enter Name";
			  // 
			  // AD_DELHSC_lay
			  // 
			  this->AD_DELHSC_lay->Controls->Add(this->checkBox2);
			  this->AD_DELHSC_lay->Controls->Add(this->CloseTab1);
			  this->AD_DELHSC_lay->Controls->Add(this->AD_AskHSC);
			  this->AD_DELHSC_lay->Controls->Add(this->AD_selectHSC);
			  this->AD_DELHSC_lay->Controls->Add(this->AD_HSClist);
			  this->AD_DELHSC_lay->Controls->Add(this->AD_stateHSC1);
			  this->AD_DELHSC_lay->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_DELHSC_lay->Location = System::Drawing::Point(0, 0);
			  this->AD_DELHSC_lay->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_DELHSC_lay->Name = L"AD_DELHSC_lay";
			  this->AD_DELHSC_lay->Size = System::Drawing::Size(916, 362);
			  this->AD_DELHSC_lay->TabIndex = 7;
			  // 
			  // checkBox2
			  // 
			  this->checkBox2->AutoSize = true;
			  this->checkBox2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->checkBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->checkBox2->Location = System::Drawing::Point(107, 177);
			  this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->checkBox2->Name = L"checkBox2";
			  this->checkBox2->Size = System::Drawing::Size(121, 19);
			  this->checkBox2->TabIndex = 7;
			  this->checkBox2->Text = L"Are you sure\?";
			  this->checkBox2->UseVisualStyleBackColor = true;
			  // 
			  // CloseTab1
			  // 
			  this->CloseTab1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			  this->CloseTab1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CloseTab1.BackgroundImage")));
			  this->CloseTab1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->CloseTab1->FlatAppearance->BorderSize = 0;
			  this->CloseTab1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->CloseTab1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->CloseTab1->Location = System::Drawing::Point(876, 9);
			  this->CloseTab1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->CloseTab1->Name = L"CloseTab1";
			  this->CloseTab1->Size = System::Drawing::Size(29, 26);
			  this->CloseTab1->TabIndex = 6;
			  this->CloseTab1->UseVisualStyleBackColor = true;
			  this->CloseTab1->Click += gcnew System::EventHandler(this, &mainPage::CloseTab1_Click);
			  // 
			  // AD_AskHSC
			  // 
			  this->AD_AskHSC->AutoSize = true;
			  this->AD_AskHSC->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_AskHSC->Location = System::Drawing::Point(88, 33);
			  this->AD_AskHSC->Name = L"AD_AskHSC";
			  this->AD_AskHSC->Size = System::Drawing::Size(191, 25);
			  this->AD_AskHSC->TabIndex = 5;
			  this->AD_AskHSC->Text = L"Choose From list";
			  // 
			  // AD_selectHSC
			  // 
			  this->AD_selectHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_selectHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_selectHSC->Location = System::Drawing::Point(611, 155);
			  this->AD_selectHSC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_selectHSC->Name = L"AD_selectHSC";
			  this->AD_selectHSC->Size = System::Drawing::Size(171, 41);
			  this->AD_selectHSC->TabIndex = 3;
			  this->AD_selectHSC->Text = L"Delete";
			  this->AD_selectHSC->UseVisualStyleBackColor = true;
			  this->AD_selectHSC->Click += gcnew System::EventHandler(this, &mainPage::AD_selectHSC_Click);
			  this->AD_selectHSC->Leave += gcnew System::EventHandler(this, &mainPage::AD_selectHSC_Leave);
			  // 
			  // AD_HSClist
			  // 
			  this->AD_HSClist->DropDownHeight = 70;
			  this->AD_HSClist->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->AD_HSClist->FormattingEnabled = true;
			  this->AD_HSClist->IntegralHeight = false;
			  this->AD_HSClist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			  this->AD_HSClist->Location = System::Drawing::Point(91, 82);
			  this->AD_HSClist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HSClist->Name = L"AD_HSClist";
			  this->AD_HSClist->Size = System::Drawing::Size(297, 32);
			  this->AD_HSClist->TabIndex = 0;
			  // 
			  // AD_stateHSC1
			  // 
			  this->AD_stateHSC1->AutoSize = true;
			  this->AD_stateHSC1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_stateHSC1->ForeColor = System::Drawing::Color::White;
			  this->AD_stateHSC1->Location = System::Drawing::Point(104, 128);
			  this->AD_stateHSC1->Name = L"AD_stateHSC1";
			  this->AD_stateHSC1->Size = System::Drawing::Size(113, 18);
			  this->AD_stateHSC1->TabIndex = 4;
			  this->AD_stateHSC1->Text = L"select from list";
			  // 
			  // AD_warning1
			  // 
			  this->AD_warning1->AutoSize = true;
			  this->AD_warning1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 8.861538F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_warning1->ForeColor = System::Drawing::Color::White;
			  this->AD_warning1->Location = System::Drawing::Point(15, 194);
			  this->AD_warning1->Name = L"AD_warning1";
			  this->AD_warning1->Size = System::Drawing::Size(15, 16);
			  this->AD_warning1->TabIndex = 8;
			  this->AD_warning1->Text = L"..";
			  // 
			  // AD_ModifyHSClist
			  // 
			  this->AD_ModifyHSClist->DropDownHeight = 90;
			  this->AD_ModifyHSClist->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->AD_ModifyHSClist->FormattingEnabled = true;
			  this->AD_ModifyHSClist->IntegralHeight = false;
			  this->AD_ModifyHSClist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			  this->AD_ModifyHSClist->Location = System::Drawing::Point(519, 132);
			  this->AD_ModifyHSClist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_ModifyHSClist->MaxDropDownItems = 5;
			  this->AD_ModifyHSClist->Name = L"AD_ModifyHSClist";
			  this->AD_ModifyHSClist->Size = System::Drawing::Size(293, 32);
			  this->AD_ModifyHSClist->TabIndex = 6;
			  this->AD_ModifyHSClist->Visible = false;
			  // 
			  // AD_confirmedit
			  // 
			  this->AD_confirmedit->FlatAppearance->BorderSize = 0;
			  this->AD_confirmedit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_confirmedit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_confirmedit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_confirmedit.Image")));
			  this->AD_confirmedit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_confirmedit->Location = System::Drawing::Point(25, 262);
			  this->AD_confirmedit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_confirmedit->Name = L"AD_confirmedit";
			  this->AD_confirmedit->Size = System::Drawing::Size(119, 46);
			  this->AD_confirmedit->TabIndex = 5;
			  this->AD_confirmedit->Text = L"Edit";
			  this->AD_confirmedit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_confirmedit->UseVisualStyleBackColor = true;
			  this->AD_confirmedit->Click += gcnew System::EventHandler(this, &mainPage::AD_confirmedit_Click);
			  this->AD_confirmedit->Leave += gcnew System::EventHandler(this, &mainPage::AD_confirmedit_Leave);
			  // 
			  // AD_deleteHSC
			  // 
			  this->AD_deleteHSC->FlatAppearance->BorderSize = 0;
			  this->AD_deleteHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_deleteHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_deleteHSC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_deleteHSC.Image")));
			  this->AD_deleteHSC->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_deleteHSC->Location = System::Drawing::Point(604, 336);
			  this->AD_deleteHSC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_deleteHSC->Name = L"AD_deleteHSC";
			  this->AD_deleteHSC->Size = System::Drawing::Size(120, 60);
			  this->AD_deleteHSC->TabIndex = 4;
			  this->AD_deleteHSC->Text = L"Delete";
			  this->AD_deleteHSC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_deleteHSC->UseVisualStyleBackColor = true;
			  this->AD_deleteHSC->Visible = false;
			  this->AD_deleteHSC->Click += gcnew System::EventHandler(this, &mainPage::AD_deleteHSC_Click);
			  // 
			  // AD_addHSC
			  // 
			  this->AD_addHSC->FlatAppearance->BorderSize = 0;
			  this->AD_addHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_addHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_addHSC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_addHSC.Image")));
			  this->AD_addHSC->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_addHSC->Location = System::Drawing::Point(284, 336);
			  this->AD_addHSC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_addHSC->Name = L"AD_addHSC";
			  this->AD_addHSC->Size = System::Drawing::Size(105, 60);
			  this->AD_addHSC->TabIndex = 2;
			  this->AD_addHSC->Text = L"Add";
			  this->AD_addHSC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_addHSC->UseVisualStyleBackColor = true;
			  this->AD_addHSC->Visible = false;
			  this->AD_addHSC->Click += gcnew System::EventHandler(this, &mainPage::AD_addHSC_Click);
			  // 
			  // AD_closeModify
			  // 
			  this->AD_closeModify->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			  this->AD_closeModify->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_closeModify.BackgroundImage")));
			  this->AD_closeModify->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->AD_closeModify->FlatAppearance->BorderSize = 0;
			  this->AD_closeModify->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_closeModify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_closeModify->Location = System::Drawing::Point(876, 6);
			  this->AD_closeModify->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_closeModify->Name = L"AD_closeModify";
			  this->AD_closeModify->Size = System::Drawing::Size(29, 26);
			  this->AD_closeModify->TabIndex = 2;
			  this->AD_closeModify->UseVisualStyleBackColor = true;
			  this->AD_closeModify->Click += gcnew System::EventHandler(this, &mainPage::AD_closeModify_Click);
			  // 
			  // AD_TBinput
			  // 
			  this->AD_TBinput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_TBinput->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_TBinput->Location = System::Drawing::Point(17, 130);
			  this->AD_TBinput->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_TBinput->Name = L"AD_TBinput";
			  this->AD_TBinput->Size = System::Drawing::Size(315, 35);
			  this->AD_TBinput->TabIndex = 1;
			  this->AD_TBinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_TBinput_KeyPress);
			  // 
			  // AD_nameOfinput
			  // 
			  this->AD_nameOfinput->AutoSize = true;
			  this->AD_nameOfinput->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_nameOfinput->ForeColor = System::Drawing::Color::White;
			  this->AD_nameOfinput->Location = System::Drawing::Point(9, 53);
			  this->AD_nameOfinput->Name = L"AD_nameOfinput";
			  this->AD_nameOfinput->Size = System::Drawing::Size(193, 41);
			  this->AD_nameOfinput->TabIndex = 0;
			  this->AD_nameOfinput->Text = L"nameOfinput";
			  this->AD_nameOfinput->TextChanged += gcnew System::EventHandler(this, &mainPage::AD_nameOfinput_TextChanged);
			  // 
			  // AD_groupchoice
			  // 
			  this->AD_groupchoice->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->AD_groupchoice->Controls->Add(this->AD_HCselected);
			  this->AD_groupchoice->Controls->Add(this->AD_HSselected);
			  this->AD_groupchoice->Controls->Add(this->AD_HNselected);
			  this->AD_groupchoice->Controls->Add(this->AD_HRselected);
			  this->AD_groupchoice->Controls->Add(this->AD_BPselected);
			  this->AD_groupchoice->Controls->Add(this->AD_RPselected);
			  this->AD_groupchoice->Controls->Add(this->AD_PRRselected);
			  this->AD_groupchoice->Controls->Add(this->AD_IDselected);
			  this->AD_groupchoice->Dock = System::Windows::Forms::DockStyle::Left;
			  this->AD_groupchoice->Location = System::Drawing::Point(0, 71);
			  this->AD_groupchoice->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_groupchoice->Name = L"AD_groupchoice";
			  this->AD_groupchoice->Size = System::Drawing::Size(277, 770);
			  this->AD_groupchoice->TabIndex = 11;
			  // 
			  // AD_HCselected
			  // 
			  this->AD_HCselected->AutoSize = true;
			  this->AD_HCselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_HCselected->FlatAppearance->BorderSize = 0;
			  this->AD_HCselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_HCselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HCselected->Location = System::Drawing::Point(0, 533);
			  this->AD_HCselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HCselected->Name = L"AD_HCselected";
			  this->AD_HCselected->Size = System::Drawing::Size(277, 65);
			  this->AD_HCselected->TabIndex = 9;
			  this->AD_HCselected->Text = L"Hospital Clinics";
			  this->AD_HCselected->UseVisualStyleBackColor = true;
			  this->AD_HCselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HCselected_Click);
			  // 
			  // AD_HSselected
			  // 
			  this->AD_HSselected->AutoSize = true;
			  this->AD_HSselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_HSselected->FlatAppearance->BorderSize = 0;
			  this->AD_HSselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_HSselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HSselected->Location = System::Drawing::Point(0, 459);
			  this->AD_HSselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HSselected->Name = L"AD_HSselected";
			  this->AD_HSselected->Size = System::Drawing::Size(277, 74);
			  this->AD_HSselected->TabIndex = 8;
			  this->AD_HSselected->Text = L"Hospital Specialties";
			  this->AD_HSselected->UseVisualStyleBackColor = true;
			  this->AD_HSselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HSselected_Click);
			  // 
			  // AD_HNselected
			  // 
			  this->AD_HNselected->AutoSize = true;
			  this->AD_HNselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_HNselected->FlatAppearance->BorderSize = 0;
			  this->AD_HNselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_HNselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HNselected->Location = System::Drawing::Point(0, 385);
			  this->AD_HNselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HNselected->Name = L"AD_HNselected";
			  this->AD_HNselected->Size = System::Drawing::Size(277, 74);
			  this->AD_HNselected->TabIndex = 7;
			  this->AD_HNselected->Text = L"Hospital Name";
			  this->AD_HNselected->UseVisualStyleBackColor = true;
			  this->AD_HNselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HNselected_Click);
			  // 
			  // AD_HRselected
			  // 
			  this->AD_HRselected->AutoSize = true;
			  this->AD_HRselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_HRselected->FlatAppearance->BorderSize = 0;
			  this->AD_HRselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_HRselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HRselected->Location = System::Drawing::Point(0, 311);
			  this->AD_HRselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HRselected->Name = L"AD_HRselected";
			  this->AD_HRselected->Size = System::Drawing::Size(277, 74);
			  this->AD_HRselected->TabIndex = 6;
			  this->AD_HRselected->Text = L"Hospital Rate";
			  this->AD_HRselected->UseVisualStyleBackColor = true;
			  this->AD_HRselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HRselected_Click);
			  // 
			  // AD_BPselected
			  // 
			  this->AD_BPselected->AutoSize = true;
			  this->AD_BPselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_BPselected->FlatAppearance->BorderSize = 0;
			  this->AD_BPselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_BPselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_BPselected->Location = System::Drawing::Point(0, 237);
			  this->AD_BPselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_BPselected->Name = L"AD_BPselected";
			  this->AD_BPselected->Size = System::Drawing::Size(277, 74);
			  this->AD_BPselected->TabIndex = 5;
			  this->AD_BPselected->Text = L"Beds Price";
			  this->AD_BPselected->UseVisualStyleBackColor = true;
			  this->AD_BPselected->Click += gcnew System::EventHandler(this, &mainPage::AD_BPselected_Click);
			  // 
			  // AD_RPselected
			  // 
			  this->AD_RPselected->AutoSize = true;
			  this->AD_RPselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_RPselected->FlatAppearance->BorderSize = 0;
			  this->AD_RPselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_RPselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_RPselected->Location = System::Drawing::Point(0, 163);
			  this->AD_RPselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_RPselected->Name = L"AD_RPselected";
			  this->AD_RPselected->Size = System::Drawing::Size(277, 74);
			  this->AD_RPselected->TabIndex = 4;
			  this->AD_RPselected->Text = L"Reservation Price";
			  this->AD_RPselected->UseVisualStyleBackColor = true;
			  this->AD_RPselected->Click += gcnew System::EventHandler(this, &mainPage::AD_RPselected_Click);
			  // 
			  // AD_PRRselected
			  // 
			  this->AD_PRRselected->AutoSize = true;
			  this->AD_PRRselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_PRRselected->FlatAppearance->BorderSize = 0;
			  this->AD_PRRselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_PRRselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_PRRselected->Location = System::Drawing::Point(0, 74);
			  this->AD_PRRselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_PRRselected->Name = L"AD_PRRselected";
			  this->AD_PRRselected->Size = System::Drawing::Size(277, 89);
			  this->AD_PRRselected->TabIndex = 3;
			  this->AD_PRRselected->Text = L"Patient Reservation Rooms";
			  this->AD_PRRselected->UseVisualStyleBackColor = true;
			  this->AD_PRRselected->Click += gcnew System::EventHandler(this, &mainPage::AD_PRRselected_Click);
			  // 
			  // AD_IDselected
			  // 
			  this->AD_IDselected->AutoSize = true;
			  this->AD_IDselected->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_IDselected->FlatAppearance->BorderSize = 0;
			  this->AD_IDselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_IDselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_IDselected->Location = System::Drawing::Point(0, 0);
			  this->AD_IDselected->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_IDselected->Name = L"AD_IDselected";
			  this->AD_IDselected->Size = System::Drawing::Size(277, 74);
			  this->AD_IDselected->TabIndex = 2;
			  this->AD_IDselected->Text = L"Hospital ID";
			  this->AD_IDselected->UseVisualStyleBackColor = true;
			  this->AD_IDselected->Click += gcnew System::EventHandler(this, &mainPage::AD_IDselected_Click);
			  // 
			  // AD_headerModify
			  // 
			  this->AD_headerModify->BackColor = System::Drawing::SystemColors::AppWorkspace;
			  this->AD_headerModify->Controls->Add(this->label3);
			  this->AD_headerModify->Controls->Add(this->AD_Hlist_combox);
			  this->AD_headerModify->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_headerModify->Location = System::Drawing::Point(0, 0);
			  this->AD_headerModify->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_headerModify->Name = L"AD_headerModify";
			  this->AD_headerModify->Size = System::Drawing::Size(1193, 71);
			  this->AD_headerModify->TabIndex = 10;
			  // 
			  // label3
			  // 
			  this->label3->AutoSize = true;
			  this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label3->Location = System::Drawing::Point(61, 18);
			  this->label3->Name = L"label3";
			  this->label3->Size = System::Drawing::Size(171, 29);
			  this->label3->TabIndex = 1;
			  this->label3->Text = L"Hospital list ";
			  // 
			  // AD_Hlist_combox
			  // 
			  this->AD_Hlist_combox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->AD_Hlist_combox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Hlist_combox->FormattingEnabled = true;
			  this->AD_Hlist_combox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->AD_Hlist_combox->Location = System::Drawing::Point(296, 14);
			  this->AD_Hlist_combox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_Hlist_combox->Name = L"AD_Hlist_combox";
			  this->AD_Hlist_combox->Size = System::Drawing::Size(324, 33);
			  this->AD_Hlist_combox->TabIndex = 0;
			  this->AD_Hlist_combox->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::AD_Hlist_combox_SelectedIndexChanged);
			  // 
			  // AD_edit_Hlist
			  // 
			  this->AD_edit_Hlist->Controls->Add(this->AD_addHlayout);
			  this->AD_edit_Hlist->Controls->Add(this->AD_waitingP);
			  this->AD_edit_Hlist->Controls->Add(this->AD_deleteHlayout);
			  this->AD_edit_Hlist->Controls->Add(this->AD_header_editH);
			  this->AD_edit_Hlist->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_edit_Hlist->Location = System::Drawing::Point(0, 0);
			  this->AD_edit_Hlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_edit_Hlist->Name = L"AD_edit_Hlist";
			  this->AD_edit_Hlist->Size = System::Drawing::Size(1193, 841);
			  this->AD_edit_Hlist->TabIndex = 2;
			  // 
			  // AD_addHlayout
			  // 
			  this->AD_addHlayout->BackColor = System::Drawing::Color::Transparent;
			  this->AD_addHlayout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_addHlayout.BackgroundImage")));
			  this->AD_addHlayout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->AD_addHlayout->Controls->Add(this->AD_HSPorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HSPorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_HPRBsorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HPRBsorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_HIDorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HIDorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_HRateorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HRateorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_HRPorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HRPorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_HBPorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HBPorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_addH);
			  this->AD_addHlayout->Controls->Add(this->AD_HNorder_lab);
			  this->AD_addHlayout->Controls->Add(this->AD_HNorder_TB);
			  this->AD_addHlayout->Controls->Add(this->AD_Herror);
			  this->AD_addHlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_addHlayout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_addHlayout->Location = System::Drawing::Point(0, 80);
			  this->AD_addHlayout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_addHlayout->Name = L"AD_addHlayout";
			  this->AD_addHlayout->Size = System::Drawing::Size(1193, 761);
			  this->AD_addHlayout->TabIndex = 14;
			  // 
			  // AD_HSPorder_lab
			  // 
			  this->AD_HSPorder_lab->AutoSize = true;
			  this->AD_HSPorder_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_HSPorder_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_HSPorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_HSPorder_lab->Location = System::Drawing::Point(119, 353);
			  this->AD_HSPorder_lab->Name = L"AD_HSPorder_lab";
			  this->AD_HSPorder_lab->Size = System::Drawing::Size(178, 31);
			  this->AD_HSPorder_lab->TabIndex = 23;
			  this->AD_HSPorder_lab->Text = L"Surgery Price";
			  // 
			  // AD_HSPorder_TB
			  // 
			  this->AD_HSPorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HSPorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HSPorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HSPorder_TB->Location = System::Drawing::Point(123, 402);
			  this->AD_HSPorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HSPorder_TB->Name = L"AD_HSPorder_TB";
			  this->AD_HSPorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HSPorder_TB->TabIndex = 24;
			  this->AD_HSPorder_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_HSPorder_TB_KeyPress);
			  // 
			  // AD_HPRBsorder_lab
			  // 
			  this->AD_HPRBsorder_lab->AutoSize = true;
			  this->AD_HPRBsorder_lab->BackColor = System::Drawing::Color::White;
			  this->AD_HPRBsorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_HPRBsorder_lab->Location = System::Drawing::Point(645, 261);
			  this->AD_HPRBsorder_lab->Name = L"AD_HPRBsorder_lab";
			  this->AD_HPRBsorder_lab->Size = System::Drawing::Size(193, 31);
			  this->AD_HPRBsorder_lab->TabIndex = 20;
			  this->AD_HPRBsorder_lab->Text = L"Beds Avaliable";
			  // 
			  // AD_HPRBsorder_TB
			  // 
			  this->AD_HPRBsorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HPRBsorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HPRBsorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HPRBsorder_TB->Location = System::Drawing::Point(651, 309);
			  this->AD_HPRBsorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HPRBsorder_TB->Name = L"AD_HPRBsorder_TB";
			  this->AD_HPRBsorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HPRBsorder_TB->TabIndex = 21;
			  this->AD_HPRBsorder_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_HPRBsorder_TB_KeyPress);
			  // 
			  // AD_HIDorder_lab
			  // 
			  this->AD_HIDorder_lab->AutoSize = true;
			  this->AD_HIDorder_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_HIDorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_HIDorder_lab->Location = System::Drawing::Point(645, 69);
			  this->AD_HIDorder_lab->Name = L"AD_HIDorder_lab";
			  this->AD_HIDorder_lab->Size = System::Drawing::Size(148, 31);
			  this->AD_HIDorder_lab->TabIndex = 18;
			  this->AD_HIDorder_lab->Text = L"Hospital ID";
			  // 
			  // AD_HIDorder_TB
			  // 
			  this->AD_HIDorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HIDorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HIDorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HIDorder_TB->Location = System::Drawing::Point(651, 117);
			  this->AD_HIDorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HIDorder_TB->Name = L"AD_HIDorder_TB";
			  this->AD_HIDorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HIDorder_TB->TabIndex = 19;
			  this->AD_HIDorder_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_HIDorder_TB_KeyPress);
			  // 
			  // AD_HRateorder_lab
			  // 
			  this->AD_HRateorder_lab->AutoSize = true;
			  this->AD_HRateorder_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_HRateorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_HRateorder_lab->Location = System::Drawing::Point(644, 165);
			  this->AD_HRateorder_lab->Name = L"AD_HRateorder_lab";
			  this->AD_HRateorder_lab->Size = System::Drawing::Size(72, 31);
			  this->AD_HRateorder_lab->TabIndex = 16;
			  this->AD_HRateorder_lab->Text = L"Rate";
			  // 
			  // AD_HRateorder_TB
			  // 
			  this->AD_HRateorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HRateorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HRateorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HRateorder_TB->Location = System::Drawing::Point(649, 213);
			  this->AD_HRateorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HRateorder_TB->Name = L"AD_HRateorder_TB";
			  this->AD_HRateorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HRateorder_TB->TabIndex = 17;
			  this->AD_HRateorder_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_HRateorder_TB_KeyPress);
			  // 
			  // AD_HRPorder_lab
			  // 
			  this->AD_HRPorder_lab->AutoSize = true;
			  this->AD_HRPorder_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_HRPorder_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_HRPorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_HRPorder_lab->Location = System::Drawing::Point(119, 255);
			  this->AD_HRPorder_lab->Name = L"AD_HRPorder_lab";
			  this->AD_HRPorder_lab->Size = System::Drawing::Size(229, 31);
			  this->AD_HRPorder_lab->TabIndex = 14;
			  this->AD_HRPorder_lab->Text = L"Reservation Price";
			  // 
			  // AD_HRPorder_TB
			  // 
			  this->AD_HRPorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HRPorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HRPorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HRPorder_TB->Location = System::Drawing::Point(123, 304);
			  this->AD_HRPorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HRPorder_TB->Name = L"AD_HRPorder_TB";
			  this->AD_HRPorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HRPorder_TB->TabIndex = 15;
			  this->AD_HRPorder_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_HRPorder_TB_KeyPress);
			  // 
			  // AD_HBPorder_lab
			  // 
			  this->AD_HBPorder_lab->AutoSize = true;
			  this->AD_HBPorder_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_HBPorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_HBPorder_lab->Location = System::Drawing::Point(119, 156);
			  this->AD_HBPorder_lab->Name = L"AD_HBPorder_lab";
			  this->AD_HBPorder_lab->Size = System::Drawing::Size(145, 31);
			  this->AD_HBPorder_lab->TabIndex = 12;
			  this->AD_HBPorder_lab->Text = L"Beds Price";
			  // 
			  // AD_HBPorder_TB
			  // 
			  this->AD_HBPorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HBPorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HBPorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HBPorder_TB->Location = System::Drawing::Point(123, 206);
			  this->AD_HBPorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HBPorder_TB->Name = L"AD_HBPorder_TB";
			  this->AD_HBPorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HBPorder_TB->TabIndex = 13;
			  this->AD_HBPorder_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::AD_HBPorder_TB_KeyPress);
			  // 
			  // AD_addH
			  // 
			  this->AD_addH->FlatAppearance->BorderSize = 2;
			  this->AD_addH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_addH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_addH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_addH.Image")));
			  this->AD_addH->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_addH->Location = System::Drawing::Point(613, 375);
			  this->AD_addH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_addH->Name = L"AD_addH";
			  this->AD_addH->Size = System::Drawing::Size(167, 64);
			  this->AD_addH->TabIndex = 11;
			  this->AD_addH->Text = L"Add";
			  this->AD_addH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_addH->UseVisualStyleBackColor = true;
			  this->AD_addH->Click += gcnew System::EventHandler(this, &mainPage::AD_addH_Click);
			  this->AD_addH->Leave += gcnew System::EventHandler(this, &mainPage::AD_addH_Leave);
			  // 
			  // AD_HNorder_lab
			  // 
			  this->AD_HNorder_lab->AutoSize = true;
			  this->AD_HNorder_lab->BackColor = System::Drawing::Color::Transparent;
			  this->AD_HNorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HNorder_lab->Location = System::Drawing::Point(119, 59);
			  this->AD_HNorder_lab->Name = L"AD_HNorder_lab";
			  this->AD_HNorder_lab->Size = System::Drawing::Size(192, 31);
			  this->AD_HNorder_lab->TabIndex = 7;
			  this->AD_HNorder_lab->Text = L"Hospital Name";
			  // 
			  // AD_HNorder_TB
			  // 
			  this->AD_HNorder_TB->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_HNorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->AD_HNorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HNorder_TB->Location = System::Drawing::Point(123, 108);
			  this->AD_HNorder_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HNorder_TB->Name = L"AD_HNorder_TB";
			  this->AD_HNorder_TB->Size = System::Drawing::Size(380, 34);
			  this->AD_HNorder_TB->TabIndex = 8;
			  // 
			  // AD_Herror
			  // 
			  this->AD_Herror->AutoSize = true;
			  this->AD_Herror->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Herror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				  static_cast<System::Int32>(static_cast<System::Byte>(0)));
			  this->AD_Herror->Location = System::Drawing::Point(123, 464);
			  this->AD_Herror->Name = L"AD_Herror";
			  this->AD_Herror->Size = System::Drawing::Size(17, 25);
			  this->AD_Herror->TabIndex = 10;
			  this->AD_Herror->Text = L".";
			  // 
			  // AD_waitingP
			  // 
			  this->AD_waitingP->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_waitingP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			  this->AD_waitingP->Controls->Add(this->pictureBox1);
			  this->AD_waitingP->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_waitingP->Location = System::Drawing::Point(0, 80);
			  this->AD_waitingP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_waitingP->Name = L"AD_waitingP";
			  this->AD_waitingP->Size = System::Drawing::Size(1193, 761);
			  this->AD_waitingP->TabIndex = 17;
			  // 
			  // pictureBox1
			  // 
			  this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			  this->pictureBox1->Location = System::Drawing::Point(0, 0);
			  this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->pictureBox1->Name = L"pictureBox1";
			  this->pictureBox1->Size = System::Drawing::Size(1193, 761);
			  this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			  this->pictureBox1->TabIndex = 0;
			  this->pictureBox1->TabStop = false;
			  // 
			  // AD_deleteHlayout
			  // 
			  this->AD_deleteHlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->AD_deleteHlayout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_deleteHlayout.BackgroundImage")));
			  this->AD_deleteHlayout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->AD_deleteHlayout->Controls->Add(this->label15);
			  this->AD_deleteHlayout->Controls->Add(this->checkBox1);
			  this->AD_deleteHlayout->Controls->Add(this->AD_DELhospitalRate);
			  this->AD_deleteHlayout->Controls->Add(this->AD_DELhospitalID);
			  this->AD_deleteHlayout->Controls->Add(this->AD_messegeState);
			  this->AD_deleteHlayout->Controls->Add(this->AD_HListDEL);
			  this->AD_deleteHlayout->Controls->Add(this->AD_selectHD);
			  this->AD_deleteHlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_deleteHlayout->Location = System::Drawing::Point(0, 80);
			  this->AD_deleteHlayout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_deleteHlayout->Name = L"AD_deleteHlayout";
			  this->AD_deleteHlayout->Size = System::Drawing::Size(1193, 761);
			  this->AD_deleteHlayout->TabIndex = 16;
			  // 
			  // label15
			  // 
			  this->label15->AutoSize = true;
			  this->label15->BackColor = System::Drawing::Color::Transparent;
			  this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label15->Location = System::Drawing::Point(57, 233);
			  this->label15->Name = L"label15";
			  this->label15->Size = System::Drawing::Size(144, 29);
			  this->label15->TabIndex = 14;
			  this->label15->Text = L"Hospital List";
			  // 
			  // checkBox1
			  // 
			  this->checkBox1->AutoSize = true;
			  this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			  this->checkBox1->Location = System::Drawing::Point(56, 389);
			  this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->checkBox1->Name = L"checkBox1";
			  this->checkBox1->Size = System::Drawing::Size(111, 20);
			  this->checkBox1->TabIndex = 13;
			  this->checkBox1->Text = L"Are you sure\?";
			  this->checkBox1->UseVisualStyleBackColor = false;
			  // 
			  // AD_DELhospitalRate
			  // 
			  this->AD_DELhospitalRate->AutoSize = true;
			  this->AD_DELhospitalRate->BackColor = System::Drawing::Color::Transparent;
			  this->AD_DELhospitalRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_DELhospitalRate->Location = System::Drawing::Point(56, 106);
			  this->AD_DELhospitalRate->Name = L"AD_DELhospitalRate";
			  this->AD_DELhospitalRate->Size = System::Drawing::Size(193, 36);
			  this->AD_DELhospitalRate->TabIndex = 12;
			  this->AD_DELhospitalRate->Text = L"Hospital Rate";
			  // 
			  // AD_DELhospitalID
			  // 
			  this->AD_DELhospitalID->AutoSize = true;
			  this->AD_DELhospitalID->BackColor = System::Drawing::Color::Transparent;
			  this->AD_DELhospitalID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_DELhospitalID->Location = System::Drawing::Point(56, 38);
			  this->AD_DELhospitalID->Name = L"AD_DELhospitalID";
			  this->AD_DELhospitalID->Size = System::Drawing::Size(160, 36);
			  this->AD_DELhospitalID->TabIndex = 11;
			  this->AD_DELhospitalID->Text = L"Hospital ID";
			  // 
			  // AD_messegeState
			  // 
			  this->AD_messegeState->AutoSize = true;
			  this->AD_messegeState->BackColor = System::Drawing::Color::Transparent;
			  this->AD_messegeState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_messegeState->ForeColor = System::Drawing::Color::DarkRed;
			  this->AD_messegeState->Location = System::Drawing::Point(48, 327);
			  this->AD_messegeState->Name = L"AD_messegeState";
			  this->AD_messegeState->Size = System::Drawing::Size(16, 18);
			  this->AD_messegeState->TabIndex = 10;
			  this->AD_messegeState->Text = L"..";
			  // 
			  // AD_HListDEL
			  // 
			  this->AD_HListDEL->BackColor = System::Drawing::Color::LightGray;
			  this->AD_HListDEL->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->AD_HListDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_HListDEL->FormattingEnabled = true;
			  this->AD_HListDEL->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			  this->AD_HListDEL->Location = System::Drawing::Point(56, 273);
			  this->AD_HListDEL->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_HListDEL->Name = L"AD_HListDEL";
			  this->AD_HListDEL->Size = System::Drawing::Size(308, 37);
			  this->AD_HListDEL->TabIndex = 6;
			  this->AD_HListDEL->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::AD_HListDEL_SelectedIndexChanged);
			  // 
			  // AD_selectHD
			  // 
			  this->AD_selectHD->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			  this->AD_selectHD->FlatAppearance->BorderSize = 2;
			  this->AD_selectHD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_selectHD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_selectHD->Location = System::Drawing::Point(379, 388);
			  this->AD_selectHD->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_selectHD->Name = L"AD_selectHD";
			  this->AD_selectHD->Size = System::Drawing::Size(125, 33);
			  this->AD_selectHD->TabIndex = 9;
			  this->AD_selectHD->Text = L"Delete";
			  this->AD_selectHD->UseVisualStyleBackColor = false;
			  this->AD_selectHD->Click += gcnew System::EventHandler(this, &mainPage::AD_selectHD_Click);
			  // 
			  // AD_header_editH
			  // 
			  this->AD_header_editH->BackColor = System::Drawing::Color::SteelBlue;
			  this->AD_header_editH->Controls->Add(this->AD_deleteH);
			  this->AD_header_editH->Controls->Add(this->AD_addH_but);
			  this->AD_header_editH->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_header_editH->Location = System::Drawing::Point(0, 0);
			  this->AD_header_editH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_header_editH->Name = L"AD_header_editH";
			  this->AD_header_editH->Size = System::Drawing::Size(1193, 80);
			  this->AD_header_editH->TabIndex = 15;
			  // 
			  // AD_deleteH
			  // 
			  this->AD_deleteH->FlatAppearance->BorderSize = 0;
			  this->AD_deleteH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_deleteH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_deleteH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_deleteH.Image")));
			  this->AD_deleteH->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_deleteH->Location = System::Drawing::Point(633, 10);
			  this->AD_deleteH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_deleteH->Name = L"AD_deleteH";
			  this->AD_deleteH->Size = System::Drawing::Size(120, 60);
			  this->AD_deleteH->TabIndex = 13;
			  this->AD_deleteH->Text = L"Delete";
			  this->AD_deleteH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_deleteH->UseVisualStyleBackColor = true;
			  this->AD_deleteH->Click += gcnew System::EventHandler(this, &mainPage::AD_deleteH_Click);
			  // 
			  // AD_addH_but
			  // 
			  this->AD_addH_but->FlatAppearance->BorderSize = 0;
			  this->AD_addH_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_addH_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_addH_but->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_addH_but.Image")));
			  this->AD_addH_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_addH_but->Location = System::Drawing::Point(384, 10);
			  this->AD_addH_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_addH_but->Name = L"AD_addH_but";
			  this->AD_addH_but->Size = System::Drawing::Size(105, 60);
			  this->AD_addH_but->TabIndex = 12;
			  this->AD_addH_but->Text = L"Add";
			  this->AD_addH_but->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->AD_addH_but->UseVisualStyleBackColor = true;
			  this->AD_addH_but->Click += gcnew System::EventHandler(this, &mainPage::AD_addH_but_Click);
			  // 
			  // AD_viewAinfo
			  // 
			  this->AD_viewAinfo->Controls->Add(this->AD_AEmail);
			  this->AD_viewAinfo->Controls->Add(this->AD_AGender);
			  this->AD_viewAinfo->Controls->Add(this->AD_AphoneN);
			  this->AD_viewAinfo->Controls->Add(this->AD_Aage);
			  this->AD_viewAinfo->Controls->Add(this->AD_AID);
			  this->AD_viewAinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_viewAinfo->Location = System::Drawing::Point(0, 0);
			  this->AD_viewAinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_viewAinfo->Name = L"AD_viewAinfo";
			  this->AD_viewAinfo->Size = System::Drawing::Size(1193, 841);
			  this->AD_viewAinfo->TabIndex = 5;
			  // 
			  // AD_AEmail
			  // 
			  this->AD_AEmail->AutoSize = true;
			  this->AD_AEmail->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_AEmail->Location = System::Drawing::Point(67, 482);
			  this->AD_AEmail->Name = L"AD_AEmail";
			  this->AD_AEmail->Size = System::Drawing::Size(287, 62);
			  this->AD_AEmail->TabIndex = 4;
			  this->AD_AEmail->Text = L"admin email";
			  // 
			  // AD_AGender
			  // 
			  this->AD_AGender->AutoSize = true;
			  this->AD_AGender->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_AGender->Location = System::Drawing::Point(67, 384);
			  this->AD_AGender->Name = L"AD_AGender";
			  this->AD_AGender->Size = System::Drawing::Size(317, 62);
			  this->AD_AGender->TabIndex = 3;
			  this->AD_AGender->Text = L"admin gender";
			  // 
			  // AD_AphoneN
			  // 
			  this->AD_AphoneN->AutoSize = true;
			  this->AD_AphoneN->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_AphoneN->Location = System::Drawing::Point(67, 287);
			  this->AD_AphoneN->Name = L"AD_AphoneN";
			  this->AD_AphoneN->Size = System::Drawing::Size(487, 62);
			  this->AD_AphoneN->TabIndex = 2;
			  this->AD_AphoneN->Text = L"admin phone number";
			  // 
			  // AD_Aage
			  // 
			  this->AD_Aage->AutoSize = true;
			  this->AD_Aage->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_Aage->Location = System::Drawing::Point(67, 188);
			  this->AD_Aage->Name = L"AD_Aage";
			  this->AD_Aage->Size = System::Drawing::Size(254, 62);
			  this->AD_Aage->TabIndex = 1;
			  this->AD_Aage->Text = L"admin Age";
			  // 
			  // AD_AID
			  // 
			  this->AD_AID->AutoSize = true;
			  this->AD_AID->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AD_AID->Location = System::Drawing::Point(67, 91);
			  this->AD_AID->Name = L"AD_AID";
			  this->AD_AID->Size = System::Drawing::Size(224, 62);
			  this->AD_AID->TabIndex = 0;
			  this->AD_AID->Text = L"admin ID";
			  // 
			  // AD_startWindow
			  // 
			  this->AD_startWindow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_startWindow.BackgroundImage")));
			  this->AD_startWindow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->AD_startWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->AD_startWindow->Location = System::Drawing::Point(0, 0);
			  this->AD_startWindow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_startWindow->Name = L"AD_startWindow";
			  this->AD_startWindow->Size = System::Drawing::Size(1193, 841);
			  this->AD_startWindow->TabIndex = 4;
			  // 
			  // side_AD_bar_pn
			  // 
			  this->side_AD_bar_pn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->side_AD_bar_pn->Controls->Add(this->AD_SortHospital);
			  this->side_AD_bar_pn->Controls->Add(this->AD_logout_but);
			  this->side_AD_bar_pn->Controls->Add(this->AD_dispatient_hos_but);
			  this->side_AD_bar_pn->Controls->Add(this->AD_dispaly_hos_but);
			  this->side_AD_bar_pn->Controls->Add(this->AD_modify_hos_but);
			  this->side_AD_bar_pn->Controls->Add(this->AD_addORdel_hos_but);
			  this->side_AD_bar_pn->Controls->Add(this->AD_info_pn);
			  this->side_AD_bar_pn->Dock = System::Windows::Forms::DockStyle::Left;
			  this->side_AD_bar_pn->Location = System::Drawing::Point(0, 0);
			  this->side_AD_bar_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->side_AD_bar_pn->Name = L"side_AD_bar_pn";
			  this->side_AD_bar_pn->Size = System::Drawing::Size(343, 841);
			  this->side_AD_bar_pn->TabIndex = 0;
			  // 
			  // AD_SortHospital
			  // 
			  this->AD_SortHospital->AutoSize = true;
			  this->AD_SortHospital->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_SortHospital->FlatAppearance->BorderSize = 0;
			  this->AD_SortHospital->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_SortHospital->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_SortHospital->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_SortHospital->Location = System::Drawing::Point(0, 492);
			  this->AD_SortHospital->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->AD_SortHospital->Name = L"AD_SortHospital";
			  this->AD_SortHospital->Size = System::Drawing::Size(343, 79);
			  this->AD_SortHospital->TabIndex = 7;
			  this->AD_SortHospital->Text = L"Sort Hospital list";
			  this->AD_SortHospital->UseVisualStyleBackColor = true;
			  this->AD_SortHospital->Click += gcnew System::EventHandler(this, &mainPage::AD_SortHospital_Click);
			  // 
			  // AD_logout_but
			  // 
			  this->AD_logout_but->Dock = System::Windows::Forms::DockStyle::Bottom;
			  this->AD_logout_but->FlatAppearance->BorderSize = 0;
			  this->AD_logout_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_logout_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_logout_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->AD_logout_but->Location = System::Drawing::Point(0, 787);
			  this->AD_logout_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_logout_but->Name = L"AD_logout_but";
			  this->AD_logout_but->Size = System::Drawing::Size(343, 54);
			  this->AD_logout_but->TabIndex = 5;
			  this->AD_logout_but->Text = L"Log out";
			  this->AD_logout_but->UseVisualStyleBackColor = true;
			  this->AD_logout_but->Click += gcnew System::EventHandler(this, &mainPage::AD_logout_but_Click);
			  // 
			  // AD_dispatient_hos_but
			  // 
			  this->AD_dispatient_hos_but->AutoSize = true;
			  this->AD_dispatient_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_dispatient_hos_but->FlatAppearance->BorderSize = 0;
			  this->AD_dispatient_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_dispatient_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_dispatient_hos_but->Location = System::Drawing::Point(0, 427);
			  this->AD_dispatient_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 2);
			  this->AD_dispatient_hos_but->Name = L"AD_dispatient_hos_but";
			  this->AD_dispatient_hos_but->Size = System::Drawing::Size(343, 65);
			  this->AD_dispatient_hos_but->TabIndex = 4;
			  this->AD_dispatient_hos_but->Text = L"Display patient Data";
			  this->AD_dispatient_hos_but->UseVisualStyleBackColor = true;
			  this->AD_dispatient_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_dispatient_hos_but_Click);
			  // 
			  // AD_dispaly_hos_but
			  // 
			  this->AD_dispaly_hos_but->AutoSize = true;
			  this->AD_dispaly_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_dispaly_hos_but->FlatAppearance->BorderSize = 0;
			  this->AD_dispaly_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_dispaly_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_dispaly_hos_but->Location = System::Drawing::Point(0, 347);
			  this->AD_dispaly_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 2);
			  this->AD_dispaly_hos_but->Name = L"AD_dispaly_hos_but";
			  this->AD_dispaly_hos_but->Size = System::Drawing::Size(343, 80);
			  this->AD_dispaly_hos_but->TabIndex = 3;
			  this->AD_dispaly_hos_but->Text = L"Display hospital(s) info\r\n";
			  this->AD_dispaly_hos_but->UseVisualStyleBackColor = true;
			  this->AD_dispaly_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_dispaly_hos_but_Click);
			  // 
			  // AD_modify_hos_but
			  // 
			  this->AD_modify_hos_but->AutoSize = true;
			  this->AD_modify_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_modify_hos_but->FlatAppearance->BorderSize = 0;
			  this->AD_modify_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_modify_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_modify_hos_but->Location = System::Drawing::Point(0, 276);
			  this->AD_modify_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 2);
			  this->AD_modify_hos_but->Name = L"AD_modify_hos_but";
			  this->AD_modify_hos_but->Size = System::Drawing::Size(343, 71);
			  this->AD_modify_hos_but->TabIndex = 2;
			  this->AD_modify_hos_but->Text = L"Modify hospitals";
			  this->AD_modify_hos_but->UseVisualStyleBackColor = true;
			  this->AD_modify_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_modify_hos_but_Click);
			  // 
			  // AD_addORdel_hos_but
			  // 
			  this->AD_addORdel_hos_but->AutoSize = true;
			  this->AD_addORdel_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_addORdel_hos_but->FlatAppearance->BorderSize = 0;
			  this->AD_addORdel_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_addORdel_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->AD_addORdel_hos_but->Location = System::Drawing::Point(0, 187);
			  this->AD_addORdel_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 2);
			  this->AD_addORdel_hos_but->Name = L"AD_addORdel_hos_but";
			  this->AD_addORdel_hos_but->Size = System::Drawing::Size(343, 89);
			  this->AD_addORdel_hos_but->TabIndex = 1;
			  this->AD_addORdel_hos_but->Text = L"Edit hospital List\r\n(add or delete)\r\n";
			  this->AD_addORdel_hos_but->UseVisualStyleBackColor = true;
			  this->AD_addORdel_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_addORdel_hos_but_Click);
			  // 
			  // AD_info_pn
			  // 
			  this->AD_info_pn->BackColor = System::Drawing::SystemColors::ButtonShadow;
			  this->AD_info_pn->Controls->Add(this->AD_DelAcc);
			  this->AD_info_pn->Controls->Add(this->AddNewAdminbut);
			  this->AD_info_pn->Controls->Add(this->edit_AInfo);
			  this->AD_info_pn->Controls->Add(this->view_AInfo);
			  this->AD_info_pn->Controls->Add(this->userType_lab);
			  this->AD_info_pn->Controls->Add(this->FName_AD_lab);
			  this->AD_info_pn->Controls->Add(this->AD_pic);
			  this->AD_info_pn->Dock = System::Windows::Forms::DockStyle::Top;
			  this->AD_info_pn->Location = System::Drawing::Point(0, 0);
			  this->AD_info_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_info_pn->Name = L"AD_info_pn";
			  this->AD_info_pn->Size = System::Drawing::Size(343, 187);
			  this->AD_info_pn->TabIndex = 0;
			  // 
			  // AD_DelAcc
			  // 
			  this->AD_DelAcc->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_DelAcc.BackgroundImage")));
			  this->AD_DelAcc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->AD_DelAcc->FlatAppearance->BorderSize = 0;
			  this->AD_DelAcc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AD_DelAcc->ForeColor = System::Drawing::SystemColors::Control;
			  this->AD_DelAcc->Location = System::Drawing::Point(313, 52);
			  this->AD_DelAcc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_DelAcc->Name = L"AD_DelAcc";
			  this->AD_DelAcc->Size = System::Drawing::Size(24, 26);
			  this->AD_DelAcc->TabIndex = 8;
			  this->AD_DelAcc->UseVisualStyleBackColor = true;
			  this->AD_DelAcc->Click += gcnew System::EventHandler(this, &mainPage::AD_DelAcc_Click);
			  // 
			  // AddNewAdminbut
			  // 
			  this->AddNewAdminbut->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddNewAdminbut.BackgroundImage")));
			  this->AddNewAdminbut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->AddNewAdminbut->FlatAppearance->BorderSize = 0;
			  this->AddNewAdminbut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AddNewAdminbut->ForeColor = System::Drawing::SystemColors::Control;
			  this->AddNewAdminbut->Location = System::Drawing::Point(278, 52);
			  this->AddNewAdminbut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AddNewAdminbut->Name = L"AddNewAdminbut";
			  this->AddNewAdminbut->Size = System::Drawing::Size(24, 26);
			  this->AddNewAdminbut->TabIndex = 7;
			  this->AddNewAdminbut->UseVisualStyleBackColor = true;
			  this->AddNewAdminbut->Click += gcnew System::EventHandler(this, &mainPage::AddNewAdmin_Click);
			  // 
			  // edit_AInfo
			  // 
			  this->edit_AInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit_AInfo.BackgroundImage")));
			  this->edit_AInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->edit_AInfo->FlatAppearance->BorderSize = 0;
			  this->edit_AInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->edit_AInfo->Location = System::Drawing::Point(313, 10);
			  this->edit_AInfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->edit_AInfo->Name = L"edit_AInfo";
			  this->edit_AInfo->Size = System::Drawing::Size(24, 26);
			  this->edit_AInfo->TabIndex = 6;
			  this->edit_AInfo->UseVisualStyleBackColor = true;
			  this->edit_AInfo->Click += gcnew System::EventHandler(this, &mainPage::edit_AInfo_Click);
			  // 
			  // view_AInfo
			  // 
			  this->view_AInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"view_AInfo.BackgroundImage")));
			  this->view_AInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->view_AInfo->FlatAppearance->BorderSize = 0;
			  this->view_AInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->view_AInfo->ForeColor = System::Drawing::SystemColors::Control;
			  this->view_AInfo->Location = System::Drawing::Point(278, 10);
			  this->view_AInfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->view_AInfo->Name = L"view_AInfo";
			  this->view_AInfo->Size = System::Drawing::Size(24, 26);
			  this->view_AInfo->TabIndex = 5;
			  this->view_AInfo->UseVisualStyleBackColor = true;
			  this->view_AInfo->Click += gcnew System::EventHandler(this, &mainPage::view_AInfo_Click);
			  // 
			  // userType_lab
			  // 
			  this->userType_lab->AutoSize = true;
			  this->userType_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->userType_lab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				  static_cast<System::Int32>(static_cast<System::Byte>(64)));
			  this->userType_lab->Location = System::Drawing::Point(259, 156);
			  this->userType_lab->Name = L"userType_lab";
			  this->userType_lab->Size = System::Drawing::Size(73, 28);
			  this->userType_lab->TabIndex = 2;
			  this->userType_lab->Text = L"Admin";
			  // 
			  // FName_AD_lab
			  // 
			  this->FName_AD_lab->AutoSize = true;
			  this->FName_AD_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->FName_AD_lab->Location = System::Drawing::Point(15, 130);
			  this->FName_AD_lab->Name = L"FName_AD_lab";
			  this->FName_AD_lab->Size = System::Drawing::Size(79, 31);
			  this->FName_AD_lab->TabIndex = 1;
			  this->FName_AD_lab->Text = L"label2";
			  // 
			  // AD_pic
			  // 
			  this->AD_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_pic.Image")));
			  this->AD_pic->Location = System::Drawing::Point(69, 14);
			  this->AD_pic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->AD_pic->Name = L"AD_pic";
			  this->AD_pic->Size = System::Drawing::Size(189, 114);
			  this->AD_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			  this->AD_pic->TabIndex = 0;
			  this->AD_pic->TabStop = false;
			  // 
			  // PA_conpage
			  // 
			  this->PA_conpage->Controls->Add(this->PA_pages);
			  this->PA_conpage->Controls->Add(this->side_PA_bar_pn);
			  this->PA_conpage->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_conpage->Location = System::Drawing::Point(0, 0);
			  this->PA_conpage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_conpage->Name = L"PA_conpage";
			  this->PA_conpage->Size = System::Drawing::Size(1536, 841);
			  this->PA_conpage->TabIndex = 9;
			  // 
			  // PA_pages
			  // 
			  this->PA_pages->Controls->Add(this->PA_viewHinfo);
			  this->PA_pages->Controls->Add(this->PA_ModifyReserv);
			  this->PA_pages->Controls->Add(this->PA_editReserv);
			  this->PA_pages->Controls->Add(this->PA_editPinfo);
			  this->PA_pages->Controls->Add(this->PA_SortingH);
			  this->PA_pages->Controls->Add(this->PA_viewPinfo);
			  this->PA_pages->Controls->Add(this->PA_reservlist);
			  this->PA_pages->Controls->Add(this->PA_viewLABR);
			  this->PA_pages->Controls->Add(this->PA_Editlaboratory);
			  this->PA_pages->Controls->Add(this->PA_startwindow);
			  this->PA_pages->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_pages->Location = System::Drawing::Point(340, 0);
			  this->PA_pages->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_pages->Name = L"PA_pages";
			  this->PA_pages->Size = System::Drawing::Size(1196, 841);
			  this->PA_pages->TabIndex = 3;
			  // 
			  // PA_viewHinfo
			  // 
			  this->PA_viewHinfo->Controls->Add(this->PA_AllhospitalData);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_HSplist);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_HCLlist);
			  this->PA_viewHinfo->Controls->Add(this->PA_text2);
			  this->PA_viewHinfo->Controls->Add(this->PA_text1);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_Bedprice);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_surgeryprice);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_Rprice);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_bedsAva);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_rate);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_Name);
			  this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_ID);
			  this->PA_viewHinfo->Controls->Add(this->PA_viewHinfoHeader);
			  this->PA_viewHinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_viewHinfo->Location = System::Drawing::Point(0, 0);
			  this->PA_viewHinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_viewHinfo->Name = L"PA_viewHinfo";
			  this->PA_viewHinfo->Size = System::Drawing::Size(1196, 841);
			  this->PA_viewHinfo->TabIndex = 5;
			  this->PA_viewHinfo->Leave += gcnew System::EventHandler(this, &mainPage::PA_viewHinfo_Leave);
			  // 
			  // PA_AllhospitalData
			  // 
			  this->PA_AllhospitalData->AutoScroll = true;
			  this->PA_AllhospitalData->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_AllhospitalData->Location = System::Drawing::Point(0, 103);
			  this->PA_AllhospitalData->Margin = System::Windows::Forms::Padding(4);
			  this->PA_AllhospitalData->Name = L"PA_AllhospitalData";
			  this->PA_AllhospitalData->Size = System::Drawing::Size(1196, 738);
			  this->PA_AllhospitalData->TabIndex = 19;
			  this->PA_AllhospitalData->Visible = false;
			  // 
			  // PA_Hinfo_HSplist
			  // 
			  this->PA_Hinfo_HSplist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Hinfo_HSplist->FormattingEnabled = true;
			  this->PA_Hinfo_HSplist->ItemHeight = 30;
			  this->PA_Hinfo_HSplist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Specialties List" });
			  this->PA_Hinfo_HSplist->Location = System::Drawing::Point(705, 471);
			  this->PA_Hinfo_HSplist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Hinfo_HSplist->Name = L"PA_Hinfo_HSplist";
			  this->PA_Hinfo_HSplist->Size = System::Drawing::Size(419, 124);
			  this->PA_Hinfo_HSplist->TabIndex = 18;
			  // 
			  // PA_Hinfo_HCLlist
			  // 
			  this->PA_Hinfo_HCLlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Hinfo_HCLlist->FormattingEnabled = true;
			  this->PA_Hinfo_HCLlist->ItemHeight = 30;
			  this->PA_Hinfo_HCLlist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Clinic List" });
			  this->PA_Hinfo_HCLlist->Location = System::Drawing::Point(705, 228);
			  this->PA_Hinfo_HCLlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Hinfo_HCLlist->Name = L"PA_Hinfo_HCLlist";
			  this->PA_Hinfo_HCLlist->Size = System::Drawing::Size(419, 124);
			  this->PA_Hinfo_HCLlist->TabIndex = 17;
			  // 
			  // PA_text2
			  // 
			  this->PA_text2->AutoSize = true;
			  this->PA_text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_text2->ForeColor = System::Drawing::Color::White;
			  this->PA_text2->Location = System::Drawing::Point(701, 443);
			  this->PA_text2->Name = L"PA_text2";
			  this->PA_text2->Size = System::Drawing::Size(132, 24);
			  this->PA_text2->TabIndex = 16;
			  this->PA_text2->Text = L"Specialties List";
			  this->PA_text2->Visible = false;
			  // 
			  // PA_text1
			  // 
			  this->PA_text1->AutoSize = true;
			  this->PA_text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_text1->ForeColor = System::Drawing::Color::White;
			  this->PA_text1->Location = System::Drawing::Point(701, 197);
			  this->PA_text1->Name = L"PA_text1";
			  this->PA_text1->Size = System::Drawing::Size(88, 24);
			  this->PA_text1->TabIndex = 15;
			  this->PA_text1->Text = L"Clinic List";
			  this->PA_text1->Visible = false;
			  // 
			  // PA_Hinfo_Bedprice
			  // 
			  this->PA_Hinfo_Bedprice->AutoSize = true;
			  this->PA_Hinfo_Bedprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Hinfo_Bedprice->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_Bedprice->Location = System::Drawing::Point(32, 631);
			  this->PA_Hinfo_Bedprice->Name = L"PA_Hinfo_Bedprice";
			  this->PA_Hinfo_Bedprice->Size = System::Drawing::Size(182, 39);
			  this->PA_Hinfo_Bedprice->TabIndex = 7;
			  this->PA_Hinfo_Bedprice->Text = L"Beds Price";
			  // 
			  // PA_Hinfo_surgeryprice
			  // 
			  this->PA_Hinfo_surgeryprice->AutoSize = true;
			  this->PA_Hinfo_surgeryprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Hinfo_surgeryprice->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_surgeryprice->Location = System::Drawing::Point(31, 553);
			  this->PA_Hinfo_surgeryprice->Name = L"PA_Hinfo_surgeryprice";
			  this->PA_Hinfo_surgeryprice->Size = System::Drawing::Size(223, 39);
			  this->PA_Hinfo_surgeryprice->TabIndex = 6;
			  this->PA_Hinfo_surgeryprice->Text = L"Surgery Price";
			  // 
			  // PA_Hinfo_Rprice
			  // 
			  this->PA_Hinfo_Rprice->AutoSize = true;
			  this->PA_Hinfo_Rprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Hinfo_Rprice->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_Rprice->Location = System::Drawing::Point(31, 474);
			  this->PA_Hinfo_Rprice->Name = L"PA_Hinfo_Rprice";
			  this->PA_Hinfo_Rprice->Size = System::Drawing::Size(256, 39);
			  this->PA_Hinfo_Rprice->TabIndex = 5;
			  this->PA_Hinfo_Rprice->Text = L"Check-UP price";
			  // 
			  // PA_Hinfo_bedsAva
			  // 
			  this->PA_Hinfo_bedsAva->AutoSize = true;
			  this->PA_Hinfo_bedsAva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Hinfo_bedsAva->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_bedsAva->Location = System::Drawing::Point(31, 395);
			  this->PA_Hinfo_bedsAva->Name = L"PA_Hinfo_bedsAva";
			  this->PA_Hinfo_bedsAva->Size = System::Drawing::Size(244, 39);
			  this->PA_Hinfo_bedsAva->TabIndex = 4;
			  this->PA_Hinfo_bedsAva->Text = L"Beds Avaliable";
			  // 
			  // PA_Hinfo_rate
			  // 
			  this->PA_Hinfo_rate->AutoSize = true;
			  this->PA_Hinfo_rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Hinfo_rate->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_rate->Location = System::Drawing::Point(31, 316);
			  this->PA_Hinfo_rate->Name = L"PA_Hinfo_rate";
			  this->PA_Hinfo_rate->Size = System::Drawing::Size(222, 39);
			  this->PA_Hinfo_rate->TabIndex = 3;
			  this->PA_Hinfo_rate->Text = L"Hospital Rate";
			  // 
			  // PA_Hinfo_Name
			  // 
			  this->PA_Hinfo_Name->AutoSize = true;
			  this->PA_Hinfo_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Hinfo_Name->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_Name->Location = System::Drawing::Point(29, 238);
			  this->PA_Hinfo_Name->Name = L"PA_Hinfo_Name";
			  this->PA_Hinfo_Name->Size = System::Drawing::Size(241, 39);
			  this->PA_Hinfo_Name->TabIndex = 2;
			  this->PA_Hinfo_Name->Text = L"Hospital Name";
			  // 
			  // PA_Hinfo_ID
			  // 
			  this->PA_Hinfo_ID->AutoSize = true;
			  this->PA_Hinfo_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Hinfo_ID->ForeColor = System::Drawing::Color::White;
			  this->PA_Hinfo_ID->Location = System::Drawing::Point(29, 159);
			  this->PA_Hinfo_ID->Name = L"PA_Hinfo_ID";
			  this->PA_Hinfo_ID->Size = System::Drawing::Size(185, 39);
			  this->PA_Hinfo_ID->TabIndex = 0;
			  this->PA_Hinfo_ID->Text = L"Hospital ID";
			  // 
			  // PA_viewHinfoHeader
			  // 
			  this->PA_viewHinfoHeader->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->PA_viewHinfoHeader->Controls->Add(this->PA_viewAllHButton);
			  this->PA_viewHinfoHeader->Controls->Add(this->label6);
			  this->PA_viewHinfoHeader->Controls->Add(this->PA_viewHButton);
			  this->PA_viewHinfoHeader->Controls->Add(this->PA_viewHList);
			  this->PA_viewHinfoHeader->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_viewHinfoHeader->Location = System::Drawing::Point(0, 0);
			  this->PA_viewHinfoHeader->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_viewHinfoHeader->Name = L"PA_viewHinfoHeader";
			  this->PA_viewHinfoHeader->Size = System::Drawing::Size(1196, 103);
			  this->PA_viewHinfoHeader->TabIndex = 1;
			  // 
			  // PA_viewAllHButton
			  // 
			  this->PA_viewAllHButton->FlatAppearance->BorderSize = 0;
			  this->PA_viewAllHButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_viewAllHButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewAllHButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_viewAllHButton.Image")));
			  this->PA_viewAllHButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_viewAllHButton->Location = System::Drawing::Point(1023, 32);
			  this->PA_viewAllHButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_viewAllHButton->Name = L"PA_viewAllHButton";
			  this->PA_viewAllHButton->Size = System::Drawing::Size(171, 36);
			  this->PA_viewAllHButton->TabIndex = 7;
			  this->PA_viewAllHButton->Text = L"View All";
			  this->PA_viewAllHButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->PA_viewAllHButton->UseVisualStyleBackColor = true;
			  this->PA_viewAllHButton->Click += gcnew System::EventHandler(this, &mainPage::PA_viewAllHButton_Click);
			  // 
			  // label6
			  // 
			  this->label6->AutoSize = true;
			  this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label6->ForeColor = System::Drawing::Color::Black;
			  this->label6->Location = System::Drawing::Point(33, 14);
			  this->label6->Name = L"label6";
			  this->label6->Size = System::Drawing::Size(137, 29);
			  this->label6->TabIndex = 6;
			  this->label6->Text = L"Hospital list";
			  // 
			  // PA_viewHButton
			  // 
			  this->PA_viewHButton->FlatAppearance->BorderSize = 0;
			  this->PA_viewHButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_viewHButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_viewHButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_viewHButton.Image")));
			  this->PA_viewHButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_viewHButton->Location = System::Drawing::Point(399, 23);
			  this->PA_viewHButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_viewHButton->Name = L"PA_viewHButton";
			  this->PA_viewHButton->Size = System::Drawing::Size(119, 36);
			  this->PA_viewHButton->TabIndex = 5;
			  this->PA_viewHButton->Text = L"View";
			  this->PA_viewHButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->PA_viewHButton->UseVisualStyleBackColor = true;
			  this->PA_viewHButton->Click += gcnew System::EventHandler(this, &mainPage::PA_viewHButton_Click);
			  // 
			  // PA_viewHList
			  // 
			  this->PA_viewHList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_viewHList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewHList->FormattingEnabled = true;
			  this->PA_viewHList->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_viewHList->Location = System::Drawing::Point(31, 49);
			  this->PA_viewHList->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_viewHList->Name = L"PA_viewHList";
			  this->PA_viewHList->Size = System::Drawing::Size(247, 37);
			  this->PA_viewHList->TabIndex = 0;
			  // 
			  // PA_ModifyReserv
			  // 
			  this->PA_ModifyReserv->Controls->Add(this->PA_modifyHRTRDsLayout);
			  this->PA_ModifyReserv->Controls->Add(this->PA_editNAPhnumlayout);
			  this->PA_ModifyReserv->Controls->Add(this->PA_groupCmodify);
			  this->PA_ModifyReserv->Controls->Add(this->PA_headerM);
			  this->PA_ModifyReserv->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_ModifyReserv->Location = System::Drawing::Point(0, 0);
			  this->PA_ModifyReserv->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_ModifyReserv->Name = L"PA_ModifyReserv";
			  this->PA_ModifyReserv->Size = System::Drawing::Size(1196, 841);
			  this->PA_ModifyReserv->TabIndex = 3;
			  // 
			  // PA_modifyHRTRDsLayout
			  // 
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->panel1);
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_Rnumbofdays);
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_numofdays);
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_Rlistmodify_but);
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_listOfHRtypeRdays);
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_StateOflist);
			  this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_OrderOflist);
			  this->PA_modifyHRTRDsLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_modifyHRTRDsLayout->ForeColor = System::Drawing::Color::White;
			  this->PA_modifyHRTRDsLayout->Location = System::Drawing::Point(327, 100);
			  this->PA_modifyHRTRDsLayout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_modifyHRTRDsLayout->Name = L"PA_modifyHRTRDsLayout";
			  this->PA_modifyHRTRDsLayout->Size = System::Drawing::Size(869, 741);
			  this->PA_modifyHRTRDsLayout->TabIndex = 7;
			  this->PA_modifyHRTRDsLayout->Tag = L"";
			  this->PA_modifyHRTRDsLayout->Visible = false;
			  // 
			  // panel1
			  // 
			  this->panel1->Controls->Add(this->radioButton2);
			  this->panel1->Controls->Add(this->radioButton1);
			  this->panel1->Controls->Add(this->label11);
			  this->panel1->Location = System::Drawing::Point(576, 4);
			  this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->panel1->Name = L"panel1";
			  this->panel1->Size = System::Drawing::Size(291, 162);
			  this->panel1->TabIndex = 11;
			  this->panel1->Visible = false;
			  // 
			  // radioButton2
			  // 
			  this->radioButton2->AutoSize = true;
			  this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->radioButton2->ForeColor = System::Drawing::Color::White;
			  this->radioButton2->Location = System::Drawing::Point(20, 106);
			  this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->radioButton2->Name = L"radioButton2";
			  this->radioButton2->Size = System::Drawing::Size(124, 29);
			  this->radioButton2->TabIndex = 6;
			  this->radioButton2->TabStop = true;
			  this->radioButton2->Text = L"Check-UP";
			  this->radioButton2->UseVisualStyleBackColor = true;
			  this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::radioButton2_CheckedChanged);
			  // 
			  // radioButton1
			  // 
			  this->radioButton1->AutoSize = true;
			  this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->radioButton1->ForeColor = System::Drawing::Color::White;
			  this->radioButton1->Location = System::Drawing::Point(20, 57);
			  this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->radioButton1->Name = L"radioButton1";
			  this->radioButton1->Size = System::Drawing::Size(102, 29);
			  this->radioButton1->TabIndex = 5;
			  this->radioButton1->TabStop = true;
			  this->radioButton1->Text = L"Surgery";
			  this->radioButton1->UseVisualStyleBackColor = true;
			  // 
			  // label11
			  // 
			  this->label11->AutoSize = true;
			  this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label11->ForeColor = System::Drawing::Color::White;
			  this->label11->Location = System::Drawing::Point(13, 4);
			  this->label11->Name = L"label11";
			  this->label11->Size = System::Drawing::Size(248, 36);
			  this->label11->TabIndex = 4;
			  this->label11->Text = L"Reservation Type";
			  // 
			  // PA_Rnumbofdays
			  // 
			  this->PA_Rnumbofdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Rnumbofdays->Location = System::Drawing::Point(69, 181);
			  this->PA_Rnumbofdays->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Rnumbofdays->Name = L"PA_Rnumbofdays";
			  this->PA_Rnumbofdays->Size = System::Drawing::Size(96, 26);
			  this->PA_Rnumbofdays->TabIndex = 13;
			  this->PA_Rnumbofdays->Visible = false;
			  this->PA_Rnumbofdays->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::PA_Rnumbofdays_KeyPress);
			  // 
			  // PA_numofdays
			  // 
			  this->PA_numofdays->AutoSize = true;
			  this->PA_numofdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_numofdays->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->PA_numofdays->Location = System::Drawing::Point(40, 143);
			  this->PA_numofdays->Name = L"PA_numofdays";
			  this->PA_numofdays->Size = System::Drawing::Size(181, 24);
			  this->PA_numofdays->TabIndex = 12;
			  this->PA_numofdays->Text = L"Enter number of day";
			  this->PA_numofdays->Visible = false;
			  // 
			  // PA_Rlistmodify_but
			  // 
			  this->PA_Rlistmodify_but->FlatAppearance->BorderSize = 2;
			  this->PA_Rlistmodify_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_Rlistmodify_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Rlistmodify_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_Rlistmodify_but->Location = System::Drawing::Point(231, 316);
			  this->PA_Rlistmodify_but->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_Rlistmodify_but->Name = L"PA_Rlistmodify_but";
			  this->PA_Rlistmodify_but->Size = System::Drawing::Size(115, 55);
			  this->PA_Rlistmodify_but->TabIndex = 10;
			  this->PA_Rlistmodify_but->Text = L"Edit";
			  this->PA_Rlistmodify_but->UseVisualStyleBackColor = true;
			  this->PA_Rlistmodify_but->Click += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_but_Click);
			  this->PA_Rlistmodify_but->Leave += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_but_Leave);
			  // 
			  // PA_listOfHRtypeRdays
			  // 
			  this->PA_listOfHRtypeRdays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_listOfHRtypeRdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_listOfHRtypeRdays->FormattingEnabled = true;
			  this->PA_listOfHRtypeRdays->Location = System::Drawing::Point(33, 73);
			  this->PA_listOfHRtypeRdays->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_listOfHRtypeRdays->Name = L"PA_listOfHRtypeRdays";
			  this->PA_listOfHRtypeRdays->Size = System::Drawing::Size(437, 33);
			  this->PA_listOfHRtypeRdays->TabIndex = 6;
			  // 
			  // PA_StateOflist
			  // 
			  this->PA_StateOflist->AutoSize = true;
			  this->PA_StateOflist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_StateOflist->ForeColor = System::Drawing::Color::White;
			  this->PA_StateOflist->Location = System::Drawing::Point(21, 229);
			  this->PA_StateOflist->Name = L"PA_StateOflist";
			  this->PA_StateOflist->Size = System::Drawing::Size(13, 20);
			  this->PA_StateOflist->TabIndex = 5;
			  this->PA_StateOflist->Text = L".";
			  // 
			  // PA_OrderOflist
			  // 
			  this->PA_OrderOflist->AutoSize = true;
			  this->PA_OrderOflist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_OrderOflist->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->PA_OrderOflist->Location = System::Drawing::Point(40, 18);
			  this->PA_OrderOflist->Name = L"PA_OrderOflist";
			  this->PA_OrderOflist->Size = System::Drawing::Size(145, 36);
			  this->PA_OrderOflist->TabIndex = 3;
			  this->PA_OrderOflist->Text = L"Order text";
			  // 
			  // PA_editNAPhnumlayout
			  // 
			  this->PA_editNAPhnumlayout->Controls->Add(this->PA_editRbutton);
			  this->PA_editNAPhnumlayout->Controls->Add(this->PA_modifyRstate_lab);
			  this->PA_editNAPhnumlayout->Controls->Add(this->PA_modifyRord_TB);
			  this->PA_editNAPhnumlayout->Controls->Add(this->PA_modifyRord_lab);
			  this->PA_editNAPhnumlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_editNAPhnumlayout->Location = System::Drawing::Point(327, 100);
			  this->PA_editNAPhnumlayout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editNAPhnumlayout->Name = L"PA_editNAPhnumlayout";
			  this->PA_editNAPhnumlayout->Size = System::Drawing::Size(869, 741);
			  this->PA_editNAPhnumlayout->TabIndex = 6;
			  this->PA_editNAPhnumlayout->Tag = L"";
			  this->PA_editNAPhnumlayout->Visible = false;
			  // 
			  // PA_editRbutton
			  // 
			  this->PA_editRbutton->FlatAppearance->BorderSize = 2;
			  this->PA_editRbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_editRbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editRbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_editRbutton->Location = System::Drawing::Point(587, 197);
			  this->PA_editRbutton->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_editRbutton->Name = L"PA_editRbutton";
			  this->PA_editRbutton->Size = System::Drawing::Size(115, 55);
			  this->PA_editRbutton->TabIndex = 11;
			  this->PA_editRbutton->Text = L"Edit";
			  this->PA_editRbutton->UseVisualStyleBackColor = true;
			  this->PA_editRbutton->Click += gcnew System::EventHandler(this, &mainPage::PA_editRbutton_Click);
			  this->PA_editRbutton->Leave += gcnew System::EventHandler(this, &mainPage::PA_editRbutton_Leave);
			  // 
			  // PA_modifyRstate_lab
			  // 
			  this->PA_modifyRstate_lab->AutoSize = true;
			  this->PA_modifyRstate_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_modifyRstate_lab->ForeColor = System::Drawing::Color::White;
			  this->PA_modifyRstate_lab->Location = System::Drawing::Point(32, 223);
			  this->PA_modifyRstate_lab->Name = L"PA_modifyRstate_lab";
			  this->PA_modifyRstate_lab->Size = System::Drawing::Size(13, 20);
			  this->PA_modifyRstate_lab->TabIndex = 5;
			  this->PA_modifyRstate_lab->Text = L".";
			  // 
			  // PA_modifyRord_TB
			  // 
			  this->PA_modifyRord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_modifyRord_TB->Location = System::Drawing::Point(37, 94);
			  this->PA_modifyRord_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_modifyRord_TB->Name = L"PA_modifyRord_TB";
			  this->PA_modifyRord_TB->Size = System::Drawing::Size(364, 41);
			  this->PA_modifyRord_TB->TabIndex = 4;
			  this->PA_modifyRord_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::PA_modifyRord_TB_KeyPress);
			  // 
			  // PA_modifyRord_lab
			  // 
			  this->PA_modifyRord_lab->AutoSize = true;
			  this->PA_modifyRord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_modifyRord_lab->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			  this->PA_modifyRord_lab->Location = System::Drawing::Point(45, 48);
			  this->PA_modifyRord_lab->Name = L"PA_modifyRord_lab";
			  this->PA_modifyRord_lab->Size = System::Drawing::Size(145, 36);
			  this->PA_modifyRord_lab->TabIndex = 3;
			  this->PA_modifyRord_lab->Text = L"Order text";
			  this->PA_modifyRord_lab->TextChanged += gcnew System::EventHandler(this, &mainPage::PA_modifyRord_lab_TextChanged);
			  // 
			  // PA_groupCmodify
			  // 
			  this->PA_groupCmodify->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->PA_groupCmodify->Controls->Add(this->PA_MNumOfdays);
			  this->PA_groupCmodify->Controls->Add(this->PA_MPRday);
			  this->PA_groupCmodify->Controls->Add(this->PA_MPRtype);
			  this->PA_groupCmodify->Controls->Add(this->PA_MRH);
			  this->PA_groupCmodify->Controls->Add(this->PA_MPphNum);
			  this->PA_groupCmodify->Controls->Add(this->PA_MPage);
			  this->PA_groupCmodify->Controls->Add(this->PA_MPName);
			  this->PA_groupCmodify->Dock = System::Windows::Forms::DockStyle::Left;
			  this->PA_groupCmodify->Location = System::Drawing::Point(0, 100);
			  this->PA_groupCmodify->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_groupCmodify->Name = L"PA_groupCmodify";
			  this->PA_groupCmodify->Size = System::Drawing::Size(327, 741);
			  this->PA_groupCmodify->TabIndex = 2;
			  // 
			  // PA_MNumOfdays
			  // 
			  this->PA_MNumOfdays->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MNumOfdays->FlatAppearance->BorderSize = 0;
			  this->PA_MNumOfdays->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MNumOfdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MNumOfdays->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MNumOfdays->Location = System::Drawing::Point(0, 468);
			  this->PA_MNumOfdays->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MNumOfdays->Name = L"PA_MNumOfdays";
			  this->PA_MNumOfdays->Size = System::Drawing::Size(327, 75);
			  this->PA_MNumOfdays->TabIndex = 9;
			  this->PA_MNumOfdays->Text = L"Number of days";
			  this->PA_MNumOfdays->UseVisualStyleBackColor = true;
			  this->PA_MNumOfdays->Visible = false;
			  this->PA_MNumOfdays->Click += gcnew System::EventHandler(this, &mainPage::PA_MNumOfdays_Click);
			  // 
			  // PA_MPRday
			  // 
			  this->PA_MPRday->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MPRday->FlatAppearance->BorderSize = 0;
			  this->PA_MPRday->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MPRday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MPRday->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MPRday->Location = System::Drawing::Point(0, 390);
			  this->PA_MPRday->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MPRday->Name = L"PA_MPRday";
			  this->PA_MPRday->Size = System::Drawing::Size(327, 78);
			  this->PA_MPRday->TabIndex = 8;
			  this->PA_MPRday->Text = L"Reservation Day";
			  this->PA_MPRday->UseVisualStyleBackColor = true;
			  this->PA_MPRday->Click += gcnew System::EventHandler(this, &mainPage::PA_MPRday_Click);
			  // 
			  // PA_MPRtype
			  // 
			  this->PA_MPRtype->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MPRtype->FlatAppearance->BorderSize = 0;
			  this->PA_MPRtype->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MPRtype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MPRtype->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MPRtype->Location = System::Drawing::Point(0, 312);
			  this->PA_MPRtype->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MPRtype->Name = L"PA_MPRtype";
			  this->PA_MPRtype->Size = System::Drawing::Size(327, 78);
			  this->PA_MPRtype->TabIndex = 7;
			  this->PA_MPRtype->Text = L"Reservation Type";
			  this->PA_MPRtype->UseVisualStyleBackColor = true;
			  this->PA_MPRtype->Click += gcnew System::EventHandler(this, &mainPage::PA_MPRtype_Click);
			  // 
			  // PA_MRH
			  // 
			  this->PA_MRH->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MRH->FlatAppearance->BorderSize = 0;
			  this->PA_MRH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MRH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MRH->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MRH->Location = System::Drawing::Point(0, 234);
			  this->PA_MRH->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MRH->Name = L"PA_MRH";
			  this->PA_MRH->Size = System::Drawing::Size(327, 78);
			  this->PA_MRH->TabIndex = 6;
			  this->PA_MRH->Text = L" Hospital Name";
			  this->PA_MRH->UseVisualStyleBackColor = true;
			  this->PA_MRH->Click += gcnew System::EventHandler(this, &mainPage::PA_MRH_Click);
			  // 
			  // PA_MPphNum
			  // 
			  this->PA_MPphNum->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MPphNum->FlatAppearance->BorderSize = 0;
			  this->PA_MPphNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MPphNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MPphNum->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MPphNum->Location = System::Drawing::Point(0, 156);
			  this->PA_MPphNum->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MPphNum->Name = L"PA_MPphNum";
			  this->PA_MPphNum->Size = System::Drawing::Size(327, 78);
			  this->PA_MPphNum->TabIndex = 5;
			  this->PA_MPphNum->Text = L"Phone Number";
			  this->PA_MPphNum->UseVisualStyleBackColor = true;
			  this->PA_MPphNum->Click += gcnew System::EventHandler(this, &mainPage::PA_MPphNum_Click);
			  // 
			  // PA_MPage
			  // 
			  this->PA_MPage->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MPage->FlatAppearance->BorderSize = 0;
			  this->PA_MPage->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MPage->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MPage->Location = System::Drawing::Point(0, 78);
			  this->PA_MPage->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MPage->Name = L"PA_MPage";
			  this->PA_MPage->Size = System::Drawing::Size(327, 78);
			  this->PA_MPage->TabIndex = 4;
			  this->PA_MPage->Text = L"Patient Age";
			  this->PA_MPage->UseVisualStyleBackColor = true;
			  this->PA_MPage->Click += gcnew System::EventHandler(this, &mainPage::PA_MPage_Click);
			  // 
			  // PA_MPName
			  // 
			  this->PA_MPName->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MPName->FlatAppearance->BorderSize = 0;
			  this->PA_MPName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MPName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MPName->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MPName->Location = System::Drawing::Point(0, 0);
			  this->PA_MPName->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MPName->Name = L"PA_MPName";
			  this->PA_MPName->Size = System::Drawing::Size(327, 78);
			  this->PA_MPName->TabIndex = 3;
			  this->PA_MPName->Text = L"Patient Name";
			  this->PA_MPName->UseVisualStyleBackColor = true;
			  this->PA_MPName->Click += gcnew System::EventHandler(this, &mainPage::PA_MPName_Click);
			  // 
			  // PA_headerM
			  // 
			  this->PA_headerM->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->PA_headerM->Controls->Add(this->label14);
			  this->PA_headerM->Controls->Add(this->messege);
			  this->PA_headerM->Controls->Add(this->PA_Rlistmodify_com);
			  this->PA_headerM->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_headerM->Location = System::Drawing::Point(0, 0);
			  this->PA_headerM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_headerM->Name = L"PA_headerM";
			  this->PA_headerM->Size = System::Drawing::Size(1196, 100);
			  this->PA_headerM->TabIndex = 1;
			  // 
			  // label14
			  // 
			  this->label14->AutoSize = true;
			  this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label14->ForeColor = System::Drawing::Color::Black;
			  this->label14->Location = System::Drawing::Point(25, 7);
			  this->label14->Name = L"label14";
			  this->label14->Size = System::Drawing::Size(189, 29);
			  this->label14->TabIndex = 7;
			  this->label14->Text = L"Reservations list";
			  // 
			  // messege
			  // 
			  this->messege->AutoSize = true;
			  this->messege->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->messege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->messege->ForeColor = System::Drawing::Color::Brown;
			  this->messege->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"messege.Image")));
			  this->messege->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->messege->Location = System::Drawing::Point(724, 18);
			  this->messege->Name = L"messege";
			  this->messege->Size = System::Drawing::Size(290, 50);
			  this->messege->TabIndex = 4;
			  this->messege->Text = L"Select before choose        \r\nwhat you wnat to modify        ";
			  // 
			  // PA_Rlistmodify_com
			  // 
			  this->PA_Rlistmodify_com->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_Rlistmodify_com->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Rlistmodify_com->FormattingEnabled = true;
			  this->PA_Rlistmodify_com->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_Rlistmodify_com->Location = System::Drawing::Point(41, 42);
			  this->PA_Rlistmodify_com->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Rlistmodify_com->Name = L"PA_Rlistmodify_com";
			  this->PA_Rlistmodify_com->Size = System::Drawing::Size(384, 38);
			  this->PA_Rlistmodify_com->TabIndex = 0;
			  this->PA_Rlistmodify_com->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_com_SelectedIndexChanged);
			  this->PA_Rlistmodify_com->TextChanged += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_com_TextChanged);
			  // 
			  // PA_editReserv
			  // 
			  this->PA_editReserv->Controls->Add(this->PA_delRlayout);
			  this->PA_editReserv->Controls->Add(this->PA_addRlayout);
			  this->PA_editReserv->Controls->Add(this->PA_waitingeditRlist);
			  this->PA_editReserv->Controls->Add(this->PA_header_editRlist);
			  this->PA_editReserv->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_editReserv->Location = System::Drawing::Point(0, 0);
			  this->PA_editReserv->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editReserv->Name = L"PA_editReserv";
			  this->PA_editReserv->Size = System::Drawing::Size(1196, 841);
			  this->PA_editReserv->TabIndex = 2;
			  // 
			  // PA_delRlayout
			  // 
			  this->PA_delRlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->PA_delRlayout->Controls->Add(this->label2);
			  this->PA_delRlayout->Controls->Add(this->checkBox3);
			  this->PA_delRlayout->Controls->Add(this->PA_text4);
			  this->PA_delRlayout->Controls->Add(this->PA_text3);
			  this->PA_delRlayout->Controls->Add(this->PA_delRlist_state);
			  this->PA_delRlayout->Controls->Add(this->PA_delRlist_COM);
			  this->PA_delRlayout->Controls->Add(this->PA_delRlist_but);
			  this->PA_delRlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_delRlayout->Location = System::Drawing::Point(0, 80);
			  this->PA_delRlayout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_delRlayout->Name = L"PA_delRlayout";
			  this->PA_delRlayout->Size = System::Drawing::Size(1196, 761);
			  this->PA_delRlayout->TabIndex = 16;
			  // 
			  // label2
			  // 
			  this->label2->AutoSize = true;
			  this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label2->Location = System::Drawing::Point(39, 156);
			  this->label2->Name = L"label2";
			  this->label2->Size = System::Drawing::Size(210, 31);
			  this->label2->TabIndex = 14;
			  this->label2->Text = L"Reservation List";
			  // 
			  // checkBox3
			  // 
			  this->checkBox3->AutoSize = true;
			  this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->checkBox3->Location = System::Drawing::Point(39, 257);
			  this->checkBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->checkBox3->Name = L"checkBox3";
			  this->checkBox3->Size = System::Drawing::Size(135, 24);
			  this->checkBox3->TabIndex = 13;
			  this->checkBox3->Text = L"Are you sure\?";
			  this->checkBox3->UseVisualStyleBackColor = true;
			  // 
			  // PA_text4
			  // 
			  this->PA_text4->AutoSize = true;
			  this->PA_text4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_text4->Location = System::Drawing::Point(32, 85);
			  this->PA_text4->Name = L"PA_text4";
			  this->PA_text4->Size = System::Drawing::Size(241, 39);
			  this->PA_text4->TabIndex = 12;
			  this->PA_text4->Text = L"Hospital Name";
			  // 
			  // PA_text3
			  // 
			  this->PA_text3->AutoSize = true;
			  this->PA_text3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_text3->Location = System::Drawing::Point(32, 31);
			  this->PA_text3->Name = L"PA_text3";
			  this->PA_text3->Size = System::Drawing::Size(223, 39);
			  this->PA_text3->TabIndex = 11;
			  this->PA_text3->Text = L"Patient Name";
			  // 
			  // PA_delRlist_state
			  // 
			  this->PA_delRlist_state->AutoSize = true;
			  this->PA_delRlist_state->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_delRlist_state->ForeColor = System::Drawing::Color::IndianRed;
			  this->PA_delRlist_state->Location = System::Drawing::Point(39, 298);
			  this->PA_delRlist_state->Name = L"PA_delRlist_state";
			  this->PA_delRlist_state->Size = System::Drawing::Size(20, 24);
			  this->PA_delRlist_state->TabIndex = 10;
			  this->PA_delRlist_state->Text = L"..";
			  // 
			  // PA_delRlist_COM
			  // 
			  this->PA_delRlist_COM->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_delRlist_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_delRlist_COM->FormattingEnabled = true;
			  this->PA_delRlist_COM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			  this->PA_delRlist_COM->Location = System::Drawing::Point(40, 201);
			  this->PA_delRlist_COM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_delRlist_COM->Name = L"PA_delRlist_COM";
			  this->PA_delRlist_COM->Size = System::Drawing::Size(299, 38);
			  this->PA_delRlist_COM->TabIndex = 6;
			  this->PA_delRlist_COM->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::PA_delRlist_COM_SelectedIndexChanged);
			  // 
			  // PA_delRlist_but
			  // 
			  this->PA_delRlist_but->FlatAppearance->BorderSize = 2;
			  this->PA_delRlist_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_delRlist_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_delRlist_but->Location = System::Drawing::Point(443, 202);
			  this->PA_delRlist_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_delRlist_but->Name = L"PA_delRlist_but";
			  this->PA_delRlist_but->Size = System::Drawing::Size(107, 41);
			  this->PA_delRlist_but->TabIndex = 9;
			  this->PA_delRlist_but->Text = L"Delete";
			  this->PA_delRlist_but->UseVisualStyleBackColor = true;
			  this->PA_delRlist_but->Click += gcnew System::EventHandler(this, &mainPage::PA_delRlist_but_Click);
			  this->PA_delRlist_but->Leave += gcnew System::EventHandler(this, &mainPage::PA_delRlist_but_Leave);
			  // 
			  // PA_addRlayout
			  // 
			  this->PA_addRlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->PA_addRlayout->Controls->Add(this->PA_PNumOfDays_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_PNumOfDays_TB);
			  this->PA_addRlayout->Controls->Add(this->PA_Check1);
			  this->PA_addRlayout->Controls->Add(this->PA_Check2);
			  this->PA_addRlayout->Controls->Add(this->PA_DayenterH_COM);
			  this->PA_addRlayout->Controls->Add(this->PA_RSClist_COM);
			  this->PA_addRlayout->Controls->Add(this->PA_selectHforR_COM);
			  this->PA_addRlayout->Controls->Add(this->PA_DayenterH_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_PAord_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_PAord_TB);
			  this->PA_addRlayout->Controls->Add(this->PA_selectHforR_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_RSClist_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_PphNord_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_PphNord_TB);
			  this->PA_addRlayout->Controls->Add(this->button1);
			  this->PA_addRlayout->Controls->Add(this->PA_PNord_lab);
			  this->PA_addRlayout->Controls->Add(this->PA_PNord_TB);
			  this->PA_addRlayout->Controls->Add(this->PA_warningM);
			  this->PA_addRlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_addRlayout->Location = System::Drawing::Point(0, 80);
			  this->PA_addRlayout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_addRlayout->Name = L"PA_addRlayout";
			  this->PA_addRlayout->Size = System::Drawing::Size(1196, 761);
			  this->PA_addRlayout->TabIndex = 14;
			  // 
			  // PA_PNumOfDays_lab
			  // 
			  this->PA_PNumOfDays_lab->AutoSize = true;
			  this->PA_PNumOfDays_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PNumOfDays_lab->Location = System::Drawing::Point(172, 433);
			  this->PA_PNumOfDays_lab->Name = L"PA_PNumOfDays_lab";
			  this->PA_PNumOfDays_lab->Size = System::Drawing::Size(186, 36);
			  this->PA_PNumOfDays_lab->TabIndex = 36;
			  this->PA_PNumOfDays_lab->Text = L"Num Of days";
			  // 
			  // PA_PNumOfDays_TB
			  // 
			  this->PA_PNumOfDays_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_PNumOfDays_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PNumOfDays_TB->Location = System::Drawing::Point(177, 484);
			  this->PA_PNumOfDays_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_PNumOfDays_TB->Name = L"PA_PNumOfDays_TB";
			  this->PA_PNumOfDays_TB->Size = System::Drawing::Size(116, 34);
			  this->PA_PNumOfDays_TB->TabIndex = 37;
			  this->PA_PNumOfDays_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::PA_PNumOfDays_TB_KeyPress);
			  // 
			  // PA_Check1
			  // 
			  this->PA_Check1->Controls->Add(this->PA_askwhoreserv_lab);
			  this->PA_Check1->Controls->Add(this->PA_askwhoreserv_RB2);
			  this->PA_Check1->Controls->Add(this->PA_askwhoreserv_RB1);
			  this->PA_Check1->Location = System::Drawing::Point(177, 0);
			  this->PA_Check1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Check1->Name = L"PA_Check1";
			  this->PA_Check1->Size = System::Drawing::Size(223, 78);
			  this->PA_Check1->TabIndex = 35;
			  // 
			  // PA_askwhoreserv_lab
			  // 
			  this->PA_askwhoreserv_lab->AutoSize = true;
			  this->PA_askwhoreserv_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_askwhoreserv_lab->Location = System::Drawing::Point(5, 12);
			  this->PA_askwhoreserv_lab->Name = L"PA_askwhoreserv_lab";
			  this->PA_askwhoreserv_lab->Size = System::Drawing::Size(176, 24);
			  this->PA_askwhoreserv_lab->TabIndex = 24;
			  this->PA_askwhoreserv_lab->Text = L"this reservation for \?";
			  // 
			  // PA_askwhoreserv_RB2
			  // 
			  this->PA_askwhoreserv_RB2->AutoSize = true;
			  this->PA_askwhoreserv_RB2->Checked = true;
			  this->PA_askwhoreserv_RB2->Location = System::Drawing::Point(116, 46);
			  this->PA_askwhoreserv_RB2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_askwhoreserv_RB2->Name = L"PA_askwhoreserv_RB2";
			  this->PA_askwhoreserv_RB2->Size = System::Drawing::Size(60, 20);
			  this->PA_askwhoreserv_RB2->TabIndex = 23;
			  this->PA_askwhoreserv_RB2->TabStop = true;
			  this->PA_askwhoreserv_RB2->Text = L"Other";
			  this->PA_askwhoreserv_RB2->UseVisualStyleBackColor = true;
			  this->PA_askwhoreserv_RB2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_askwhoreserv_RB2_CheckedChanged);
			  // 
			  // PA_askwhoreserv_RB1
			  // 
			  this->PA_askwhoreserv_RB1->AutoSize = true;
			  this->PA_askwhoreserv_RB1->Location = System::Drawing::Point(12, 44);
			  this->PA_askwhoreserv_RB1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_askwhoreserv_RB1->Name = L"PA_askwhoreserv_RB1";
			  this->PA_askwhoreserv_RB1->Size = System::Drawing::Size(48, 20);
			  this->PA_askwhoreserv_RB1->TabIndex = 22;
			  this->PA_askwhoreserv_RB1->Text = L"ME";
			  this->PA_askwhoreserv_RB1->UseVisualStyleBackColor = true;
			  this->PA_askwhoreserv_RB1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_askwhoreserv_RB1_CheckedChanged);
			  // 
			  // PA_Check2
			  // 
			  this->PA_Check2->Controls->Add(this->PA_RtypeCheck_RB2);
			  this->PA_Check2->Controls->Add(this->PA_RtypeCheck);
			  this->PA_Check2->Controls->Add(this->PA_RtypeCheck_RB1);
			  this->PA_Check2->Location = System::Drawing::Point(531, 1);
			  this->PA_Check2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Check2->Name = L"PA_Check2";
			  this->PA_Check2->Size = System::Drawing::Size(245, 68);
			  this->PA_Check2->TabIndex = 34;
			  // 
			  // PA_RtypeCheck_RB2
			  // 
			  this->PA_RtypeCheck_RB2->AutoSize = true;
			  this->PA_RtypeCheck_RB2->Location = System::Drawing::Point(101, 39);
			  this->PA_RtypeCheck_RB2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_RtypeCheck_RB2->Name = L"PA_RtypeCheck_RB2";
			  this->PA_RtypeCheck_RB2->Size = System::Drawing::Size(89, 20);
			  this->PA_RtypeCheck_RB2->TabIndex = 32;
			  this->PA_RtypeCheck_RB2->Text = L"Check-UP";
			  this->PA_RtypeCheck_RB2->UseVisualStyleBackColor = true;
			  this->PA_RtypeCheck_RB2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_RtypeCheck_RB2_CheckedChanged);
			  // 
			  // PA_RtypeCheck
			  // 
			  this->PA_RtypeCheck->AutoSize = true;
			  this->PA_RtypeCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_RtypeCheck->Location = System::Drawing::Point(3, 9);
			  this->PA_RtypeCheck->Name = L"PA_RtypeCheck";
			  this->PA_RtypeCheck->Size = System::Drawing::Size(224, 24);
			  this->PA_RtypeCheck->TabIndex = 33;
			  this->PA_RtypeCheck->Text = L"what do you want reserve";
			  // 
			  // PA_RtypeCheck_RB1
			  // 
			  this->PA_RtypeCheck_RB1->AutoSize = true;
			  this->PA_RtypeCheck_RB1->Checked = true;
			  this->PA_RtypeCheck_RB1->Location = System::Drawing::Point(13, 39);
			  this->PA_RtypeCheck_RB1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_RtypeCheck_RB1->Name = L"PA_RtypeCheck_RB1";
			  this->PA_RtypeCheck_RB1->Size = System::Drawing::Size(75, 20);
			  this->PA_RtypeCheck_RB1->TabIndex = 31;
			  this->PA_RtypeCheck_RB1->TabStop = true;
			  this->PA_RtypeCheck_RB1->Text = L"Surgery";
			  this->PA_RtypeCheck_RB1->UseVisualStyleBackColor = true;
			  this->PA_RtypeCheck_RB1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_RtypeCheck_RB1_CheckedChanged);
			  // 
			  // PA_DayenterH_COM
			  // 
			  this->PA_DayenterH_COM->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_DayenterH_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_DayenterH_COM->FormattingEnabled = true;
			  this->PA_DayenterH_COM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_DayenterH_COM->Location = System::Drawing::Point(653, 383);
			  this->PA_DayenterH_COM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_DayenterH_COM->MaxDropDownItems = 5;
			  this->PA_DayenterH_COM->Name = L"PA_DayenterH_COM";
			  this->PA_DayenterH_COM->Size = System::Drawing::Size(319, 44);
			  this->PA_DayenterH_COM->TabIndex = 28;
			  // 
			  // PA_RSClist_COM
			  // 
			  this->PA_RSClist_COM->DropDownHeight = 80;
			  this->PA_RSClist_COM->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_RSClist_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_RSClist_COM->FormattingEnabled = true;
			  this->PA_RSClist_COM->IntegralHeight = false;
			  this->PA_RSClist_COM->ItemHeight = 36;
			  this->PA_RSClist_COM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_RSClist_COM->Location = System::Drawing::Point(179, 367);
			  this->PA_RSClist_COM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_RSClist_COM->MaxDropDownItems = 5;
			  this->PA_RSClist_COM->Name = L"PA_RSClist_COM";
			  this->PA_RSClist_COM->Size = System::Drawing::Size(319, 44);
			  this->PA_RSClist_COM->TabIndex = 27;
			  // 
			  // PA_selectHforR_COM
			  // 
			  this->PA_selectHforR_COM->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_selectHforR_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_selectHforR_COM->FormattingEnabled = true;
			  this->PA_selectHforR_COM->Location = System::Drawing::Point(653, 279);
			  this->PA_selectHforR_COM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_selectHforR_COM->Name = L"PA_selectHforR_COM";
			  this->PA_selectHforR_COM->Size = System::Drawing::Size(319, 44);
			  this->PA_selectHforR_COM->TabIndex = 25;
			  this->PA_selectHforR_COM->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::PA_selectHforR_COM_SelectedIndexChanged);
			  this->PA_selectHforR_COM->TextChanged += gcnew System::EventHandler(this, &mainPage::PA_selectHforR_COM_TextChanged);
			  // 
			  // PA_DayenterH_lab
			  // 
			  this->PA_DayenterH_lab->AutoSize = true;
			  this->PA_DayenterH_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_DayenterH_lab->Location = System::Drawing::Point(649, 335);
			  this->PA_DayenterH_lab->Name = L"PA_DayenterH_lab";
			  this->PA_DayenterH_lab->Size = System::Drawing::Size(254, 36);
			  this->PA_DayenterH_lab->TabIndex = 20;
			  this->PA_DayenterH_lab->Text = L"Day enter hospital";
			  // 
			  // PA_PAord_lab
			  // 
			  this->PA_PAord_lab->AutoSize = true;
			  this->PA_PAord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PAord_lab->Location = System::Drawing::Point(649, 142);
			  this->PA_PAord_lab->Name = L"PA_PAord_lab";
			  this->PA_PAord_lab->Size = System::Drawing::Size(169, 36);
			  this->PA_PAord_lab->TabIndex = 18;
			  this->PA_PAord_lab->Text = L"Patient Age";
			  // 
			  // PA_PAord_TB
			  // 
			  this->PA_PAord_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_PAord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PAord_TB->Location = System::Drawing::Point(655, 190);
			  this->PA_PAord_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_PAord_TB->Name = L"PA_PAord_TB";
			  this->PA_PAord_TB->Size = System::Drawing::Size(317, 34);
			  this->PA_PAord_TB->TabIndex = 19;
			  // 
			  // PA_selectHforR_lab
			  // 
			  this->PA_selectHforR_lab->AutoSize = true;
			  this->PA_selectHforR_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_selectHforR_lab->Location = System::Drawing::Point(648, 235);
			  this->PA_selectHforR_lab->Name = L"PA_selectHforR_lab";
			  this->PA_selectHforR_lab->Size = System::Drawing::Size(208, 36);
			  this->PA_selectHforR_lab->TabIndex = 16;
			  this->PA_selectHforR_lab->Text = L"Hospital Name";
			  // 
			  // PA_RSClist_lab
			  // 
			  this->PA_RSClist_lab->AutoSize = true;
			  this->PA_RSClist_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_RSClist_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_RSClist_lab->Location = System::Drawing::Point(175, 316);
			  this->PA_RSClist_lab->Name = L"PA_RSClist_lab";
			  this->PA_RSClist_lab->Size = System::Drawing::Size(181, 36);
			  this->PA_RSClist_lab->TabIndex = 14;
			  this->PA_RSClist_lab->Text = L"SP or CL list";
			  // 
			  // PA_PphNord_lab
			  // 
			  this->PA_PphNord_lab->AutoSize = true;
			  this->PA_PphNord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PphNord_lab->Location = System::Drawing::Point(175, 217);
			  this->PA_PphNord_lab->Name = L"PA_PphNord_lab";
			  this->PA_PphNord_lab->Size = System::Drawing::Size(215, 36);
			  this->PA_PphNord_lab->TabIndex = 12;
			  this->PA_PphNord_lab->Text = L"Phone Number";
			  // 
			  // PA_PphNord_TB
			  // 
			  this->PA_PphNord_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_PphNord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PphNord_TB->Location = System::Drawing::Point(180, 267);
			  this->PA_PphNord_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_PphNord_TB->Name = L"PA_PphNord_TB";
			  this->PA_PphNord_TB->Size = System::Drawing::Size(317, 34);
			  this->PA_PphNord_TB->TabIndex = 13;
			  // 
			  // button1
			  // 
			  this->button1->FlatAppearance->BorderSize = 0;
			  this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.93846F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->button1->Location = System::Drawing::Point(691, 506);
			  this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->button1->Name = L"button1";
			  this->button1->Size = System::Drawing::Size(105, 52);
			  this->button1->TabIndex = 11;
			  this->button1->Text = L"Add";
			  this->button1->UseVisualStyleBackColor = true;
			  this->button1->Click += gcnew System::EventHandler(this, &mainPage::button1_Click);
			  this->button1->Leave += gcnew System::EventHandler(this, &mainPage::button1_Leave);
			  // 
			  // PA_PNord_lab
			  // 
			  this->PA_PNord_lab->AutoSize = true;
			  this->PA_PNord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PNord_lab->Location = System::Drawing::Point(175, 117);
			  this->PA_PNord_lab->Name = L"PA_PNord_lab";
			  this->PA_PNord_lab->Size = System::Drawing::Size(192, 36);
			  this->PA_PNord_lab->TabIndex = 7;
			  this->PA_PNord_lab->Text = L"Patient Name";
			  // 
			  // PA_PNord_TB
			  // 
			  this->PA_PNord_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_PNord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PNord_TB->Location = System::Drawing::Point(180, 166);
			  this->PA_PNord_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_PNord_TB->Name = L"PA_PNord_TB";
			  this->PA_PNord_TB->Size = System::Drawing::Size(317, 34);
			  this->PA_PNord_TB->TabIndex = 8;
			  // 
			  // PA_warningM
			  // 
			  this->PA_warningM->AutoSize = true;
			  this->PA_warningM->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_warningM->ForeColor = System::Drawing::Color::Red;
			  this->PA_warningM->Location = System::Drawing::Point(668, 433);
			  this->PA_warningM->Name = L"PA_warningM";
			  this->PA_warningM->Size = System::Drawing::Size(52, 18);
			  this->PA_warningM->TabIndex = 10;
			  this->PA_warningM->Text = L"label2";
			  // 
			  // PA_waitingeditRlist
			  // 
			  this->PA_waitingeditRlist->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->PA_waitingeditRlist->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			  this->PA_waitingeditRlist->Controls->Add(this->pictureBox2);
			  this->PA_waitingeditRlist->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_waitingeditRlist->Location = System::Drawing::Point(0, 80);
			  this->PA_waitingeditRlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_waitingeditRlist->Name = L"PA_waitingeditRlist";
			  this->PA_waitingeditRlist->Size = System::Drawing::Size(1196, 761);
			  this->PA_waitingeditRlist->TabIndex = 17;
			  // 
			  // pictureBox2
			  // 
			  this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			  this->pictureBox2->Location = System::Drawing::Point(0, 0);
			  this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->pictureBox2->Name = L"pictureBox2";
			  this->pictureBox2->Size = System::Drawing::Size(1196, 761);
			  this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			  this->pictureBox2->TabIndex = 0;
			  this->pictureBox2->TabStop = false;
			  // 
			  // PA_header_editRlist
			  // 
			  this->PA_header_editRlist->Controls->Add(this->PA_delRlist);
			  this->PA_header_editRlist->Controls->Add(this->PA_addRlist);
			  this->PA_header_editRlist->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_header_editRlist->Location = System::Drawing::Point(0, 0);
			  this->PA_header_editRlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_header_editRlist->Name = L"PA_header_editRlist";
			  this->PA_header_editRlist->Size = System::Drawing::Size(1196, 80);
			  this->PA_header_editRlist->TabIndex = 15;
			  // 
			  // PA_delRlist
			  // 
			  this->PA_delRlist->FlatAppearance->BorderSize = 0;
			  this->PA_delRlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_delRlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_delRlist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_delRlist.Image")));
			  this->PA_delRlist->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_delRlist->Location = System::Drawing::Point(651, 10);
			  this->PA_delRlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_delRlist->Name = L"PA_delRlist";
			  this->PA_delRlist->Size = System::Drawing::Size(120, 60);
			  this->PA_delRlist->TabIndex = 13;
			  this->PA_delRlist->Text = L"Delete";
			  this->PA_delRlist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->PA_delRlist->UseVisualStyleBackColor = true;
			  this->PA_delRlist->Click += gcnew System::EventHandler(this, &mainPage::PA_delRlist_Click);
			  // 
			  // PA_addRlist
			  // 
			  this->PA_addRlist->FlatAppearance->BorderSize = 0;
			  this->PA_addRlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_addRlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_addRlist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_addRlist.Image")));
			  this->PA_addRlist->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_addRlist->Location = System::Drawing::Point(401, 10);
			  this->PA_addRlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_addRlist->Name = L"PA_addRlist";
			  this->PA_addRlist->Size = System::Drawing::Size(105, 60);
			  this->PA_addRlist->TabIndex = 12;
			  this->PA_addRlist->Text = L"Add";
			  this->PA_addRlist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->PA_addRlist->UseVisualStyleBackColor = true;
			  this->PA_addRlist->Click += gcnew System::EventHandler(this, &mainPage::PA_addRlayout_Click);
			  // 
			  // PA_editPinfo
			  // 
			  this->PA_editPinfo->Controls->Add(this->PA_editpass);
			  this->PA_editPinfo->Controls->Add(this->PA_editRemain);
			  this->PA_editPinfo->Controls->Add(this->PA_edit_waiting);
			  this->PA_editPinfo->Controls->Add(this->PA_GofCHEditPinfo);
			  this->PA_editPinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_editPinfo->Location = System::Drawing::Point(0, 0);
			  this->PA_editPinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editPinfo->Name = L"PA_editPinfo";
			  this->PA_editPinfo->Size = System::Drawing::Size(1196, 841);
			  this->PA_editPinfo->TabIndex = 7;
			  // 
			  // PA_editpass
			  // 
			  this->PA_editpass->BackColor = System::Drawing::Color::Transparent;
			  this->PA_editpass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_editpass.BackgroundImage")));
			  this->PA_editpass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->PA_editpass->Controls->Add(this->PA_ShowNewPass);
			  this->PA_editpass->Controls->Add(this->PA_ShowOldPass);
			  this->PA_editpass->Controls->Add(this->PA_passState);
			  this->PA_editpass->Controls->Add(this->PA_Changepass);
			  this->PA_editpass->Controls->Add(this->PA_askconfPass_TB);
			  this->PA_editpass->Controls->Add(this->PA_askconfPass_lab);
			  this->PA_editpass->Controls->Add(this->PA_askNewPass_TB);
			  this->PA_editpass->Controls->Add(this->PA_askNewPass_lab);
			  this->PA_editpass->Controls->Add(this->PA_askOldPass_TB);
			  this->PA_editpass->Controls->Add(this->PA_askOldPass_lab);
			  this->PA_editpass->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_editpass->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editpass->Location = System::Drawing::Point(237, 0);
			  this->PA_editpass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editpass->Name = L"PA_editpass";
			  this->PA_editpass->Size = System::Drawing::Size(959, 841);
			  this->PA_editpass->TabIndex = 13;
			  // 
			  // PA_ShowNewPass
			  // 
			  this->PA_ShowNewPass->BackColor = System::Drawing::Color::Transparent;
			  this->PA_ShowNewPass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_ShowNewPass.BackgroundImage")));
			  this->PA_ShowNewPass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->PA_ShowNewPass->FlatAppearance->BorderSize = 0;
			  this->PA_ShowNewPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_ShowNewPass->Location = System::Drawing::Point(591, 298);
			  this->PA_ShowNewPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_ShowNewPass->Name = L"PA_ShowNewPass";
			  this->PA_ShowNewPass->Size = System::Drawing::Size(29, 28);
			  this->PA_ShowNewPass->TabIndex = 21;
			  this->PA_ShowNewPass->UseVisualStyleBackColor = false;
			  this->PA_ShowNewPass->Click += gcnew System::EventHandler(this, &mainPage::PA_ShowNewPass_Click);
			  // 
			  // PA_ShowOldPass
			  // 
			  this->PA_ShowOldPass->BackColor = System::Drawing::Color::Transparent;
			  this->PA_ShowOldPass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_ShowOldPass.BackgroundImage")));
			  this->PA_ShowOldPass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->PA_ShowOldPass->FlatAppearance->BorderSize = 0;
			  this->PA_ShowOldPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_ShowOldPass->Location = System::Drawing::Point(591, 164);
			  this->PA_ShowOldPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_ShowOldPass->Name = L"PA_ShowOldPass";
			  this->PA_ShowOldPass->Size = System::Drawing::Size(29, 28);
			  this->PA_ShowOldPass->TabIndex = 20;
			  this->PA_ShowOldPass->UseVisualStyleBackColor = false;
			  this->PA_ShowOldPass->Click += gcnew System::EventHandler(this, &mainPage::PA_ShowOldPass_Click);
			  // 
			  // PA_passState
			  // 
			  this->PA_passState->AutoSize = true;
			  this->PA_passState->BackColor = System::Drawing::Color::Transparent;
			  this->PA_passState->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_passState->ForeColor = System::Drawing::Color::Black;
			  this->PA_passState->Location = System::Drawing::Point(63, 420);
			  this->PA_passState->Name = L"PA_passState";
			  this->PA_passState->Size = System::Drawing::Size(15, 23);
			  this->PA_passState->TabIndex = 16;
			  this->PA_passState->Text = L".";
			  // 
			  // PA_Changepass
			  // 
			  this->PA_Changepass->FlatAppearance->BorderSize = 2;
			  this->PA_Changepass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_Changepass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Changepass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_Changepass.Image")));
			  this->PA_Changepass->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_Changepass->Location = System::Drawing::Point(65, 534);
			  this->PA_Changepass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Changepass->Name = L"PA_Changepass";
			  this->PA_Changepass->Size = System::Drawing::Size(185, 57);
			  this->PA_Changepass->TabIndex = 15;
			  this->PA_Changepass->Text = L"Change ";
			  this->PA_Changepass->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->PA_Changepass->UseVisualStyleBackColor = true;
			  this->PA_Changepass->Click += gcnew System::EventHandler(this, &mainPage::PA_Changepass_Click);
			  this->PA_Changepass->Leave += gcnew System::EventHandler(this, &mainPage::PA_Changepass_Leave);
			  // 
			  // PA_askconfPass_TB
			  // 
			  this->PA_askconfPass_TB->BackColor = System::Drawing::SystemColors::ActiveBorder;
			  this->PA_askconfPass_TB->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_askconfPass_TB->Location = System::Drawing::Point(57, 334);
			  this->PA_askconfPass_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_askconfPass_TB->Name = L"PA_askconfPass_TB";
			  this->PA_askconfPass_TB->Size = System::Drawing::Size(455, 42);
			  this->PA_askconfPass_TB->TabIndex = 6;
			  this->PA_askconfPass_TB->UseSystemPasswordChar = true;
			  // 
			  // PA_askconfPass_lab
			  // 
			  this->PA_askconfPass_lab->AutoSize = true;
			  this->PA_askconfPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->PA_askconfPass_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_askconfPass_lab->Location = System::Drawing::Point(56, 294);
			  this->PA_askconfPass_lab->Name = L"PA_askconfPass_lab";
			  this->PA_askconfPass_lab->Size = System::Drawing::Size(295, 31);
			  this->PA_askconfPass_lab->TabIndex = 5;
			  this->PA_askconfPass_lab->Text = L"Confirm new password";
			  // 
			  // PA_askNewPass_TB
			  // 
			  this->PA_askNewPass_TB->BackColor = System::Drawing::SystemColors::ActiveBorder;
			  this->PA_askNewPass_TB->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_askNewPass_TB->Location = System::Drawing::Point(57, 240);
			  this->PA_askNewPass_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_askNewPass_TB->Name = L"PA_askNewPass_TB";
			  this->PA_askNewPass_TB->Size = System::Drawing::Size(455, 42);
			  this->PA_askNewPass_TB->TabIndex = 4;
			  this->PA_askNewPass_TB->UseSystemPasswordChar = true;
			  // 
			  // PA_askNewPass_lab
			  // 
			  this->PA_askNewPass_lab->AutoSize = true;
			  this->PA_askNewPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->PA_askNewPass_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_askNewPass_lab->Location = System::Drawing::Point(56, 199);
			  this->PA_askNewPass_lab->Name = L"PA_askNewPass_lab";
			  this->PA_askNewPass_lab->Size = System::Drawing::Size(266, 31);
			  this->PA_askNewPass_lab->TabIndex = 3;
			  this->PA_askNewPass_lab->Text = L"Enter new password ";
			  // 
			  // PA_askOldPass_TB
			  // 
			  this->PA_askOldPass_TB->BackColor = System::Drawing::SystemColors::ActiveBorder;
			  this->PA_askOldPass_TB->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_askOldPass_TB->Location = System::Drawing::Point(57, 142);
			  this->PA_askOldPass_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_askOldPass_TB->Name = L"PA_askOldPass_TB";
			  this->PA_askOldPass_TB->Size = System::Drawing::Size(455, 42);
			  this->PA_askOldPass_TB->TabIndex = 2;
			  this->PA_askOldPass_TB->UseSystemPasswordChar = true;
			  // 
			  // PA_askOldPass_lab
			  // 
			  this->PA_askOldPass_lab->AutoSize = true;
			  this->PA_askOldPass_lab->BackColor = System::Drawing::Color::Transparent;
			  this->PA_askOldPass_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_askOldPass_lab->Location = System::Drawing::Point(56, 102);
			  this->PA_askOldPass_lab->Name = L"PA_askOldPass_lab";
			  this->PA_askOldPass_lab->Size = System::Drawing::Size(246, 31);
			  this->PA_askOldPass_lab->TabIndex = 1;
			  this->PA_askOldPass_lab->Text = L"Enter old password";
			  // 
			  // PA_editRemain
			  // 
			  this->PA_editRemain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_editRemain.BackgroundImage")));
			  this->PA_editRemain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->PA_editRemain->Controls->Add(this->button2);
			  this->PA_editRemain->Controls->Add(this->PA_editRemain_state);
			  this->PA_editRemain->Controls->Add(this->PA_editRemain_TB);
			  this->PA_editRemain->Controls->Add(this->PA_editRemain_lab);
			  this->PA_editRemain->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_editRemain->Location = System::Drawing::Point(237, 0);
			  this->PA_editRemain->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editRemain->Name = L"PA_editRemain";
			  this->PA_editRemain->Size = System::Drawing::Size(959, 841);
			  this->PA_editRemain->TabIndex = 14;
			  // 
			  // button2
			  // 
			  this->button2->BackColor = System::Drawing::Color::Transparent;
			  this->button2->FlatAppearance->BorderSize = 0;
			  this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			  this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->button2->Location = System::Drawing::Point(552, 159);
			  this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->button2->Name = L"button2";
			  this->button2->Size = System::Drawing::Size(115, 42);
			  this->button2->TabIndex = 12;
			  this->button2->Text = L"Edit";
			  this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->button2->UseVisualStyleBackColor = false;
			  this->button2->Click += gcnew System::EventHandler(this, &mainPage::button2_Click);
			  this->button2->Leave += gcnew System::EventHandler(this, &mainPage::button2_Leave);
			  // 
			  // PA_editRemain_state
			  // 
			  this->PA_editRemain_state->AutoSize = true;
			  this->PA_editRemain_state->BackColor = System::Drawing::Color::White;
			  this->PA_editRemain_state->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_editRemain_state->ForeColor = System::Drawing::Color::Black;
			  this->PA_editRemain_state->Location = System::Drawing::Point(48, 218);
			  this->PA_editRemain_state->Name = L"PA_editRemain_state";
			  this->PA_editRemain_state->Size = System::Drawing::Size(12, 18);
			  this->PA_editRemain_state->TabIndex = 2;
			  this->PA_editRemain_state->Text = L".";
			  // 
			  // PA_editRemain_TB
			  // 
			  this->PA_editRemain_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_editRemain_TB->Location = System::Drawing::Point(51, 151);
			  this->PA_editRemain_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editRemain_TB->Name = L"PA_editRemain_TB";
			  this->PA_editRemain_TB->Size = System::Drawing::Size(316, 37);
			  this->PA_editRemain_TB->TabIndex = 1;
			  this->PA_editRemain_TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &mainPage::PA_editRemain_TB_KeyPress);
			  // 
			  // PA_editRemain_lab
			  // 
			  this->PA_editRemain_lab->AutoSize = true;
			  this->PA_editRemain_lab->BackColor = System::Drawing::Color::Transparent;
			  this->PA_editRemain_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editRemain_lab->ForeColor = System::Drawing::Color::Black;
			  this->PA_editRemain_lab->Location = System::Drawing::Point(45, 87);
			  this->PA_editRemain_lab->Name = L"PA_editRemain_lab";
			  this->PA_editRemain_lab->Size = System::Drawing::Size(86, 31);
			  this->PA_editRemain_lab->TabIndex = 0;
			  this->PA_editRemain_lab->Text = L"label2";
			  // 
			  // PA_edit_waiting
			  // 
			  this->PA_edit_waiting->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_edit_waiting.BackgroundImage")));
			  this->PA_edit_waiting->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			  this->PA_edit_waiting->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_edit_waiting->Location = System::Drawing::Point(237, 0);
			  this->PA_edit_waiting->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_edit_waiting->Name = L"PA_edit_waiting";
			  this->PA_edit_waiting->Size = System::Drawing::Size(959, 841);
			  this->PA_edit_waiting->TabIndex = 16;
			  // 
			  // PA_GofCHEditPinfo
			  // 
			  this->PA_GofCHEditPinfo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->PA_GofCHEditPinfo->Controls->Add(this->PA_editPhNum);
			  this->PA_GofCHEditPinfo->Controls->Add(this->PA_editpass_but);
			  this->PA_GofCHEditPinfo->Controls->Add(this->PA_editusername);
			  this->PA_GofCHEditPinfo->Controls->Add(this->PA_editAge);
			  this->PA_GofCHEditPinfo->Controls->Add(this->PA_editName);
			  this->PA_GofCHEditPinfo->Dock = System::Windows::Forms::DockStyle::Left;
			  this->PA_GofCHEditPinfo->Location = System::Drawing::Point(0, 0);
			  this->PA_GofCHEditPinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_GofCHEditPinfo->Name = L"PA_GofCHEditPinfo";
			  this->PA_GofCHEditPinfo->Size = System::Drawing::Size(237, 841);
			  this->PA_GofCHEditPinfo->TabIndex = 12;
			  // 
			  // PA_editPhNum
			  // 
			  this->PA_editPhNum->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_editPhNum->FlatAppearance->BorderSize = 0;
			  this->PA_editPhNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_editPhNum->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editPhNum->Location = System::Drawing::Point(0, 488);
			  this->PA_editPhNum->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editPhNum->Name = L"PA_editPhNum";
			  this->PA_editPhNum->Size = System::Drawing::Size(237, 122);
			  this->PA_editPhNum->TabIndex = 6;
			  this->PA_editPhNum->Text = L"Edit Phone Number";
			  this->PA_editPhNum->UseVisualStyleBackColor = true;
			  this->PA_editPhNum->Click += gcnew System::EventHandler(this, &mainPage::PA_editPhNum_Click);
			  // 
			  // PA_editpass_but
			  // 
			  this->PA_editpass_but->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_editpass_but->FlatAppearance->BorderSize = 0;
			  this->PA_editpass_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_editpass_but->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editpass_but->Location = System::Drawing::Point(0, 366);
			  this->PA_editpass_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editpass_but->Name = L"PA_editpass_but";
			  this->PA_editpass_but->Size = System::Drawing::Size(237, 122);
			  this->PA_editpass_but->TabIndex = 5;
			  this->PA_editpass_but->Text = L"Change password";
			  this->PA_editpass_but->UseVisualStyleBackColor = true;
			  this->PA_editpass_but->Click += gcnew System::EventHandler(this, &mainPage::PA_editpass_but_Click);
			  // 
			  // PA_editusername
			  // 
			  this->PA_editusername->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_editusername->FlatAppearance->BorderSize = 0;
			  this->PA_editusername->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_editusername->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editusername->Location = System::Drawing::Point(0, 244);
			  this->PA_editusername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editusername->Name = L"PA_editusername";
			  this->PA_editusername->Size = System::Drawing::Size(237, 122);
			  this->PA_editusername->TabIndex = 4;
			  this->PA_editusername->Text = L"Edit username";
			  this->PA_editusername->UseVisualStyleBackColor = true;
			  this->PA_editusername->Click += gcnew System::EventHandler(this, &mainPage::PA_editusername_Click);
			  // 
			  // PA_editAge
			  // 
			  this->PA_editAge->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_editAge->FlatAppearance->BorderSize = 0;
			  this->PA_editAge->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_editAge->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editAge->Location = System::Drawing::Point(0, 122);
			  this->PA_editAge->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editAge->Name = L"PA_editAge";
			  this->PA_editAge->Size = System::Drawing::Size(237, 122);
			  this->PA_editAge->TabIndex = 3;
			  this->PA_editAge->Text = L"Edit Age";
			  this->PA_editAge->UseVisualStyleBackColor = true;
			  this->PA_editAge->Click += gcnew System::EventHandler(this, &mainPage::PA_editAge_Click);
			  // 
			  // PA_editName
			  // 
			  this->PA_editName->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_editName->FlatAppearance->BorderSize = 0;
			  this->PA_editName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_editName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_editName->Location = System::Drawing::Point(0, 0);
			  this->PA_editName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_editName->Name = L"PA_editName";
			  this->PA_editName->Size = System::Drawing::Size(237, 122);
			  this->PA_editName->TabIndex = 2;
			  this->PA_editName->Text = L"Edit Name";
			  this->PA_editName->UseVisualStyleBackColor = true;
			  this->PA_editName->Click += gcnew System::EventHandler(this, &mainPage::PA_editName_Click);
			  // 
			  // PA_SortingH
			  // 
			  this->PA_SortingH->Controls->Add(this->label4);
			  this->PA_SortingH->Controls->Add(this->PA_SortingHlist);
			  this->PA_SortingH->Controls->Add(this->PA_Optionsort2);
			  this->PA_SortingH->Controls->Add(this->PA_Optionsort3);
			  this->PA_SortingH->Controls->Add(this->PA_Optionsort4);
			  this->PA_SortingH->Controls->Add(this->PA_messege);
			  this->PA_SortingH->Controls->Add(this->PA_Optionsort1);
			  this->PA_SortingH->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_SortingH->Location = System::Drawing::Point(0, 0);
			  this->PA_SortingH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_SortingH->Name = L"PA_SortingH";
			  this->PA_SortingH->Size = System::Drawing::Size(1196, 841);
			  this->PA_SortingH->TabIndex = 8;
			  this->PA_SortingH->Leave += gcnew System::EventHandler(this, &mainPage::PA_SortingH_Leave);
			  // 
			  // label4
			  // 
			  this->label4->AutoSize = true;
			  this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label4->ForeColor = System::Drawing::Color::White;
			  this->label4->Location = System::Drawing::Point(467, 274);
			  this->label4->Name = L"label4";
			  this->label4->Size = System::Drawing::Size(144, 29);
			  this->label4->TabIndex = 6;
			  this->label4->Text = L"Hospital List";
			  this->label4->Visible = false;
			  // 
			  // PA_SortingHlist
			  // 
			  this->PA_SortingHlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_SortingHlist->FormattingEnabled = true;
			  this->PA_SortingHlist->ItemHeight = 31;
			  this->PA_SortingHlist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Hospital List" });
			  this->PA_SortingHlist->Location = System::Drawing::Point(471, 308);
			  this->PA_SortingHlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_SortingHlist->Name = L"PA_SortingHlist";
			  this->PA_SortingHlist->Size = System::Drawing::Size(644, 190);
			  this->PA_SortingHlist->TabIndex = 5;
			  // 
			  // PA_Optionsort2
			  // 
			  this->PA_Optionsort2->AutoSize = true;
			  this->PA_Optionsort2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Optionsort2->Location = System::Drawing::Point(44, 247);
			  this->PA_Optionsort2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Optionsort2->Name = L"PA_Optionsort2";
			  this->PA_Optionsort2->Size = System::Drawing::Size(234, 40);
			  this->PA_Optionsort2->TabIndex = 4;
			  this->PA_Optionsort2->TabStop = true;
			  this->PA_Optionsort2->Text = L"Beds Avaliable";
			  this->PA_Optionsort2->UseVisualStyleBackColor = true;
			  this->PA_Optionsort2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_Optionsort2_CheckedChanged);
			  // 
			  // PA_Optionsort3
			  // 
			  this->PA_Optionsort3->AutoSize = true;
			  this->PA_Optionsort3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Optionsort3->Location = System::Drawing::Point(45, 289);
			  this->PA_Optionsort3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Optionsort3->Name = L"PA_Optionsort3";
			  this->PA_Optionsort3->Size = System::Drawing::Size(98, 40);
			  this->PA_Optionsort3->TabIndex = 3;
			  this->PA_Optionsort3->TabStop = true;
			  this->PA_Optionsort3->Text = L"Rate";
			  this->PA_Optionsort3->UseVisualStyleBackColor = true;
			  this->PA_Optionsort3->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_Optionsort3_CheckedChanged);
			  // 
			  // PA_Optionsort4
			  // 
			  this->PA_Optionsort4->AutoSize = true;
			  this->PA_Optionsort4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Optionsort4->Location = System::Drawing::Point(45, 331);
			  this->PA_Optionsort4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Optionsort4->Name = L"PA_Optionsort4";
			  this->PA_Optionsort4->Size = System::Drawing::Size(180, 40);
			  this->PA_Optionsort4->TabIndex = 2;
			  this->PA_Optionsort4->TabStop = true;
			  this->PA_Optionsort4->Text = L"Beds Price";
			  this->PA_Optionsort4->UseVisualStyleBackColor = true;
			  this->PA_Optionsort4->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_Optionsort4_CheckedChanged);
			  // 
			  // PA_messege
			  // 
			  this->PA_messege->AutoSize = true;
			  this->PA_messege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_messege->ForeColor = System::Drawing::Color::White;
			  this->PA_messege->Location = System::Drawing::Point(47, 122);
			  this->PA_messege->Name = L"PA_messege";
			  this->PA_messege->Size = System::Drawing::Size(439, 42);
			  this->PA_messege->TabIndex = 1;
			  this->PA_messege->Text = L"What do you want sort by";
			  // 
			  // PA_Optionsort1
			  // 
			  this->PA_Optionsort1->AutoSize = true;
			  this->PA_Optionsort1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Optionsort1->Location = System::Drawing::Point(44, 206);
			  this->PA_Optionsort1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Optionsort1->Name = L"PA_Optionsort1";
			  this->PA_Optionsort1->Size = System::Drawing::Size(113, 40);
			  this->PA_Optionsort1->TabIndex = 0;
			  this->PA_Optionsort1->TabStop = true;
			  this->PA_Optionsort1->Text = L"Name";
			  this->PA_Optionsort1->UseVisualStyleBackColor = true;
			  this->PA_Optionsort1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_Optionsort1_CheckedChanged);
			  // 
			  // PA_viewPinfo
			  // 
			  this->PA_viewPinfo->Controls->Add(this->PA_PNreservation);
			  this->PA_viewPinfo->Controls->Add(this->PA_Ptotalpaid);
			  this->PA_viewPinfo->Controls->Add(this->PA_PEmail);
			  this->PA_viewPinfo->Controls->Add(this->PA_PGender);
			  this->PA_viewPinfo->Controls->Add(this->PA_PphoneN);
			  this->PA_viewPinfo->Controls->Add(this->PA_Page);
			  this->PA_viewPinfo->Controls->Add(this->PA_PID);
			  this->PA_viewPinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_viewPinfo->Location = System::Drawing::Point(0, 0);
			  this->PA_viewPinfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_viewPinfo->Name = L"PA_viewPinfo";
			  this->PA_viewPinfo->Size = System::Drawing::Size(1196, 841);
			  this->PA_viewPinfo->TabIndex = 1;
			  // 
			  // PA_PNreservation
			  // 
			  this->PA_PNreservation->AutoSize = true;
			  this->PA_PNreservation->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PNreservation->Location = System::Drawing::Point(65, 619);
			  this->PA_PNreservation->Name = L"PA_PNreservation";
			  this->PA_PNreservation->Size = System::Drawing::Size(374, 49);
			  this->PA_PNreservation->TabIndex = 6;
			  this->PA_PNreservation->Text = L"Number Of reserved";
			  // 
			  // PA_Ptotalpaid
			  // 
			  this->PA_Ptotalpaid->AutoSize = true;
			  this->PA_Ptotalpaid->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Ptotalpaid->Location = System::Drawing::Point(60, 530);
			  this->PA_Ptotalpaid->Name = L"PA_Ptotalpaid";
			  this->PA_Ptotalpaid->Size = System::Drawing::Size(211, 49);
			  this->PA_Ptotalpaid->TabIndex = 5;
			  this->PA_Ptotalpaid->Text = L"Total price";
			  // 
			  // PA_PEmail
			  // 
			  this->PA_PEmail->AutoSize = true;
			  this->PA_PEmail->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PEmail->Location = System::Drawing::Point(65, 443);
			  this->PA_PEmail->Name = L"PA_PEmail";
			  this->PA_PEmail->Size = System::Drawing::Size(252, 49);
			  this->PA_PEmail->TabIndex = 4;
			  this->PA_PEmail->Text = L"patient email";
			  // 
			  // PA_PGender
			  // 
			  this->PA_PGender->AutoSize = true;
			  this->PA_PGender->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PGender->Location = System::Drawing::Point(65, 354);
			  this->PA_PGender->Name = L"PA_PGender";
			  this->PA_PGender->Size = System::Drawing::Size(276, 49);
			  this->PA_PGender->TabIndex = 3;
			  this->PA_PGender->Text = L"patient gender";
			  // 
			  // PA_PphoneN
			  // 
			  this->PA_PphoneN->AutoSize = true;
			  this->PA_PphoneN->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PphoneN->Location = System::Drawing::Point(65, 267);
			  this->PA_PphoneN->Name = L"PA_PphoneN";
			  this->PA_PphoneN->Size = System::Drawing::Size(410, 49);
			  this->PA_PphoneN->TabIndex = 2;
			  this->PA_PphoneN->Text = L"patient phone number";
			  // 
			  // PA_Page
			  // 
			  this->PA_Page->AutoSize = true;
			  this->PA_Page->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_Page->Location = System::Drawing::Point(65, 178);
			  this->PA_Page->Name = L"PA_Page";
			  this->PA_Page->Size = System::Drawing::Size(228, 49);
			  this->PA_Page->TabIndex = 1;
			  this->PA_Page->Text = L"patient Age";
			  // 
			  // PA_PID
			  // 
			  this->PA_PID->AutoSize = true;
			  this->PA_PID->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_PID->Location = System::Drawing::Point(65, 91);
			  this->PA_PID->Name = L"PA_PID";
			  this->PA_PID->Size = System::Drawing::Size(203, 49);
			  this->PA_PID->TabIndex = 0;
			  this->PA_PID->Text = L"patient ID";
			  // 
			  // PA_reservlist
			  // 
			  this->PA_reservlist->Controls->Add(this->PA_viewR_PAge);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_HSpCl);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_bedPrice);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_SurgeryPrice);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_ChandTPrice);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_phoneN);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_Day);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_HReserved);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_PName);
			  this->PA_reservlist->Controls->Add(this->PA_viewR_RoomID);
			  this->PA_reservlist->Controls->Add(this->PA_reservlist_header);
			  this->PA_reservlist->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_reservlist->Location = System::Drawing::Point(0, 0);
			  this->PA_reservlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_reservlist->Name = L"PA_reservlist";
			  this->PA_reservlist->Size = System::Drawing::Size(1196, 841);
			  this->PA_reservlist->TabIndex = 4;
			  this->PA_reservlist->Leave += gcnew System::EventHandler(this, &mainPage::PA_reservlist_Leave);
			  // 
			  // PA_viewR_PAge
			  // 
			  this->PA_viewR_PAge->AutoSize = true;
			  this->PA_viewR_PAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_viewR_PAge->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_PAge->Location = System::Drawing::Point(32, 206);
			  this->PA_viewR_PAge->Name = L"PA_viewR_PAge";
			  this->PA_viewR_PAge->Size = System::Drawing::Size(211, 42);
			  this->PA_viewR_PAge->TabIndex = 9;
			  this->PA_viewR_PAge->Text = L"Patient Age";
			  // 
			  // PA_viewR_HSpCl
			  // 
			  this->PA_viewR_HSpCl->AutoSize = true;
			  this->PA_viewR_HSpCl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_viewR_HSpCl->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_HSpCl->Location = System::Drawing::Point(32, 457);
			  this->PA_viewR_HSpCl->Name = L"PA_viewR_HSpCl";
			  this->PA_viewR_HSpCl->Size = System::Drawing::Size(349, 42);
			  this->PA_viewR_HSpCl->TabIndex = 8;
			  this->PA_viewR_HSpCl->Text = L"HSpecialty Or Clinic";
			  // 
			  // PA_viewR_bedPrice
			  // 
			  this->PA_viewR_bedPrice->AutoSize = true;
			  this->PA_viewR_bedPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewR_bedPrice->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_bedPrice->Location = System::Drawing::Point(32, 708);
			  this->PA_viewR_bedPrice->Name = L"PA_viewR_bedPrice";
			  this->PA_viewR_bedPrice->Size = System::Drawing::Size(199, 42);
			  this->PA_viewR_bedPrice->TabIndex = 7;
			  this->PA_viewR_bedPrice->Text = L"Beds Price";
			  // 
			  // PA_viewR_SurgeryPrice
			  // 
			  this->PA_viewR_SurgeryPrice->AutoSize = true;
			  this->PA_viewR_SurgeryPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewR_SurgeryPrice->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_SurgeryPrice->Location = System::Drawing::Point(32, 582);
			  this->PA_viewR_SurgeryPrice->Name = L"PA_viewR_SurgeryPrice";
			  this->PA_viewR_SurgeryPrice->Size = System::Drawing::Size(244, 42);
			  this->PA_viewR_SurgeryPrice->TabIndex = 6;
			  this->PA_viewR_SurgeryPrice->Text = L"Surgery Price";
			  // 
			  // PA_viewR_ChandTPrice
			  // 
			  this->PA_viewR_ChandTPrice->AutoSize = true;
			  this->PA_viewR_ChandTPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewR_ChandTPrice->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_ChandTPrice->Location = System::Drawing::Point(32, 519);
			  this->PA_viewR_ChandTPrice->Name = L"PA_viewR_ChandTPrice";
			  this->PA_viewR_ChandTPrice->Size = System::Drawing::Size(360, 42);
			  this->PA_viewR_ChandTPrice->TabIndex = 5;
			  this->PA_viewR_ChandTPrice->Text = L"Check-UP/total price";
			  // 
			  // PA_viewR_phoneN
			  // 
			  this->PA_viewR_phoneN->AutoSize = true;
			  this->PA_viewR_phoneN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewR_phoneN->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_phoneN->Location = System::Drawing::Point(32, 394);
			  this->PA_viewR_phoneN->Name = L"PA_viewR_phoneN";
			  this->PA_viewR_phoneN->Size = System::Drawing::Size(269, 42);
			  this->PA_viewR_phoneN->TabIndex = 4;
			  this->PA_viewR_phoneN->Text = L"Phone Number";
			  // 
			  // PA_viewR_Day
			  // 
			  this->PA_viewR_Day->AutoSize = true;
			  this->PA_viewR_Day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_viewR_Day->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_Day->Location = System::Drawing::Point(32, 331);
			  this->PA_viewR_Day->Name = L"PA_viewR_Day";
			  this->PA_viewR_Day->Size = System::Drawing::Size(295, 42);
			  this->PA_viewR_Day->TabIndex = 3;
			  this->PA_viewR_Day->Text = L"Reservation Day";
			  // 
			  // PA_viewR_HReserved
			  // 
			  this->PA_viewR_HReserved->AutoSize = true;
			  this->PA_viewR_HReserved->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewR_HReserved->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_HReserved->Location = System::Drawing::Point(32, 268);
			  this->PA_viewR_HReserved->Name = L"PA_viewR_HReserved";
			  this->PA_viewR_HReserved->Size = System::Drawing::Size(262, 42);
			  this->PA_viewR_HReserved->TabIndex = 2;
			  this->PA_viewR_HReserved->Text = L"Hospital Name";
			  // 
			  // PA_viewR_PName
			  // 
			  this->PA_viewR_PName->AutoSize = true;
			  this->PA_viewR_PName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_viewR_PName->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_PName->Location = System::Drawing::Point(32, 143);
			  this->PA_viewR_PName->Name = L"PA_viewR_PName";
			  this->PA_viewR_PName->Size = System::Drawing::Size(253, 42);
			  this->PA_viewR_PName->TabIndex = 0;
			  this->PA_viewR_PName->Text = L"Patient Name ";
			  // 
			  // PA_viewR_RoomID
			  // 
			  this->PA_viewR_RoomID->AutoSize = true;
			  this->PA_viewR_RoomID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewR_RoomID->ForeColor = System::Drawing::Color::White;
			  this->PA_viewR_RoomID->Location = System::Drawing::Point(32, 645);
			  this->PA_viewR_RoomID->Name = L"PA_viewR_RoomID";
			  this->PA_viewR_RoomID->Size = System::Drawing::Size(163, 42);
			  this->PA_viewR_RoomID->TabIndex = 0;
			  this->PA_viewR_RoomID->Text = L"Room ID";
			  // 
			  // PA_reservlist_header
			  // 
			  this->PA_reservlist_header->BackColor = System::Drawing::SystemColors::InactiveCaption;
			  this->PA_reservlist_header->Controls->Add(this->label12);
			  this->PA_reservlist_header->Controls->Add(this->PA_viewRButton);
			  this->PA_reservlist_header->Controls->Add(this->PA_viewRlist);
			  this->PA_reservlist_header->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_reservlist_header->Location = System::Drawing::Point(0, 0);
			  this->PA_reservlist_header->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_reservlist_header->Name = L"PA_reservlist_header";
			  this->PA_reservlist_header->Size = System::Drawing::Size(1196, 112);
			  this->PA_reservlist_header->TabIndex = 1;
			  // 
			  // label12
			  // 
			  this->label12->AutoSize = true;
			  this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label12->ForeColor = System::Drawing::Color::Black;
			  this->label12->Location = System::Drawing::Point(27, 10);
			  this->label12->Name = L"label12";
			  this->label12->Size = System::Drawing::Size(215, 31);
			  this->label12->TabIndex = 6;
			  this->label12->Text = L"Reservations list";
			  // 
			  // PA_viewRButton
			  // 
			  this->PA_viewRButton->FlatAppearance->BorderSize = 0;
			  this->PA_viewRButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_viewRButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_viewRButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_viewRButton.Image")));
			  this->PA_viewRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_viewRButton->Location = System::Drawing::Point(399, 23);
			  this->PA_viewRButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_viewRButton->Name = L"PA_viewRButton";
			  this->PA_viewRButton->Size = System::Drawing::Size(119, 36);
			  this->PA_viewRButton->TabIndex = 5;
			  this->PA_viewRButton->Text = L"View";
			  this->PA_viewRButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->PA_viewRButton->UseVisualStyleBackColor = true;
			  this->PA_viewRButton->Click += gcnew System::EventHandler(this, &mainPage::PA_viewRButton_Click);
			  // 
			  // PA_viewRlist
			  // 
			  this->PA_viewRlist->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_viewRlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_viewRlist->FormattingEnabled = true;
			  this->PA_viewRlist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_viewRlist->Location = System::Drawing::Point(33, 53);
			  this->PA_viewRlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_viewRlist->Name = L"PA_viewRlist";
			  this->PA_viewRlist->Size = System::Drawing::Size(247, 37);
			  this->PA_viewRlist->TabIndex = 0;
			  // 
			  // PA_viewLABR
			  // 
			  this->PA_viewLABR->Controls->Add(this->PA_labRage);
			  this->PA_viewLABR->Controls->Add(this->PA_labRtestN);
			  this->PA_viewLABR->Controls->Add(this->PA_labRphN);
			  this->PA_viewLABR->Controls->Add(this->PA_labRgender);
			  this->PA_viewLABR->Controls->Add(this->PA_labRplace);
			  this->PA_viewLABR->Controls->Add(this->PA_labRname);
			  this->PA_viewLABR->Controls->Add(this->panel3);
			  this->PA_viewLABR->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_viewLABR->Location = System::Drawing::Point(0, 0);
			  this->PA_viewLABR->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_viewLABR->Name = L"PA_viewLABR";
			  this->PA_viewLABR->Size = System::Drawing::Size(1196, 841);
			  this->PA_viewLABR->TabIndex = 10;
			  this->PA_viewLABR->Leave += gcnew System::EventHandler(this, &mainPage::PA_viewLABR_Leave);
			  // 
			  // PA_labRage
			  // 
			  this->PA_labRage->AutoSize = true;
			  this->PA_labRage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_labRage->ForeColor = System::Drawing::Color::White;
			  this->PA_labRage->Location = System::Drawing::Point(19, 254);
			  this->PA_labRage->Name = L"PA_labRage";
			  this->PA_labRage->Size = System::Drawing::Size(175, 35);
			  this->PA_labRage->TabIndex = 9;
			  this->PA_labRage->Text = L"Patient Age";
			  // 
			  // PA_labRtestN
			  // 
			  this->PA_labRtestN->AutoSize = true;
			  this->PA_labRtestN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_labRtestN->ForeColor = System::Drawing::Color::White;
			  this->PA_labRtestN->Location = System::Drawing::Point(19, 501);
			  this->PA_labRtestN->Name = L"PA_labRtestN";
			  this->PA_labRtestN->Size = System::Drawing::Size(165, 35);
			  this->PA_labRtestN->TabIndex = 8;
			  this->PA_labRtestN->Text = L"Test Name";
			  // 
			  // PA_labRphN
			  // 
			  this->PA_labRphN->AutoSize = true;
			  this->PA_labRphN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_labRphN->ForeColor = System::Drawing::Color::White;
			  this->PA_labRphN->Location = System::Drawing::Point(19, 377);
			  this->PA_labRphN->Name = L"PA_labRphN";
			  this->PA_labRphN->Size = System::Drawing::Size(220, 35);
			  this->PA_labRphN->TabIndex = 4;
			  this->PA_labRphN->Text = L"Phone Number";
			  // 
			  // PA_labRgender
			  // 
			  this->PA_labRgender->AutoSize = true;
			  this->PA_labRgender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_labRgender->ForeColor = System::Drawing::Color::White;
			  this->PA_labRgender->Location = System::Drawing::Point(19, 315);
			  this->PA_labRgender->Name = L"PA_labRgender";
			  this->PA_labRgender->Size = System::Drawing::Size(222, 35);
			  this->PA_labRgender->TabIndex = 3;
			  this->PA_labRgender->Text = L"Patient Gender";
			  // 
			  // PA_labRplace
			  // 
			  this->PA_labRplace->AutoSize = true;
			  this->PA_labRplace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_labRplace->ForeColor = System::Drawing::Color::White;
			  this->PA_labRplace->Location = System::Drawing::Point(19, 439);
			  this->PA_labRplace->Name = L"PA_labRplace";
			  this->PA_labRplace->Size = System::Drawing::Size(93, 35);
			  this->PA_labRplace->TabIndex = 2;
			  this->PA_labRplace->Text = L"Place";
			  // 
			  // PA_labRname
			  // 
			  this->PA_labRname->AutoSize = true;
			  this->PA_labRname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_labRname->ForeColor = System::Drawing::Color::White;
			  this->PA_labRname->Location = System::Drawing::Point(19, 191);
			  this->PA_labRname->Name = L"PA_labRname";
			  this->PA_labRname->Size = System::Drawing::Size(209, 35);
			  this->PA_labRname->TabIndex = 0;
			  this->PA_labRname->Text = L"Patient Name ";
			  // 
			  // panel3
			  // 
			  this->panel3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			  this->panel3->Controls->Add(this->label27);
			  this->panel3->Controls->Add(this->button4);
			  this->panel3->Controls->Add(this->comboBox1);
			  this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			  this->panel3->Location = System::Drawing::Point(0, 0);
			  this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->panel3->Name = L"panel3";
			  this->panel3->Size = System::Drawing::Size(1196, 112);
			  this->panel3->TabIndex = 1;
			  // 
			  // label27
			  // 
			  this->label27->AutoSize = true;
			  this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label27->ForeColor = System::Drawing::Color::Black;
			  this->label27->Location = System::Drawing::Point(27, 12);
			  this->label27->Name = L"label27";
			  this->label27->Size = System::Drawing::Size(239, 29);
			  this->label27->TabIndex = 6;
			  this->label27->Text = L"LAB Reservations list";
			  // 
			  // button4
			  // 
			  this->button4->FlatAppearance->BorderSize = 0;
			  this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			  this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->button4->Location = System::Drawing::Point(401, 34);
			  this->button4->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->button4->Name = L"button4";
			  this->button4->Size = System::Drawing::Size(119, 36);
			  this->button4->TabIndex = 5;
			  this->button4->Text = L"View";
			  this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			  this->button4->UseVisualStyleBackColor = true;
			  this->button4->Click += gcnew System::EventHandler(this, &mainPage::button4_Click);
			  // 
			  // comboBox1
			  // 
			  this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->comboBox1->FormattingEnabled = true;
			  this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->comboBox1->Location = System::Drawing::Point(33, 53);
			  this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->comboBox1->Name = L"comboBox1";
			  this->comboBox1->Size = System::Drawing::Size(247, 37);
			  this->comboBox1->TabIndex = 0;
			  // 
			  // PA_Editlaboratory
			  // 
			  this->PA_Editlaboratory->Controls->Add(this->PA_Addlabo_layout);
			  this->PA_Editlaboratory->Controls->Add(this->PA_headerLAb);
			  this->PA_Editlaboratory->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_Editlaboratory->Location = System::Drawing::Point(0, 0);
			  this->PA_Editlaboratory->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Editlaboratory->Name = L"PA_Editlaboratory";
			  this->PA_Editlaboratory->Size = System::Drawing::Size(1196, 841);
			  this->PA_Editlaboratory->TabIndex = 9;
			  // 
			  // PA_Addlabo_layout
			  // 
			  this->PA_Addlabo_layout->BackColor = System::Drawing::SystemColors::ControlLight;
			  this->PA_Addlabo_layout->Controls->Add(this->PA_chechwho);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_checkwhere);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPHorLN_CB);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPtestN_CB);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPgender_CB);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPHorLN_lab);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPage_lab);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPage_TB);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPgender_lab);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPtestN_lab);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPphN_lab);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPphN_TB);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABadd);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPname_lab);
			  this->PA_Addlabo_layout->Controls->Add(this->PA_LABPname_TB);
			  this->PA_Addlabo_layout->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_Addlabo_layout->Location = System::Drawing::Point(0, 80);
			  this->PA_Addlabo_layout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_Addlabo_layout->Name = L"PA_Addlabo_layout";
			  this->PA_Addlabo_layout->Size = System::Drawing::Size(1196, 761);
			  this->PA_Addlabo_layout->TabIndex = 14;
			  // 
			  // PA_chechwho
			  // 
			  this->PA_chechwho->Controls->Add(this->PA_LABwho_lab);
			  this->PA_chechwho->Controls->Add(this->PA_LABwho_RB2);
			  this->PA_chechwho->Controls->Add(this->PA_LABwho_RB1);
			  this->PA_chechwho->Location = System::Drawing::Point(0, -2);
			  this->PA_chechwho->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_chechwho->Name = L"PA_chechwho";
			  this->PA_chechwho->Size = System::Drawing::Size(223, 78);
			  this->PA_chechwho->TabIndex = 35;
			  // 
			  // PA_LABwho_lab
			  // 
			  this->PA_LABwho_lab->AutoSize = true;
			  this->PA_LABwho_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABwho_lab->Location = System::Drawing::Point(5, 12);
			  this->PA_LABwho_lab->Name = L"PA_LABwho_lab";
			  this->PA_LABwho_lab->Size = System::Drawing::Size(176, 24);
			  this->PA_LABwho_lab->TabIndex = 24;
			  this->PA_LABwho_lab->Text = L"this reservation for \?";
			  // 
			  // PA_LABwho_RB2
			  // 
			  this->PA_LABwho_RB2->AutoSize = true;
			  this->PA_LABwho_RB2->Checked = true;
			  this->PA_LABwho_RB2->Location = System::Drawing::Point(116, 46);
			  this->PA_LABwho_RB2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABwho_RB2->Name = L"PA_LABwho_RB2";
			  this->PA_LABwho_RB2->Size = System::Drawing::Size(60, 20);
			  this->PA_LABwho_RB2->TabIndex = 23;
			  this->PA_LABwho_RB2->TabStop = true;
			  this->PA_LABwho_RB2->Text = L"Other";
			  this->PA_LABwho_RB2->UseVisualStyleBackColor = true;
			  // 
			  // PA_LABwho_RB1
			  // 
			  this->PA_LABwho_RB1->AutoSize = true;
			  this->PA_LABwho_RB1->Location = System::Drawing::Point(12, 44);
			  this->PA_LABwho_RB1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABwho_RB1->Name = L"PA_LABwho_RB1";
			  this->PA_LABwho_RB1->Size = System::Drawing::Size(48, 20);
			  this->PA_LABwho_RB1->TabIndex = 22;
			  this->PA_LABwho_RB1->Text = L"ME";
			  this->PA_LABwho_RB1->UseVisualStyleBackColor = true;
			  this->PA_LABwho_RB1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_LABwho_RB1_CheckedChanged);
			  // 
			  // PA_checkwhere
			  // 
			  this->PA_checkwhere->Controls->Add(this->PA_LAB_RB2);
			  this->PA_checkwhere->Controls->Add(this->label9);
			  this->PA_checkwhere->Controls->Add(this->PA_LAB_RB1);
			  this->PA_checkwhere->Location = System::Drawing::Point(357, 0);
			  this->PA_checkwhere->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_checkwhere->Name = L"PA_checkwhere";
			  this->PA_checkwhere->Size = System::Drawing::Size(245, 68);
			  this->PA_checkwhere->TabIndex = 34;
			  // 
			  // PA_LAB_RB2
			  // 
			  this->PA_LAB_RB2->AutoSize = true;
			  this->PA_LAB_RB2->Location = System::Drawing::Point(101, 39);
			  this->PA_LAB_RB2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LAB_RB2->Name = L"PA_LAB_RB2";
			  this->PA_LAB_RB2->Size = System::Drawing::Size(107, 20);
			  this->PA_LAB_RB2->TabIndex = 32;
			  this->PA_LAB_RB2->Text = L"External LAB.";
			  this->PA_LAB_RB2->UseVisualStyleBackColor = true;
			  this->PA_LAB_RB2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_LAB_RB2_CheckedChanged);
			  // 
			  // label9
			  // 
			  this->label9->AutoSize = true;
			  this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label9->Location = System::Drawing::Point(3, 9);
			  this->label9->Name = L"label9";
			  this->label9->Size = System::Drawing::Size(78, 24);
			  this->label9->TabIndex = 33;
			  this->label9->Text = L"Book in ";
			  // 
			  // PA_LAB_RB1
			  // 
			  this->PA_LAB_RB1->AutoSize = true;
			  this->PA_LAB_RB1->Checked = true;
			  this->PA_LAB_RB1->Location = System::Drawing::Point(13, 39);
			  this->PA_LAB_RB1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LAB_RB1->Name = L"PA_LAB_RB1";
			  this->PA_LAB_RB1->Size = System::Drawing::Size(78, 20);
			  this->PA_LAB_RB1->TabIndex = 31;
			  this->PA_LAB_RB1->TabStop = true;
			  this->PA_LAB_RB1->Text = L"Hospital";
			  this->PA_LAB_RB1->UseVisualStyleBackColor = true;
			  // 
			  // PA_LABPHorLN_CB
			  // 
			  this->PA_LABPHorLN_CB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_LABPHorLN_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPHorLN_CB->FormattingEnabled = true;
			  this->PA_LABPHorLN_CB->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_LABPHorLN_CB->Location = System::Drawing::Point(380, 352);
			  this->PA_LABPHorLN_CB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABPHorLN_CB->MaxDropDownItems = 5;
			  this->PA_LABPHorLN_CB->Name = L"PA_LABPHorLN_CB";
			  this->PA_LABPHorLN_CB->Size = System::Drawing::Size(239, 33);
			  this->PA_LABPHorLN_CB->TabIndex = 28;
			  // 
			  // PA_LABPtestN_CB
			  // 
			  this->PA_LABPtestN_CB->DropDownHeight = 80;
			  this->PA_LABPtestN_CB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_LABPtestN_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPtestN_CB->FormattingEnabled = true;
			  this->PA_LABPtestN_CB->IntegralHeight = false;
			  this->PA_LABPtestN_CB->ItemHeight = 25;
			  this->PA_LABPtestN_CB->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			  this->PA_LABPtestN_CB->Location = System::Drawing::Point(35, 348);
			  this->PA_LABPtestN_CB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABPtestN_CB->MaxDropDownItems = 5;
			  this->PA_LABPtestN_CB->Name = L"PA_LABPtestN_CB";
			  this->PA_LABPtestN_CB->Size = System::Drawing::Size(239, 33);
			  this->PA_LABPtestN_CB->TabIndex = 27;
			  // 
			  // PA_LABPgender_CB
			  // 
			  this->PA_LABPgender_CB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			  this->PA_LABPgender_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPgender_CB->FormattingEnabled = true;
			  this->PA_LABPgender_CB->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			  this->PA_LABPgender_CB->Location = System::Drawing::Point(380, 249);
			  this->PA_LABPgender_CB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABPgender_CB->Name = L"PA_LABPgender_CB";
			  this->PA_LABPgender_CB->Size = System::Drawing::Size(239, 33);
			  this->PA_LABPgender_CB->TabIndex = 25;
			  // 
			  // PA_LABPHorLN_lab
			  // 
			  this->PA_LABPHorLN_lab->AutoSize = true;
			  this->PA_LABPHorLN_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPHorLN_lab->Location = System::Drawing::Point(376, 304);
			  this->PA_LABPHorLN_lab->Name = L"PA_LABPHorLN_lab";
			  this->PA_LABPHorLN_lab->Size = System::Drawing::Size(137, 29);
			  this->PA_LABPHorLN_lab->TabIndex = 20;
			  this->PA_LABPHorLN_lab->Text = L"Hospital list";
			  // 
			  // PA_LABPage_lab
			  // 
			  this->PA_LABPage_lab->AutoSize = true;
			  this->PA_LABPage_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPage_lab->Location = System::Drawing::Point(376, 111);
			  this->PA_LABPage_lab->Name = L"PA_LABPage_lab";
			  this->PA_LABPage_lab->Size = System::Drawing::Size(136, 29);
			  this->PA_LABPage_lab->TabIndex = 18;
			  this->PA_LABPage_lab->Text = L"Patient Age";
			  // 
			  // PA_LABPage_TB
			  // 
			  this->PA_LABPage_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_LABPage_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPage_TB->Location = System::Drawing::Point(381, 159);
			  this->PA_LABPage_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABPage_TB->Name = L"PA_LABPage_TB";
			  this->PA_LABPage_TB->Size = System::Drawing::Size(237, 27);
			  this->PA_LABPage_TB->TabIndex = 19;
			  // 
			  // PA_LABPgender_lab
			  // 
			  this->PA_LABPgender_lab->AutoSize = true;
			  this->PA_LABPgender_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPgender_lab->Location = System::Drawing::Point(375, 204);
			  this->PA_LABPgender_lab->Name = L"PA_LABPgender_lab";
			  this->PA_LABPgender_lab->Size = System::Drawing::Size(168, 29);
			  this->PA_LABPgender_lab->TabIndex = 16;
			  this->PA_LABPgender_lab->Text = L"Select Gender";
			  // 
			  // PA_LABPtestN_lab
			  // 
			  this->PA_LABPtestN_lab->AutoSize = true;
			  this->PA_LABPtestN_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_LABPtestN_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPtestN_lab->Location = System::Drawing::Point(31, 298);
			  this->PA_LABPtestN_lab->Name = L"PA_LABPtestN_lab";
			  this->PA_LABPtestN_lab->Size = System::Drawing::Size(109, 29);
			  this->PA_LABPtestN_lab->TabIndex = 14;
			  this->PA_LABPtestN_lab->Text = L"Tests list";
			  // 
			  // PA_LABPphN_lab
			  // 
			  this->PA_LABPphN_lab->AutoSize = true;
			  this->PA_LABPphN_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPphN_lab->Location = System::Drawing::Point(31, 198);
			  this->PA_LABPphN_lab->Name = L"PA_LABPphN_lab";
			  this->PA_LABPphN_lab->Size = System::Drawing::Size(176, 29);
			  this->PA_LABPphN_lab->TabIndex = 12;
			  this->PA_LABPphN_lab->Text = L"Phone Number";
			  // 
			  // PA_LABPphN_TB
			  // 
			  this->PA_LABPphN_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_LABPphN_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPphN_TB->Location = System::Drawing::Point(36, 249);
			  this->PA_LABPphN_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABPphN_TB->Name = L"PA_LABPphN_TB";
			  this->PA_LABPphN_TB->Size = System::Drawing::Size(237, 27);
			  this->PA_LABPphN_TB->TabIndex = 13;
			  // 
			  // PA_LABadd
			  // 
			  this->PA_LABadd->FlatAppearance->BorderSize = 0;
			  this->PA_LABadd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_LABadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.93846F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_LABadd->Location = System::Drawing::Point(35, 508);
			  this->PA_LABadd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABadd->Name = L"PA_LABadd";
			  this->PA_LABadd->Size = System::Drawing::Size(105, 52);
			  this->PA_LABadd->TabIndex = 11;
			  this->PA_LABadd->Text = L"Add";
			  this->PA_LABadd->UseVisualStyleBackColor = true;
			  this->PA_LABadd->Click += gcnew System::EventHandler(this, &mainPage::PA_LABadd_Click);
			  // 
			  // PA_LABPname_lab
			  // 
			  this->PA_LABPname_lab->AutoSize = true;
			  this->PA_LABPname_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPname_lab->Location = System::Drawing::Point(31, 98);
			  this->PA_LABPname_lab->Name = L"PA_LABPname_lab";
			  this->PA_LABPname_lab->Size = System::Drawing::Size(158, 29);
			  this->PA_LABPname_lab->TabIndex = 7;
			  this->PA_LABPname_lab->Text = L"Patient Name";
			  // 
			  // PA_LABPname_TB
			  // 
			  this->PA_LABPname_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->PA_LABPname_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_LABPname_TB->Location = System::Drawing::Point(36, 148);
			  this->PA_LABPname_TB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_LABPname_TB->Name = L"PA_LABPname_TB";
			  this->PA_LABPname_TB->Size = System::Drawing::Size(237, 27);
			  this->PA_LABPname_TB->TabIndex = 8;
			  // 
			  // PA_headerLAb
			  // 
			  this->PA_headerLAb->Controls->Add(this->label1);
			  this->PA_headerLAb->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_headerLAb->Location = System::Drawing::Point(0, 0);
			  this->PA_headerLAb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_headerLAb->Name = L"PA_headerLAb";
			  this->PA_headerLAb->Size = System::Drawing::Size(1196, 80);
			  this->PA_headerLAb->TabIndex = 15;
			  // 
			  // label1
			  // 
			  this->label1->AutoSize = true;
			  this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->label1->ForeColor = System::Drawing::Color::White;
			  this->label1->Location = System::Drawing::Point(248, 27);
			  this->label1->Name = L"label1";
			  this->label1->Size = System::Drawing::Size(255, 29);
			  this->label1->TabIndex = 8;
			  this->label1->Text = L"Making lab reservation";
			  // 
			  // PA_startwindow
			  // 
			  this->PA_startwindow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_startwindow.BackgroundImage")));
			  this->PA_startwindow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->PA_startwindow->Dock = System::Windows::Forms::DockStyle::Fill;
			  this->PA_startwindow->Location = System::Drawing::Point(0, 0);
			  this->PA_startwindow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_startwindow->Name = L"PA_startwindow";
			  this->PA_startwindow->Size = System::Drawing::Size(1196, 841);
			  this->PA_startwindow->TabIndex = 6;
			  // 
			  // side_PA_bar_pn
			  // 
			  this->side_PA_bar_pn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  this->side_PA_bar_pn->Controls->Add(this->button5);
			  this->side_PA_bar_pn->Controls->Add(this->PA_Editlaboratory_but);
			  this->side_PA_bar_pn->Controls->Add(this->PA_SortHospital);
			  this->side_PA_bar_pn->Controls->Add(this->PA_addORdelReserv);
			  this->side_PA_bar_pn->Controls->Add(this->PA_MOReserv);
			  this->side_PA_bar_pn->Controls->Add(this->PA_ViewReserveList);
			  this->side_PA_bar_pn->Controls->Add(this->PA_view_hosInfo);
			  this->side_PA_bar_pn->Controls->Add(this->PA_info_pn);
			  this->side_PA_bar_pn->Controls->Add(this->PA_logout_but);
			  this->side_PA_bar_pn->Dock = System::Windows::Forms::DockStyle::Left;
			  this->side_PA_bar_pn->Location = System::Drawing::Point(0, 0);
			  this->side_PA_bar_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->side_PA_bar_pn->Name = L"side_PA_bar_pn";
			  this->side_PA_bar_pn->Size = System::Drawing::Size(340, 841);
			  this->side_PA_bar_pn->TabIndex = 2;
			  // 
			  // button5
			  // 
			  this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			  this->button5->FlatAppearance->BorderSize = 0;
			  this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->button5->Location = System::Drawing::Point(0, 568);
			  this->button5->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->button5->Name = L"button5";
			  this->button5->Size = System::Drawing::Size(340, 71);
			  this->button5->TabIndex = 8;
			  this->button5->Text = L" LAB. Reservations list";
			  this->button5->UseVisualStyleBackColor = true;
			  this->button5->Click += gcnew System::EventHandler(this, &mainPage::button5_Click);
			  // 
			  // PA_Editlaboratory_but
			  // 
			  this->PA_Editlaboratory_but->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_Editlaboratory_but->FlatAppearance->BorderSize = 0;
			  this->PA_Editlaboratory_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_Editlaboratory_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_Editlaboratory_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_Editlaboratory_but->Location = System::Drawing::Point(0, 489);
			  this->PA_Editlaboratory_but->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_Editlaboratory_but->Name = L"PA_Editlaboratory_but";
			  this->PA_Editlaboratory_but->Size = System::Drawing::Size(340, 79);
			  this->PA_Editlaboratory_but->TabIndex = 7;
			  this->PA_Editlaboratory_but->Text = L"Make LAB. Reservations";
			  this->PA_Editlaboratory_but->UseVisualStyleBackColor = true;
			  this->PA_Editlaboratory_but->Click += gcnew System::EventHandler(this, &mainPage::PA_Editlaboratory_but_Click);
			  // 
			  // PA_SortHospital
			  // 
			  this->PA_SortHospital->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_SortHospital->FlatAppearance->BorderSize = 0;
			  this->PA_SortHospital->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_SortHospital->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_SortHospital->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_SortHospital.Image")));
			  this->PA_SortHospital->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_SortHospital->Location = System::Drawing::Point(0, 426);
			  this->PA_SortHospital->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_SortHospital->Name = L"PA_SortHospital";
			  this->PA_SortHospital->Size = System::Drawing::Size(340, 63);
			  this->PA_SortHospital->TabIndex = 6;
			  this->PA_SortHospital->Text = L"Sort Hospital list";
			  this->PA_SortHospital->UseVisualStyleBackColor = true;
			  this->PA_SortHospital->Click += gcnew System::EventHandler(this, &mainPage::PA_SortHospital_Click);
			  // 
			  // PA_addORdelReserv
			  // 
			  this->PA_addORdelReserv->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_addORdelReserv->FlatAppearance->BorderSize = 0;
			  this->PA_addORdelReserv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_addORdelReserv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_addORdelReserv->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_addORdelReserv->Location = System::Drawing::Point(0, 355);
			  this->PA_addORdelReserv->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_addORdelReserv->Name = L"PA_addORdelReserv";
			  this->PA_addORdelReserv->Size = System::Drawing::Size(340, 71);
			  this->PA_addORdelReserv->TabIndex = 5;
			  this->PA_addORdelReserv->Text = L"Add and delete Reservations";
			  this->PA_addORdelReserv->UseVisualStyleBackColor = true;
			  this->PA_addORdelReserv->Click += gcnew System::EventHandler(this, &mainPage::PA_addORdelReserv_Click);
			  // 
			  // PA_MOReserv
			  // 
			  this->PA_MOReserv->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_MOReserv->FlatAppearance->BorderSize = 0;
			  this->PA_MOReserv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_MOReserv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_MOReserv->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_MOReserv->Location = System::Drawing::Point(0, 300);
			  this->PA_MOReserv->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_MOReserv->Name = L"PA_MOReserv";
			  this->PA_MOReserv->Size = System::Drawing::Size(340, 55);
			  this->PA_MOReserv->TabIndex = 4;
			  this->PA_MOReserv->Text = L"Modify Reservations";
			  this->PA_MOReserv->UseVisualStyleBackColor = true;
			  this->PA_MOReserv->Click += gcnew System::EventHandler(this, &mainPage::PA_MOReserv_Click);
			  // 
			  // PA_ViewReserveList
			  // 
			  this->PA_ViewReserveList->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_ViewReserveList->FlatAppearance->BorderSize = 0;
			  this->PA_ViewReserveList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_ViewReserveList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_ViewReserveList->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_ViewReserveList->Location = System::Drawing::Point(0, 243);
			  this->PA_ViewReserveList->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_ViewReserveList->Name = L"PA_ViewReserveList";
			  this->PA_ViewReserveList->Size = System::Drawing::Size(340, 57);
			  this->PA_ViewReserveList->TabIndex = 3;
			  this->PA_ViewReserveList->Text = L"Reservations list";
			  this->PA_ViewReserveList->UseVisualStyleBackColor = true;
			  this->PA_ViewReserveList->Click += gcnew System::EventHandler(this, &mainPage::PA_ViewReserveList_Click);
			  // 
			  // PA_view_hosInfo
			  // 
			  this->PA_view_hosInfo->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_view_hosInfo->FlatAppearance->BorderSize = 0;
			  this->PA_view_hosInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_view_hosInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			  this->PA_view_hosInfo->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_view_hosInfo->Location = System::Drawing::Point(0, 181);
			  this->PA_view_hosInfo->Margin = System::Windows::Forms::Padding(3, 50, 3, 2);
			  this->PA_view_hosInfo->Name = L"PA_view_hosInfo";
			  this->PA_view_hosInfo->Size = System::Drawing::Size(340, 62);
			  this->PA_view_hosInfo->TabIndex = 2;
			  this->PA_view_hosInfo->Text = L"View Hospital(s) Info";
			  this->PA_view_hosInfo->UseVisualStyleBackColor = true;
			  this->PA_view_hosInfo->Click += gcnew System::EventHandler(this, &mainPage::PA_view_hosInfo_Click);
			  // 
			  // PA_info_pn
			  // 
			  this->PA_info_pn->BackColor = System::Drawing::SystemColors::InactiveCaption;
			  this->PA_info_pn->Controls->Add(this->PA_del);
			  this->PA_info_pn->Controls->Add(this->edit_PInfo);
			  this->PA_info_pn->Controls->Add(this->view_PInfo);
			  this->PA_info_pn->Controls->Add(this->uesrType_PA_lab);
			  this->PA_info_pn->Controls->Add(this->FName_PA_lab);
			  this->PA_info_pn->Controls->Add(this->PA_pic);
			  this->PA_info_pn->Dock = System::Windows::Forms::DockStyle::Top;
			  this->PA_info_pn->Location = System::Drawing::Point(0, 0);
			  this->PA_info_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_info_pn->Name = L"PA_info_pn";
			  this->PA_info_pn->Size = System::Drawing::Size(340, 181);
			  this->PA_info_pn->TabIndex = 0;
			  // 
			  // PA_del
			  // 
			  this->PA_del->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_del.BackgroundImage")));
			  this->PA_del->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->PA_del->FlatAppearance->BorderSize = 0;
			  this->PA_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_del->ForeColor = System::Drawing::SystemColors::Control;
			  this->PA_del->Location = System::Drawing::Point(308, 54);
			  this->PA_del->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_del->Name = L"PA_del";
			  this->PA_del->Size = System::Drawing::Size(24, 26);
			  this->PA_del->TabIndex = 9;
			  this->PA_del->UseVisualStyleBackColor = true;
			  this->PA_del->Click += gcnew System::EventHandler(this, &mainPage::PA_del_Click);
			  // 
			  // edit_PInfo
			  // 
			  this->edit_PInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			  this->edit_PInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit_PInfo.BackgroundImage")));
			  this->edit_PInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->edit_PInfo->FlatAppearance->BorderSize = 0;
			  this->edit_PInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->edit_PInfo->Location = System::Drawing::Point(308, 7);
			  this->edit_PInfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->edit_PInfo->Name = L"edit_PInfo";
			  this->edit_PInfo->Size = System::Drawing::Size(24, 26);
			  this->edit_PInfo->TabIndex = 4;
			  this->edit_PInfo->UseVisualStyleBackColor = true;
			  this->edit_PInfo->Click += gcnew System::EventHandler(this, &mainPage::edit_PInfo_Click);
			  // 
			  // view_PInfo
			  // 
			  this->view_PInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			  this->view_PInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"view_PInfo.BackgroundImage")));
			  this->view_PInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			  this->view_PInfo->FlatAppearance->BorderSize = 0;
			  this->view_PInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->view_PInfo->Location = System::Drawing::Point(264, 6);
			  this->view_PInfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->view_PInfo->Name = L"view_PInfo";
			  this->view_PInfo->Size = System::Drawing::Size(24, 26);
			  this->view_PInfo->TabIndex = 3;
			  this->view_PInfo->UseVisualStyleBackColor = true;
			  this->view_PInfo->Click += gcnew System::EventHandler(this, &mainPage::view_PInfo_Click);
			  // 
			  // uesrType_PA_lab
			  // 
			  this->uesrType_PA_lab->AutoSize = true;
			  this->uesrType_PA_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->uesrType_PA_lab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				  static_cast<System::Int32>(static_cast<System::Byte>(64)));
			  this->uesrType_PA_lab->Location = System::Drawing::Point(249, 153);
			  this->uesrType_PA_lab->Name = L"uesrType_PA_lab";
			  this->uesrType_PA_lab->Size = System::Drawing::Size(85, 28);
			  this->uesrType_PA_lab->TabIndex = 2;
			  this->uesrType_PA_lab->Text = L"Patient";
			  // 
			  // FName_PA_lab
			  // 
			  this->FName_PA_lab->AutoSize = true;
			  this->FName_PA_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->FName_PA_lab->Location = System::Drawing::Point(15, 119);
			  this->FName_PA_lab->Name = L"FName_PA_lab";
			  this->FName_PA_lab->Size = System::Drawing::Size(79, 31);
			  this->FName_PA_lab->TabIndex = 1;
			  this->FName_PA_lab->Text = L"label2";
			  // 
			  // PA_pic
			  // 
			  this->PA_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_pic.Image")));
			  this->PA_pic->Location = System::Drawing::Point(84, 4);
			  this->PA_pic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_pic->Name = L"PA_pic";
			  this->PA_pic->Size = System::Drawing::Size(152, 114);
			  this->PA_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			  this->PA_pic->TabIndex = 0;
			  this->PA_pic->TabStop = false;
			  // 
			  // PA_logout_but
			  // 
			  this->PA_logout_but->Dock = System::Windows::Forms::DockStyle::Bottom;
			  this->PA_logout_but->FlatAppearance->BorderSize = 0;
			  this->PA_logout_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->PA_logout_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->PA_logout_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			  this->PA_logout_but->Location = System::Drawing::Point(0, 767);
			  this->PA_logout_but->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->PA_logout_but->Name = L"PA_logout_but";
			  this->PA_logout_but->Size = System::Drawing::Size(340, 74);
			  this->PA_logout_but->TabIndex = 1;
			  this->PA_logout_but->Text = L"Log out";
			  this->PA_logout_but->UseVisualStyleBackColor = true;
			  this->PA_logout_but->Click += gcnew System::EventHandler(this, &mainPage::PA_logout_but_Click);
			  // 
			  // mainPage
			  // 
			  this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			  this->AutoSize = true;
			  this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				  static_cast<System::Int32>(static_cast<System::Byte>(118)));
			  this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->ClientSize = System::Drawing::Size(1536, 841);
			  this->Controls->Add(this->AD_conpage);
			  this->Controls->Add(this->PA_conpage);
			  this->Controls->Add(this->StartUP_page);
			  this->Controls->Add(this->Info);
			  this->DoubleBuffered = true;
			  this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			  this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			  this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			  this->MaximizeBox = false;
			  this->Name = L"mainPage";
			  this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			  this->Text = L"CareConnect Hospitals Suite";
			  this->Load += gcnew System::EventHandler(this, &mainPage::mainPage_Load);
			  this->StartUP_page->ResumeLayout(false);
			  this->SIgnUP_IN->ResumeLayout(false);
			  this->login_pn->ResumeLayout(false);
			  this->login_pn->PerformLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			  this->regis_pn->ResumeLayout(false);
			  this->regis_pn->PerformLayout();
			  this->Requset1->ResumeLayout(false);
			  this->Requset1->PerformLayout();
			  this->Info->ResumeLayout(false);
			  this->Info->PerformLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			  this->AD_conpage->ResumeLayout(false);
			  this->AD_pages->ResumeLayout(false);
			  this->AD_view_Pinfo->ResumeLayout(false);
			  this->AD_view_Pinfo->PerformLayout();
			  this->AD_viewPlist_header->ResumeLayout(false);
			  this->AD_viewPlist_header->PerformLayout();
			  this->AD_view_Hinfo->ResumeLayout(false);
			  this->AD_view_Hinfo->PerformLayout();
			  this->AD_viewHinfoHeader->ResumeLayout(false);
			  this->AD_viewHinfoHeader->PerformLayout();
			  this->AD_SortingH->ResumeLayout(false);
			  this->AD_SortingH->PerformLayout();
			  this->AD_editAinfo->ResumeLayout(false);
			  this->AD_editRemain->ResumeLayout(false);
			  this->AD_editRemain->PerformLayout();
			  this->AD_editpass->ResumeLayout(false);
			  this->AD_editpass->PerformLayout();
			  this->AD_GofCHEditAinfo->ResumeLayout(false);
			  this->AD_modify_Hinfo->ResumeLayout(false);
			  this->AD_Modifyinput->ResumeLayout(false);
			  this->AD_Modifyinput->PerformLayout();
			  this->AD_modifyHSC_layout->ResumeLayout(false);
			  this->AD_ADDHSC_lay->ResumeLayout(false);
			  this->AD_ADDHSC_lay->PerformLayout();
			  this->AD_DELHSC_lay->ResumeLayout(false);
			  this->AD_DELHSC_lay->PerformLayout();
			  this->AD_groupchoice->ResumeLayout(false);
			  this->AD_groupchoice->PerformLayout();
			  this->AD_headerModify->ResumeLayout(false);
			  this->AD_headerModify->PerformLayout();
			  this->AD_edit_Hlist->ResumeLayout(false);
			  this->AD_addHlayout->ResumeLayout(false);
			  this->AD_addHlayout->PerformLayout();
			  this->AD_waitingP->ResumeLayout(false);
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			  this->AD_deleteHlayout->ResumeLayout(false);
			  this->AD_deleteHlayout->PerformLayout();
			  this->AD_header_editH->ResumeLayout(false);
			  this->AD_viewAinfo->ResumeLayout(false);
			  this->AD_viewAinfo->PerformLayout();
			  this->side_AD_bar_pn->ResumeLayout(false);
			  this->side_AD_bar_pn->PerformLayout();
			  this->AD_info_pn->ResumeLayout(false);
			  this->AD_info_pn->PerformLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AD_pic))->EndInit();
			  this->PA_conpage->ResumeLayout(false);
			  this->PA_pages->ResumeLayout(false);
			  this->PA_viewHinfo->ResumeLayout(false);
			  this->PA_viewHinfo->PerformLayout();
			  this->PA_viewHinfoHeader->ResumeLayout(false);
			  this->PA_viewHinfoHeader->PerformLayout();
			  this->PA_ModifyReserv->ResumeLayout(false);
			  this->PA_modifyHRTRDsLayout->ResumeLayout(false);
			  this->PA_modifyHRTRDsLayout->PerformLayout();
			  this->panel1->ResumeLayout(false);
			  this->panel1->PerformLayout();
			  this->PA_editNAPhnumlayout->ResumeLayout(false);
			  this->PA_editNAPhnumlayout->PerformLayout();
			  this->PA_groupCmodify->ResumeLayout(false);
			  this->PA_headerM->ResumeLayout(false);
			  this->PA_headerM->PerformLayout();
			  this->PA_editReserv->ResumeLayout(false);
			  this->PA_delRlayout->ResumeLayout(false);
			  this->PA_delRlayout->PerformLayout();
			  this->PA_addRlayout->ResumeLayout(false);
			  this->PA_addRlayout->PerformLayout();
			  this->PA_Check1->ResumeLayout(false);
			  this->PA_Check1->PerformLayout();
			  this->PA_Check2->ResumeLayout(false);
			  this->PA_Check2->PerformLayout();
			  this->PA_waitingeditRlist->ResumeLayout(false);
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			  this->PA_header_editRlist->ResumeLayout(false);
			  this->PA_editPinfo->ResumeLayout(false);
			  this->PA_editpass->ResumeLayout(false);
			  this->PA_editpass->PerformLayout();
			  this->PA_editRemain->ResumeLayout(false);
			  this->PA_editRemain->PerformLayout();
			  this->PA_GofCHEditPinfo->ResumeLayout(false);
			  this->PA_SortingH->ResumeLayout(false);
			  this->PA_SortingH->PerformLayout();
			  this->PA_viewPinfo->ResumeLayout(false);
			  this->PA_viewPinfo->PerformLayout();
			  this->PA_reservlist->ResumeLayout(false);
			  this->PA_reservlist->PerformLayout();
			  this->PA_reservlist_header->ResumeLayout(false);
			  this->PA_reservlist_header->PerformLayout();
			  this->PA_viewLABR->ResumeLayout(false);
			  this->PA_viewLABR->PerformLayout();
			  this->panel3->ResumeLayout(false);
			  this->panel3->PerformLayout();
			  this->PA_Editlaboratory->ResumeLayout(false);
			  this->PA_Addlabo_layout->ResumeLayout(false);
			  this->PA_Addlabo_layout->PerformLayout();
			  this->PA_chechwho->ResumeLayout(false);
			  this->PA_chechwho->PerformLayout();
			  this->PA_checkwhere->ResumeLayout(false);
			  this->PA_checkwhere->PerformLayout();
			  this->PA_headerLAb->ResumeLayout(false);
			  this->PA_headerLAb->PerformLayout();
			  this->side_PA_bar_pn->ResumeLayout(false);
			  this->PA_info_pn->ResumeLayout(false);
			  this->PA_info_pn->PerformLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA_pic))->EndInit();
			  this->ResumeLayout(false);

		  }
#pragma endregion

	 private: System::Void mainPage_Load(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
		  passBox->Text = "password";
		  userBox->Text = "username";
		  String^ A;
		  PA_LABPtestN_CB->Items->Clear();
		  for (int i = 0; i < 10; i++) {
			   A = gcnew String(tests[i].c_str());
			   PA_LABPtestN_CB->Items->Add(A);
		  }
		  
	 }
	 private: System::Void SignIUP_but_Click(System::Object^ sender, System::EventArgs^ e) {

		  String^ name_user;
		  Users temp;
		  if (userBox->Text == "username") {
			   MessageBox::Show("Please enter your username","Warning");
			   return;
		  }
		  if (passBox->Text == "password") {
			   MessageBox::Show("Please enter your password", "Warning");
			   return;
		  }
		  else if (passBox->Text == "ID") {
			   MessageBox::Show("Please enter your ID", "Warning");
			   return;
		  }
		  temp.username = context.marshal_as<string>(userBox->Text);
		  if (requsetid->Checked)
		  temp.id =stoi( context.marshal_as<string>(passBox->Text));
		  else
		  temp.password = context.marshal_as<string>(passBox->Text);
		
		  if (f.loginAsAdmin(user, temp)) {
			   name_user = gcnew String(user[Lindex].name.c_str());

			   AD_conpage->BringToFront();
			   AD_startWindow->BringToFront();
			   FName_AD_lab->Text = name_user;
			   warning_massage->Text = "";
			   passBox->Text = "";
			   userBox->Text = "";
		  }
		  else if (f.loginAsPatient(user, temp)) {
			   name_user = gcnew String(user[Lindex].name.c_str());
			   FName_PA_lab->Text = name_user;
			   PA_conpage->BringToFront();
			   PA_startwindow->BringToFront();
			   warning_massage->Text = "";
			   passBox->Text = "";
			   userBox->Text = "";
		  }
		  else
			   warning_massage->Text = "may be passward or username os wrong\nplease try again";

	 }
	 private: System::Void request_regis_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  if (RequsetToRegis->Text == "You don't have account ?") {
		  regis_pn->BringToFront();
		  RequsetToRegis->Text = "You already have account ?";
		  request_regis_but->Text = "Log IN";
		  }
		  else if(RequsetToRegis->Text == "You already have account ?") {
			   login_pn->BringToFront();
			   regis_name_textbox->Text = "";
			   regis_age_textbox->Text = "";
			   regis_phonenumber_textbox->Text = "";
			   regis_username_textbox->Text = "";
			   regis_Pass_TBox->Text = "";
			   regis_ConPass_TBox->Text = "";
			   RequsetToRegis->Text = "You don't have account ?";
		  request_regis_but->Text = "Sign UP";
		  }
	 }
	 private: System::Void regis_ShowPass_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  regis_ConPass_TBox->UseSystemPasswordChar = !regis_ConPass_TBox->UseSystemPasswordChar;
		  regis_Pass_TBox->UseSystemPasswordChar = !regis_Pass_TBox->UseSystemPasswordChar;
	 }
	 private: System::Void login_ShowPass_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  if(passBox->Text!="ID" && passBox->Text != "password")
		  passBox->UseSystemPasswordChar = !passBox->UseSystemPasswordChar;
	 }
	 private: System::Void AD_logout_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
		  userBox->Text = "username";

		  if (requsetid->Checked) {
			  // login_password_lab->Text = "ID";
			   if (passBox->Text == "" || passBox->Text == "password") {
					passBox->Text = "ID";
			   }
		  }
		  else {
			   if (passBox->Text == "" || passBox->Text == "ID") {
					passBox->Text = "password";
			   }
			  // login_password_lab->Text = "password";
		  }
		  passBox->UseSystemPasswordChar = false;

		  Hindex = -1;
		  Lindex = -1;
		  Rindex = -1;
	 }
	 private: System::Void regis_backTologin_Click(System::Object^ sender, System::EventArgs^ e) {
		  login_pn->BringToFront();
		  regis_name_textbox->Text = "";
		  regis_age_textbox->Text = "";
		  regis_phonenumber_textbox->Text = "";
		  regis_username_textbox->Text = "";
		  regis_Pass_TBox->Text = "";
		  regis_ConPass_TBox->Text = "";
	 }
	 private: System::Void PA_logout_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
		  PA_viewRlist->Text= "Reservation list";
		  PA_viewR_PName->Text = "Patient Name";
		  PA_viewR_PAge->Text = "Patient Age";
		  PA_viewR_bedPrice->Text = "Bed Price";
		  PA_viewR_HReserved->Text = "Hospital Name";
		  PA_viewR_RoomID->Text = "Room ID";
		  PA_viewR_phoneN->Text = "Phone Number";
		  PA_viewR_Day->Text = "Reservation Day";
		  PA_viewR_SurgeryPrice->Text = "Surgery Price";
		  PA_viewR_HSpCl->Text = "HSpecialty Or Clinic";
		  PA_viewR_ChandTPrice->Text = "Check-UP/total price";

		  userBox->Text = "username";
		  if (requsetid->Checked) {
			  // login_password_lab->Text = "ID";
			   if (passBox->Text == "" || passBox->Text == "password") {
					passBox->Text = "ID";
			   }
		  }
		  else {
			   if (passBox->Text == "" || passBox->Text == "ID") {
					passBox->Text = "password";
			   }
			  // login_password_lab->Text = "password";
		  }
		  passBox->UseSystemPasswordChar = false;
		  Hindex = -1;
		  Lindex = -1;
		  Rindex = -1;
	 }
	 private: System::Void AD_addORdel_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		 
		  AD_edit_Hlist->BringToFront();
		  AD_waitingP->BringToFront();
	 }
	 private: System::Void AD_modify_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		AD_modify_Hinfo->BringToFront();
		AD_Hlist_combox->Items->Clear();
		  String^ hospitalName;
		  for (int i = 0; i < hospitalCount; i++) {
			   hospitalName=gcnew String(hospital[i].HospitalName.c_str());
			   AD_Hlist_combox->Items->Add(hospitalName);
		  }
		 
		//  modifyHospital();
	 }
	 private: System::Void AD_dispaly_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_view_Hinfo->BringToFront();
		  AD_viewHList->Items->Clear();
		 
		  string checkname;
		  if (AD_viewHList->Text != "Hospital list") {
			    checkname = msclr::interop::marshal_as<std::string>(AD_viewHList->Text);
		  }
		  String^ hospitalName;
		  for (int i = 0; i < hospitalCount; i++) {
			   hospitalName = gcnew String(hospital[i].HospitalName.c_str());
			   AD_viewHList->Items->Add(hospitalName);
					
		  }
		
	 }
	 private: System::Void AD_dispatient_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_view_Pinfo->BringToFront();
		  AD_viewPlist->Items->Clear();
		  String^ patientName;
		  for (int i = 0; i < userCount; i++) {
			  if(user[i].userType=="Patient") {
					patientName = gcnew String(user[i].username.c_str());
					AD_viewPlist->Items->Add(patientName);
			   }
		  }
		 
	 }
     private: System::Void view_AInfo_Click(System::Object^ sender, System::EventArgs^ e) {
         AD_viewAinfo->BringToFront();
		 personalinfo();
     }
	 private: System::Void edit_AInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_editAinfo->BringToFront();
		  AD_edit_wiating->BringToFront();
	 }
	 private: System::Void PA_view_hosInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_viewHinfo->BringToFront();
		  PA_viewHList->Items->Clear();
		  String^ hospitalName;
		  for (int i = 0; i < hospitalCount; i++) {
			   hospitalName = gcnew String(hospital[i].HospitalName.c_str());
			   PA_viewHList->Items->Add(hospitalName);

		  }
	 }
	 private: System::Void PA_ViewReserveList_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_reservlist->BringToFront();
		 if(user[Lindex].reserCount!=0) {
			   PA_viewRlist->Items->Clear();
			   String^ RID ="";
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
				RID = "";
				RID += gcnew INT( user[Lindex].reservation[i].ReservtionID);
				PA_viewRlist->Items->Add(RID);

			   }
		  }
		 else {
			  PA_viewRlist->Items->Clear();
			  PA_viewRlist->Items->Add("Empty");

		 }
	 }
	 private: System::Void PA_MOReserv_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_ModifyReserv->BringToFront();
		  String^ RID;
	if(user[Lindex].reserCount>0) {
			   PA_Rlistmodify_com->Items->Clear();
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
					RID = "";
					RID += gcnew INT(user[Lindex].reservation[i].ReservtionID);
					PA_Rlistmodify_com->Items->Add(RID);
			   }
		  }

		 
	 }
	 private: System::Void PA_addORdelReserv_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_editReserv->BringToFront();
		  PA_waitingeditRlist->BringToFront();
		  
	 }
	 private: System::Void edit_PInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_editPinfo->BringToFront();
		  PA_edit_waiting->BringToFront();
	 }
	 private: System::Void view_PInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_viewPinfo->BringToFront();
		  personalinfo();

	 }
private: System::Void AD_IDselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital ID";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_TBinput->Text = "";
	
}
private: System::Void AD_PRRselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Number of Avaliable rooms";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
	label8->Visible = false;
	AD_TBinput->Text = "";

}
private: System::Void AD_RPselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Reservation Price";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
	label8->Visible = false;
	AD_TBinput->Text = "";

}
private: System::Void AD_BPselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Bed Price";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
	label8->Visible = false;
	AD_TBinput->Text = "";

}
private: System::Void AD_HRselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Rate";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
	label8->Visible = false;
	AD_TBinput->Text = "";

	//AD_TBforAddHSC
}
private: System::Void AD_HNselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Name";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false; 
	AD_ModifyHSClist->Visible = false;
	label8->Visible = false;
	AD_TBinput->Text = "";

}
private: System::Void AD_HSselected_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_Modifyinput->Visible = true;
	 AD_nameOfinput->Text = "Hospital Specialties";
	 AD_HSClist->Text = "Specialties List";
	 AD_ModifyHSClist->Text = "Specialties List";
	 AD_HSCorder->Text = "Enter Specialty Name";
	 AD_AskHSC->Text = "Choose Specialty";
	 AD_ModifyHSClist->Visible = true;
	 label8->Visible = true;
	 label8->Text = "Specialties List";
	 AD_modifyHSC_layout->Visible = false;
	 AD_deleteHSC->Visible = true;
	 AD_addHSC->Visible = true;
	 AD_TBinput->Text = "";
	 if (AD_Hlist_combox->SelectedIndex != -1) {
		  searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
		  AD_ModifyHSClist->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
			   AD_ModifyHSClist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
		  }
	 }
	 else {
		  AD_ModifyHSClist->Items->Clear();
		  AD_ModifyHSClist->Items->Add("Empty");
	 }
}
private: System::Void AD_HCselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Clinics";
	AD_ModifyHSClist->Text = "Clinics List";
	AD_HSClist->Text = "Clinics List";
	AD_HSCorder->Text = "Enter Clinics Name";
	AD_AskHSC->Text = "Choose Clinic";
	AD_ModifyHSClist->Visible = true;
	label8->Visible = true;
	label8->Text = "Clinics List";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = true;
	AD_addHSC->Visible = true;
	AD_TBinput->Text = "";	
	if (AD_Hlist_combox->SelectedIndex != -1) {
		searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
		AD_ModifyHSClist->Items->Clear();
		for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
			AD_ModifyHSClist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
		}
	}
	else {
		AD_ModifyHSClist->Items->Clear();
		AD_ModifyHSClist->Items->Add("Empty");
	}
}
private: System::Void AD_closeModify_Click(System::Object^ sender, System::EventArgs^ e) {
	 	AD_Modifyinput->Visible = false;
		AD_modifyHSC_layout->Visible = false;
		AD_deleteHSC->Visible = false;
		AD_addHSC->Visible = false;
		AD_ModifyHSClist->Visible = false;
		label8->Visible = false;
		AD_TBinput->Text = "";

		
}
private: System::Void AD_deleteHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = true;
	 AD_stateHSC1->Text = "select from list";
	 AD_DELHSC_lay->BringToFront();
	 AD_HSCorder->Visible = false;
	 AD_HSClist->Visible = true;
	 AD_selectHSC->Visible = true;
	 if (AD_Hlist_combox->SelectedIndex != -1) {
		  searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
		  if (AD_AskHSC->Text == "Choose Clinic") {
			   AD_HSClist->Items->Clear();
			   for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
					AD_HSClist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
			   }

		  }
		  if (AD_AskHSC->Text == "Choose Specialty") {
			   AD_HSClist->Items->Clear();
			   for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
			   {
					AD_HSClist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
			   }

		  }

	 }
	 else {
		  AD_HSClist->Items->Clear();
		  AD_HSClist->Items->Add("Empty");

	 }
}
private: System::Void AD_addHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = true;
	 AD_HSCorder->Visible = true;
	 AD_ADDHSC_lay->BringToFront();
	// AD_stateHSC->Visible = true;
	// AD_stateHSC->Text="";
	 AD_HSClist->Visible = false;
	 AD_selectHSC->Visible = false;
	 AD_confirmAdd->Visible = true;
}
private: System::Void AD_addH_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (hospitalCount == NumberOfHospital) {
		  MessageBox::Show("You have reached the maximum number of hospitals");
		  return;
	 }
	 AD_addHlayout->BringToFront();
}
private: System::Void AD_deleteH_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_deleteHlayout->BringToFront();
	 AD_messegeState->Text = "";
	 AD_DELhospitalID->Text = "Hospital ID";
	 AD_DELhospitalRate->Text = "Hospital Rate";
	 AD_HListDEL->Items->Clear();
	 String^ hospitalName;
	 for (int i = 0; i < hospitalCount; i++) {
		  hospitalName= gcnew String(hospital[i].HospitalName.c_str());
		  AD_HListDEL->Items->Add(hospitalName);
	}
}
private: System::Void PA_addRlayout_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (user[Lindex].reserCount != NumberOfReservation) {
	 PA_addRlayout->BringToFront();
	 PA_DayenterH_COM->Items->Clear();
	 PA_selectHforR_COM->Items->Clear();
	 PA_warningM->Text = "";

		  String^ day, ^ Hospital, ^ addSP="";
		  for (int i = 0; i < daysInWeek; i++) {
			   day = gcnew String(ReservationDays[i].c_str());
			   Hospital = gcnew String(hospital[i].HospitalName.c_str());
			   PA_DayenterH_COM->Items->Add(day);
			   if (i < hospitalCount)
					PA_selectHforR_COM->Items->Add(Hospital);
		  }

		  if (PA_RtypeCheck_RB1->Checked == true) {

			   PA_RSClist_lab->Text = "Specialties List";
			   PA_RSClist_COM->Text = "select Specialty";
			   PA_PNumOfDays_lab->Text = "Num Of days";
			   PA_PNumOfDays_TB->Visible = true;

		  }
		  else {
			   PA_RSClist_lab->Text = "Clinics List";
			   PA_RSClist_COM->Text = "select Clinic";
			   PA_PNumOfDays_lab->Text = "";
			   PA_PNumOfDays_TB->Visible = false;
		  }
	 }
	 else {
		  MessageBox::Show("You have reached the maximum number of reservations");
	 }
}
private: System::Void PA_delRlist_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_delRlayout->BringToFront(); 
	 PA_delRlist_COM->Items->Clear();
	 String^ RID;
	 for (int i = 0; i < user[Lindex].reserCount; i++) {
		  RID = "";
		  RID += gcnew INT(user[Lindex].reservation[i].ReservtionID);
		  PA_delRlist_COM->Items->Add(RID);
	 }
	 PA_delRlist_state->Text = "";
}
private: System::Void PA_RtypeCheck_RB1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_RtypeCheck_RB1->Checked == true) {
		  PA_PNumOfDays_lab->Text = "Num Of days";
		  PA_PNumOfDays_TB->Visible = true;
		  PA_selectHforR_COM->SelectedIndex = -1;
	 }
	 else {
		  PA_PNumOfDays_lab->Text = "";
		  PA_PNumOfDays_TB->Visible = false;
		  PA_selectHforR_COM->SelectedIndex = -1;
	 }
}
private: System::Void PA_RtypeCheck_RB2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_RtypeCheck_RB2->Checked == true) {
		  PA_RSClist_lab->Text = "Clinics List";
		  PA_RSClist_COM->Text = "select Clinic";
		  PA_selectHforR_COM->SelectedIndex = -1;
	 }
	 else {
		  PA_RSClist_lab->Text = "Specialties List";
		  PA_RSClist_COM->Text = "select Specialty";
		  PA_selectHforR_COM->SelectedIndex = -1;
	 }
}
private: System::Void PA_MPName_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text = "New Full Name";
	
	
}
private: System::Void PA_MPage_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text="New Age";
	
}
private: System::Void PA_MPphNum_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text="New Phone Number";
}
private: System::Void PA_MNumOfdays_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text="New Number of days";
}
private: System::Void PA_MRH_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = false;
	 PA_modifyHRTRDsLayout->Visible = true;
	 PA_OrderOflist->Text = "Select new hospital";
	 panel1->Visible = false;
	 PA_modifyRord_lab->Text = "None";
	 PA_listOfHRtypeRdays->Items->Clear();
	 PA_listOfHRtypeRdays->Text="Hospital list";
	 String^add;
	 for(int i=0;i<hospitalCount;i++) {
		  add = gcnew String(hospital[i].HospitalName.c_str());
		  PA_listOfHRtypeRdays->Items->Add(add);
	 }

	 PA_numofdays->Visible = false;
	 PA_Rnumbofdays->Visible = false;
}
private: System::Void PA_MPRtype_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = false;
	 PA_modifyHRTRDsLayout->Visible = true;
	 PA_OrderOflist->Text = "Select new item";
	 panel1->Visible = true;
	 PA_modifyRord_lab->Text = "None";
	 String^ add;
	 if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
		  radioButton2->Checked = true;
		  PA_listOfHRtypeRdays->Items->Clear();
		  PA_OrderOflist->Text = "Select new Clinic";
		  PA_listOfHRtypeRdays->Text = "Clinics list";
		  for (int i = 0; i < user[Lindex].reservation[Rindex].hospital.clinicsCount; i++) {
			   add = gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalClinics[i].c_str());
			   PA_listOfHRtypeRdays->Items->Add(add);
		  }

		  PA_Rnumbofdays->Visible = false;
		  PA_numofdays->Visible = false;
		 // PA_MNumOfdays->Visible = true;
	 }
	 else {

		  radioButton1->Checked = true;
		  PA_listOfHRtypeRdays->Items->Clear();
		  PA_OrderOflist->Text = "Select new Specialty";
		  PA_listOfHRtypeRdays->Text = "Specialties list";
		  for (int i = 0; i < user[Lindex].reservation[Rindex].hospital.specialtiesCount; i++) {
			   add = gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalClinics[i].c_str());
			   PA_listOfHRtypeRdays->Items->Add(add);
		  }
		  PA_numofdays->Visible = true;
		  PA_Rnumbofdays->Visible = true;
		 // PA_MNumOfdays->Visible = false;
	 }

	 
		  
}
private: System::Void PA_MPRday_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = false;
	 PA_modifyHRTRDsLayout->Visible = true;
	 PA_numofdays->Visible = false;
	 PA_Rnumbofdays->Visible = false;
	 PA_OrderOflist->Text = "Select new Days";
	 panel1->Visible = false;
	 PA_modifyRord_lab->Text = "None";
	 PA_listOfHRtypeRdays->Items->Clear();
	 PA_listOfHRtypeRdays->Text = "Days list";
	 String^ addDays;
	 for (int i = 0; i < daysInWeek; i++) {
		  addDays = gcnew String(ReservationDays[i].c_str());
		  PA_listOfHRtypeRdays->Items->Add(addDays);
	 }

}
private: System::Void AD_editName_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain->BringToFront();
	 AD_editRemain_lab->Text = "New Full Name";
	 AD_editRemain_TB->Text = "";
	  AD_editRemain_state->Text = ".";
}
private: System::Void AD_editAge_Click(System::Object^ sender, System::EventArgs^ e) {
	 	 AD_editRemain->BringToFront();
		 AD_editRemain_lab->Text = "New Age";
		 AD_editRemain_TB->Text = "";
	  AD_editRemain_state->Text = "Must be greater than 18";
}
private: System::Void AD_editusername_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain->BringToFront();
	 AD_editRemain_lab->Text = "New Username";
	 AD_editRemain_TB->Text = "";
	 AD_editRemain_state->Text = "enter username without space";
}
private: System::Void AD_editPhNum_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain->BringToFront();
	 AD_editRemain_lab->Text = "New Phone Number";
	 AD_editRemain_TB->Text = "";
	 AD_editRemain_state->Text = "Example:01*********";
}
private: System::Void AD_editpass_button_Click(System::Object^ sender, System::EventArgs^ e) {
	  AD_editpass->BringToFront();
}
private: System::Void PA_editName_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text="New Full Name";
	 PA_editRemain_state->Text = ".";
	 PA_editRemain_TB->Text = "";

}
private: System::Void PA_editAge_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text ="New Age";
	 PA_editRemain_TB->Text = "";
	 PA_editRemain_state->Text = "Must be greater than 18";
}
private: System::Void PA_editusername_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text = "New Username"; 
	 PA_editRemain_TB->Text = "";
	 PA_editRemain_state->Text = "enter username without space";
}
private: System::Void PA_editPhNum_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text = "New Phone Number";
	 PA_editRemain_TB->Text = "";
	 PA_editRemain_state->Text = "Example:01*********";

}
private: System::Void PA_editpass_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editpass->BringToFront();
}
private: System::Void AD_viewHbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	 if (AD_viewHList->SelectedIndex != -1)
	 {
	 string indexname = context.marshal_as<string>(AD_viewHList->Text);
	AD_text1->Visible = true;
	 AD_text2->Visible = true;
		  searchHindex(indexname);
		  displayHinfo();
	 }
	 else {
		  MessageBox::Show("Please select from list");
	 }
}


private: System::Void PA_viewHButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	 if (PA_viewHList->SelectedIndex != -1)
	 {
	 string indexname = context.marshal_as<string>(PA_viewHList->Text);
	 PA_text1->Visible = true;
	 PA_text2->Visible = true;
		  searchHindex(indexname);
		  displayHinfo();
	 }
	 else {
		  MessageBox::Show("Please select from list");
	 }
}
private: System::Void AD_viewPButton_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_viewPlist->SelectedIndex != -1) {
		  string patientindex = context.marshal_as<string>(AD_viewPlist->Text);
		  searchPindex(patientindex);
		  displayPinfo();
	 }
	 else {
		  MessageBox::Show("Please select from list");
	 }
}
private: System::Void AD_HListDEL_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 AD_messegeState->Text = "";
	 searchHindex(context.marshal_as<string>(AD_HListDEL->Text));
	 if (AD_HListDEL->Text!="Hospital List") {
		  AD_DELhospitalID->Text = "ID: " + gcnew INT(hospital[Hindex].HospitalID);
		  AD_DELhospitalRate->Text = "Rate: " + gcnew FLOAT(hospital[Hindex].HospitalRate);
	 }
}
private: System::Void AD_selectHD_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_HListDEL->SelectedIndex != -1) {
		  if (checkBox1->Checked == true) {
			   string found = context.marshal_as<string>(AD_HListDEL->Text);
			   f.DeleteHospital(hospital, found);
			   AD_messegeState->Text = "Hospital Deleted";
			   AD_HListDEL->Items->Clear();
			   String^ hospitalName;
			   for (int i = 0; i < hospitalCount; i++) {
					hospitalName = gcnew String(hospital[i].HospitalName.c_str());
					AD_HListDEL->Items->Add(hospitalName);
			   }
			   AD_HListDEL->Text = "Hospital List";
			   AD_DELhospitalID->Text = "Hospital ID";
			   AD_DELhospitalRate->Text = "Hospital Rate";
		  }
		  else {
			   AD_messegeState->Text = "Make sure to delete this hospital";
		  }
	 }
	 else {
		  AD_messegeState->Text = "Please choose from the box";
	 }

}
private: System::Void AD_addH_Click(System::Object^ sender, System::EventArgs^ e) {
	 AddHospital(hospital);
	 if (hospitalCount == NumberOfHospital) {
		  MessageBox::Show("You have reached the maximum number of hospitals");
		  AD_waitingP->BringToFront();

	 }
	
}
private: System::Void AD_addH_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_Herror->Text = "";
}
private: System::Void CloseTab1_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = false;
}
private: System::Void CloseTab2_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = false;
}
private: System::Void AD_confirmedit_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_TBinput->Text == "") {
		  MessageBox::Show("Please fill  the field");
		  return;

	}
	 if (AD_Hlist_combox->SelectedIndex != -1) {
		  if (AD_ModifyHSClist->Text == "Empty") {
			   MessageBox::Show("Please choose Hospital from the list");
			   return;
		  } 
		  if (AD_ModifyHSClist->SelectedIndex == -1&&label8->Text=="Clinics List") {
			   MessageBox::Show("Please choose Clinic from the list");
			   return;
		  }
		  if (AD_ModifyHSClist->SelectedIndex == -1 && label8->Text == "Specialties List") {
			   MessageBox::Show("Please choose Specialty from the list");
			   return;
		  }
		  searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
		  modifyHospital();
	 }
	 else {
		MessageBox::Show("Please choose Hospital from the list");
	 }

}
private: System::Void AD_confirmAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_Hlist_combox->SelectedIndex != -1) {
	 modifyHSC();
	 }
	 else {
		MessageBox::Show("Please choose Hospital from the list");

	 }
}
private: System::Void AD_confirmAdd_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_TBforAddHSC->Text = "";
	 AD_stateHSC2->Text =  "";
}
private: System::Void AD_selectHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_Hlist_combox->SelectedIndex!=-1) {
		  if (checkBox2->Checked) {
			   if (AD_HSClist->Text == "Empty" && AD_AskHSC->Text == "Choose Specialty") {
					MessageBox::Show("Please choose Specialty from the list");
					return;
			   }
			   if (AD_HSClist->Text == "Empty" && AD_AskHSC->Text == "Choose Clinic") {
					MessageBox::Show("Please choose clinic from the list");
					return;
			   }
			   if (AD_AskHSC->Text == "Choose Specialty") {
					//  searchHindex(context.marshal_as<string>())
					searchSPindex(msclr::interop::marshal_as<string>(AD_HSClist->Text));
					String^ foundSp = gcnew String(hospital[Hindex].HospitalSpecialties[SPindex].c_str());

					if (AD_HSClist->Text != "Specialties List" && AD_HSClist->Text == foundSp) {
						 if (SPindex != hospital[Hindex].specialtiesCount - 1)
							  swap(hospital[Hindex].HospitalSpecialties[hospital[Hindex].specialtiesCount - 1], hospital[Hindex].HospitalSpecialties[SPindex]);
						 hospital[Hindex].specialtiesCount--;
						 AD_stateHSC1->Text = "Specialty Deleted";

						 String^addSP;
						 AD_ModifyHSClist->SelectedIndex = -1;
						 AD_HSClist->SelectedIndex = -1;
						 AD_ModifyHSClist->Items->Clear();
						 for(int i=0;i<hospital[Hindex].specialtiesCount;i++) {
							  addSP = gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str());
							  AD_ModifyHSClist->Items->Add(addSP);
						 }
						 checkBox2->Checked = false;

					}
					else {
						 AD_stateHSC1->Text = "this Specialty is not exist";
					}
			   }
			   else if (AD_AskHSC->Text == "Choose Clinic") {
					searchCLindex(msclr::interop::marshal_as<string>(AD_HSClist->Text));
					String^ foundCl = gcnew String(hospital[Hindex].HospitalClinics[CLindex].c_str());

					if (AD_HSClist->Text != "Clincis List" && AD_HSClist->Text == foundCl) {
						 if (CLindex != hospital[Hindex].clinicsCount - 1)
							  swap(hospital[Hindex].HospitalClinics[hospital[Hindex].clinicsCount - 1], hospital[Hindex].HospitalClinics[CLindex]);
						 hospital[Hindex].clinicsCount--;
						 AD_stateHSC1->Text = "Clinic Deleted";

						 AD_ModifyHSClist->SelectedIndex = -1;
						 AD_HSClist->SelectedIndex = -1;
						 AD_ModifyHSClist->Items->Clear();
						 String^addCL;
						 for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
							  addCL = gcnew String(hospital[Hindex].HospitalClinics[i].c_str());
							  AD_ModifyHSClist->Items->Add(addCL);
						 }
						 checkBox2->Checked = false;
					}
					else {
						 AD_stateHSC1->Text = "this Clinic is not exist";
					}
			   }

		  }
		  else {
			   AD_stateHSC1->Text = "Make sure to delete this item";
		  }
	 }
	 else {
		  AD_stateHSC1->Text = "Please choose hopital from the list";
	 

	 }
}
private: System::Void AD_Hlist_combox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	  searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
	  if (AD_nameOfinput->Text == "Hospital Clinics") {
	  AD_ModifyHSClist->Items->Clear();
	 for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
		  AD_ModifyHSClist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
	 }

	 }
	  if (AD_nameOfinput->Text == "Hospital Specialties") {
	 AD_ModifyHSClist->Items->Clear();
	 for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
	 {
		  AD_ModifyHSClist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
	 }

	}
	  CloseTab1_Click(sender, e);

}
private: System::Void PA_viewRButton_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_viewRlist->Text == "Empty") {
		  MessageBox::Show("You haven't made any reservations so far");
		  return;
	 }
	 if (PA_viewRlist->SelectedIndex !=-1) {
		  int IDIndex= stoi(context.marshal_as<string>(PA_viewRlist->Text));
		  searchRindex(IDIndex);
		  DisplayRInfo();
	 }
	 else {
		  MessageBox::Show("Please select from list");
	 }
}
private: System::Void PA_askwhoreserv_RB2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_askwhoreserv_RB2->Checked == true) {
		  PA_PAord_TB->Text = "";
		  PA_PphNord_TB->Text = "";
		  PA_PNord_TB->Text = "";
	 }
	 else {
		  PA_PAord_TB->Text += gcnew INT(user[Lindex].age);
		  PA_PphNord_TB->Text = gcnew String(user[Lindex].phonenumber.c_str());
		  PA_PNord_TB->Text= gcnew String(user[Lindex].name.c_str());

	 }
}
private: System::Void PA_askwhoreserv_RB1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_askwhoreserv_RB1->Checked == true) {
		  PA_PAord_TB->Text = gcnew String(to_string(user[Lindex].age).c_str());
		  PA_PphNord_TB->Text = gcnew String(user[Lindex].phonenumber.c_str());
		  PA_PNord_TB->Text = gcnew String(user[Lindex].name.c_str());
	 }
	 else {
		  PA_PAord_TB->Text = "";
		  PA_PphNord_TB->Text = "";
		  PA_PNord_TB->Text = "";

	 }
}
private: System::Void PA_selectHforR_COM_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 searchHindex(context.marshal_as<string>(PA_selectHforR_COM->Text));
	 String^ addSP;
		  if (PA_RSClist_COM->Text != "Empty") {
			   PA_RSClist_COM->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
			   addSP = gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str());
			   PA_RSClist_COM->Items->Add(addSP);
		  }
	 }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_RSClist_COM->SelectedIndex!=-1 && PA_selectHforR_COM->SelectedIndex != -1 && PA_DayenterH_COM->SelectedIndex != -1) {
		  makeReservation();
		  if (user[Lindex].reserCount == NumberOfReservation) {
			   PA_waitingeditRlist->BringToFront();
			   MessageBox::Show("You have reached the maximum number of reservations");
			  
		  }
		
	 }
	 else {
		  PA_warningM->Text = "Please fill all the fields";
	 }
}
private: System::Void button1_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_warningM->Text = "";

}
private: System::Void PA_delRlist_but_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_delRlist_state->Text = ".";
		 
}
private: System::Void PA_delRlist_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_delRlist_COM->SelectedIndex != -1) {
		  if(checkBox3->Checked){
			   searchRindex(stoi(context.marshal_as<string>(PA_delRlist_COM->Text)));
			   if (Rindex != -1) {
					f.cancelreservation(user, hospital, Lindex);
					PA_delRlist_state->Text = "Reservation Deleted";
					PA_delRlist_COM->Items->Clear();
					String^ RID;
					for (int i = 0; i < user[Lindex].reserCount; i++) {
						 RID = "";
						 RID += gcnew INT(user[Lindex].reservation[i].ReservtionID);
						 PA_delRlist_COM->Items->Add(RID);
					}
					PA_delRlist_COM->Text = "Reservation list";
					PA_text3->Text = "Patient Name";
					PA_text4->Text = "Hospital Name";
					checkBox3->Checked = false;
			   }
			   else {
					PA_delRlist_state->Text = "Reservation not found";
			   }
		  }
		  else {
			   PA_delRlist_state->Text = "Make sure to remove the reservation";
		  }
	 }
	 else {
		  PA_delRlist_state->Text = "Please choose from the box";
	 }
}
private: System::Void PA_reservlist_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_viewRlist->Text = "Reservation list";
	 PA_viewR_PName->Text = "Patient Name";
	 PA_viewR_PAge->Text = "Patient Age";
	 PA_viewR_bedPrice->Text = "Bed Price";
	 PA_viewR_HReserved->Text = "Hospital Name";
	 PA_viewR_RoomID->Text = "Room ID";
	 PA_viewR_phoneN->Text = "Phone Number";
	 PA_viewR_Day->Text = "Reservation Day";
	 PA_viewR_SurgeryPrice->Text = "Surgery Price";
	 PA_viewR_HSpCl->Text = "HSpecialty Or Clinic";
	 PA_viewR_ChandTPrice->Text = "Check-UP/total price";
	 PA_viewRlist->SelectedIndex = -1;
}
private: System::Void PA_delRlist_COM_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 int IDIndex = stoi(context.marshal_as<string>(PA_delRlist_COM->Text));
	 searchRindex(IDIndex);
	 PA_text3->Text= "Patient Name: " + gcnew String(user[Lindex].reservation[Rindex].PName.c_str());
	 PA_text4->Text= "Hospital Name: " + gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalName.c_str());
}
private: System::Void PA_editRbutton_Leave(System::Object^ sender, System::EventArgs^ e) {
	if(PA_modifyRord_TB->Text!=""){
		
		  PA_StateOflist->Text = "";
		  PA_modifyRord_TB->Text == "";
		
	 }
		  PA_modifyRstate_lab->Text = "";
}
private: System::Void PA_editRbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	 if (PA_Rlistmodify_com->SelectedIndex != -1 ) {
		  if (PA_modifyRord_TB->Text == "") {
			   PA_modifyRstate_lab->Text="Please fill  the field";
			   return;
		  }
		  searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		  modifyReservation();
	 }
	 else {
		  MessageBox::Show("Please select from list");
	 }
	 
}
private: System::Void PA_Rlistmodify_com_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if(PA_Rlistmodify_com->SelectedIndex != -1) {
		 searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		  if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
					PA_MNumOfdays->Visible = true;
		  }
		  else {
				PA_MNumOfdays->Visible = false;
			   
		  }
		  if (PA_modifyHRTRDsLayout->Visible) {
			   PA_MPRtype_Click(sender, e);
		  }
	 }
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (user[Lindex].reservation[Rindex].ReservationType == "Surgery" && radioButton1->Checked == true) {
		  PA_StateOflist->Text="this servation already Surgery";
		  radioButton2->Checked = true;
		  
	 }
	 else if (user[Lindex].reservation[Rindex].ReservationType == "Check-up" && radioButton2->Checked == true) {
		  PA_StateOflist->Text="this servation already Check-UP";
		  radioButton1->Checked = true;
	 }
}
private: System::Void PA_selectHforR_COM_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		  String^ add;
	 if (PA_RtypeCheck_RB2->Checked==true) {
		  PA_RSClist_COM->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
			   add = gcnew String(hospital[Hindex].HospitalClinics[i].c_str());
			   PA_RSClist_COM->Items->Add(add);
		  }
	 }
	 else {
		  PA_RSClist_COM->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
			   add = gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str());
			   PA_RSClist_COM->Items->Add(add);
		  }

	 }
}
private: System::Void PA_Rlistmodify_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_Rlistmodify_com->SelectedIndex != -1 && PA_listOfHRtypeRdays->SelectedIndex != -1) {
	 Reservations Rtemp;
		  searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		
		if (PA_OrderOflist->Text == "Select new hospital") {
			 string Hsearch = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			 searchHindex(Hsearch);
			 if (hospital[Hindex].HospitalID == user[Lindex].reservation[Rindex].hospital.HospitalID) {
				  PA_StateOflist->Text = "No changes made";
				  return;
			 }
			 if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
				  for (int i = 0; i < hospitalCount; i++) {
					   if (user[Lindex].reservation[Rindex].hospital.HospitalID == hospital[i].HospitalID) {
							hospital[i].PatientReservationRooms++;
							hospital[Hindex].PatientReservationRooms--;

							user[Lindex].reservation[Rindex].surgeryprice = hospital[Hindex].surgeryprice;
							user[Lindex].reservation[Rindex].BedPrice = user[Lindex].reservation[Rindex].numberOfDays * hospital[Hindex].BedsPrice;
							user[Lindex].totalpaid-= user[Lindex].reservation[Rindex].Totalprice;
							user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].surgeryprice + user[Lindex].reservation[Rindex].BedPrice;
							user[Lindex].totalpaid += user[Lindex].reservation[Rindex].Totalprice;
							break;

					   }
				  }
			 }
			 else {
				  user[Lindex].totalpaid -= user[Lindex].reservation[Rindex].Totalprice;
				  user[Lindex].reservation[Rindex].ReservationPrice = hospital[Hindex].ReservationPrice;
				  user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].ReservationPrice;
				  user[Lindex].totalpaid += user[Lindex].reservation[Rindex].Totalprice;
			 }
			 if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
				  bool exist = false;
				  int roomnumber = 50 + rand() % 500;
				  for (int i = 7; i < userCount; i++) {
					   for (int j = 0; j < user[i].reserCount; j++) {
							if (user[i].reservation[j].hospital.HospitalID == Rtemp.hospital.HospitalID) {
								 if (user[i].reservation[j].PatientReservationRoom == to_string(roomnumber)) {
									  exist = true;
									  roomnumber = 50 + rand() % 500;

									  break;
								 }


							}
					   }
					   if (exist == true) {
							i = 7;
							exist = false;
					   }
				  }
				  user[Lindex].reservation[Rindex].PatientReservationRoom = to_string(roomnumber);
			 }
			 user[Lindex].reservation[Rindex].hospital = hospital[Hindex];

			 MessageBox::Show("Edit done");
		}
		else if (PA_OrderOflist->Text == "Select new Days") {
			 if (PA_listOfHRtypeRdays->SelectedIndex == -1) {
				  MessageBox::Show("PLease select a day");
				  return;
			 }
			 string seaDay = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			 searchDindex(seaDay);
			 if (user[Lindex].reservation[Rindex].ReservationDay == ReservationDays[Dindex]) {
				  PA_StateOflist->Text = "No changes made";
				  return;
			 }
			 user[Lindex].reservation[Rindex].ReservationDay = ReservationDays[Dindex];
			 //PA_StateOflist->Text = "edit done";
			 MessageBox::Show("Edit done");
			 PA_modifyRord_lab->Text = "Order text";
			// PA_OrderOflist->Text = "Order text";
		}
		else if (PA_OrderOflist->Text == "Select new Specialty") {
			 if (PA_listOfHRtypeRdays->SelectedIndex == -1) {
				  MessageBox::Show("PLease select a Specialty");
				  return;
			 }
			 Rtemp.HospitalSpecialty = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			 //  searchSPindex(Rtemp.HospitalSpecialty);
			 Rtemp.numberOfDays = stoi(context.marshal_as<string>(PA_Rnumbofdays->Text));
			 user[Lindex].reservation[Rindex].HospitalSpecialty = Rtemp.HospitalSpecialty;
			 user[Lindex].totalpaid-= user[Lindex].reservation[Rindex].Totalprice;
			 user[Lindex].reservation[Rindex].ReservationPrice=0;
			 user[Lindex].reservation[Rindex].surgeryprice = user[Lindex].reservation[Rindex].hospital.surgeryprice;
			 user[Lindex].reservation[Rindex].BedPrice = Rtemp.numberOfDays * user[Lindex].reservation[Rindex].hospital.BedsPrice;
			 user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].BedPrice + user[Lindex].reservation[Rindex].surgeryprice;
			 user[Lindex].totalpaid += user[Lindex].reservation[Rindex].Totalprice;
			 user[Lindex].reservation[Rindex].numberOfDays = Rtemp.numberOfDays;
			 int roomnumber = 0;
			 bool exist = false;
			 roomnumber = 50 + rand() % 500;
			 for (int i = 5; i < userCount; i++) {
				  for (int j = 0; j < user[i].reserCount; j++) {
					   if (user[i].reservation[j].hospital.HospitalID == Rtemp.hospital.HospitalID) {
							if (user[i].reservation[j].PatientReservationRoom == to_string(roomnumber)) {
								 exist = true;
								 roomnumber = 50 + rand() % 500;

								 break;
							}
					   }
				  }
				  if (exist == true) {
					   i = 5;
					   exist = false;
				  }
			 }
			 for (int i = 0; i < hospitalCount; i++) {
				  if (user[Lindex].reservation[Rindex].hospital.HospitalID == hospital[i].HospitalID) {
					   hospital[i].PatientReservationRooms--;
					   break;
				  }
			 }
			 user[Lindex].reservation[Rindex].PatientReservationRoom = to_string(roomnumber);

			 MessageBox::Show("Edit done");
			 PA_Rnumbofdays->Text = "";
		}
		else if (PA_OrderOflist->Text == "Select new Clinic") {
			 if (PA_listOfHRtypeRdays->SelectedIndex == -1) {
				  MessageBox::Show("PLease select a Clinic");
				  return;
			 }
			 Rtemp.HospitalClinic = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			// searchCLindex(Rtemp.HospitalClinic);

			 user[Lindex].reservation[Rindex].HospitalClinic = Rtemp.HospitalClinic;
			 user[Lindex].reservation[Rindex].ReservationPrice = user[Lindex].reservation[Rindex].hospital.ReservationPrice;
			 user[Lindex].reservation[Rindex].surgeryprice = 0;
			 user[Lindex].reservation[Rindex].BedPrice = 0;

			 user[Lindex].totalpaid -= user[Lindex].reservation[Rindex].Totalprice;
			 user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].ReservationPrice;
			 user[Lindex].totalpaid += user[Lindex].reservation[Rindex].Totalprice;
			 user[Lindex].reservation[Rindex].PatientReservationRoom = "NONE";
			 for (int i = 0; i < hospitalCount; i++) {
				  if (user[Lindex].reservation[Rindex].hospital.HospitalID == hospital[i].HospitalID) {
					   hospital[i].PatientReservationRooms++;
					   break;
				  }
			 }
			// PA_StateOflist->Text = "edit done";
			 MessageBox::Show("Edit done");
			 PA_modifyRord_lab->Text = "Order text";
		}
		if (PA_OrderOflist->Text == "Select new Specialty" || PA_OrderOflist->Text == "Select new Clinic") {
			 if (radioButton1->Checked == true) {
				  user[Lindex].reservation[Rindex].ReservationType = "Surgery";
				  PA_MNumOfdays->Visible = true;
				  PA_MPRtype_Click(sender, e);
			 }
			 else {
				  user[Lindex].reservation[Rindex].ReservationType = "Check-up";
				  PA_MPRtype_Click(sender, e);
				  PA_MNumOfdays->Visible = false;
			 }
		}
			 PA_OrderOflist->Text = "Order text";
		//  modifyReservation();

	 }
	 else if (PA_Rlistmodify_com->SelectedIndex == -1) {
		  MessageBox::Show("Select Reservation from list");
	 } 
	 else if (PA_listOfHRtypeRdays->SelectedIndex == -1) {
		  if(PA_OrderOflist->Text == "Select new hospital")
		  MessageBox::Show("Select Hospital from list");
		  if(PA_OrderOflist->Text == "Select new Days")
		  MessageBox::Show("Select Day from list");
		  if (PA_OrderOflist->Text == "Select new Specialty")
			   MessageBox::Show("Select Specialty from list");
		  if (PA_OrderOflist->Text == "Select new Clinic")
			   MessageBox::Show("Select Clinic from list");
	 }
}
private: System::Void PA_Rlistmodify_but_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_StateOflist->Text = "";
	 PA_modifyRstate_lab->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_editRemain_TB->Text != "") {
		  EditPersonalInfo();
	 }
	 else {
		  MessageBox::Show("Please fill the field");
	 }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_editRemain_TB->Text != "") {
		  EditPersonalInfo();
	 }
	 else {
		  MessageBox::Show("Please fill the field");
	 }
}
private: System::Void button3_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain_state->Text = "";
}
private: System::Void button2_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain_state->Text = "";
}
private: System::Void PA_Changepass_Click(System::Object^ sender, System::EventArgs^ e) {
	 Users temp;
	 if (PA_askNewPass_TB->Text != "" && PA_askOldPass_TB->Text != ""&& PA_askconfPass_TB->Text != "") {
		  temp.password = context.marshal_as<string>(PA_askOldPass_TB->Text);
		  if(user[Lindex].password==temp.password) {
			   if (context.marshal_as<string>(PA_askNewPass_TB->Text).size() <=7 ) {
					PA_passState->Text = "Password must be more than 7 characters";
					return;
			   }
			   else if (context.marshal_as<string>(PA_askNewPass_TB->Text).size() >= 20) {
					PA_passState->Text = "Password must be less than 16 characters";
					return;
			   }
			   if (PA_askNewPass_TB->Text == PA_askconfPass_TB->Text) {
					user[Lindex].password = context.marshal_as<string>(PA_askNewPass_TB->Text);
					PA_askOldPass_TB->Text = "";
					PA_askNewPass_TB->Text = "";
					PA_askconfPass_TB->Text = "";
					PA_passState->Text = "Password Changed";
			   }
			   else {
					PA_passState->Text = "Password not match";
			   }
		  }
		  else {
			   PA_passState->Text = "Old Password not correct";
		  }

	 }
	 else if (PA_askOldPass_TB->Text == "") {
		  MessageBox::Show("Enter your old password");
	 }
	 else if (PA_askNewPass_TB->Text == "") {
		 
		  MessageBox::Show("Enter your new password");
		 
	 }
	 else if (PA_askconfPass_TB->Text == "") {
		  MessageBox::Show("Confirm new password");

	 }
}
private: System::Void AD_Changepass_Click(System::Object^ sender, System::EventArgs^ e) {
	 Users temp;
	 if (AD_askNewPass_TB->Text != "" && AD_askOldPass_TB->Text != "" && AD_askconfPass_TB->Text != "") {
		  temp.password = context.marshal_as<string>(AD_askOldPass_TB->Text);
		  if (user[Lindex].password == temp.password) {
			   if (context.marshal_as<string>(AD_askNewPass_TB->Text).size() <=7) {
					AD_passState->Text ="Password must be more than 7 characters";
					return;
			   }
			   else if (context.marshal_as<string>(AD_askNewPass_TB->Text).size() >= 20) {
					AD_passState->Text = "Password must be less than 16 characters";
					return;
			   }
			   if (AD_askNewPass_TB->Text == AD_askconfPass_TB->Text) {
					user[Lindex].password = context.marshal_as<string>(AD_askNewPass_TB->Text);
					AD_askOldPass_TB->Text = "";
					AD_askNewPass_TB->Text = "";
					AD_askconfPass_TB->Text = "";
					AD_passState->Text = "Password Changed";
			   }
			   else {
					AD_passState->Text = "Password not match";
			   }
		  }
		  else {
			   AD_passState->Text = "Old Password not correct";
		  }
	 }
	 else if (AD_askOldPass_TB->Text == "") {
		  MessageBox::Show("Enter your old password");
	 }
	 else if (AD_askNewPass_TB->Text == "") {

		  MessageBox::Show("Enter your new password");

	 }
	 else if (AD_askconfPass_TB->Text == "") {
		  MessageBox::Show("Confirm new password");

	 }


}
private: System::Void AD_ShowOldPass_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_askOldPass_TB->UseSystemPasswordChar= !AD_askOldPass_TB->UseSystemPasswordChar;
}
private: System::Void AD_ShowNewPass_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_askNewPass_TB->UseSystemPasswordChar = !AD_askNewPass_TB->UseSystemPasswordChar;
	 AD_askconfPass_TB->UseSystemPasswordChar = !AD_askconfPass_TB->UseSystemPasswordChar;
		  
}
private: System::Void PA_ShowOldPass_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_askOldPass_TB->UseSystemPasswordChar = !PA_askOldPass_TB->UseSystemPasswordChar;
}
private: System::Void PA_ShowNewPass_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_askNewPass_TB->UseSystemPasswordChar = !PA_askNewPass_TB->UseSystemPasswordChar;
	 PA_askconfPass_TB->UseSystemPasswordChar = !PA_askconfPass_TB->UseSystemPasswordChar;
}
private: System::Void PA_Rlistmodify_com_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_Rlistmodify_com->Text != "Reservation list") {
		  searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		  String^ add;
		  if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
			   PA_MNumOfdays->Visible = true;
		  }
		  else {
					PA_MNumOfdays->Visible = false;
		  }

	 }
}
private: System::Void PA_viewHinfo_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_Hinfo_ID->Text = "Hospital ID";
	 PA_Hinfo_Name->Text = "Hospital Name";
	 PA_Hinfo_rate->Text = "Hospital Rate";
	 PA_Hinfo_bedsAva->Text = "Beds Avaliable";
	 PA_Hinfo_Rprice->Text = "Check-UP Price";
	 PA_Hinfo_surgeryprice->Text = "Surgery Price";
	 PA_Hinfo_Bedprice->Text = "Beds Price";
	 PA_text1->Visible = false;
	 PA_text2->Visible = false;
	 PA_Hinfo_HCLlist->Items->Clear();
	 PA_Hinfo_HCLlist->Items->Add("Clinic List");
	// PA_Hinfo_HCLlist->Text="Clinic List";
	 PA_Hinfo_HSplist->Items->Clear();
	 PA_Hinfo_HSplist->Items->Add("Specialties List");
	// PA_Hinfo_HSplist->Text="Specialties List";
	 PA_viewHList->Text = "Hospital list";

}
private: System::Void AD_view_Hinfo_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_viewHinfo_ID->Text = "Hospital ID";
	 AD_viewHinfo_Name->Text = "Hospital Name";
	 AD_viewHinfo_Rate->Text = "Hospital Rate";
	 AD_viewHinfo_bedsAva->Text = "Beds Avaliable";
	 AD_viewHinfo_Rprice->Text = "Check-UP Price";
	 AD_viewHinfo_surgeryPrice->Text = "Surgery Price";
	 AD_viewHinfo_BedsPrice->Text = "Beds Price";
	 AD_text1->Visible = false;
	 AD_text2->Visible = false;
	 AD_viewHinfo_HCllist->Items->Clear();
	 AD_viewHinfo_HCllist->Items->Add("Clinic List");
	// AD_viewHinfo_HCllist->Text = "Clinic List";
	 AD_viewHinfo_HSplist->Items->Clear();
	 AD_viewHinfo_HSplist->Items->Add("Specialties List"); 
	 AD_viewHList->Text = "Hospital list";
	// AD_viewHinfo_HSplist->Text = "Specialties List";
}
private: System::Void regis_readPolicies_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 	 if (regis_readPolicies->Checked == true) {
			  registration_but->Visible = true;
	 }
		   else {
			  registration_but->Visible = false;
	 }
}
private: System::Void registration_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	 Registration();
}
private: System::Void PA_Optionsort1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label4->Visible = true;
	 if (PA_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (PA_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void PA_SortHospital_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_SortingH->BringToFront();
}
private: System::Void PA_Optionsort2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label4->Visible = true;
	 if (PA_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   
			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			  
			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) +" \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (PA_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList= gcnew String(hospital[i].HospitalName.c_str())+" -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
					PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   
			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void PA_Optionsort4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label4->Visible = true;
	 if (PA_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (PA_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void PA_Optionsort3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label4->Visible = true;
	 if (PA_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (PA_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (PA_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  PA_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   PA_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void PA_SortingH_Leave(System::Object^ sender, System::EventArgs^ e) {
	 label4->Visible = false;
	 PA_Optionsort4->Checked =false;
	 PA_Optionsort2->Checked =false;
	 PA_Optionsort3->Checked =false;
	 PA_Optionsort1->Checked =false;
	 PA_SortingHlist->Items->Clear();
	 PA_SortingHlist->Items->Add("Hospital List");
}
private: System::Void AD_Optionsort1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label5->Visible = true;
	 if (AD_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (AD_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void AD_Optionsort2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label5->Visible = true;
	 if (AD_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (AD_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void AD_Optionsort3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label5->Visible = true;
	 if (AD_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (AD_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void AD_Optionsort4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 String^ HList;
	 label5->Visible = true;
	 if (AD_Optionsort1->Checked == true) {
		  f.SortHospitalByName(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = gcnew String(hospital[i].HospitalName.c_str());
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort2->Checked == true) {
		  f.SortByBedsAvailable(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "-> ( " + gcnew INT(hospital[i].PatientReservationRooms) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }

	 else if (AD_Optionsort3->Checked == true) {
		  f.SortHospitalByRating(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {
			   HList = gcnew String(hospital[i].HospitalName.c_str()) + " -> ( " + gcnew FLOAT(hospital[i].HospitalRate) + " \)";
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
	 else if (AD_Optionsort4->Checked == true) {
		  f.SortByBedsPrice(hospital);
		  AD_SortingHlist->Items->Clear();
		  for (int i = 0; i < hospitalCount; i++) {

			   HList = (gcnew String(hospital[i].HospitalName.c_str()) + "->(" + gcnew FLOAT(hospital[i].BedsPrice) + " \)");
			   AD_SortingHlist->Items->Add(HList);
		  }
	 }
}
private: System::Void AD_SortingH_Leave(System::Object^ sender, System::EventArgs^ e) {
	 label5->Visible=false;
	 AD_Optionsort4->Checked = false;
	 AD_Optionsort1->Checked = false;
	 AD_Optionsort2->Checked = false;
	 AD_Optionsort3->Checked = false;
	 AD_SortingHlist->Items->Clear();
	 AD_SortingHlist->Items->Add("Hospital List");
}
private: System::Void AD_SortHospital_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_SortingH->BringToFront();
}
private: System::Void AD_view_Pinfo_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_viewPinfo_ID->Text = "Patient ID";
	 AD_viewPinfo_Name->Text = "Patient Name";
	 AD_viewPinfo_Age->Text = "Patient Age";
	 AD_viewPinfo_PhNum->Text = "Patient Phone Number";
	 AD_viewPinfo_Email->Text = "Patient email";
	 AD_viewPinfo_NumOfR->Text = "Number of Reserved";
	 AD_viewPinfo_Totalpaid->Text = "Total Paid";
	 AD_viewPinfo_Gender->Text = "Patient gender";

}
private: System::Void requsetid_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (requsetid->Checked) {
	// login_password_lab->Text = "ID";
	 if (passBox->Text == ""|| passBox->Text == "password") {
		  passBox->Text = "ID";
	 }
	 }
	 else {
		  if (passBox->Text == ""|| passBox->Text =="ID") {
			   passBox->Text = "password";
		  }
	// login_password_lab->Text = "password";
	 }

}
private: System::Void regis_age_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void regis_phonenumber_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void regis_username_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == (char)Keys::Space) {
		  e->Handled = true;
	 }
}
private: System::Void AD_HIDorder_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if ( e->KeyChar == '0' && context.marshal_as<string>(AD_HIDorder_TB->Text).size() ==0)
		  e->Handled = true;
	 	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void AD_HRateorder_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar=='.') {
		  e->Handled = false;
		  return;

	}
	 if ((!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back)) {
		  e->Handled = true;
	 }
}
private: System::Void AD_HBPorder_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == '.') {
		  e->Handled = false;
		  return;

	 }
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void AD_HRPorder_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == '.') {
		  e->Handled = false;
		  return;

	 }
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void AD_HSPorder_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == '.') {
		  e->Handled = false;
		  return;

	 }
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void AD_HPRBsorder_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void AD_TBinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == '.' && AD_nameOfinput->Text!="Number of Avaliable rooms") {
		  e->Handled = false;
		  return;

	 }
	 if (AD_nameOfinput->Text == "Hospital ID" || AD_nameOfinput->Text == "Reservation Price" || AD_nameOfinput->Text == "Bed Price" || AD_nameOfinput->Text == "Number of Avaliable rooms" ) {
		  if(context.marshal_as<string>(AD_TBinput->Text).size() == 0 && e->KeyChar == '0'&& AD_nameOfinput->Text != "Hospital ID")
		  e->Handled = true;
	 }
	 if (AD_nameOfinput->Text == "Hospital ID" || AD_nameOfinput->Text == "Reservation Price" || AD_nameOfinput->Text == "Bed Price" || AD_nameOfinput->Text == "Number of Avaliable rooms" || AD_nameOfinput->Text == "Hospital Rate")
	 {
		  if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			   e->Handled = true;
		  }
	 }
	 else if (AD_nameOfinput->Text == "Hospital Specialties" || AD_nameOfinput->Text == "Hospital Clinics") {
		  if (e->KeyChar == (char)Keys::Space) {
			   e->Handled = true;
		  }
	 }
	 if(e->KeyChar==(char)Keys::Enter ) {
		  AD_confirmedit_Click(sender, e);
	 
	 }
}
private: System::Void AD_TBforAddHSC_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == (char)Keys::Space) {
		  e->Handled = true;
	 }
}
private: System::Void ProjectInfo_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 Info->BringToFront();
}
private: System::Void backtolog_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 StartUP_page->BringToFront();
	 login_pn->BringToFront();
}
private: System::Void passBox_Enter(System::Object^ sender, System::EventArgs^ e) {
	 if (passBox->Text == "password") {
		  passBox->Text = "";
	 passBox->UseSystemPasswordChar = true;
	 }
	 if (passBox->Text == "ID") {
		  passBox->Text = "";
	 passBox->UseSystemPasswordChar = true;
	 }
}
private: System::Void userBox_Enter(System::Object^ sender, System::EventArgs^ e) {
	 	 if (userBox->Text == "username") {
		  userBox->Text = "";
	 }
}
private: System::Void userBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	 if (userBox->Text == "") {
		  userBox->Text = "username";
	 }
}
private: System::Void passBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	 if (passBox->Text == "" && requsetpass->Checked) {
		  passBox->Text = "password";
		  passBox->UseSystemPasswordChar = false;
	 } 
	 else if (passBox->Text == "" && requsetid->Checked){

		  passBox->Text = "ID";
		  passBox->UseSystemPasswordChar = false;
	 }

}
private: System::Void AD_selectHSC_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_stateHSC1->Text = "";
}
private: System::Void SignIUP_but_Leave(System::Object^ sender, System::EventArgs^ e) {
	 warning_massage->Text = "";
}
private: System::Void AD_Changepass_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_passState->Text = "";
}
private: System::Void PA_Changepass_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_passState->Text = "";
}
private: System::Void PA_editRemain_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if(PA_editRemain_lab->Text=="New Age"|| PA_editRemain_lab->Text == "New Phone Number") {
		  if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			   e->Handled = true;
		  }
	 }
	 if(PA_editRemain_lab->Text=="New Username") {
		  if (e->KeyChar == (char)Keys::Space) {
			   e->Handled = true;
		  }
	 }
	
}
private: System::Void PA_Rnumbofdays_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if(!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void PA_PNumOfDays_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void PA_modifyRord_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (PA_modifyRord_lab->Text == "New Age"|| PA_modifyRord_lab->Text == "New Phone Number"|| PA_modifyRord_lab->Text == "New Number of days") {
		  if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			   e->Handled = true;
		  }
	 }
}
private: System::Void PA_modifyRord_lab_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 PA_modifyRord_TB->Text = "";
}
private: System::Void userBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == (char)Keys::Enter) {
		
			   SignIUP_but_Click(sender, e);
		  
	 }
}
private: System::Void passBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == (char)Keys::Enter) {
			   SignIUP_but_Click(sender, e);
		  
	 }
}
private: System::Void PA_Editlaboratory_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_Editlaboratory->BringToFront();
	 PA_LABPHorLN_lab->Text = "Hospital list";
	 PA_LABPHorLN_CB->Items->Clear();
	 String^ A;
	 for (int i = 0; i < hospitalCount; i++) {
		  A = gcnew String(hospital[i].HospitalName.c_str());
		  PA_LABPHorLN_CB->Items->Add(A);
	 }
	
}
private: System::Void PA_Addlabo_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_Addlabo_layout->BringToFront();
}
private: System::Void PA_LAB_RB2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_LAB_RB2->Checked) {
		  PA_LABPHorLN_lab->Text = "Laboratory list";
		  PA_LABPHorLN_CB->Items->Clear();
		  String^ A;
		  for (int i = 0; i < 10; i++) {
			   A = gcnew String(laboratories[i].c_str());
			   PA_LABPHorLN_CB->Items->Add(A);
		  }
		  PA_LABPHorLN_CB->SelectedIndex = -1;
	 }
	 else {

		  PA_LABPHorLN_lab->Text = "Hospital list";
		  PA_LABPHorLN_CB->Items->Clear();
		  String^ A;
		  for (int i = 0; i < hospitalCount; i++) {
			   A = gcnew String(hospital[i].HospitalName.c_str());
			   PA_LABPHorLN_CB->Items->Add(A);
		  }
		  PA_LABPHorLN_CB->SelectedIndex = -1;

	 }
}
private: System::Void PA_LABwho_RB1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_LABwho_RB1->Checked) {
		  PA_LABPname_TB->Text= gcnew String(user[Lindex].name.c_str());
		  PA_LABPphN_TB->Text = gcnew String(user[Lindex].phonenumber.c_str());
		  PA_LABPage_TB->Text = gcnew String(to_string(user[Lindex].age).c_str());
		  if (user[Lindex].gender=="Male") {
			   PA_LABPgender_CB->SelectedIndex = 0;
		  }
		  else {
			   PA_LABPgender_CB->SelectedIndex = 1;

		  }
		  
	 }
	 else {

		  PA_LABPname_TB->Text = "";
		  PA_LABPphN_TB->Text = "";
		  PA_LABPage_TB->Text = "";
		  PA_LABPgender_CB->SelectedIndex = -1; 

	 }
}
private: System::Void PA_LABadd_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_LABPname_TB->Text == "") {
		  MessageBox::Show("Please Enter your name");
		  return;
	 }
	 if(PA_LABPphN_TB->Text == "") {
		  MessageBox::Show("Please Enter your phone number");
		  return;
	 }
	 if(PA_LABPage_TB->Text == "") {
		  MessageBox::Show("Please Enter your age");
		  return;
	 }
	 if (PA_LABPgender_CB->SelectedIndex == -1) {
		  MessageBox::Show("Please Select your gender");
		  return;
	 }
	 if(PA_LABPHorLN_CB->SelectedIndex == -1) {
		  MessageBox::Show("Please Select the place");
		  return;
	 }
	 if(PA_LABPtestN_CB->SelectedIndex == -1) {
		  MessageBox::Show("Please Select the test name");
		  return;
	 }
	 LABReservations LT;
	 LT.age=stoi(context.marshal_as<string>(PA_LABPage_TB->Text));
	 LT.Pname=context.marshal_as<string>(PA_LABPname_TB->Text);
	 LT.PhoneNumber = context.marshal_as<string>(PA_LABPphN_TB->Text);
	 LT.gender = context.marshal_as<string>(PA_LABPgender_CB->Text);
	 LT.RPlace= context.marshal_as<string>(PA_LABPHorLN_CB->Text);
	 LT.Ntest = context.marshal_as<string>(PA_LABPtestN_CB->Text);
	 if (LT.age <= 0) {
		  MessageBox::Show("Invalid Age");
			   return;
	 }
	 if (!f.validPhoneNumber(LT.PhoneNumber)) {
		  MessageBox::Show("Invalid Number\nExample: 01*********");
		  return;
	 }
	 LT.id = to_string(labReservation);
	 labReservation++;
	 user[Lindex].LabR[user[Lindex].LabRCount] = LT;
	 user[Lindex].LabRCount++;
	 MessageBox::Show("Reservation Done");
	 PA_LABPage_TB->Text = "";
	 PA_LABPname_TB->Text = "";
	 PA_LABPphN_TB->Text = "";
	 PA_LABPgender_CB->SelectedIndex = -1;
	 PA_LABPHorLN_CB->SelectedIndex = -1;
	 PA_LABPtestN_CB->SelectedIndex = -1;
	 PA_LABwho_RB2->Checked = true;

}	 
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_viewLABR->BringToFront();
	
	if(user[Lindex].LabRCount!=0) {
	 String ^ A;
		  comboBox1->Items->Clear();
		  for (int i = 0; i < user[Lindex].LabRCount; i++) {
			   A = gcnew String(user[Lindex].LabR[i].id.c_str());
			   comboBox1->Items->Add(A);
		  }
	 }
	else {
		 comboBox1->Items->Clear();
		 comboBox1->Items->Add("Empty");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (comboBox1->Text == "Empty") {
		  MessageBox::Show("You haven't made any reservations so far");
		  return;
	 }
	 if (comboBox1->SelectedIndex != -1) {
		  searchLABRindex(context.marshal_as<string>(comboBox1->Text));
		  PA_labRname ->Text= "Name: " + gcnew String(user[Lindex].LabR[LabRindex].Pname.c_str());
		  PA_labRphN->Text = "Phone Number: " + gcnew String(user[Lindex].LabR[LabRindex].PhoneNumber.c_str());
		  PA_labRage->Text = "Age: " + gcnew String(to_string(user[Lindex].LabR[LabRindex].age).c_str());
		  PA_labRgender->Text = "Gender: " +gcnew String(user[Lindex].LabR[LabRindex].gender.c_str());
		  if(PA_LAB_RB2->Checked)
		  PA_labRplace->Text = "Laboratory: " + gcnew String(user[Lindex].LabR[LabRindex].RPlace.c_str());
		  else
		  PA_labRplace->Text = "Hospital: " + gcnew String(user[Lindex].LabR[LabRindex].RPlace.c_str());
		  PA_labRtestN->Text = "Test Name: "+gcnew String(user[Lindex].LabR[LabRindex].Ntest.c_str());

	 }
	 else {
		  MessageBox::Show("Select Reservation from list");
	 }
}
private: System::Void AD_editRemain_TB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (AD_editRemain_lab->Text == "New Age" || AD_editRemain_lab->Text == "New Phone Number") {
		  if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			   e->Handled = true;
		  }
	 }
	 if (AD_editRemain_lab->Text == "New Username") {
		  if (e->KeyChar == (char)Keys::Space) {
			   e->Handled = true;
		  }
	 }
}
private: System::Void AD_confirmedit_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_warning1->Text="";
	 //AD_TBinput->Text="";
}
private: System::Void AD_nameOfinput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 AD_warning1->Text = "";
}

private: System::Void PA_viewLABR_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_labRname->Text = "Patient Name";
	 PA_labRphN->Text = "Phone Number";
	 PA_labRage->Text = "Patient Age";
	 PA_labRgender->Text = "Patient Gender";
	 PA_labRplace->Text = "Place";
	 PA_labRtestN->Text = "Test Name";
}

private: System::Void PA_viewAllHButton_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_AllhospitalData->Visible=!PA_AllhospitalData->Visible;
	
	 if (PA_AllhospitalData->Visible) {
		  PA_viewHinfo_Leave(sender, e);
		  PA_AllhospitalData->BringToFront();
		  viewAllHospitals();
		  PA_viewHList->Visible=false;
		  PA_viewHList->SelectedIndex = -1;
		  label6->Visible=false;
		  PA_viewHButton->Visible=false;
		  PA_viewAllHButton->Text = "View One";	  

	 }
	 else {
		  PA_viewHinfo_Leave(sender, e);
		  PA_viewHList->Visible = true;
		  label6->Visible = true;
		  PA_viewHButton->Visible = true;
		  PA_viewAllHButton->Text = "View All";
	 }
	 
}
private: System::Void AD_viewAllH_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_AllhospitalData->Visible=!AD_AllhospitalData->Visible;
	
	 if (AD_AllhospitalData->Visible) {
		  AD_view_Hinfo_Leave(sender, e);
		  AD_AllhospitalData->BringToFront();
		  viewAllHospitals();
		  AD_viewHList->Visible=false;
		  AD_viewHList->SelectedIndex = -1;
		  label16->Visible=false;
		  AD_viewHbutton->Visible=false;
		  AD_viewAllH->Text = "View One";
	 }
	 else {
		  AD_view_Hinfo_Leave(sender, e);
		  AD_viewHList->Visible = true;
		  label16->Visible = true;
		  AD_viewHbutton->Visible = true;
		  AD_viewAllH->Text = "View All";
	 }
}
private: System::Void AddNewAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
    Addpage^ add = gcnew Addpage();
    add->ShowDialog();
}
		
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_allpatient->Visible=!AD_allpatient->Visible;
	 if (AD_allpatient->Visible) {
		  AD_allpatient->Controls->Clear();
		  label17->Visible = false;
		  AD_viewPlist->Visible = false;
		  AD_viewPButton->Visible = false;
		  int counter = 1;
		  for (int i = 0; i < userCount; i++) {
			   
			   if (user[i].userType == "Patient") {
					ListOfPatient^ Plist = gcnew ListOfPatient();
					Plist->PName->Text= "Name: "+gcnew String(user[i].name.c_str());
					Plist->PAge->Text= "Age: "+ gcnew String(to_string(user[i].age).c_str());
					Plist->PPhNum->Text= "Phone Number: "+ gcnew String(user[i].phonenumber.c_str());
					Plist->PEmail->Text= "Email: " + gcnew String(user[i].email.c_str());
					Plist->PNumOfR->Text= "Total Reserved: " + gcnew INT(user[i].reserCount);
					Plist->PID->Text = "ID: " + gcnew String(to_string(user[i].id).c_str());
					Plist->PTotalpaid->Text="Total Paid: " + gcnew FLOAT(user[i].totalpaid);
					Plist->PGender->Text = "Gender: " + gcnew String(user[i].gender.c_str());
					Plist->Patientnum->Text = "Patient #" + gcnew INT(counter++);
					AD_allpatient->Controls->Add(Plist);
					button6->Text="View one";
			   }
		  }
	 }
	 else {
		  label17->Visible = true;
		  AD_viewPlist->Visible = true;
		  AD_viewPButton->Visible = true;
		  AD_view_Pinfo_Leave(sender, e);
		  AD_viewPlist->SelectedIndex = -1;
		  button6->Text = "View All";
	 }
}
private: System::Void AD_DelAcc_Click(System::Object^ sender, System::EventArgs^ e) {
	 System::Windows::Forms::DialogResult result;
	 result = MessageBox::Show("Are you sure you want to delete your account?", "Delete Account", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	 if (result == System::Windows::Forms::DialogResult::Yes) {
		 
		  user[Lindex] = Udel;
		  if (Lindex != userCount - 1)
			   userCount--;
			   MessageBox::Show("Account Deleted Successfully");
			   AD_logout_but_Click(sender, e);
	 }
	 else {
		  MessageBox::Show("Account Deletion Canceled");
	 }
}
private: System::Void PA_del_Click(System::Object^ sender, System::EventArgs^ e) {
	 System::Windows::Forms::DialogResult result;
	 result = MessageBox::Show("Are you sure you want to delete your account?", "Delete Account", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	 if (result == System::Windows::Forms::DialogResult::Yes) {

			   if (user[Lindex].userType == "Patient") {
					for (int z = 0; z < user[Lindex].reserCount; z++) {
						 for (int j = 0; j < hospitalCount; j++) {
							  if ((user[Lindex].reservation[z].hospital.HospitalID == hospital[j].HospitalID)&& (user[Lindex].reservation[z].ReservationType=="Surgery")) {
								   hospital[j].PatientReservationRooms++;
							  }
						 }

					}
			   }

		  user[Lindex] = Udel;
		  if(Lindex!=userCount-1 )
		  swap(user[Lindex], user[userCount - 1]);
		  MessageBox::Show("Account Deleted Successfully");
		  userCount--;
		  PA_logout_but_Click(sender, e);
	 }
	 else {
		  MessageBox::Show("Account Deletion Canceled");
	 }
}
};
}