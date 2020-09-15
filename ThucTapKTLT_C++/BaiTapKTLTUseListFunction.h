#ifndef BAITAPKTLTUSELISTFUNCTION_H
#define BAITAPKTLTUSELISTFUNCTION_H



#include "BaiTapKTLTUseListPrint.h"

#define file            "BaiTapKTLT.txt"
#define fileStudentName "BaiTapKTLTStudentName.txt"
#define fileStudentPass "BaiTapKTLTStudentPass.txt"
#define fileAdminPass   "BaiTapKTLTAdminPass.txt"
#define fileHopThuDenCuaAdmin   "BaiTapKTLTHopThuDenCuaAdmin.txt"
#define fileHopThuDenCuaStudent "BaiTapKTLTHopThuDenCuaStudent.txt"
#define fileGuiThuCuaAdmin      "BaiTapKTLTGuiThuCuaAdmin.txt"
#define fileGuiThuCuaStudent    "BaiTapKTLTGuiThuCuaStudent.txt"
#define fileLostNumber          "BaiTapKTLTLostNumber.txt"
#define fileFoolPeople          "BaiTapKTLTFoolPeople.txt"

void AddHead(List &l,Transcript);
void AddTail(List &l,Transcript);
void DelHead(List &l);
void DelTail(List &l);
void Init(List &l);


int PASSADMIN(string str);
int USERADMIN(string str);   
void ReadAdminPass();                                   


int KiemTraClassCode(string ClassCode);                       // Kiem tra ClassCode Nhap da dung chua
void ChuanHoaName(string &str);                               // Chuan hoa ten nhap vao 
string ClassName(string ClassCode);
string Encrypt(string);
string Decrypt(string);
char ComeIn(char);
char GoOut(char);

void FixInformation(List &l, Transcript One,int  STT);
void AddToListFromFile(List &l);                              // Tao Mang bang cach lay du lieu tu file "BaiTapKTLT.txt"                           
void AddFromKeyboard(List &l);                                       // Them ho so tu ban phim                                             
void FindStudent(List l,string name);      // Tim kiem 1 hoc vien trong danh sach     
void DeleteOneStudent(List &l,string name);                           // Xoa 1 hoc vien trong danh sach        
void HoanVi(Transcript &a,Transcript &b);                     // Hoan vi 2 gia tr a va b
void RadixSortToScore(Transcript Array[],int StudentAmount);                 // RadixSort dung trong sap xep diem
void HashFunction();                                          // Ham Bam du lieu
string ReverseStudentName(string studentname);                // Dao nguoc ten hoc vien de sap xep
void QuickSortToName(List &l);                  // QuickSort sap xep ten hoc vien theo thu tu ABC...
void QuickSortToClassCode(List &l);             // QuickSort sap xep ten lop theo thu tu ABC...
void BubbleSortToName(List &l);
void BubbleSortToClassCode(List &l);
void SortClassAndNameByQuickSort(List &l);                                                 // Menu lua chon          
string CreateStudentCode(string,string,int,int,int);            // Tao ma hoc vien
void MENUforMember(List &l,Transcript Member);
void SelectionSortToScore(Transcript Array[],int left,int StudentAmount);
void QuickSortToClass(Transcript Array[],int left,int right);
void QuickSortToScore(Transcript Array[],int left,int right);
void RadixSortToScore2(Transcript Array[],int left ,int StudentAmount);
void TaskForFoolPeople(List &l);


/*-----------------------------------------------------------------------------------------*/
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================



void ReadAdminPass()
{
	ifstream fileInput(fileAdminPass);
	
	getline(fileInput,AdminPass);	
	AdminPass = Decrypt(AdminPass);
	int m = AdminPass.length();
	while(AdminPass[m-1] == ' ')              // Xu li du lieu tu file, xoa dau " "
	     {
	        AdminPass.erase(AdminPass.begin()+m-1);
	        m = AdminPass.length();
	     }
		 
	getline(fileInput,AdminPass2);
	AdminPass2 = Decrypt(AdminPass2);
	int n = AdminPass2.length();
	while(AdminPass2[m-1] == ' ')              // Xu li du lieu tu file, xoa dau " "
	     {
	        AdminPass2.erase(AdminPass2.begin()+m-1);
	        m = AdminPass2.length();
		 }
	
	fileInput.close();
}



//==============================================================================================================================
//==============================================================================================================================

int TestDateOfBirth(int ngay,int thang,int nam)
{
	if(nam%4 != 0)
	   if(thang == 2 and ngay > 28)
	  	  return 0;
	
	if(thang == 4 or thang == 6 or thang == 9 or thang == 11)
	   if(ngay > 30)
	      return 0;
	      
	if(nam%4 == 0 and nam%100 != 0 and thang == 2 and ngay > 29)
	   return 0;
	
	return 1;
}

int TestName(string name)
{
    for(int i=0 ; i<name.length() ; i++)
       {
       	if(name[i] < 65 and name[i] != 32)
       	   return 0;
       	if( 90 < name[i] and name[i] < 97)
       	   return 0;
       	if(name[i] > 122)
       	   return 0;
	   }    
           
	return 1;
}

void ChuanHoaName(string &str)
{
	int m = str.length();
	
	while(str[m-1] == ' ')              // Xu li du lieu tu file, xoa dau " " sau ten
	     {
	        str.erase(str.begin()+m-1);
	        m = str.length();
		 }
	for(int i=0 ; i<str.length() ; i++) // Xoa dau " " truoc ten
	   {
	   	if(str[i] == ' ')
	   	  	str.erase(str.begin()+i);
		 else
		  break;
	   }
	
	if(str.length() > 2)   
	   for(int i=0 ; i<str.length()-2 ; i++)
	   	    if(str[i] != ' ' and str[i+1] == ' ' and str[i+2] == ' ')
	   	  	    while(str[i+2] == ' ')
	   	  	            str.erase(str.begin() + i+2);				    
       	   
	for(int i=0 ; i<str.length() ; i++) // In hoa nhung chu cai can thiet
	    {
	     if(i == 0)
		    str[i] = toupper(str[i]);	
		 if(str[i] == ' ')
	        str[i+1] = toupper(str[i+1]);
		}
		
}

void ChuanHoaCode(string &str)
{
	while(str[0] == ' ')             
	      str.erase(str.begin());
	
	int m = str.length();
	while(str[m-1] == ' ')              // Xu li du lieu tu file, xoa dau " " sau ten
	     {
	        str.erase(str.begin()+m-1);
	        m = str.length();
		 }
		 
	for(int i=0 ; i<str.length() ; i++)
	   	str[i] = toupper(str[i]);
}


string CreateStudentCode(string ClassCode,string Name)
{
	string StudentCode = "";
	int LostNumber;
	
	int n = ClassCode.length();
	StudentCode += ClassCode[0];            // lay ki tu dau tien cua ClassCode
	StudentCode += ClassCode[n-4];          // lay ki tu truoc K53;
	
	for(int i=n-2;i<n;i++)
	    StudentCode += ClassCode[i];        // lay vao 2 ki tu cuoi cua ClassCode
	
	int m = Name.length();
	StudentCode += Name[0];                // lay ki tu dau tien cua ten  
	for(int i=0;i<m;i++)
	    if(Name[i] == ' ')
	       StudentCode += Name[i+1];
	
	ifstream fileInput;
	fileInput.open(fileLostNumber);
	fileInput>>LostNumber;
    fileInput.close();
	
	if(LostNumber != 0)
	{
	ostringstream convert;
	convert<<LostNumber;
	
	if(LostNumber < 10)
	   StudentCode += "000" + convert.str();
	
	if(LostNumber < 100 and LostNumber > 9)
	   StudentCode += "00" + convert.str();
	
	if(LostNumber < 1000 and LostNumber > 99)
	   StudentCode += "0" + convert.str();
	
	if(LostNumber + 1 < 10000 and LostNumber > 999  )
	   StudentCode += convert.str();
	
	LostNumber = 0;
	   		
	ofstream fileOutput;
	fileOutput.open(fileLostNumber,ios::out);
	fileOutput<<LostNumber;
    fileOutput.close();	
	}
	else{
		
	ostringstream convertSTT;
	convertSTT<<StudentAmount+1;
	
	if(StudentAmount + 1 < 10)
	   StudentCode += "000" + convertSTT.str();
	
	if(StudentAmount + 1 < 100 and StudentAmount + 1 > 9)
	   StudentCode += "00" + convertSTT.str();
	
	if(StudentAmount + 1 < 1000 and StudentAmount + 1 > 99)
	   StudentCode += "0" + convertSTT.str();
	
	if(StudentAmount + 1 < 10000 and StudentAmount + 1 > 999  )
	   StudentCode += convertSTT.str();
	   
	}
	
	return StudentCode;
}

void CreateMessAmountToAdmin()
{
	ifstream fileInput;
	fileInput.open(fileHopThuDenCuaAdmin);
	int i=0;
	string s1,s2;
	
	while(!fileInput.eof())
	     {
	     	getline(fileInput,s1);
	     	getline(fileInput,s2);
	     	
	     	int m = s2.length();
         	while(s2[m-1] == ' ')              // xoa dau " " neu co
	             {
	                s2.erase(s2.begin()+m-1);
	                if(s2.empty())
	                   break;
	                m = s2.length();
		         }
		    if(!s2.empty())
		      	i++;
		 }
	MessAmount = i;
	
	fileInput.close();
}

string CreateFixStudentCode(string ClassCode,string Name,string Code)
{
	string StudentCode = "";
	
	int n = ClassCode.length();
	StudentCode += ClassCode[0];            // lay ki tu dau tien cua ClassCode
	StudentCode += ClassCode[n-4];          // lay ki tu truoc K53;
	
	for(int i=n-2;i<n;i++)
	    StudentCode += ClassCode[i];        // lay vao 2 ki tu cuoi cua ClassCode
	
	int m = Name.length();
	StudentCode += Name[0];                // lay ki tu dau tien cua ten  
	for(int i=0;i<m;i++)
	    if(Name[i] == ' ')
	       StudentCode += Name[i+1];
	
	int leng = Code.length();
	
	for(int i=leng-4 ; i<leng ; i++)
	    StudentCode += Code[i];
	
	return StudentCode;
}

string CreateStudentPassAuto(string Name,int Day,int Month)
{
	string StudentPass = "";
	int m = Name.length();
	while(Name[m-1] == ' ')              // xoa dau " " neu co
	     {
	        Name.erase(Name.begin()+m-1);
	        m = Name.length();
		 }
	for(int i=0;i<m;i++)
	   	if(Name[i] == ' ')
	   	   Name.erase(Name.begin()+i);    // Xoa " "
	
		 
	StudentPass += Name;      // Cong Name da dc xu li vao PassAuto
	
	ostringstream convertDay, convertMonth;
	convertDay<<Day;
	convertMonth<<Month;
	if(Day<10)
	   StudentPass += '0';
	StudentPass += convertDay.str();
	if(Month<10)
	   StudentPass += '0';
	StudentPass += convertMonth.str();
	
	
	return StudentPass;
}

void AddToListFromFile(List &l)
{
    
    Transcript One;
	ifstream fileInput1(file);
	ifstream fileInput2(fileStudentName);
	ifstream fileInput3(fileStudentPass);
	ifstream fileInput4(fileGuiThuCuaStudent);
	ifstream fileInput5(fileHopThuDenCuaStudent);
    
    int i = 0;
	while(!fileInput1.eof() or !fileInput2.eof())
	{	
	if(fileInput1.eof() or fileInput2.eof()) break;
	fileInput1>>One.ClassCode;
	fileInput1>>One.StudentCode;
	fileInput1>>One.Day;
	fileInput1>>One.Month;
	fileInput1>>One.Year;
	fileInput1>>One.DTBTL;	
	
    getline(fileInput2,One.StudentName);
    One.StudentName = Decrypt(One.StudentName);
    
	int m = One.StudentName.length();
	while(One.StudentName[m-1] == ' ')              // Xu li du lieu tu file, xoa dau " "
	     {
	        One.StudentName.erase(One.StudentName.begin()+m-1);
	        m = One.StudentName.length();
		 }
		 
	getline(fileInput3,One.StudentPass);
	One.StudentPass = Decrypt(One.StudentPass);
	
	int n = One.StudentPass.length();
	while(One.StudentPass[n-1] == ' ')              // Xu li du lieu tu file, xoa dau " "
	     {
	        One.StudentPass.erase(One.StudentPass.begin()+n-1);
	        n = One.StudentPass.length();
		 }
		 	
	// Doc vao du lieu Thu gui den va Thu gui di  
	getline(fileInput4,One.ThuGui);
	One.ThuGui = Decrypt(One.ThuGui);
	
	getline(fileInput5,One.ThuDen);
	One.ThuDen = Decrypt(One.ThuDen);
		  
    if(One.DTBTL >= 3.6)
	   One.HocLuc = "Xuat Sac";
	 else
      if(One.DTBTL >= 3.2)
         One.HocLuc = "Gioi";
	   else{
	  	if(One.DTBTL >= 2.5)
	  	   One.HocLuc = "Kha";
	  	 else{
	  	 	if(One.DTBTL >=2.0)
	  	 	   One.HocLuc = "TB";
	  	 	 else
	  	 	   One.HocLuc = "Yeu";
		    }
	    }
	  
	i++;
	
	AddTail(l,One);	
	}
	
    DelTail(l);
    StudentAmount = i-1;
    
	fileInput1.close();	
	fileInput2.close();
	fileInput3.close();
	fileInput4.close();
	fileInput5.close();
}
//==============================================================================================================================
//==============================================================================================================================

void AddToArrayFromList(List l,Transcript Array[],int StudentAmount)
{
	int i=0;
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	Gan(Array[i],p->data);
	   	i++;
	   }
}

//==============================================================================================================================
//==============================================================================================================================



void AddFromKeyboard(List &l)
{
	
m:	Transcript One;
    int ktMalop = 0;
    int ktTenHV = 0;
    int ktDMY = 0;
    int ktDTB = 0;
		
	textcolor(14);
	cout<<"\n\n\n\n";
	cout<<"\n\t\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍo0oÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
	cout<<"\n\t\t\t\tº                                                              º";
	cout<<"\n\t\t\t\tÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹";
    cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿º";                                             
    cout<<"\n\t\t\t\tº                  ³                                          ³º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙº";                                             
	cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿º";                                             
    cout<<"\n\t\t\t\tº                  ³                                          ³º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙº"; 
    cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄ¿                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ³           ³                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ÀÄÄÄÄÄÄÄÄÄÄÄÙ                               º"; 
    cout<<"\n\t\t\t\tº            ³     ÚÄÄÄÄÄÄÄÄÄÄÄ¿                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ³           ³                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ÀÄÄÄÄÄÄÄÄÄÄÄÙ                               º"; 
    cout<<"\n\t\t\t\tº            ³     ÚÄÄÄÄÄÄÄÄÄÄÄ¿                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ³           ³                               º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÙ                               º"; 
    cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿º";                                             
    cout<<"\n\t\t\t\tº                  ³                                          ³º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙº"; 
	cout<<"\n\t\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍo0oÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
	
	if(Language == 1)
	{
	ToMau(60,7 ,"THEM HO SO",11);
	ToMau(46,10,"Ma lop",12);
	ToMau(40,13,"Ten hoc vien",12);
	ToMau(37,19,"Ngay Sinh",12);
	ToMau(48,16,"Ngay",13);
	ToMau(47,19,"Thang",13);
	ToMau(49,22,"Nam",13);
	ToMau(38,25,"Nhap Diem TBTL",12);
    }
    
    if(Language == 2)
	{
	ToMau(60,7 ,"ADD NEW ACOUNT",11);
	ToMau(39,10,"Code Of Class",12);
	ToMau(37,13,"Name Of Student",12);
	ToMau(37,19,"DateBirth",12);
	ToMau(48,16,"Date",13);
	ToMau(47,19,"Month",13);
	ToMau(48,22,"Year",13);
	ToMau(41,25,"Entry Score",12);
    }
    
    if(Language == 3)
	{
	ToMau(57,7 ,"AJOUTER UN PROFIL",11);
	ToMau(38,10,"Code De Classe",12);
	ToMau(35,13,"Nom De I'etudiant",12);
	ToMau(37,19,"DateNaiss",12);
	ToMau(48,16,"Jour",13);
	ToMau(48,19,"Mois",13);
	ToMau(47,22,"Annee",13);
	ToMau(40,25,"Entrez Score",12);
    }
    
	gotoxy(1,5);
	textcolor(2);
	cout<<"\n\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
	cout<<"\n\tº               º";
	cout<<"\n\tÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
	
	if(Language == 1)
	{
	ToMau(10, 7,"DANH MUC MA LOP",14);
    }
    
    if(Language == 2)
	{
	ToMau(10, 7,"ListOfClasscode",14);
    }
    
    if(Language == 3)
	{
	ToMau(10, 7,"ListeDeCodeclas",14);
    }
    ToMau(11, 9,"ANHTTTK53",13);
	ToMau(11,10,"BDATTTK53",13);
	ToMau(11,11,"DTHK53",13);
	ToMau(11,12,"CNTT1K53",13);
	ToMau(11,13,"CNTT2K53",13);
	ToMau(11,14,"DTYSK53",13);
	ToMau(11,15,"PTK53",13);
	ToMau(11,16,"TLHQK53",13);
	ToMau(11,17,"TLPKK53",13);
	ToMau(11,18,"OT1K53",13);
	ToMau(11,19,"OT2K53",13);
	ToMau(11,20,"XDCTDBK53",13);
	ToMau(11,21,"XDSBK53",13);
	ToMau(11,22,"VK1K53",13);
	ToMau(11,23,"VK2K53",13);
	ToMau(11,24,"TPTNK53",13);
	ToMau(11,25,"XDCTQPK53",13);
	ToMau(11,26,"TTVTDK53",13);
	ToMau(11,27,"RDHQK53",13);
	ToMau(11,28,"RDSNK53",13);
	ToMau(11,29,"RDK53",13);
	ToMau(11,30,"NLK53",13);
	ToMau(11,31,"PHK53",13);
	int colorFrame = 11;
	PrintFrame(colorFrame);
	
xy:	
	  
	int dung = MouseEventToSelectAddAccount(750,180,195,165 , 750,180,245,215,   505,180,405,260,  750,180,450,420,   1120,990,195,110  ,  1120,990,315,230,    1120,990,435,350);
    
    if(dung == 1)
	  {
	  	ktMalop = 0;
	  	
	  	HienConTro();
	  	gotoxy(54,10);
	  	cout<<"                      ";
	  	ToMau(98,10,"                       ",0);
		textcolor(15);	
        gotoxy(54,10);
	    cin>>One.ClassCode;  
	    ChuanHoaCode(One.ClassCode);
	    fflush(stdin);	                         // Nhap vao Ma Lop
		
		if(KiemTraClassCode(One.ClassCode) == 0)
		  {
		  	One.ClassCode = PhimTat(One.ClassCode);
		    gotoxy(54,10);
	  	    textcolor(7);
	  	    cout<<"                     ";
	  	    gotoxy(54,10);
	  	    cout<<One.ClassCode;
		  }
		
	   
	    if(KiemTraClassCode(One.ClassCode) == 0)
	      {
	      	if(Language == 1)
	  	    ToMau(98,10,"! Khong co trong danh muc",12);
	        if(Language == 2)
	  	    ToMau(98,10,"! Don't have in List",12);
	  	    if(Language == 3)
	  	    ToMau(98,10,"! Pas sur la liste",12);
	  	    
	  	    gotoxy(54,10);
	  	    textcolor(7);
	  	    cout<<"                     ";
	  	    goto xy;
	      }
	    else{ 
	 	    ToMau(98,10,"                         ",0);
	 	    if(Language == 1)
	 	    ToMau(98,10,"û Hoan thanh",10);
	 	    if(Language == 2)
	 	    ToMau(98,10,"û Complete",10);
	 	    if(Language == 3)
	 	    ToMau(98,10,"û Complete",10);
	 	    
	 	    ktMalop = 1;
	        }
	    XoaConTro();
	  }
	
	if(dung == 2)
	  {
	  	ktTenHV = 0;
	  	fflush(stdin);
	  	HienConTro();
	  	gotoxy(54,13);
	  	cout<<"                              ";
	  	ToMau(98,13,"                          ",0);
	  	textcolor(15);
	    gotoxy(54,13);
	    getline(cin,One.StudentName);
	    ChuanHoaName(One.StudentName);             // ten hoc vien
	    fflush(stdin);   
		
		if(TestName(One.StudentName) == 0)
		  {
		  	if(Language == 1)
		  	ToMau(98,13,"! Khong co ki tu dac biet",12);
		  	if(Language == 2)
		  	ToMau(98,13,"! Don't use special character",12);
		  	if(Language == 3)
		  	ToMau(98,13,"! I n'y pas de caracteres speciaux",12);
		  	
		  	ToMau(54,13,"                              ",0);
		  	goto xy;
		   } 
		if(Language == 1)
	    ToMau(98,13,"û Hoan thanh",10);   // Alt + 0251
	    if(Language == 2)
	    ToMau(98,13,"û Complete",10);   // Alt + 0251
	    if(Language == 3)
	    ToMau(98,13,"û Complete",10);   // Alt + 0251
	    
	    XoaConTro();
	    
	    ktTenHV = 1;
	  }   
	
	if(dung == 3)
	  {
	  	ktDMY = 0;
	  	
	  	HienConTro();
	  	gotoxy(54,16); 
		cout<<"        ";
	  	gotoxy(54,19);
		cout<<"        ";
		gotoxy(54,22);
		cout<<"        ";
	  	gotoxy(98,16); 
		cout<<"                            ";
	  	gotoxy(98,19);
		cout<<"                            ";
		gotoxy(98,22);
		cout<<"                            ";
		
		do{
        textcolor(15);
        gotoxy(54,16); 
		cout<<"        ";
	    gotoxy(54,16); 
	    string str;
	    cin>>str;
	    fflush(stdin);
	    for(int i=0 ; i<str.length() ; i++)
	       {
	       	if(str[i] < 48 or str[i] > 57)
	       	  {
	       	  	if(Language == 1)
	       	  	ToMau(98,16,"! Ngay khong ton tai",12);
	       	    if(Language == 2)
	       	  	ToMau(98,16,"! This day isn't exist",12);
	       	  	if(Language == 3)
	       	  	ToMau(98,16,"! La date n'existe pas'",12);
	       	  	
	       	  	textcolor(7);
		 	    gotoxy(54,16); 
		 	    cout<<"       "; 
		 	    goto xy;
			  }
		   }
		One.Day = 0;
	
		for(int i=0 ; i<str.length() ; i++)
		   	One.Day += (str[i]-48)*pow(10,str.length()-i-1);
		
		if(One.Day<1 or One.Day>31)           // Ngay
		  {
		  	if(Language == 1)
	       	ToMau(98,16,"! Ngay khong ton tai",12);
	       	if(Language == 2)
	       	ToMau(98,16,"! This day isn't exist",12);
	       	if(Language == 3)
	       	ToMau(98,16,"! La date n'existe pas'",12);
	       	
		  	textcolor(7);
		 	gotoxy(54,16); 
		 	cout<<"      "; 
		 	goto xy;
		  } 
		 else{
		 	ToMau(98,16,"        ",0);
		 	if(Language == 1)
		 	ToMau(98,16,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,16,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,16,"û Complete",10);
		   }
	    } while(One.Day<1 or One.Day>31);
	 
	    do{
yz:	    gotoxy(54,19);
		cout<<"       ";
		textcolor(15);
	    gotoxy(54,19);
	    
	    string str;
	    cin>>str;
	    fflush(stdin);
	    for(int i=0 ; i<str.length() ; i++)
	       {
	       	if(str[i] < 48 or str[i] > 57)
	       	  {
	       	  	if(Language == 1)
	       	  	ToMau(98,19,"! Thang khong ton tai",12);
	       	  	if(Language == 2)
	       	  	ToMau(98,19,"! This month isn't exist",12);
	       	  	if(Language == 3)
	       	  	ToMau(98,19,"! Le mois n'existe pas",12);
	       	  	
	       	  	textcolor(7);
		 	    gotoxy(54,19); 
		 	    cout<<"       "; 
		 	    goto yz;
			  }
		   }
		One.Month = 0;
	
		for(int i=0 ; i<str.length() ; i++)
		   	One.Month += (str[i]-48)*pow(10,str.length()-i-1);
		   	
		if(One.Month<1 or One.Month>12)       // Thang
		  {
		  	if(Language == 1)
	       	ToMau(98,19,"! Thang khong ton tai",12);
	       	if(Language == 2)
	       	ToMau(98,19,"! This month isn't exist'",12);
	       	if(Language == 3)
	       	ToMau(98,19,"! Le mois n'existe pas",12);
	       	
		 	gotoxy(54,19);
		 	textcolor(7);
		 	cout<<"       ";
		  } 
		 else{
		 	ToMau(98,19,"                     ",0);
		 	if(Language == 1)
		 	ToMau(98,19,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,19,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,19,"û Complete",10);
		  }
	    } while(One.Month < 1 or One.Month>12);
	
	    do{
n:	    gotoxy(54,22);
		cout<<"        ";
		textcolor(15);
	    gotoxy(54,22);
		string str;
	    cin>>str;
	    fflush(stdin);
	    
	    for(int i=0 ; i<str.length() ; i++)
	       {
	       	if(str[i] < 48 or str[i] > 57)
	       	  {
	       	  	if(Language == 1)
	       	    ToMau(98,22,"! Nam khong ton tai",12);
	       	    if(Language == 2)
	       	    ToMau(98,22,"! This month isn't exist'",12);
	       	    if(Language == 3)
	       	    ToMau(98,22,"! Le mois n'existe pas",12);
	       	  	textcolor(7);
		 	    gotoxy(54,22); 
		 	    cout<<"        "; 
		 	    goto n;
			  }
		   }
		One.Year = 0;
	
		for(int i=0 ; i<str.length() ; i++)
		   	One.Year += (str[i]-48)*pow(10,str.length()-i-1);
		   	
		if(One.Year<1900 or One.Year>2050)     // Nam
		  {
		  	if(Language == 1)
		  	ToMau(98,22,"! Nam khong phu hop",12);
		  	if(Language == 2)
		  	ToMau(98,22,"! Year isn't true'",12);
		  	if(Language == 1)
		  	ToMau(98,22,"! Decalage d'annee'",12);
		 	gotoxy(54,22);
		 	cout<<"        ";
		  }
		 else{
		 	ToMau(98,22,"                     ",0);
		 	if(Language == 1)
		 	ToMau(98,22,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,22,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,22,"û Complete",10);
		 } 
	    } while(One.Year < 1900 or One.Year>2050);
	
	    if(TestDateOfBirth(One.Day,One.Month,One.Year) == 0)
	      { 
	  	    ToMau(98,16,"                             ",0);
	  	    ToMau(98,19,"                             ",0);
	      	ToMau(98,22,"                             ",0);
	      	if(Language == 1)
	  	    ToMau(98,19,"! Ngay thang nam khong ton tai",12);
	  	    if(Language == 2)
	  	    ToMau(98,19,"! Date of birth isn't exist",12);
	  	    if(Language == 3)
	  	    ToMau(98,19,"! La date n'existe pas'",12);
	  	    gotoxy(54,16);
	  	    cout<<"        ";
	  	    gotoxy(54,19);
	  	    cout<<"        ";
	  	    gotoxy(54,22);
	  	    cout<<"        ";
	  	    goto xy; 
	      }
	    else{
	 	    ToMau(98,16,"                             ",0);
	  	    ToMau(98,19,"                             ",0);
	  	    ToMau(98,22,"                             ",0);
	  	    if(Language == 1)
	  	        ToMau(98,19,"û Hoan Thanh",10);
	  	    if(Language == 2)
	  	        ToMau(98,19,"û Complete",10);
	  	    if(Language == 3)
	  	        ToMau(98,19,"û Complete",10);
	  	    
	  	    ktDMY = 1;
	       }
	       
	    XoaConTro();
	  }

	
	if(dung == 4)
	  {
	  	ktDTB = 0;
	  	One.DTBTL = 0;
	  	
	  	HienConTro();
	  	
	  	gotoxy(54,25);
		cout<<"                  ";
		ToMau(98,25,"                                      ",0);
		
		textcolor(15);
	    gotoxy(54,25);
	    string str;
	    cin>>str;
	    fflush(stdin);
	    
	    int dau = 0;
	    int diem = 0;
	    for(int i=0 ; i<str.length() ; i++)
	        if(str[i] == 44 or str[i] == 46 or str[i] >= 48 and str[i] <= 57 )
	          {
	          	if(str[i] == 44 or str[i] == 46)
	          	  	dau ++;  
			  }
			 else{
			 	if(Language == 1)
			 	  {
			 	  	ToMau(54,25,"                                   ",0);
					ToMau(98,25,"! Khong chua ki tu dac biet",12);
				   }
			 	  	
				if(Language == 2)
				  {
				  	ToMau(54,25,"                                   ",0);
				  	ToMau(98,25,"! Don't use special character",12);
				  }
			 	  	
				if(Language == 3)
				  {
				  	ToMau(54,25,"                                   ",0);
					ToMau(98,25,"! I n'y pas de caracteres speciaux",12);
				  }
			 	  	 	  	
			    goto xy;
			 }
		if(dau >= 2)
		  {
		  	if(Language == 1)
		  	  {
		  	  	ToMau(54,25,"                                   ",0);
		  	  	ToMau(98,25,"! Khong dung nhieu ki tu dac biet",12);
			  }			 	
		
			if(Language == 2)
			  {
			  	ToMau(54,25,"                                   ",0);
			  	ToMau(98,25,"! Don't use many special character",12);
			  }			 	
			 	  		
			if(Language == 3)
			  {
			  	ToMau(54,25,"                                         ",0);
			  	ToMau(98,25,"! Ne pas utiliser de caracteres speciaux",12);
			  }    
		        
			goto xy;	
		  }
		  
		if(str[0]!=44 and str[0]!=46 and str[1]!=44 and str[1]!=46)
		  {
		  	if(Language == 1)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
		  	  	ToMau(98,25,"! Diem nam trong khoang: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 2)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Score is in: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 3)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Le score a environ: 0 ó...ó 4 ",12);
			  }
			  
		 	goto xy;
		  }
        if(dau == 1)  
          {
          	One.DTBTL = (str[0] - 48);
          	
			for(int i=2 ; i<str.length() ; i++)
                One.DTBTL += (str[i] - 48)/pow(10,i-1);
		  }
	     else
	        One.DTBTL = str[0] - 48;
//		cin>>One.DTBTL;   
        
		if(One.DTBTL<0 or One.DTBTL>4)  
		  {
		  	if(Language == 1)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
		  	  	ToMau(98,25,"! Diem nam trong khoang: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 2)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Score is in: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 3)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Le score a environ: 0 ó...ó 4 ",12);
			  }
			  
		 	goto xy;
		  } 
		 else{
		 	ToMau(98,25,"                                          ",0);
		 	if(Language == 1)
		 	ToMau(98,25,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,25,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,25,"û Complete",10);
		 	
		 	ktDTB = 1;
		 }
	        
	    XoaConTro();
	  }
	
	if(dung == 5)
	  {
	  	textcolor(7);
	  	return ; 
	  }
	
	if(dung == 6)
	  {
	  	textcolor(7);
	  	ktDMY = 0;
	  	ktDTB = 0;
	  	ktMalop = 0;
	  	ktTenHV = 0;
	  	
	  	gotoxy(54,16); 
		cout<<"        ";
	  	gotoxy(54,19);
		cout<<"        ";
		gotoxy(54,22);
		cout<<"        ";
	  	gotoxy(98,16); 
		cout<<"                        ";
	  	gotoxy(98,19);
		cout<<"                        ";
		gotoxy(98,22);
		cout<<"                         ";
		gotoxy(54,10);
	  	cout<<"                        ";
		gotoxy(98,10);
	  	cout<<"                         ";
	  	gotoxy(54,13);
	  	cout<<"                        ";
		gotoxy(98,13);
	  	cout<<"                         ";
	  	gotoxy(54,25);
	  	cout<<"                         ";
		gotoxy(98,25);
	  	cout<<"                   	             ";
	  } 
	
	if(dung == 7) 
	  {
	  	if(ktMalop + ktTenHV + ktDMY + ktDTB == 4 )
      	    goto zt;
      	else{
      		if(Language == 1)
      		ToMau(120,26,"Chua du thong tin de luu!",14);
      		if(Language == 2)
      		ToMau(120,26,"Don't have enough informations to save!",14);
      		if(Language == 3)
      		ToMau(120,26,"Pas assez d'informations pour sauvegarder!",14);
      		
      		Sleep(2000);
      		ToMau(120,26,"                                            ",7);
		  }
	  }
	   
	One.ThuDen = "";
	One.ThuGui = "";  
	goto xy;
    
    
zt:	int choose;

    choose = MouseEventToYesOrNoAddAccount(390,270,580,520,    830,715,580,520);
	
	if(choose == 1)
	  {
	  	ofstream fileOutput1;
	    ofstream fileOutput2;
     	ofstream fileOutput3;
	    ofstream fileOutput4;
	    ofstream fileOutput5;
	    fileOutput1.open(file, ios::out|ios::app);
	    fileOutput2.open(fileStudentName, ios::out|ios::app);
	    fileOutput3.open(fileStudentPass, ios::out|ios::app);
	    fileOutput4.open(fileGuiThuCuaStudent, ios::out|ios::app);
	    fileOutput5.open(fileHopThuDenCuaStudent, ios::out|ios::app);
	    
	    
	  	One.StudentPass = CreateStudentPassAuto(One.StudentName,One.Day,One.Month);   // Tao StudentPassAuto (quan trong)
	  	
	  	One.StudentCode = CreateStudentCode(One.ClassCode,One.StudentName);
	    
	    if(One.DTBTL >= 3.6)
	    	One.HocLuc = "Xuat Sac";                      // Xac dinh Hoc Luc
	     else
	      if(One.DTBTL >= 3.2)
             One.HocLuc = "Gioi";
	       else{
	  	    if(One.DTBTL >= 2.5)
	  	       One.HocLuc = "Kha";
	  		 else{
	  	 	  if(One.DTBTL >=2.0)
	  	 	     One.HocLuc = "TB";
	  	 	   else
	  	 	     One.HocLuc = "Yeu";
		     }
	       }
		
	    AddTail(l,One);
	    PrintOneTranscript(One);
	    fileOutput1<<One.ClassCode<<" ";
	   	fileOutput1<<One.StudentCode<<" ";
	   	fileOutput2<<Encrypt(One.StudentName)<<"\n";
	    fileOutput1<<One.Day<<" ";
	   	fileOutput1<<One.Month<<" ";
	   	fileOutput1<<One.Year<<" ";
	    fileOutput1<<One.DTBTL<<"\n";
		fileOutput3<<Encrypt(One.StudentPass)<<"\n";
		fileOutput4<<One.ThuGui<<"\n";	  	
		fileOutput5<<One.ThuDen<<"\n";	
		
		StudentAmount ++;
		
		fileOutput1.close();
	    fileOutput2.close();	
	    fileOutput3.close();	
	    fileOutput4.close();	
	    fileOutput5.close();
	    
		int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
		
		if(x == 3)
		  {
		  	textcolor(7);
		  	PrintEmpty();
		  	goto m;
		  }
						 	
		if(x == 1)
		  {
			HienConTro();
						 	  	
			if(KiemTraPass2() == 0 )
			  {
			    textcolor(7);
				PrintEmpty();
				goto m;
								  }
								else{
									int STT = 0;
									for(Node *p=l.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(l,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto m;
								  }
								else{
								    int y = MouseEventToYesOrNo(570,425,435,335,    1090,945,435,335);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(l,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto m;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto m;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto m;	
						      }
						   
			  	        XoaConTro(); 
		
	  }
	  else{
	  	textcolor(7);

        ToMau(50,28,"                                           ",0);
	                                                                     
	    ToMau(35,30,"               ",0);
	    ToMau(35,31,"               ",0);
	    ToMau(35,32,"               ",0);
	    ToMau(35,33,"               ",0);
	    ToMau(35,34,"               ",0);
	                                                                       
	    ToMau(90,30,"               ",0);
	    ToMau(90,31,"               ",0);
	    ToMau(90,32,"               ",0);
	    ToMau(90,33,"               ",0);
	    ToMau(90,34,"               ",0);
	  	goto xy;
	  }
		
		
}


void FixInformation(List &l, Transcript One,int  STT)
{
    PrintEmpty();
	int colorFrame = 11;
m:	
    int ktMalop = 0;
    int ktTenHV = 0;
    int ktDMY = 0;
    int ktDTB = 0;
		
	textcolor(14);
	cout<<"\n\n\n\n";
	cout<<"\n\t\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍo0oÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
	cout<<"\n\t\t\t\tº                                                              º";
	cout<<"\n\t\t\t\tÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹";
    cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿º";                                             
    cout<<"\n\t\t\t\tº                  ³                                          ³º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙº";                                             
	cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿º";                                             
    cout<<"\n\t\t\t\tº                  ³                                          ³º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙº"; 
    cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄ¿                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ³           ³                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ÀÄÄÄÄÄÄÄÄÄÄÄÙ                               º"; 
    cout<<"\n\t\t\t\tº            ³     ÚÄÄÄÄÄÄÄÄÄÄÄ¿                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ³           ³                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ÀÄÄÄÄÄÄÄÄÄÄÄÙ                               º"; 
    cout<<"\n\t\t\t\tº            ³     ÚÄÄÄÄÄÄÄÄÄÄÄ¿                               º";                                             
    cout<<"\n\t\t\t\tº            ³     ³           ³                               º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÙ                               º"; 
    cout<<"\n\t\t\t\tº                  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿º";                                             
    cout<<"\n\t\t\t\tº                  ³                                          ³º";                                             
    cout<<"\n\t\t\t\tº                  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙº"; 
	cout<<"\n\t\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍo0oÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
	
	ToMau(54,10,One.ClassCode,7);
	ToMau(54,13,One.StudentName,7);
	ToMauInt(54,16,One.Day,7);
	ToMauInt(54,19,One.Month,7);
	ToMauInt(54,22,One.Year,7);
	ToMauFloat(54,25,One.DTBTL,7);
	
	ktMalop = 1;
	ktTenHV = 1;
	ktDMY = 1;
    ktDTB = 1; 
	
	if(Language == 1)
	{
	ToMau(60,7 ,"THEM HO SO",11);
	ToMau(46,10,"Ma lop",12);
	ToMau(40,13,"Ten hoc vien",12);
	ToMau(37,19,"Ngay Sinh",12);
	ToMau(48,16,"Ngay",13);
	ToMau(47,19,"Thang",13);
	ToMau(49,22,"Nam",13);
	ToMau(38,25,"Nhap Diem TBTL",12);
	
	ToMau(98,10,"û Hoan Thanh",10);
	ToMau(98,13,"û Hoan Thanh",10);
	ToMau(98,19,"û Hoan Thanh",10);
	ToMau(98,25,"û Hoan Thanh",10);
    }
    
    if(Language == 2)
	{
	ToMau(60,7 ,"ADD NEW ACOUNT",11);
	ToMau(39,10,"Code Of Class",12);
	ToMau(37,13,"Name Of Student",12);
	ToMau(37,19,"DateBirth",12);
	ToMau(48,16,"Date",13);
	ToMau(47,19,"Month",13);
	ToMau(48,22,"Year",13);
	ToMau(41,25,"Entry Score",12);
	
	ToMau(98,10,"û Complete",10);
	ToMau(98,13,"û Complete",10);
	ToMau(98,19,"û Complete",10);
	ToMau(98,25,"û Complete",10);
    }
    
    if(Language == 3)
	{
	ToMau(57,7 ,"AJOUTER UN PROFIL",11);
	ToMau(38,10,"Code De Classe",12);
	ToMau(35,13,"Nom De I'etudiant",12);
	ToMau(37,19,"DateNaiss",12);
	ToMau(48,16,"Jour",13);
	ToMau(48,19,"Mois",13);
	ToMau(47,22,"Annee",13);
	ToMau(40,25,"Entrez Score",12);
	
	ToMau(98,10,"û Complete",10);
	ToMau(98,13,"û Complete",10);
	ToMau(98,19,"û Complete",10);
	ToMau(98,25,"û Complete",10);
    }
    
	gotoxy(1,5);
	textcolor(2);
	cout<<"\n\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
	cout<<"\n\tº               º";
	cout<<"\n\tÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tº               º";
	cout<<"\n\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
	
	if(Language == 1)
	{
	ToMau(10, 7,"DANH MUC MA LOP",14);
    }
    
    if(Language == 2)
	{
	ToMau(10, 7,"ListOfClasscode",14);
    }
    
    if(Language == 3)
	{
	ToMau(10, 7,"ListeDeCodeclas",14);
    }
    ToMau(11, 9,"ANHTTTK53",13);
	ToMau(11,10,"BDATTTK53",13);
	ToMau(11,11,"DTHK53",13);
	ToMau(11,12,"CNTT1K53",13);
	ToMau(11,13,"CNTT2K53",13);
	ToMau(11,14,"DTYSK53",13);
	ToMau(11,15,"PTK53",13);
	ToMau(11,16,"TLHQK53",13);
	ToMau(11,17,"TLPKK53",13);
	ToMau(11,18,"OT1K53",13);
	ToMau(11,19,"OT2K53",13);
	ToMau(11,20,"XDCTDBK53",13);
	ToMau(11,21,"XDSBK53",13);
	ToMau(11,22,"VK1K53",13);
	ToMau(11,23,"VK2K53",13);
	ToMau(11,24,"TPTNK53",13);
	ToMau(11,25,"XDCTQPK53",13);
	ToMau(11,26,"TTVTDK53",13);
	ToMau(11,27,"RDHQK53",13);
	ToMau(11,28,"RDSNK53",13);
	ToMau(11,29,"RDK53",13);
	ToMau(11,30,"NLK53",13);
	ToMau(11,31,"PHK53",13);
	PrintFrame(colorFrame);
	
xy:	
	  
	int dung = MouseEventToSelectAddAccount(750,180,195,165 , 750,180,245,215,   505,180,405,260,  750,180,450,420,   1120,990,195,110  ,  1120,990,315,230,    1120,990,435,350);
    
    if(dung == 1)
	  {
	  	ktMalop = 0;
	  	
	  	HienConTro();
	  	gotoxy(54,10);
	  	cout<<"                      ";
	  	ToMau(98,10,"                       ",0);
		textcolor(15);	
        gotoxy(54,10);
	    cin>>One.ClassCode;  
	    ChuanHoaCode(One.ClassCode);
	    fflush(stdin);	                         // Nhap vao Ma Lop
		
		if(KiemTraClassCode(One.ClassCode) == 0)
		  {
		  	One.ClassCode = PhimTat(One.ClassCode);
		    gotoxy(54,10);
	  	    textcolor(7);
	  	    cout<<"                     ";
	  	    gotoxy(54,10);
	  	    cout<<One.ClassCode;
		  }
		
	   
	    if(KiemTraClassCode(One.ClassCode) == 0)
	      {
	      	if(Language == 1)
	  	    ToMau(98,10,"! Khong co trong danh muc",12);
	        if(Language == 2)
	  	    ToMau(98,10,"! Don't have in List",12);
	  	    if(Language == 3)
	  	    ToMau(98,10,"! Pas sur la liste",12);
	  	    
	  	    gotoxy(54,10);
	  	    textcolor(7);
	  	    cout<<"                     ";
	  	    goto xy;
	      }
	    else{ 
	 	    ToMau(98,10,"                         ",0);
	 	    if(Language == 1)
	 	    ToMau(98,10,"û Hoan thanh",10);
	 	    if(Language == 2)
	 	    ToMau(98,10,"û Complete",10);
	 	    if(Language == 3)
	 	    ToMau(98,10,"û Complete",10);
	 	    
	 	    ktMalop = 1;
	        }
	    XoaConTro();
	  }
	
	if(dung == 2)
	  {
	  	ktTenHV = 0;
	  	fflush(stdin);
	  	HienConTro();
	  	gotoxy(54,13);
	  	cout<<"                              ";
	  	ToMau(98,13,"                          ",0);
	  	textcolor(15);
	    gotoxy(54,13);
	    getline(cin,One.StudentName);
	    ChuanHoaName(One.StudentName);             // ten hoc vien
	    fflush(stdin);   
		
		if(TestName(One.StudentName) == 0)
		  {
		  	if(Language == 1)
		  	ToMau(98,13,"! Khong co ki tu dac biet",12);
		  	if(Language == 2)
		  	ToMau(98,13,"! Don't use special character",12);
		  	if(Language == 3)
		  	ToMau(98,13,"! I n'y pas de caracteres speciaux",12);
		  	
		  	ToMau(54,13,"                              ",0);
		  	goto xy;
		   } 
		if(Language == 1)
	    ToMau(98,13,"û Hoan thanh",10);   // Alt + 0251
	    if(Language == 2)
	    ToMau(98,13,"û Complete",10);   // Alt + 0251
	    if(Language == 3)
	    ToMau(98,13,"û Complete",10);   // Alt + 0251
	    
	    XoaConTro();
	    
	    ktTenHV = 1;
	  }   
	
	if(dung == 3)
	  {
	  	ktDMY = 0;
	  	
	  	HienConTro();
	  	gotoxy(54,16); 
		cout<<"        ";
	  	gotoxy(54,19);
		cout<<"        ";
		gotoxy(54,22);
		cout<<"        ";
	  	gotoxy(98,16); 
		cout<<"                            ";
	  	gotoxy(98,19);
		cout<<"                            ";
		gotoxy(98,22);
		cout<<"                            ";
		
		do{
        textcolor(15);
        gotoxy(54,16); 
		cout<<"        ";
	    gotoxy(54,16); 
	    string str;
	    cin>>str;
	    fflush(stdin);
	    for(int i=0 ; i<str.length() ; i++)
	       {
	       	if(str[i] < 48 or str[i] > 57)
	       	  {
	       	  	if(Language == 1)
	       	  	ToMau(98,16,"! Ngay khong ton tai",12);
	       	    if(Language == 2)
	       	  	ToMau(98,16,"! This day isn't exist",12);
	       	  	if(Language == 3)
	       	  	ToMau(98,16,"! La date n'existe pas'",12);
	       	  	
	       	  	textcolor(7);
		 	    gotoxy(54,16); 
		 	    cout<<"       "; 
		 	    goto xy;
			  }
		   }
		One.Day = 0;
	
		for(int i=0 ; i<str.length() ; i++)
		   	One.Day += (str[i]-48)*pow(10,str.length()-i-1);
		
		if(One.Day<1 or One.Day>31)           // Ngay
		  {
		  	if(Language == 1)
	       	ToMau(98,16,"! Ngay khong ton tai",12);
	       	if(Language == 2)
	       	ToMau(98,16,"! This day isn't exist",12);
	       	if(Language == 3)
	       	ToMau(98,16,"! La date n'existe pas'",12);
	       	
		  	textcolor(7);
		 	gotoxy(54,16); 
		 	cout<<"      "; 
		 	goto xy;
		  } 
		 else{
		 	ToMau(98,16,"        ",0);
		 	if(Language == 1)
		 	ToMau(98,16,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,16,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,16,"û Complete",10);
		   }
	    } while(One.Day<1 or One.Day>31);
	 
	    do{
yz:	    gotoxy(54,19);
		cout<<"       ";
		textcolor(15);
	    gotoxy(54,19);
	    
	    string str;
	    cin>>str;
	    fflush(stdin);
	    for(int i=0 ; i<str.length() ; i++)
	       {
	       	if(str[i] < 48 or str[i] > 57)
	       	  {
	       	  	if(Language == 1)
	       	  	ToMau(98,19,"! Thang khong ton tai",12);
	       	  	if(Language == 2)
	       	  	ToMau(98,19,"! This month isn't exist",12);
	       	  	if(Language == 3)
	       	  	ToMau(98,19,"! Le mois n'existe pas",12);
	       	  	
	       	  	textcolor(7);
		 	    gotoxy(54,19); 
		 	    cout<<"       "; 
		 	    goto yz;
			  }
		   }
		One.Month = 0;
	
		for(int i=0 ; i<str.length() ; i++)
		   	One.Month += (str[i]-48)*pow(10,str.length()-i-1);
		   	
		if(One.Month<1 or One.Month>12)       // Thang
		  {
		  	if(Language == 1)
	       	ToMau(98,19,"! Thang khong ton tai",12);
	       	if(Language == 2)
	       	ToMau(98,19,"! This month isn't exist'",12);
	       	if(Language == 3)
	       	ToMau(98,19,"! Le mois n'existe pas",12);
	       	
		 	gotoxy(54,19);
		 	textcolor(7);
		 	cout<<"       ";
		  } 
		 else{
		 	ToMau(98,19,"                     ",0);
		 	if(Language == 1)
		 	ToMau(98,19,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,19,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,19,"û Complete",10);
		  }
	    } while(One.Month < 1 or One.Month>12);
	
	    do{
n:	    gotoxy(54,22);
		cout<<"        ";
		textcolor(15);
	    gotoxy(54,22);
		string str;
	    cin>>str;
	    fflush(stdin);
	    
	    for(int i=0 ; i<str.length() ; i++)
	       {
	       	if(str[i] < 48 or str[i] > 57)
	       	  {
	       	  	if(Language == 1)
	       	    ToMau(98,22,"! Nam khong ton tai",12);
	       	    if(Language == 2)
	       	    ToMau(98,22,"! This month isn't exist'",12);
	       	    if(Language == 3)
	       	    ToMau(98,22,"! Le mois n'existe pas",12);
	       	  	textcolor(7);
		 	    gotoxy(54,22); 
		 	    cout<<"        "; 
		 	    goto n;
			  }
		   }
		One.Year = 0;
	
		for(int i=0 ; i<str.length() ; i++)
		   	One.Year += (str[i]-48)*pow(10,str.length()-i-1);
		   	
		if(One.Year<1900 or One.Year>2050)     // Nam
		  {
		  	if(Language == 1)
		  	ToMau(98,22,"! Nam khong phu hop",12);
		  	if(Language == 2)
		  	ToMau(98,22,"! Year isn't true'",12);
		  	if(Language == 1)
		  	ToMau(98,22,"! Decalage d'annee'",12);
		 	gotoxy(54,22);
		 	cout<<"        ";
		  }
		 else{
		 	ToMau(98,22,"                     ",0);
		 	if(Language == 1)
		 	ToMau(98,22,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,22,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,22,"û Complete",10);
		 } 
	    } while(One.Year < 1900 or One.Year>2050);
	
	    if(TestDateOfBirth(One.Day,One.Month,One.Year) == 0)
	      { 
	  	    ToMau(98,16,"                             ",0);
	  	    ToMau(98,19,"                             ",0);
	      	ToMau(98,22,"                             ",0);
	      	if(Language == 1)
	  	    ToMau(98,19,"! Ngay thang nam khong ton tai",12);
	  	    if(Language == 2)
	  	    ToMau(98,19,"! Date of birth isn't exist",12);
	  	    if(Language == 3)
	  	    ToMau(98,19,"! La date n'existe pas'",12);
	  	    gotoxy(54,16);
	  	    cout<<"        ";
	  	    gotoxy(54,19);
	  	    cout<<"        ";
	  	    gotoxy(54,22);
	  	    cout<<"        ";
	  	    goto xy; 
	      }
	    else{
	 	    ToMau(98,16,"                             ",0);
	  	    ToMau(98,19,"                             ",0);
	  	    ToMau(98,22,"                             ",0);
	  	    if(Language == 1)
	  	        ToMau(98,19,"û Hoan Thanh",10);
	  	    if(Language == 2)
	  	        ToMau(98,19,"û Complete",10);
	  	    if(Language == 3)
	  	        ToMau(98,19,"û Complete",10);
	  	    
	  	    ktDMY = 1;
	       }
	       
	    XoaConTro();
	  }

	
	if(dung == 4)
	  {
	  	ktDTB = 0;
	  	One.DTBTL = 0;
	  	
	  	HienConTro();
	  	
	  	gotoxy(54,25);
		cout<<"                  ";
		ToMau(98,25,"                                      ",0);
		
		textcolor(15);
	    gotoxy(54,25);
	    string str;
	    cin>>str;
	    fflush(stdin);
	    
	    int dau = 0;
	    int diem = 0;
	    for(int i=0 ; i<str.length() ; i++)
	        if(str[i] == 44 or str[i] == 46 or str[i] >= 48 and str[i] <= 57 )
	          {
	          	if(str[i] == 44 or str[i] == 46)
	          	  	dau ++;  
			  }
			 else{
			 	if(Language == 1)
			 	  {
			 	  	ToMau(54,25,"                                   ",0);
					ToMau(98,25,"! Khong chua ki tu dac biet",12);
				   }
			 	  	
				if(Language == 2)
				  {
				  	ToMau(54,25,"                                   ",0);
				  	ToMau(98,25,"! Don't use special character",12);
				  }
			 	  	
				if(Language == 3)
				  {
				  	ToMau(54,25,"                                   ",0);
					ToMau(98,25,"! I n'y pas de caracteres speciaux",12);
				  }
			 	  	 	  	
			    goto xy;
			 }
		if(dau >= 2)
		  {
		  	if(Language == 1)
		  	  {
		  	  	ToMau(54,25,"                                   ",0);
		  	  	ToMau(98,25,"! Khong dung nhieu ki tu dac biet",12);
			  }			 	
		
			if(Language == 2)
			  {
			  	ToMau(54,25,"                                   ",0);
			  	ToMau(98,25,"! Don't use many special character",12);
			  }			 	
			 	  		
			if(Language == 3)
			  {
			  	ToMau(54,25,"                                         ",0);
			  	ToMau(98,25,"! Ne pas utiliser de caracteres speciaux",12);
			  }    
		        
			goto xy;	
		  }
		  
		if(str[0]!=44 and str[0]!=46 and str[1]!=44 and str[1]!=46)
		  {
		  	if(Language == 1)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
		  	  	ToMau(98,25,"! Diem nam trong khoang: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 2)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Score is in: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 3)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Le score a environ: 0 ó...ó 4 ",12);
			  }
			  
		 	goto xy;
		  }
        if(dau == 1)  
          {
          	One.DTBTL = (str[0] - 48);
          	
			for(int i=2 ; i<str.length() ; i++)
                One.DTBTL += (str[i] - 48)/pow(10,i-1);
		  }
	     else
	        One.DTBTL = str[0] - 48;
//		cin>>One.DTBTL;   
        
		if(One.DTBTL<0 or One.DTBTL>4)  
		  {
		  	if(Language == 1)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
		  	  	ToMau(98,25,"! Diem nam trong khoang: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 2)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Score is in: 0 ó...ó 4 ",12);
			  }
		  	
		  	if(Language == 3)
		  	  {
		  	  	ToMau(54,25,"                                         ",0);
				ToMau(98,25,"! Le score a environ: 0 ó...ó 4 ",12);
			  }
			  
		 	goto xy;
		  } 
		 else{
		 	ToMau(98,25,"                                          ",0);
		 	if(Language == 1)
		 	ToMau(98,25,"û Hoan thanh",10);
		 	if(Language == 2)
		 	ToMau(98,25,"û Complete",10);
		 	if(Language == 3)
		 	ToMau(98,25,"û Complete",10);
		 	
		 	ktDTB = 1;
		 }
	        
	    XoaConTro();
	  }
	
	if(dung == 5)
	  {
	  	textcolor(7);
	  	return ; 
	  }
	
	if(dung == 6)
	  {
	  	textcolor(7);
	  	ktDMY = 0;
	  	ktDTB = 0;
	  	ktMalop = 0;
	  	ktTenHV = 0;
	  	
	  	gotoxy(54,16); 
		cout<<"        ";
	  	gotoxy(54,19);
		cout<<"        ";
		gotoxy(54,22);
		cout<<"        ";
	  	gotoxy(98,16); 
		cout<<"                        ";
	  	gotoxy(98,19);
		cout<<"                        ";
		gotoxy(98,22);
		cout<<"                         ";
		gotoxy(54,10);
	  	cout<<"                        ";
		gotoxy(98,10);
	  	cout<<"                         ";
	  	gotoxy(54,13);
	  	cout<<"                        ";
		gotoxy(98,13);
	  	cout<<"                         ";
	  	gotoxy(54,25);
	  	cout<<"                         ";
		gotoxy(98,25);
	  	cout<<"                   	             ";
	  } 
	
	if(dung == 7) 
	  {
	  	if(ktMalop + ktTenHV + ktDMY + ktDTB == 4 )
      	    goto zt;
      	else{
      		if(Language == 1)
      		ToMau(120,26,"Chua du thong tin de luu!",14);
      		if(Language == 2)
      		ToMau(120,26,"Don't have enough informations to save!",14);
      		if(Language == 3)
      		ToMau(120,26,"Pas assez d'informations pour sauvegarder!",14);
      		
      		Sleep(2000);
      		ToMau(120,26,"                         ",7);
		  }
	  }
	   
	One.ThuDen = "";
	One.ThuGui = "";  
	goto xy;
    
zt:	int choose;

    choose = MouseEventToYesOrNoAddAccount(380,270,590,515,    825,710,590,515);
	
	if(choose == 1)
	  {	
	  	One.StudentPass = CreateStudentPassAuto(One.StudentName,One.Day,One.Month);   // Tao StudentPassAuto (quan trong)
	  	
	  	One.StudentCode = CreateFixStudentCode(One.ClassCode,One.StudentName,One.StudentCode);    // Tao StudentCode (quan trong)
	    
	    if(One.DTBTL >= 3.6)
	    One.HocLuc = "Xuat Sac";                      // Xac dinh Hoc Luc
	     else
	      if(One.DTBTL >= 3.2)
             One.HocLuc = "Gioi";
	       else{
	  	    if(One.DTBTL >= 2.5)
	  	       One.HocLuc = "Kha";
	  		 else{
	  	 	  if(One.DTBTL >=2.0)
	  	 	     One.HocLuc = "TB";
	  	 	   else
	  	 	     One.HocLuc = "Yeu";
		     }
	       }
	    
	    int dem = 0;
	    ofstream fileOutput1;
	    ofstream fileOutput2;
	    ofstream fileOutput3;
	    ofstream fileOutput4;
	    ofstream fileOutput5;
	
	    fileOutput1.open(file,ios::out);
	    fileOutput2.open(fileStudentName,ios::out);	
	    fileOutput3.open(fileStudentPass,ios::out);
	    fileOutput4.open(fileGuiThuCuaStudent,ios::out);
	    fileOutput5.open(fileHopThuDenCuaStudent,ios::out);
	
	    for(Node *p=l.Head ; p!=NULL ;p=p->Next)
	       {
	       	dem++;
	       	
	   	    if(dem != STT)
	   	      {
	   	  	    fileOutput1<<p->data.ClassCode<<" ";
	   	  	    fileOutput1<<p->data.StudentCode<<" ";
	   	  	    fileOutput2<<Encrypt(p->data.StudentName)<<"\n";
	   	  	    fileOutput1<<p->data.Day<<" ";
	   	  	    fileOutput1<<p->data.Month<<" ";
	   	  	    fileOutput1<<p->data.Year<<" ";
	   	  	    fileOutput1<<p->data.DTBTL<<"\n";
			    fileOutput3<<Encrypt(p->data.StudentPass)<<"\n";
			    fileOutput4<<p->data.ThuGui<<"\n";	  	
			    fileOutput5<<p->data.ThuDen<<"\n";	  	
		      }
		     else{
		        Gan(p->data,One);
		        
		        fileOutput1<<p->data.ClassCode<<" ";
	   	  	    fileOutput1<<p->data.StudentCode<<" ";
	   	  	    fileOutput2<<Encrypt(p->data.StudentName)<<"\n";
	   	  	    fileOutput1<<p->data.Day<<" ";
	   	  	    fileOutput1<<p->data.Month<<" ";
	   	  	    fileOutput1<<p->data.Year<<" ";
	   	  	    fileOutput1<<p->data.DTBTL<<"\n";
			    fileOutput3<<Encrypt(p->data.StudentPass)<<"\n";
			    fileOutput4<<p->data.ThuGui<<"\n";	  	
			    fileOutput5<<p->data.ThuDen<<"\n";
		      }
	       }
	       
	    fileOutput1.close();
	    fileOutput2.close();
	    fileOutput3.close();
	    fileOutput4.close();
	    fileOutput5.close();
		   
	    PrintOneTranscript(One);
		
		int x = MouseEventToButtonBack(1045,910,200,110);
		
		if(x == 1)
		  {
		  	textcolor(7);
		  	PrintEmpty();
		  	goto m;
		  }	  
	  }
	  else{
	  	textcolor(7);
//	  	HienConTro();
        ToMau(50,25,"                                           ",0);
	                                                                     
	    ToMau(35,27,"               ",0);
	    ToMau(35,28,"               ",0);
	    ToMau(35,29,"               ",0);
	    ToMau(35,30,"               ",0);
	    ToMau(35,31,"               ",0);
	                                                                       
	    ToMau(90,27,"               ",0);
	    ToMau(90,28,"               ",0);
	    ToMau(90,29,"               ",0);
	    ToMau(90,30,"               ",0);
	    ToMau(90,31,"               ",0);
	  	goto xy;
	  }		
	
}

//==============================================================================================================================
//==============================================================================================================================

void HoanVi(Transcript &a,Transcript &b)
{
	Transcript temp;	
	Gan(temp,a);
	Gan(a,b);
	Gan(b,temp);
}

string ReverseStudentName(string studentname)
{
    string str="";
	stack<string> Stack;
	for(int i=0;i<studentname.length();i++)
	   {
	   	if(studentname[i] == ' ')
	   	  {
	   	  	Stack.push(str);
	   	  	str = "";
		  }
		if(i == studentname.length()-1)
		  {
		  	str += studentname[i];
		  	Stack.push(str);
		  	str="";
		  }
		 else
	   	  str += studentname[i];
	   }
	while(!Stack.empty())
	     {
	     	str += Stack.top();
	     	Stack.pop();
		 }
	return str;
}

void GanList(List &l1,List l)        // Tao ra List l1 bang list l
{
	for(Node *p=l.Head; p!=NULL ; p=p->Next)
	   	AddTail(l1,p->data);
}

void GanList2(List2 &l2,List l)        // Tao ra List l2 bang list l
{
	int dem = 0;
	for(Node *p=l.Head; p!=NULL ; p=p->Next)
	   {
	   	AddTail2(l2,p->data);
	   	dem++;
		} 	   	
}

void BubbleSortToName(List &l)
{
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	    for(Node *q=p->Next; q!=NULL ; q=q->Next)
	        if(ReverseStudentName(p->data.StudentName).compare(ReverseStudentName(q->data.StudentName)) == 1 or ReverseStudentName(p->data.StudentName).compare(ReverseStudentName(q->data.StudentName)) == 0)
               HoanVi(p->data,q->data);
               
}

void BubbleSortToScore(Transcript Array[],int left,int StudentAmount)
{
	for(int i=left ; i<StudentAmount-1 ; i++)
	    for(int j=i+1 ; j<StudentAmount ; j++)
	       	if(Array[i].DTBTL <= Array[j].DTBTL)
	       	   HoanVi(Array[i],Array[j]);
	       	   
}

void BubbleSortToClass(Transcript Array[],int StudentAmount)
{
	for(int i=0 ; i<StudentAmount-1 ; i++)
	for(int j=i+1 ; j<StudentAmount ; j++)
	    if(Array[i].ClassCode.compare(Array[j].ClassCode) == 1 )
	       	HoanVi(Array[i],Array[j]);
}

void BubbleSortToClassCode(List &l)
{
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	    for(Node *q=p->Next ; q!=NULL ; q=q->Next)
	        if(p->data.ClassCode.compare(q->data.ClassCode) == 1 or p->data.ClassCode.compare(q->data.ClassCode) == 0)
	           HoanVi(p->data,q->data);
}


void SortClassAndNameByBubbleSort(List &l)     // ham sort ca ma lop va ten hoc vien thanh 1 danh sach thong nhat
{
	BubbleSortToClassCode(l);
	
	List listdacbiet;                     // khoi tao listdacbiet
	Init(listdacbiet);
	
	Node *batdau = l.Head;                // Node q danh dau lai vi tri khoi dau cua listdacbiet
	Gan(batdau->data,l.Head->data);       // khoi tao vi tri bat dau
	  
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	if(p == l.Tail)
	   	  {
	   	  	AddTail(listdacbiet,p->data);
	   	  	
	   	  	BubbleSortToName(listdacbiet);
	   	 	
	   	 	for(Node* i=l.Head ; i != NULL ; i=i->Next)    // Danh sach l can duoc gan lai thong qua listdacbiet
	   	 	   {
	   	 	   	if(i->data.ClassCode == batdau->data.ClassCode)
	   	 	   	  {
	   	 	   	  	while(listdacbiet.Head != NULL)
	   	 	   	  	     {
	   	 	   	  	     	Gan(i->data,listdacbiet.Head->data);
	   	 	   	  	     	DelHead(listdacbiet);                         // dung xong giai phong bo nho cua listdacbiet luon
	   	 	   	  	     	i=i->Next;
						 }
					break;
				  }
			   }
		  }
		 else
	   	  if(p->data.ClassCode == p->Next->data.ClassCode)
	   	     AddTail(listdacbiet,p->data);                                // Them vao cuoi listdacbiet
	   	   
	   	   else{
	   	     AddTail(listdacbiet,p->data);    
			      
	   	 	 BubbleSortToName(listdacbiet);

	   	 	 for(Node *i=l.Head ; i != NULL ; i=i->Next)      // Danh sach l can duoc gan lai thong qua listdacbiet
	   	 	    {
	   	 	   	 if(i->data.ClassCode == batdau->data.ClassCode)
	   	 	   	   {
	   	 	   	  	while(listdacbiet.Head != NULL)
	   	 	   	  	     {
	   	 	   	  	     	Gan(i->data , listdacbiet.Head->data);
	   	 	   	  	     	DelHead(listdacbiet);                         // dung xong giai phong bo nho cua listdacbiet luon
	   	 	   	  	     	i=i->Next;
						 }
					break;     // break ra khoi vong for
				   }
			    }
			   
	   	 	 batdau = p->Next;
			 Gan(batdau->data,p->Next->data);      // tao lai vi tri bat dau 
	   	 	}
	   	
	   }

}

void SortClassAndDTBTLByBubbleSort(Transcript Array[],int StudentAmount)
{
	BubbleSortToClass(Array,StudentAmount);
	
	int note1 = 0;
	int note2 = 0;
	
	for(int i=0 ; i<StudentAmount ; i++)
	   {
	   	if(i == StudentAmount - 1)
	   	  {
	   	  	BubbleSortToScore(Array,note1,StudentAmount);
	   	  	break;
			 }
		else
		if(Array[i].ClassCode != Array[i+1].ClassCode)
		  {
		  	note2 = i+1;
		  	BubbleSortToScore(Array,note1,note2);
		  	note1 = i+1;
		  }	   
	   }
}

void SortClassAndDTBTLBySelectionSort(Transcript Array[],int StudentAmount)
{
	BubbleSortToClass(Array,StudentAmount);
	
	int note1 = 0;
	int note2 = 0;
	
	for(int i=0 ; i<StudentAmount ; i++)
	   {
	   	if(i == StudentAmount - 1)
	   	  {
	   	  	SelectionSortToScore(Array,note1,StudentAmount);
	   	  	break;
			 }
		else
		if(Array[i].ClassCode != Array[i+1].ClassCode)
		  {
		  	note2 = i+1;
		  	SelectionSortToScore(Array,note1,note2);
		  	note1 = i+1;
		  }	   
	   }
}

void SortClassAndDTBTLByQuickSort(Transcript Array[],int StudentAmount)
{
	QuickSortToClass(Array,0,StudentAmount-1);
	
	int note1 = 0;
	int note2 = 0;
	
	for(int i=0 ; i<StudentAmount ; i++)
	   {
	   	if(i == StudentAmount - 1)
	   	  {
	   	  	QuickSortToScore(Array,note1,StudentAmount-1);
	   	  	break;
			 }
		else
		if(Array[i].ClassCode != Array[i+1].ClassCode)
		  {
		  	note2 = i+1;
		  	QuickSortToScore(Array,note1,note2);
		  	note1 = i+1;
		  }	   
	   }
}

void SortClassAndDTBTLByRadixSort(Transcript Array[],int StudentAmount)
{
	QuickSortToClass(Array,0,StudentAmount-1);
	
	int note1 = 0;
	int note2 = 0;
	
	for(int i=0 ; i<StudentAmount ; i++)
	   {
	   	if(i == StudentAmount - 1)
	   	  {
	   	  	RadixSortToScore2(Array,note1,StudentAmount);
	   	  	break;
			 }
		else
		if(Array[i].ClassCode != Array[i+1].ClassCode)
		  {
		  	note2 = i+1;
		  	RadixSortToScore2(Array,note1,note2);
		  	note1 = i+1;
		  }	   
	   }
}

void SelectionSortToName(List &l)
{
	for(Node *p=l.Head ; p!= l.Tail ; p=p->Next)
	   {
	   	Node *min = p;
	   	string MIN = ReverseStudentName(p->data.StudentName);
	   	
	   	for(Node *q=p->Next ; q!=NULL ; q=q->Next)
	   	    if(ReverseStudentName(q->data.StudentName).compare(MIN) == -1 or ReverseStudentName(q->data.StudentName).compare(MIN) == 0)
	   	      {
	   	      	MIN = ReverseStudentName(q->data.StudentName);
	   	      	min = q;
			  }
                            
        HoanVi(p->data,min->data);
	   }
}


void SelectionSortToClassCode(List &l)
{
	for(Node *p=l.Head ; p!= l.Tail ; p=p->Next)
	   {
	   	Node *min = p;
	   	string MIN = p->data.ClassCode;
	   	
	   	for(Node *q=p->Next ; q!=NULL ; q=q->Next)
	   	    if(q->data.ClassCode.compare(MIN) == -1 )
	   	      {
	   	      	MIN = q->data.ClassCode;
	   	      	min = q;
			  }
                    
        HoanVi(p->data,min->data);
	   }
}



void SortClassAndNameBySelectionSort(List &l)     // ham sort ca ma lop va ten hoc vien thanh 1 danh sach thong nhat
{
	SelectionSortToClassCode(l);
	
	List listdacbiet;                     // khoi tao listdacbiet
	Init(listdacbiet);
	
	Node *batdau = l.Head;                // Node q danh dau lai vi tri khoi dau cua listdacbiet
	Gan(batdau->data,l.Head->data);       // khoi tao vi tri bat dau
	  
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	if(p == l.Tail)
	   	  {
	   	  	AddTail(listdacbiet,p->data);
	   	  	
	   	  	SelectionSortToName(listdacbiet);
	   	 	
	   	 	for(Node* i=l.Head ; i != NULL ; i=i->Next)             // Danh sach l can duoc gan lai thong qua listdacbiet
	   	 	   {
	   	 	   	if(i->data.ClassCode == batdau->data.ClassCode)
	   	 	   	  {
	   	 	   	  	while(listdacbiet.Head != NULL)
	   	 	   	  	     {
	   	 	   	  	     	Gan(i->data,listdacbiet.Head->data);
	   	 	   	  	     	DelHead(listdacbiet);                         // dung xong giai phong bo nho cua listdacbiet luon
	   	 	   	  	     	i=i->Next;
						 }
					break;
				  }
			   }
		  }
		 else
	   	  if(p->data.ClassCode == p->Next->data.ClassCode)
	   	     AddTail(listdacbiet,p->data);                                // Them vao cuoi listdacbiet
	   	   
	   	   else{
	   	     AddTail(listdacbiet,p->data);    
			      
	   	 	 SelectionSortToName(listdacbiet);

	   	 	 for(Node *i=l.Head ; i != NULL ; i=i->Next)      // Danh sach l can duoc gan lai thong qua listdacbiet
	   	 	    {
	   	 	   	 if(i->data.ClassCode == batdau->data.ClassCode)
	   	 	   	   {
	   	 	   	  	while(listdacbiet.Head != NULL)
	   	 	   	  	     {
	   	 	   	  	     	Gan(i->data , listdacbiet.Head->data);
	   	 	   	  	     	DelHead(listdacbiet);                         // dung xong giai phong bo nho cua listdacbiet luon
	   	 	   	  	     	i=i->Next;
						 }
					break;     // break ra khoi vong for
				   }
			    }
			   
	   	 	 batdau = p->Next;
			 Gan(batdau->data,p->Next->data);      // tao lai vi tri bat dau 
	   	 	}
	   	
	   }

} 


void QuickSortToName(List &l)
{
    List l1, l2;
    Node *tag, *p;
    if(l.Head == l.Tail ) 
	   return;
	   
    Init(l1); 
	Init(l2);
	
    tag = l.Head;              // lay ra tag = l.Head va sau do co lap tag;
    l.Head = l.Head->Next;     // cap nhat lai l.Head
    tag->Next = NULL;          // co lap tag
    
    while( l.Head!= NULL )
	     {
           p = l.Head;
           l.Head = l.Head->Next;
           p->Next = NULL;
           if(ReverseStudentName(p->data.StudentName).compare(ReverseStudentName(tag->data.StudentName)) == -1 or ReverseStudentName(p->data.StudentName).compare(ReverseStudentName(tag->data.StudentName)) == 0) 
		      AddHead(l1,p->data);
            else 
			  AddHead(l2,p->data);
         }
         
    QuickSortToName(l1);               // goi de qui sap xep l1, l2
    QuickSortToName(l2);
    
    if(l1.Head != NULL )         // l1 k rong
	  {                  
       l.Head = l1.Head;         // lay Head cua l1 gan cho Head cua l;
       l1.Tail->Next = tag;
      }                        
     else                        // l1 rong
	   l.Head = tag;
     
    tag->Next = l2.Head;
    
    if(l2.Head!= NULL ) 
	   l.Tail = l2.Tail;
     else 
	   l.Tail = tag;
}

void QuickSortToClassCode(List &l)
{
    List l1, l2;
    Node *tag, *p;               // lay phan tu tag lam chot, nho hon tag cho vao l1, lon hon tag cho vao l2
    
    if(l.Head == l.Tail ) 
	   return;
	   
    Init(l1); 
	Init(l2);
	 
    tag = l.Head;                  // lay ra tag = l.Head va sau do co lap tag;   
    l.Head = l.Head->Next;         // cap nhat lai l.Head
    tag->Next = NULL;              // co lap tag    
    
    while( l.Head!= NULL )
	     {
           p = l.Head;             // lay ra p = l.Head va sau do co lap p;
           l.Head = l.Head->Next;
           p->Next = NULL;
           if(p->data.ClassCode.compare(tag->data.ClassCode) == -1 or p->data.ClassCode.compare(tag->data.ClassCode) == 0)    // so sanh p vs tag, tag lam chot
		      AddHead(l1,p->data);
            else 
			  AddHead(l2,p->data);
         }
         
    QuickSortToClassCode(l1);               // goi de qui sap xep l1, l2
    QuickSortToClassCode(l2);
    
    if(l1.Head != NULL )         // l1 k rong
	  {                  
       l.Head = l1.Head;         // lay Head cua l1 gan cho Head cua l;
       l1.Tail->Next = tag;
      }                        
     else                        // l1 rong
	   l.Head = tag;             // tra lai tag cho l.Head
     
    tag->Next = l2.Head;
    
    if(l2.Head!= NULL ) 
	   l.Tail = l2.Tail;       // lay Tail cua l2 gan cho Tail cua l
     else 
	   l.Tail = tag;
}

void SortClassAndNameByQuickSort(List &l)     // ham sort ca ma lop va ten hoc vien thanh 1 danh sach thong nhat
{
	QuickSortToClassCode(l);
	
	List listdacbiet;              // khoi tao listdacbiet
	Init(listdacbiet);
	
	Node *batdau = l.Head;             // Node q danh dau lai vi tri khoi dau cua listdacbiet
	Gan(batdau->data,l.Head->data);    // khoi tao vi tri bat dau
	  
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	if(p == l.Tail)
	   	  {
	   	  	AddTail(listdacbiet,p->data);
	   	  	
	   	  	QuickSortToName(listdacbiet);
	   	 	
	   	 	for(Node* i=l.Head ; i != NULL ; i=i->Next)    // Danh sach l can duoc gan lai thong qua listdacbiet
	   	 	   {
	   	 	   	if(i->data.ClassCode == batdau->data.ClassCode)
	   	 	   	  {
	   	 	   	  	while(listdacbiet.Head != NULL)
	   	 	   	  	     {
	   	 	   	  	     	Gan(i->data,listdacbiet.Head->data);
	   	 	   	  	     	DelHead(listdacbiet);                         // dung xong giai phong bo nho cua listdacbiet luon
	   	 	   	  	     	i=i->Next;
						 }
					break;
				  }
			   }
		  }
		 else
	   	  if(p->data.ClassCode == p->Next->data.ClassCode)
	   	     AddTail(listdacbiet,p->data);                                // Them vao cuoi listdacbiet
	   	   
	   	   else{
	   	     AddTail(listdacbiet,p->data);    
			      
	   	 	 QuickSortToName(listdacbiet);

	   	 	 for(Node *i=l.Head ; i != NULL ; i=i->Next)      // Danh sach l can duoc gan lai thong qua listdacbiet
	   	 	    {
	   	 	   	 if(i->data.ClassCode == batdau->data.ClassCode)
	   	 	   	   {
	   	 	   	  	while(listdacbiet.Head != NULL)
	   	 	   	  	     {
	   	 	   	  	     	Gan(i->data , listdacbiet.Head->data);
	   	 	   	  	     	DelHead(listdacbiet);                         // dung xong giai phong bo nho cua listdacbiet luon
	   	 	   	  	     	i=i->Next;
						 }
					break;     // break ra khoi vong for
				   }
			    }
			   
	   	 	 batdau = p->Next;
			 Gan(batdau->data,p->Next->data);      // tao lai vi tri bat dau 
	   	 	}
	   	
	   }

}
//==============================================================================================================================
//==============================================================================================================================


void SelectionSortToScore(Transcript Array[],int left,int StudentAmount)
{
	for(int i=left ; i<StudentAmount-1 ; i++)
	   {
	   	float MAX = Array[i+1].DTBTL;
	   	int a;
	   	
	   	for(int j=i+1 ; j<StudentAmount ; j++)
	       	if(Array[j].DTBTL >= MAX)
	       	  {
	       	  	MAX = Array[j].DTBTL;
	       	  	a=j;
			  }
	    
		if(MAX >= Array[i].DTBTL)
		   HoanVi(Array[i],Array[a]);   	   
	   }
	    
}

void SelectionSortToClassCode(Transcript Array[],int StudentAmount)
{
	for(int i=0 ; i<StudentAmount-1 ; i++)
	   {
	   	string MIN = Array[i+1].ClassCode;
	   	int a;
	   	
	   	for(int j=i+1 ; j<StudentAmount ; j++)
	       	if(Array[j].ClassCode.compare(MIN) == -1)
	       	  {
	       	  	MIN = Array[j].ClassCode;
	       	  	a=j;
			  }
	    
		if(Array[i].ClassCode.compare(MIN) == -1 or Array[i].ClassCode.compare(MIN) == 0)
		   HoanVi(Array[i],Array[a]);   	   
	   }	
}

void QuickSortToScore(Transcript Array[],int left,int right)
{
	int i,j;

	if(left < right)
	  {
	  	i = left + 1;
	  	j = right;
		do{
			while(Array[i].DTBTL >= Array[left].DTBTL) 
			      i++;
			while(Array[j].DTBTL <  Array[left].DTBTL) 
			      j--;
			
			if(i < j) HoanVi(Array[i],Array[j]);
		} while(i < j);
		
		HoanVi(Array[left],Array[j]);
		
		if(left < j-1)  QuickSortToScore(Array,left,j-1);
		if(j+1 < right) QuickSortToScore(Array,j+1,right);
	  }
}

void QuickSortToClass(Transcript Array[],int left,int right)
{
	int i,j;

	if(left < right)
	  {
	  	i = left + 1;
	  	j = right;
		do{
			while(Array[i].ClassCode.compare(Array[left].ClassCode) == -1 or Array[i].ClassCode.compare(Array[left].ClassCode) == 0) 
			      i++;
			while(Array[j].ClassCode.compare(Array[left].ClassCode) == 1) 
			      j--;
			
			if(i < j) HoanVi(Array[i],Array[j]);
		} while(i < j);
		
		HoanVi(Array[left],Array[j]);
		
		if(left < j-1)  QuickSortToScore(Array,left,j-1);
		if(j+1 < right) QuickSortToScore(Array,j+1,right);
	  }
}


void RadixSortToScore(Transcript Array[],int StudentAmount,Transcript &One)
{
	Transcript Reverse[StudentAmount];
	
	for(int i=0;i<StudentAmount;i++)      // Nhân tat ca len 100 lan de tien tinh toan co so
		Array[i].DTBTL *= 100;
	    
	int AvT=1, Radix[10], CoSo=1, Max=0;
	Transcript Temp[StudentAmount];
	
	for(int i=0;i<StudentAmount;i++)
	    if(Array[i].DTBTL > Max) 
		   Max = Array[i].DTBTL;
	
	while(Max/CoSo > 0)
	     {
	
	     	for(int i=0;i<=9;i++)     // Khoi tao 
			    Radix[i] = 0;
			    
	     	for(int i=0;i<StudentAmount;i++)   // Tinh so chu so cua moi loai
	     	   {
				int x = Array[i].DTBTL/CoSo;  // Gan lai kieu int
				Radix[x%10] ++ ;
				}     	    
	     	 
	     	for(int i=1;i<=9;i++)        
			    Radix[i] += Radix[i-1];  // Ban chat cua mang Radix do là nó luu lai so luong khoang trong de dien vao mang Array va Temp
	
			if(AvT == 1)                 // neu = 1 chuyen tu mang A sang mang T
			   for(int i=StudentAmount-1;i>=0;i--)
			      {
			      	int x = Array[i].DTBTL/CoSo;		
			      	Gan(Temp[--Radix[x%10]] , Array[i]);
				  }       
			  else                      // neu = -1 chuyen tu mang T sang mang A
			   for(int i=StudentAmount-1;i>=0;i--)
			      {
			      	int x = Temp[i].DTBTL/CoSo;			   	
			      	Gan(Array[--Radix[(int)Temp[i].DTBTL/CoSo%10]] , Temp[i]);
				  }	       				  
			AvT = -AvT;
			CoSo *= 10;	 		    
		 }
		 	 
	if(AvT == -1)
	   for(int i=0;i<StudentAmount;i++)
	       Gan(Array[i] , Temp[i]);
	       
	for(int i=0;i<StudentAmount;i++)
	   {
	   	Gan(Reverse[StudentAmount-i-1] , Array[i]);   // Dao chuoi
		Reverse[StudentAmount-i-1].DTBTL /= 100;
	   }
	    
    PrintAllTranscriptByArrayNew(Reverse,StudentAmount,One);	   
}

void RadixSortToScore2(Transcript Array[],int left ,int StudentAmount)
{
	Transcript Reverse[StudentAmount];
	
	for(int i=left;i<StudentAmount;i++)      // Nhân tat ca len 100 lan de tien tinh toan co so
		Array[i].DTBTL *= 100;
	    
	int AvT=1, Radix[10], CoSo=1, Max=0;
	Transcript Temp[StudentAmount];
	
	for(int i=left;i<StudentAmount;i++)
	    if(Array[i].DTBTL > Max) 
		   Max = Array[i].DTBTL;
	
	while(Max/CoSo > 0)
	     {
	
	     	for(int i=0;i<=9;i++)     // Khoi tao 
			    Radix[i] = 0;
			    
	     	for(int i=left;i<StudentAmount;i++)   // Tinh so chu so cua moi loai
	     	   {
				int x = Array[i].DTBTL/CoSo;  // Gan lai kieu int
				Radix[x%10] ++ ;
				}     	    
	     	 
	     	for(int i=1;i<=9;i++)        
			    Radix[i] += Radix[i-1];  // Ban chat cua mang Radix do là nó luu lai so luong khoang trong de dien vao mang Array va Temp
	
			if(AvT == 1)                 // neu = 1 chuyen tu mang A sang mang T
			   for(int i=StudentAmount-1;i>=0;i--)
			      {
			      	int x = Array[i].DTBTL/CoSo;		
			      	Gan(Temp[--Radix[x%10]] , Array[i]);
				  }       
			  else                      // neu = -1 chuyen tu mang T sang mang A
			   for(int i=StudentAmount-1;i>=0;i--)
			      {
			      	int x = Temp[i].DTBTL/CoSo;			   	
			      	Gan(Array[--Radix[(int)Temp[i].DTBTL/CoSo%10]] , Temp[i]);
				  }	       				  
			AvT = -AvT;
			CoSo *= 10;	 		    
		 }
		 	 
	if(AvT == -1)
	   for(int i=0;i<StudentAmount;i++)
	       Gan(Array[i] , Temp[i]);
	       
	for(int i=left;i<StudentAmount;i++)
	   {
	   	Gan(Reverse[StudentAmount-i-1] , Array[i]);   // Dao chuoi
		Reverse[StudentAmount-i-1].DTBTL /= 100;
	   }
	
	for(int i=left;i<StudentAmount;i++)
	   	Gan(Array[i] , Reverse[i]);
	    	   
}
//==============================================================================================================================
//==============================================================================================================================

void FindStudentByPartOfCode(List l,string code,int &wrong)
{
	int dem = 0;
	wrong = -1;
	
	int y = 11;
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	int i;
	   	Transcript One;
	   	
	   	i = p->data.StudentCode.find(code);
	   	if(i != -1)
	   	  {
	   	    Gan(One,p->data);
	   	  	dem++;
	   	  	PrintOneTranscriptToFind(One,code,"a",y);
	   	  	y+=2;
	   	  	wrong = 0;;
		  }
	   	   
	   }
    if(wrong == 0)
      {
      	wrong = 1;
      	return ;
	  }
	
	

}

int FindStudentByPartOfName(List l,string name,string code,Transcript &One,int &wrong)
{
    Transcript Array[StudentAmount];
	
	int dem = 0;
	wrong = 1;
	
	int y = 11;
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	int i,j;
	   	
	   	i = p->data.StudentName.find(name);
	   	j = p->data.ClassCode.find(code);
	   	
	   	if(i != -1 and j != -1)
	   	  {
	   	    Gan(Array[++dem],p->data);
	   	    
	   	  	wrong = 0;
		  }	   	   
	   }
	   
    if(wrong == 1)
      	return 0;
 
	
	int Max = dem;

	int danhdau = 1;
    int vitritrang = 1;
	
	
b:	XoaConTro();
    textcolor(7);
    y = 11;
    dem = 0;
    
    
    for(int i=danhdau ; i<=Max ; i++)
    {
    PrintOneTranscriptToFind(Array[i],name,code,y);
    y += 2;
    dem++;
    
    if(i == Max)
    {
    textcolor(5);
    cout<<"\n\t\tÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    cout<<"\t\t                                                                               \n";
    break;
	}
    
    if(dem == 5 )
       break;
	}
    
    ToMau(12,15,"ÉÍ»",4);
	ToMau(12,16,"º º",4);
	ToMau(12,17,"º<º",4);
	ToMau(12,18,"º º",4);
	ToMau(12,19,"ÈÍ¼",4);

	ToMau(90,15,"ÉÍ»",4);
	ToMau(90,16,"º º",4);
	ToMau(90,17,"º>º",4);
	ToMau(90,18,"º º",4);
	ToMau(90,19,"ÈÍ¼",4);
	
	int sotrang=1;
	while(5*sotrang < Max)
	     	sotrang++;
	
	if(Language == 1)
	ToMau(18,23,"Trang:  /",10);
	if(Language == 2 or Language == 3)
	ToMau(18,23,"Page :  /",10);
	
	ToMauInt(25,23,vitritrang,14);
	ToMauInt(27,23,sotrang,14);
	gotoxy(18,25);
	textcolor(10);
	
	if(Language == 1)
	{
	cout<<"Co    ket qua duoc tim thay!";	
	ToMauInt(21,25,Max,14);
	}
	
	if(Language == 2)
	{
	cout<<"Have    results to found!";	
	ToMauInt(23,25,Max,14);
	}
	
	if(Language == 3)
	{
	cout<<"Oui    les resultats etre trouve!";	
	ToMauInt(22,25,Max,14);
	}
	
	
    int soluong = Max - (vitritrang-1)*5;
    
    if(soluong >= 5)
       soluong = 5;                                                                                                                                // 200-370
    
c:  int choose = MouseEventToChooseFindStudentName(name,  code , soluong,  700,130,180,110,  700,130,235,200,  700,130,270,236,  700,130,305,271,  700,130,340,306,  700,130,365,341,  105,90,340,265,  730,715,340,265,  945,815,195,110  );
    
    if(choose == 1)
      {
      	return 1;
	  }
	if(choose == 2)
	  {
	  	Gan(One,Array[5*(vitritrang-1)+choose-1]);
	  	PrintOneTranscript(One);
	  	return 2;
	  }
	if(choose == 3)
	  {
	  	Gan(One,Array[5*(vitritrang-1)+choose-1]);
	  	PrintOneTranscript(One);
	  	return 3;
	  }
	if(choose == 4)
	  {
	  	Gan(One,Array[5*(vitritrang-1)+choose-1]);
	  	PrintOneTranscript(One);
	  	return 4;
	  }
	if(choose == 5)
	  {
	  	Gan(One,Array[5*(vitritrang-1)+choose-1]);
	  	PrintOneTranscript(One);
	  	return 5;
	  }
	if(choose == 6)
	  {
	  	Gan(One,Array[5*(vitritrang-1)+choose-1]);
	  	PrintOneTranscript(One);
	  	return 6;
	  }
	if(choose == 7)
	  {
	  	if(danhdau != 1)
	  	  {
	  	  	danhdau -= 5;
	  	  	vitritrang --;
	  	  	textcolor(7);
	  	  	goto b;
		  }
		 else
		   goto b;	  	   	  	
	  }
	if(choose == 8)
	  {
	  	if(danhdau < Max - 4)
	  	  {
	  	  	danhdau += 5;
	  	  	vitritrang ++;
	  	  	textcolor(7);
	  	  	goto b;
		  }
		 else
		    goto b;
	  }
	if(choose == 9)
	  {
	  	textcolor(7);
	  	return 9;
	  }	      
}

//void FindStudentByName(List l,Transcript &One,string name,int &wrong)
//{
//	int temp = 0;
//	
//	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
//	    if(name == p->data.StudentName)
//	      {
//	      	temp = 1;
//	      	PrintOneTranscript(p->data);
//	      	Gan(One,p->data);
//	      	break;
//		  }	 
//	if(temp == 0)
//	   {
//	    ToMau(35,11,"! Khong co ten nay trong Danh sach",4); 
//	    wrong = 1;
//	   }
//	
//}

void FindStudentByStudentCode(List l,Transcript &One,string code,int &wrong)
{
	int temp = 0;
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	
	   	int find = code.find(p->data.StudentCode); 
	   	
	   	if(find != -1)
	      {
	      	temp = 1;
	      	PrintOneTranscript(p->data);
	      	Gan(One,p->data);
	      	break;
		  }	
	   }
	     
	if(temp == 0)
	   {
	   	if(Language == 1)
	    ToMau(32,11,"! Khong ton tai Ma hoc vien nay trong Danh sach ",12);
	    if(Language == 2)
	    ToMau(32,11,"! This code of student isn't exist in catalog ",12);
	    if(Language == 3)
	    ToMau(32,11,"! N'existe pas code etudiant dans la litse ",12);
	    wrong = 1;
	   }
	
	
}

//==============================================================================================================================
//==============================================================================================================================

void DeleteOneStudent(List &l,string code)
{
    
	ofstream fileOutput1;
	ofstream fileOutput2;
	ofstream fileOutput3;
	ofstream fileOutput4;
	ofstream fileOutput5;
	ofstream fileOutput6;
	
	fileOutput1.open(file,ios::out);
	fileOutput2.open(fileStudentName,ios::out);	
	fileOutput3.open(fileStudentPass,ios::out);
	fileOutput4.open(fileGuiThuCuaStudent,ios::out);
	fileOutput5.open(fileHopThuDenCuaStudent,ios::out);
	fileOutput6.open(fileLostNumber,ios::out);
	
	if(l.Head->data.StudentCode == code)
	{
	string str="";
	int leng = l.Head->data.StudentCode.length();
	for(int i=leng-4 ; i<leng ; i++)
	    str += l.Head->data.StudentCode[i];
	
	fileOutput6<<str;
	
	DelHead(l);
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	fileOutput1<<p->data.ClassCode<<" ";
	   	fileOutput1<<p->data.StudentCode<<" ";
	  	fileOutput2<<Encrypt(p->data.StudentName)<<"\n";
	   	fileOutput1<<p->data.Day<<" ";
	   	fileOutput1<<p->data.Month<<" ";
	   	fileOutput1<<p->data.Year<<" ";
	   	fileOutput1<<p->data.DTBTL<<"\n";
		fileOutput3<<Encrypt(p->data.StudentPass)<<"\n";
		fileOutput4<<p->data.ThuGui<<"\n";	  	
		fileOutput5<<p->data.ThuDen<<"\n";
	   }
	
	}
	else{
	Node *q;
	
	for(Node *p=l.Head ; p!=NULL ;p=p->Next)
	   {
	   	
	   	if(p->data.StudentCode != code)
	   	  {
	   	  	fileOutput1<<p->data.ClassCode<<" ";
	   	  	fileOutput1<<p->data.StudentCode<<" ";
	   	  	fileOutput2<<Encrypt(p->data.StudentName)<<"\n";
	   	  	fileOutput1<<p->data.Day<<" ";
	   	  	fileOutput1<<p->data.Month<<" ";
	   	  	fileOutput1<<p->data.Year<<" ";
	   	  	fileOutput1<<p->data.DTBTL<<"\n";
			fileOutput3<<Encrypt(p->data.StudentPass)<<"\n";
			fileOutput4<<p->data.ThuGui<<"\n";	  	
			fileOutput5<<p->data.ThuDen<<"\n";	  	
		  }
		 else{
		    string str="";
		    int leng = p->data.StudentCode.length();
		    
	        for(int i=leng-4 ; i<leng ; i++)
	            str += p->data.StudentCode[i];
	
	       fileOutput6<<str;
		  
		   StudentAmount--;
		   q->Next = p->Next;
		   delete p;
		 }
		q=p;
	   }
    }
    
	fileOutput1.close();
	fileOutput2.close();
	fileOutput3.close();
	fileOutput4.close();
	fileOutput5.close();
	fileOutput6.close();

}

//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================

void LogIn(List &l)
{
	int wrong = 0;
	int temp = 0;
	string PASS;
	string NAME;
	
a:  textcolor(14);

    cout<<"\n\n\n";
    cout<<"              ²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n";
    cout<<"              ²ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍo0oÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»²                           ²²²²²²²²²²²²²²²²²²²\n";
    cout<<"              ²º                    DANG NHAP TAI KHOAN                 º²                           ²ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»²\n";
    cout<<"              ²ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹²                           ²º               º²\n";
    cout<<"              ²º               :                                        º²                           ²º      DANG     º²\n";                                             
	cout<<"              ²ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶²                           ²º      NHAP     º²\n";
	cout<<"              ²º               :                                        º²                           ²º               º²\n";
	cout<<"              ²ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍo0oÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼²                           ²ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼²\n";
	cout<<"              ²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²                           ²²²²²²²²²²²²²²²²²²²";
	
	ToMau(37,6,"DANG NHAP TAI KHOAN",12);
	ToMau(102,14,"²²²²²²²²²²²²²²²²²²²",14);
    ToMau(102,15,"²ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»²",14);
    ToMau(102,16,"²º               º²",14);                                             
	ToMau(102,17,"²º     THOAT     º²",14);
	ToMau(102,18,"²º  CHUONG TRINH º²",14);
	ToMau(102,19,"²º               º²",14);
	ToMau(102,20,"²ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼²",14);
	ToMau(102,21,"²²²²²²²²²²²²²²²²²²²",14);
	
	ToMau(102, 5,"²²²²²²²²²²²²²²²²²²²",2);
    ToMau(102, 6,"²                 ²",2);
    ToMau(102, 7,"²                 ²",2);                                             
	ToMau(102, 8,"²                 ²",2);
	ToMau(102, 9,"²                 ²",2);
	ToMau(102,10,"²                 ²",2);
	ToMau(102,11,"²                 ²",2);
	ToMau(102,12,"²²²²²²²²²²²²²²²²²²²",2);
	
	ToMau(102,14,"²²²²²²²²²²²²²²²²²²²",4);
    ToMau(102,15,"²                 ²",4);
    ToMau(102,16,"²                 ²",4);                                             
	ToMau(102,17,"²                 ²",4);
	ToMau(102,18,"²                 ²",4);
	ToMau(102,19,"²                 ²",4);
	ToMau(102,20,"²                 ²",4);
	ToMau(102,21,"²²²²²²²²²²²²²²²²²²²",4);
	
	ToMau(17,8,"Ten nguoi dung",14);
	ToMau(20,10,"Mat Khau",14);	
	
	ToMau(55,14,"Quen mat khau! Help!",10);
	gotoxy(1,1);
	XoaConTro();
	PrintFrame(11);
	
	int choose;
	int kt = 0;
	
c:	textcolor(7);
    if(wrong == 4)       // dem so lan sai
      {
      	gotoxy(10,15);
      	textcolor(15);
      	cout<<"OUT!";
      	exit(0);
	  }
    choose = MouseEventToButtonForLogIn(695,150,160,130,  695,150,191,161, 950,815, 195,110  ,950,815,350,265,  590,430,260,240   );
	
	if(choose == 1)
	{
	ToMau(34,8,"                             ",0);
    gotoxy(34,8);
	  
	HienConTro();  
	textcolor(15);
	fflush(stdin);
	getline(cin,NAME); 
	goto c;
    }
    
    if(choose == 2)
    {
    ToMau(34,10,"                             ",0);
    gotoxy(34,10);
	  
	HienConTro();  
	fflush(stdin);
	gotoxy(34,10);
//	textcolor(7);
	textcolor(255);
	cin>>PASS;
	goto c;
	}
	
	if(choose == 3)
	{
	if(USERADMIN(NAME) == 1 and PASSADMIN(PASS) == 1)     // Neu nhap mat khau Sai thi cho nhap lai, khong qua 3 lan
	   Direction = 2;
	 else{
	   
	   for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   	   if(NAME == p->data.StudentName)
	   	      if(PASS == p->data.StudentPass)
	   	        {
	   	        	Gan(Member,p->data);
	   	        	temp = 1;
	   	        	break;
				}
	   
	   if(temp == 1)
	      Direction = 1;	              
	    else{
	      
	      ToMau(20,20,"TAI KHOAN KHONG TON TAI. VUI LONG DANG NHAP LAI!",12);
	      Sleep(1000);
	      ToMau(20,20,"                                                ",12);
		  textcolor(15);
		  wrong++;
		  
	      goto c;
	    }        
     }
	}
   
   
   if(choose == 4)  //  button Thoat
    {
        PrintEmpty();
        End();
	    exit(0);
	}
   
   if(choose == 5)  // button Quen mat khau
     {
     	textcolor(7);
     	
     	TaskForFoolPeople(l);
     	goto a;
	 }
      
}

void TaskForFoolPeople(List &l)
{
	string maHV;
	int kt = 0;
	
a:	int choose = MouseEventForFoolPeople(730,395,335,265,  890,750,330,245,  1045,910,190,110, maHV);
	
	
	if(choose == 1)
	{
		textcolor(7);
		ToMau(65,17,"                      ",7);
		gotoxy(65,17);
		cin>>maHV;
		for(Node *p=l.Head ; p!=NULL ; p=p->Next )
		{
			if(maHV == p->data.StudentCode)
			  {
			  	kt = 1;
			  	
			  	int x = 0;
			  	ifstream fileInput(fileFoolPeople);
			  	
			  	int i=1;
			  	while(!fileInput.eof())
			  	{
			  	string str;
			  	getline(fileInput,str);
			  	
			  	if(str == maHV)
			  	{
			  	PrintEmpty();	
			  	x=1;
			  	break;
				}
				}
				
			  	if(x == 0)
			  	{
			  	fileInput.close();
			  	
	            ofstream fileOutput; // ghi ra file FoolPeople.txt  	
                fileOutput.open(fileFoolPeople,ios::app);
     	        
     	        fileOutput<<maHV<<"\n";
                fileOutput.close();
			   	break;	
				}
			  	
			  }
		}
		
	goto a;
	}
	if(choose == 2)
	{
		if(kt == 0)
		{
		ToMau(95,20,"Ma hoc vien khong ton tai!",12);
		Sleep(1000);
		ToMau(95,20,"                          ",7);
		goto a;
		}
		else{
			
		PrintEmpty();
		ToMau(45,17,"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿",5);
		ToMau(45,18,"³- Da gui thanh cong cho quan tri vien!...                                                       ³",14);
		ToMau(45,20,"³- De nghi Dong chi len phong quan tri vien de nhan lai thong tin Tai khoan tai P411, toa S11... ³",14);
		ToMau(45,22,"³- Dong chi mang theo The hoc vien de xac nhan va 50.000 VND le phi!...                          ³",14);
		ToMau(45,24,"³- Lan sau Dong chi nho rut kinh nghiem, khong nen de mat Tai khoan!...                          ³",14);
		ToMau(45,26,"³- Xin tran trong cam on!                                                                        ³",14);
		ToMau(45,28,"³                                                                   - Ban Quan Tri -             ³",6);
		ToMau(45,29,"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ",5);
		
		for(int i=18 ; i<=28 ; i++)
		   {
		   	ToMau(45,i,"³",5);
		   	ToMau(142,i,"³",5);
		   }
		
		int choose1 = MouseEventToButtonBack(1040,910,200,110);
		
		if(choose1 == 1)
		{
		return;
		}
		}
	}
	
	if(choose == 3)
	{
		return;
	}
	
}



//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================

void GuiThuChoStudent(List &l,Transcript Member,string str)
{
	
	ofstream fileOutput1;
	ofstream fileOutput2;
	
	fileOutput1.open(fileGuiThuCuaAdmin,ios::out);
	fileOutput2.open(fileHopThuDenCuaStudent,ios::out);
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	if(p->data.StudentCode != Member.StudentCode)
	   	  {
	   	  	fileOutput1<<Encrypt(p->data.StudentCode)<<"\n";
	   	  	fileOutput1<<Encrypt(p->data.ThuDen)<<"\n";
	   	  	fileOutput2<<Encrypt(p->data.ThuDen)<<"\n";
		  }
		else
		  {
		  	p->data.ThuDen = str;
		  	fileOutput1<<Encrypt(p->data.StudentCode)<<"\n";
	   	  	fileOutput1<<Encrypt(p->data.ThuDen)<<"\n";
	   	  	fileOutput2<<Encrypt(p->data.ThuDen)<<"\n";
	   	  	break;
		  }
	   }
	
	fileOutput1.close();
	fileOutput2.close();
}

void HopThuDenCuaStudent(List &l,Transcript Member)
{
	PrintEmpty();
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	    if(p->data.StudentCode == Member.StudentCode)
	      {
	      	Member.ThuDen = p->data.ThuDen;
	      	break;
		  }
	
	ToMau(30,12,"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»",2);
	ToMau(30,13,"º                                                        º",2);
	ToMau(30,14,"ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹",2);
	ToMau(30,15,"º                                                        º",2);
	ToMau(30,16,"º                                                        º",2);
	ToMau(30,17,"º                                                        º",2);
	ToMau(30,18,"º                                                        º",2);
	ToMau(30,19,"º                                                        º",2);
	ToMau(30,20,"º                                                        º",2);
	ToMau(30,21,"ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼",2);
	
	ToMau(55,13,"BAN QUAN TRI",14);
	
	if(Member.ThuDen == "" or Member.ThuDen == " ")
	   ToMau(60,18,"(rong)",7);
	int i=0;
	int x=32;
	int y=15;
	while(i <= Member.ThuDen.length() )
	     {
	     	if(x == 85)
	     	  {
	     	  	x = 32;
	     	  	y++;
			   }
	     	ToMauChar(x++,y,Member.ThuDen[i],15);
	     	i++;
		 }
		 
	getch();
}

void GuiThuChoAdmin(List &l,Transcript Member,string message)
{
	
	ToMau(40,30,"Ban co muon gui khong: ",14);
	int luachon;
	ToMau(40,31,"Nhap lua chon: ",14);
	cin>>luachon;
	
	if(luachon == 1)
	  {
	  	MessAmount ++;
	  	ofstream fileOutput1;
	  	ofstream fileOutput2;
	  	
	  	fileOutput1.open(fileGuiThuCuaStudent,ios::out);
	  	fileOutput2.open(fileHopThuDenCuaAdmin,ios::out);
	  	
	  	for(Node *p=l.Head ; p!=NULL ; p=p->Next )
	  	   {
	  	   	if(p->data.StudentCode != Member.StudentCode)
	  	   	  {
	  	   	  	fileOutput1<<Encrypt(p->data.ThuGui)<<"\n";
	  	   	  	fileOutput2<<Encrypt(p->data.StudentCode)<<"\n";
	  	   	  	fileOutput2<<Encrypt(p->data.ThuGui)<<"\n";
			  }
	  	   	if(p->data.StudentCode == Member.StudentCode) 
	          {
	      	    p->data.ThuGui = message;                          
	      	    fileOutput1<<Encrypt(p->data.ThuGui)<<"\n";
	      	    fileOutput2<<Encrypt(p->data.StudentCode)<<"\n";
	      	    fileOutput2<<Encrypt(p->data.ThuGui)<<"\n";
		      }
		   }
		fileOutput1.close();    
		fileOutput2.close();    
	  }
	if(luachon == 2)
	   return ; 
		
}

void HopThuDenCuaAdmin(List &l, HopThuDenAdmin Array[])
{
	ifstream fileInput;
	fileInput.open(fileHopThuDenCuaAdmin);
	int i=1;
	
	while(!fileInput.eof())
	     {
	     	getline(fileInput,Object.StudentCode);
	     	Object.StudentCode = Decrypt(Object.StudentCode);  // giai ma StudentCode trong file
	     	getline(fileInput,Object.ThuDen);
	     	Object.ThuDen = Decrypt(Object.ThuDen);            // giai ma Thu trong file
	     	
	     	int m = Object.ThuDen.length();
	        while(Object.ThuDen[m-1] == ' ')              // xoa dau " " neu co
	             {
	              Object.ThuDen.erase(Object.ThuDen.begin()+m-1);
	              m = Object.ThuDen.length();
		         }
		    if(!Object.ThuDen.empty())
		      {
		      	Array[i].StudentCode = Object.StudentCode;
		      	Array[i].ThuDen = Object.ThuDen;
		      	i++;
			  }
		       //cout<<" - "<<Object.StudentCode<<" : "<<Object.ThuDen<<"\n";
		 }
	fileInput.close();
	
}

void ReSetStudentPass(List &l)
{
	ofstream fileOuput;
	fileOuput.open(fileStudentPass,ios::out);
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
		string str = CreateStudentPassAuto(p->data.StudentName,p->data.Day,p->data.Month);
		fileOuput<<Encrypt(str)<<"\n";
	}
	
	fileOuput.close();
}



#endif
