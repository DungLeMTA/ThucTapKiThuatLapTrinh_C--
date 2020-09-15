#include<iostream>
#include<fstream>
#include<queue>
#include<stack>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<string>
#include "BaiTapKTLTUseArray.h"
//#include"HashFunction.cpp"
using namespace std;

#define file            "BaiTapKTLT.txt"
#define fileStudentName "BaiTapKTLTStudentName.txt"

#define MAX 20000

//Estimate  Uoc tinh
void resizeConsole(int width,int height)       // Ham thay doi kich co khung cmd voi tham so truyen vao la chieu rong va chieu cao
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left,r.top,width,height,TRUE);
}


void gotoxy(int x,int y)                      // Ham dich chuyen con tro den toa do x,y
{
	HANDLE hConsoleOuput;
	COORD Cursor_an_Pos = {x-1,y-1};
	hConsoleOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOuput, Cursor_an_Pos);
	//GetConsoleCursorInfo();
}

void textcolor(int x)                        // Khi goi ham nay tat ca Output phia sau se bi thay doi mau (255 mเu)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
//==============================================================================================================================//==============================================================================================================================
void ToMau(int x,int y,string str,int color1,int color2)  // Ham nay dung de to mau cho 1 doan code o toa do (x,y)
{
	gotoxy(x,y);        // dua con tro toi vi tri (x,y)
	textcolor(color1);   // setcolor cho no
	cout<<str;            // in ra dong ki tu voi mau chi dinh
	textcolor(color2);     // tro ve mau ban dau 
}

int KiemTraClassCode(string ClassCode)
{
	if(ClassCode == "ANHTTTK53") return 1;
	if(ClassCode == "BDATTTK53") return 1;
	if(ClassCode == "DTHK53")    return 1;
	if(ClassCode == "CNTT1K53")  return 1;
	if(ClassCode == "CNTT2K53")  return 1;
	if(ClassCode == "DTYSK53")   return 1;
	if(ClassCode == "PTK53")     return 1;
	if(ClassCode == "TLHQK53")   return 1;
	if(ClassCode == "TLPKK53")   return 1;
	if(ClassCode == "OT1K53")    return 1;
	if(ClassCode == "OT2K53")    return 1;
	if(ClassCode == "XDCTDBK53") return 1;
	if(ClassCode == "XDSBK53")   return 1;
	if(ClassCode == "VK1K53")    return 1;
	if(ClassCode == "VK2K53")    return 1;
	if(ClassCode == "TPTNK53")   return 1;
	if(ClassCode == "XDCTQPK53") return 1;
	if(ClassCode == "TTVTDK53")  return 1;
	if(ClassCode == "RDHQK53")   return 1;
	if(ClassCode == "RDSNK53")   return 1;
	if(ClassCode == "RDK53")     return 1;
	if(ClassCode == "NLK53")     return 1;
	
	return 0;
}

string ClassName(string ClassCode)
{
	if(ClassCode == "ANHTTTK53") return "An ninh he thong thong tin";
	if(ClassCode == "BDATTTK53") return "Bao dam an toan thong tin";
	if(ClassCode == "BCHDD153")  return "Ban chi huy dai doi";
	if(ClassCode == "DTHK53")    return "Dia tin hoc";
	if(ClassCode == "CNTT1K53")  return "Cong nghe thong tin 1";
	if(ClassCode == "CNTT2K53")  return "Cong nghe thong tin 2";
	if(ClassCode == "DTYSK53")   return "Dien tu y sinh";
	if(ClassCode == "PTK53")     return "Phao tau";
	if(ClassCode == "TLHQK53")   return "Ten lua Hai quan";
	if(ClassCode == "TLPKK53")   return "Ten lua Phong khong";
	if(ClassCode == "OT1K53")    return "O to 1";
	if(ClassCode == "OT2K53")    return "O to 2";
	if(ClassCode == "XDCTDBK53") return "Xay dung cong trinh dac biet";
	if(ClassCode == "XDSBK53")   return "Xay dung san bay";
	if(ClassCode == "VK1K53")    return "Vu khi 1";
	if(ClassCode == "VK2K53")    return "Vu khi 2";
	if(ClassCode == "TPTNK53")   return "Thuoc phong thuoc no";
	if(ClassCode == "XDCTQPK53") return "Xay dung cong trinh quoc phong";
	if(ClassCode == "TTVTDK53")  return "Thong tin vo tuyen dien";
	if(ClassCode == "RDHQK53")   return "Ra da Hai quan";
	if(ClassCode == "RDSNK53")   return "Ra da Sona";
	if(ClassCode == "RDK53")     return "Ra da";
	if(ClassCode == "NLK53")     return "Ngu loi";
}

long PASS1(string x)
{	
    long a = atoi(x.c_str());
	if(a%23111998 == 1 and a!=1) return 1;
	else return 0;
}

long PASS2(string str)
{
	if(str == "leduydung")
	   return 1;
	 else return 0;
}

void resizeConsole(int width,int height);                     // Tao kich thuoc cua man hinh Console
void gotoxy(int x,int y);                                     // Dich chuyen con tro toi 1 vi tri trong Console
void textcolor(int x);                                        // Tao mau cho text
void ToMau(int x,int y,string str,int color1,int color2);     // To Mau 1 doan text tai vi tri x,y
long PASS1(long x);
long PASS2(string str);                                       // Tao Pass
int KiemTraClassCode(string ClassCode);                       // Kiem tra ClassCode Nhap da dung chua
void ChuanHoaName(string &str);                               // Chuan hoa ten nhap vao 
string ClassName(string ClassCode);
void AddToArrayFromFile(Transcript Array[MAX]);               // Tao Mang bang cach lay du lieu tu file "BaiTapKTLT.txt"                           
void AddFromKeyboard();                                       // Them ho so tu ban phim                                             
void FindStudent(Transcript ArrayFind[MAX],string name);      // Tim kiem 1 hoc vien trong danh sach     
void DeleteOneStudent(string name);                           // Xoa 1 hoc vien trong danh sach        
void PrintOneTranscript(Transcript One);                      // In ra ho so 1 hoc vien
void PrintAllTranscript(Transcript Array[MAX]);               // In ra danh sach hoc vien 
void Gan(Transcript &a,Transcript &b);                        // Gan gia tri a bang gia tri b
void HoanVi(Transcript &a,Transcript &b);                     // Hoan vi 2 gia tr a va b
void RadixSortToScore(Transcript Array[MAX]);                 // RadixSort dung trong sap xep diem
void HashFunction();                                          // Ham Bam du lieu
string ReverseStudentName(string studentname);                // Dao nguoc ten hoc vien de sap xep
void QuickSortToName(Transcript Array[MAX],int ,int );                  // QuickSort sap xep ten hoc vien theo thu tu ABC...
void QuickSortToClassCode(Transcript Array[MAX],int ,int );             // QuickSort sap xep ten lop theo thu tu ABC...
void BubbleSortToName(Transcript Array[MAX],int left,int right);
void SortClassAndName(Transcript Array[MAX],int left,int right);
void MENU();                                                  // Menu lua chon            
void Estimate();
 
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

void ChuanHoaName(string &str)
{
	for(int i=0;i<str.length();i++)
	    {
	     if(i==0)
		    str[i]=toupper(str[i]);	
		 if(str[i]==' ')
	       str[i+1] = toupper(str[i+1]);
		}
}

void ExitOrEnter()
{
	ToMau(89,5,"Nhan ESC de Thoat",78,7);
	ToMau(89,7,"Nhan ENTER de Tiep tuc",174,7);
	int x;
	do{
    x = getch();
    if(x==27)        // Phim ESC
	  {
	    exit(0);
	  }
    if(x==13)      // Phim ENTER
	  {
	    system("cls");
	  }
	} while(x!=27 and x!=13);
	
}

void BackOrEnter()
{
	ToMau(89,5,"Nhan ESC de quay ve MENU",78,7);
	ToMau(89,7,"Nhan ENTER de tiep tuc",174,7);
	int x;
    x = getch();
    if(x==27)        // Phim ESC
	  {
	  	system("cls");
	    return;
	  }
}



void AddToArrayFromFile(Transcript Array[MAX])
{

	ifstream fileInput1(file),fileInput2(fileStudentName);
    
    int i = 0;
	while(!fileInput1.eof())
	{	
	fileInput1>>Array[i].ClassCode;
	fileInput1>>Array[i].StudentCode;
	fileInput1>>Array[i].Day;
	fileInput1>>Array[i].Month;
	fileInput1>>Array[i].Year;
	fileInput1>>Array[i].DTBTL;	
    
    if(Array[i].DTBTL >= 3.6)
	   Array[i].HocLuc = "Xuat Sac";
	 else
      if(Array[i].DTBTL >= 3.2)
         Array[i].HocLuc = "Gioi";
	   else{
	  	if(Array[i].DTBTL >= 2.5)
	  	   Array[i].HocLuc = "Kha";
	  	 else{
	  	 	if(Array[i].DTBTL >=2.0)
	  	 	   Array[i].HocLuc = "TB";
	  	 	 else
	  	 	   Array[i].HocLuc = "Yeu";
		   }
	  }
	i++;
	}
    StudentAmount = --i;
    i=0;
    
    while(!fileInput2.eof())
         {  
          getline(fileInput2,Array[i].StudentName);
		  int n=Array[i].StudentName.length();
	      while(Array[i].StudentName[n-1] == ' ')              // Xu li du lieu tu file, xoa dau " "
	           {
	            Array[i].StudentName.erase(Array[i].StudentName.begin()+n-1);
	            n = Array[i].StudentName.length();
		       } 
          i++;
         }
	fileInput1.close();	
	fileInput2.close();
}

//==============================================================================================================================
//==============================================================================================================================

 void AddFromKeyboard()
{
	Transcript One;
	ofstream fileOutput1,fileOutput2;
	fileOutput1.open(file, ios::out|ios::app);
	fileOutput2.open(fileStudentName, ios::out|ios::app);
	
	textcolor(14);
	cout<<"\n\n\n\n\n\n";
	cout<<"\n\t\t\tษอออออออออออออออออออออออออออออออo0oออออออออออออออออออออออออออออป";
	cout<<"\n\t\t\tบ                                                              บ";
	cout<<"\n\t\t\tฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออถ";
    cout<<"\n\t\t\tบ                  :                                           บ";                                             
	cout<<"\n\t\t\tวฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ";
	cout<<"\n\t\t\tบ                  :                                           บ";
	cout<<"\n\t\t\tวฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ";
	cout<<"\n\t\t\tบ                  :                                           บ";
	cout<<"\n\t\t\tวฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ";
	cout<<"\n\t\t\tบ           |      :                                           บ";
	cout<<"\n\t\t\tบ           |      :                                           บ";
	cout<<"\n\t\t\tบ           |      :                                           บ";
	cout<<"\n\t\t\tวฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ";
	cout<<"\n\t\t\tบ                  :                                           บ";
	cout<<"\n\t\t\tศอออออออออออออออออออออออออออออออo0oออออออออออออออออออออออออออออผ\n";
	
	ToMau(53,9,"THEM HO SO",11,15);
	ToMau(27,11,"Ma lop",12,15);
	ToMau(27,13,"Ma hoc vien",12,15);
	ToMau(27,15,"Ten hoc vien",12,15);
	ToMau(27,18,"Ngay Sinh",12,15);
	ToMau(39,17,"Ngay",13,15);
	ToMau(39,18,"Thang",13,15);
	ToMau(39,19,"Nam",13,15);
	ToMau(27,21,"Nhap Diem TBTL",12,15);
	ToMau(97,5,"Nhan ESC de quay ve MENU",78,7);
	ToMau(97,7,"Nhan ENTER de Tiep tuc",174,7);
	
p:	textcolor(15);	
	gotoxy(46,11);
	cin>>One.ClassCode;  
	fflush(stdin);	    // Nhap vao Ma Lop  
	if(KiemTraClassCode(One.ClassCode) == 0)
	  {
	  	gotoxy(46,11);
	  	cout<<"                     ";
	  	goto p;
	  }

	gotoxy(46,13);
	cin>>One.StudentCode;  
	fflush(stdin);    // Nhap vao Ma HV
	
	gotoxy(46,15);
	getline(cin,One.StudentName);
	ChuanHoaName(One.StudentName);
	fflush(stdin);    
	
e:	do{
	    gotoxy(46,17); 
		cin>>One.Day;  
		fflush(stdin);
		if(One.Day<1 or One.Day>31)           // Ngay
		  {
		 	gotoxy(46,17); 
		 	cout<<"                   ";
		  } 
	} while(One.Day < 1 or One.Day>31);
	 
	do{
	    gotoxy(46,18);
		cin>>One.Month;  fflush(stdin);
		if(One.Month<1 or One.Month>12)       // Thang
		  {
		 	gotoxy(46,18);
		 	cout<<"                 ";
		  } 
	} while(One.Month < 1 or One.Month>12);
	
	do{
	    gotoxy(46,19);
		cin>>One.Year;  fflush(stdin);
		if(One.Year<1900 or One.Year>2050)     // Nam
		  {
		 	gotoxy(46,19);
		 	cout<<"                 ";
		  } 
	} while(One.Year < 1900 or One.Year>2050);
	
	if(TestDateOfBirth(One.Day,One.Month,One.Year) == 0)
	  {
	  	gotoxy(46,19);
	  	cout<<"                 ";
	  	gotoxy(46,18);
	  	cout<<"                 ";
	  	gotoxy(46,17);
	  	cout<<"                 ";
	  	goto e;
	  }
	
	do{
	    gotoxy(46,21);
		cin>>One.DTBTL;   
		if(One.DTBTL<0 or One.DTBTL>4)  
		  {
		 	gotoxy(46,21);
		 	cout<<"                  ";
		  } 
	} while(One.DTBTL < 0 or One.DTBTL>4);
	
	gotoxy(1,24);
	cout<<"                        ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n";
	cout<<"                        บ                                                              บ\n";
    cout<<"                        ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออถ\n";
    cout<<"                        บ 1.                                                           บ\n";
	cout<<"                        วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
	cout<<"                        บ 2.                                                           บ\n";
	cout<<"                        ศอออออออออออออออออออออออออออออออo0oออออออออออออออออออออออออออออผ\n";
	
	ToMau(27,25,"Ban chan chan muon them vao Danh Sach khong?",14,7);
	ToMau(29,27,"Co",11,7);
	ToMau(29,29,"Khong",4,7);
	gotoxy(25,31);
	int choose;
	do{
		cout<<"Nhap lua chon: ";
		cin>>choose;
	} while(choose<1 or choose>2);
	
	if(choose == 1)
	  {
	  	fileOutput1<<One.ClassCode<<" ";
	    fileOutput1<<One.StudentCode<<" ";
     	fileOutput2<<One.StudentName<<" \n";
	    fileOutput1<<One.Day<<" ";
	    fileOutput1<<One.Month<<" ";
      	fileOutput1<<One.Year<<" ";
	    fileOutput1<<One.DTBTL<<" \n";
	    cout<<"\n\n\t\t     Them Ho So thanh cong!!!";
	  }
	  else{
	  	system("cls");
	  	return;
	  }
		
	fileOutput1.close();
	fileOutput2.close();
	
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
	  
	 ExitOrEnter();
	
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

void QuickSortToName(Transcript Array[MAX],int left,int right)
{
	int i,j;

	if(left < right)
	  {
	  	i = left + 1;
	  	j = right;
		do{
			while(ReverseStudentName(Array[i].StudentName).compare(ReverseStudentName(Array[left].StudentName)) == -1 or ReverseStudentName(Array[i].StudentName).compare(ReverseStudentName(Array[left].StudentName)) == 0) 
			      i++;
			while(ReverseStudentName(Array[j].StudentName).compare(ReverseStudentName(Array[left].StudentName)) == 1) 
			      j--;
			
			if(i < j) HoanVi(Array[i],Array[j]);
		} while(i < j);
		
		HoanVi(Array[left],Array[j]);
		
		if(left < j-1)  QuickSortToName(Array,left,j-1);
		if(j+1 < right) QuickSortToName(Array,j+1,right);
	  }
}

void QuickSortToClassCode(Transcript Array[MAX],int left,int right)
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
		
		if(left < j-1)  QuickSortToClassCode(Array,left,j-1);
		if(j+1 < right) QuickSortToClassCode(Array,j+1,right);
	  }
}

void SortClassAndName(Transcript Array[MAX],int left,int right)     // ham sort ca ma lop va ten hoc vien thanh 1 danh sach thong nhat
{
	QuickSortToClassCode(Array,left,right);
	
	int i=0,a=0,b;
	   
	while(i<right)
	     {
	     	if(Array[i].ClassCode == Array[i+1].ClassCode)
	     	   i++;
	     	 else{
	     	 	b = i;
	     	 	QuickSortToName(Array,a,b);
	     	 	a = ++i;
			  }
			
			if(i == right)
			  {
			  	b=i;
			  	QuickSortToName(Array,a,b);
			  }
		 }
}
//==============================================================================================================================
//==============================================================================================================================

void Gan(Transcript &a, Transcript &b)
{
	a.ClassCode   = b.ClassCode;
	a.Day         = b.Day;
	a.Month       = b.Month;
	a.Year        = b.Year;
	a.DTBTL       = b.DTBTL;
	a.HocLuc      = b.HocLuc;
	a.StudentCode = b.StudentCode;
	a.StudentName = b.StudentName;
}

void RadixSortToScore(Transcript Array[MAX])
{
	Transcript Reverse[MAX];
	
	for(int i=0;i<StudentAmount;i++)      // Nhโn tat ca len 100 lan de tien tinh toan co so
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
			    Radix[i] += Radix[i-1];  // Ban chat cua mang Radix do lเ n๓ luu lai so luong khoang trong de dien vao mang Array va Temp
	
			if(AvT == 1)
			   for(int i=StudentAmount-1;i>=0;i--)
			      {
			      	int x = Array[i].DTBTL/CoSo;		
			      	Gan(Temp[--Radix[x%10]] , Array[i]);
				  }       
			  else
			   for(int i=StudentAmount-1;i>=0;i--)
			      {
			      	int x = Temp[i].DTBTL/CoSo;			   	
			      	Gan(Array[--Radix[(int)Temp[i].DTBTL/CoSo%10]] , Temp[i]);
				  }	       				  
			AvT = -AvT;
			CoSo*=10;	 		    
		 }
		 	 
	if(AvT == -1)
	   for(int i=0;i<StudentAmount;i++)
	       Gan(Array[i] , Temp[i]);
	       
	for(int i=0;i<StudentAmount;i++)
	   {
	   	Gan(Reverse[StudentAmount-i-1] , Array[i]);   // Dao chuoi
		Reverse[StudentAmount-i-1].DTBTL /= 100;
	   }
	    
    PrintAllTranscript(Reverse);	   
}

//==============================================================================================================================
//==============================================================================================================================

void FindStudent(Transcript Array[MAX],string name)
{
	int temp = 0;
	for(int i=0;i<StudentAmount;i++)
	    if(name == Array[i].StudentName)
	      {
	      	temp = 1;
	      	PrintOneTranscript(Array[i]);
	      	break;
		  }	 
	if(temp == 0)
	   {
	    gotoxy(40,14);
	    textcolor(228);
	    printf("  Khong ton tai ten vua nhap trong Danh sach!  ");
	    textcolor(7);
	    ToMau(40,15,"  Nhan ESC de Thoat                            ",224,7);
	    ToMau(40,16,"  Nhan ENTER de Tiep tuc                       ",225,7);
	    //gotoxy(45,17);
	    ExitOrEnter();  
	   }
	
	
}

//==============================================================================================================================
//==============================================================================================================================

void DeleteOneStudent(Transcript Array[MAX],string name)
{
	int temp = 0;
    int dem =0;
	ofstream fileOutput1,fileOutput2;
	fileOutput1.open(file,ios::out);
	fileOutput2.open(fileStudentName,ios::out);	
	for(int i=0;i<StudentAmount;i++)
	   {
	   	if(Array[i].StudentName != name)
	   	  {
	   	  	fileOutput1<<Array[i].ClassCode<<" ";
	   	  	fileOutput1<<Array[i].StudentCode<<" ";
	   	  	fileOutput2<<Array[i].StudentName<<"\n";
	   	  	fileOutput1<<Array[i].Day<<" ";
	   	  	fileOutput1<<Array[i].Month<<" ";
	   	  	fileOutput1<<Array[i].Year<<" ";
	   	  	fileOutput1<<Array[i].DTBTL<<"\n"; 	
		  }
		 else
		  temp = 1;
	   }
	fileOutput1.close();
	fileOutput2.close();;
	if(temp == 0) cout<<"\nฤฤฤฤฤฤฤ> Khong ton tai hoc vien "<<name<<" trong danh sach\n";
}

//==============================================================================================================================
//==============================================================================================================================


void PrintOneTranscript(Transcript One)
{
	cout<<"\n\n\n\n\n\n\n\n\n\n";
    printf("\n\t\tษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\t\tบ                                                                                                    บ");
	printf("\n\t\tฬออออออัอออออออออออออัอออออออออออออัออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\t\tบ %-4s ณ   %-10sณ %-11s ณ      %-20sณ   %-10s ณ  %-6s  ณ  %-8s  บ","STT","MA LOP"," A HOC VIEN","TEN HOC VIEN","Ngay Sinh","DTBTL","Hoc Luc");	
	printf("\n\t\tฬออออออัอออออออออออออัอออออออออออออัออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\t\tบ      ณ             ณ             ณ                          ณ              ณ          ณ            บ");
	printf("\n\t\tบ %-4d ณ  %-10s ณ  %-10s ณ  %-21s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",1,One.ClassCode.c_str(),One.StudentCode.c_str(),One.StudentName.c_str(),One.Day,One.Month,One.Year,One.DTBTL,One.HocLuc.c_str());  
	printf("\n\t\tบ      ณ             ณ             ณ                          ณ              ณ          ณ            บ");	
	printf("\n\t\tศออออออฯอออออออออออออฯอออออออออออออฯออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    ToMau(61,13,"THONG TIN HOC VIEN",14,7);
    ToMau(19,15,"STT",11,7);
    ToMau(28,15,"MA LOP",11,7);
    ToMau(40,15,"MA HOC VIEN",11,7);
    ToMau(59,15,"TEN HOC VIEN",11,7);
    ToMau(83,15,"NGAY SINH",11,7);
    ToMau(97,15,"DTBTL",11,7);
    ToMau(108,15,"HOC LUC",11,7);
	
	ExitOrEnter();
}

//==============================================================================================================================
//==============================================================================================================================

void PrintAllTranscript(Transcript Array[MAX])
{
	textcolor(7);
	cout<<"\n\n\n\n\n\n\n\n";
    printf("\n\tษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\tบ %-4s ณ   %-10sณ %-11s ณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tบ %-4s ณ   %-10sณ %-11s ณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","STT","MA LOP","MA HOC VIEN"," EN HOC VIEN","Ngay Sin ","DTBTL","Hoc Luc");	
	printf("\n\tบ %-4s ณ   %-10sณ %-11s ณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	
	for(int i=0;i<StudentAmount;i++)
	{
	printf("\n\tบ %-4d ณ  %-10s ณ  %-10s ณ  %-22s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",i+1,Array[i].ClassCode.c_str(),Array[i].StudentCode.c_str(),Array[i].StudentName.c_str(),Array[i].Day,Array[i].Month,Array[i].Year,Array[i].DTBTL,Array[i].HocLuc.c_str());  
    if(i != StudentAmount-1)
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
	
	ToMau(53,12,"DANH SACH HOC VIEN K53",14,7);
	ToMau(11,16,"STT",11,7);
	ToMau(20,16,"MA LOP",11,7);
	ToMau(32,16,"MA HOC VIEN",11,7);
	ToMau(52,16,"TEN HOC VIEN",11,7);
	ToMau(76,16,"NGAY SINH",11,7);
	ToMau(90,16,"DTBTL",11,7);
	ToMau(101,16,"HOC LUC",11,7);
	ToMau(89,5,"Nhan ESC de Thoat",78,7);
	ToMau(89,7,"Nhan ENTER de Tiep tuc",174,7);
	//gotoxy(94,7);
	//ToMau(1,1,"Sl: ",15,7);cout<<StudentAmount;
	ExitOrEnter();
}

//==============================================================================================================================
//==============================================================================================================================

void PrintEstimateClass(Transcript Array[MAX])
{
	int count=1; 
	int STT=1;   
	
	printf("\n\n\n\n\n\n\n\n\n");
	printf("               ษออออออัอออออออออออออออัออออออออออออออออออออออออออออออออออออออัอออออออออออออออป\n");
	printf("               บ %-4s ณ    %-10s ณ              %-7s                 ณ  %-12s บ\n","","","","");
	printf("               บ %-4s ณ    %-10s ณ              %-7s                 ณ  %-12s บ\n","STT","Ma lop","Ten lop","So Hoc Vien");
	printf("               บ %-4s ณ    %-10s ณ              %-7s                 ณ  %-12s บ\n","","","","");
	printf("               ฬออออออัอออออออออออออออัออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	
	for(int i=1;i<StudentAmount;i++)
	{
	if(Array[i].ClassCode == Array[i-1].ClassCode)
	   count++;
	   
	if(Array[i].ClassCode != Array[i-1].ClassCode or i == StudentAmount-1)
	{	
	printf("               บ %-4d ณ   %-10s  ณ  %-36sณ      %-4d     บ\n",STT,Array[i-1].ClassCode.c_str(),ClassName(Array[i-1].ClassCode).c_str(),count);
    printf("               วฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n");
    
	count = 1;     
	STT++;         
	}
    } 
	printf("               ฬออออออฯอออออออออออออออฯออออออออออออออออออออออออออออออออออออออฯอออออออออออออออน\n");
	printf("               บ                       TONG SO HOC VIEN                      ณ      %-4d     บ\n",StudentAmount);
	printf("               ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฯอออออออออออออออผ");	
	
	ExitOrEnter();
	 
}

//==============================================================================================================================
//==============================================================================================================================

void PrintEstimateScore(Transcript Array[MAX])
{
	int xuatsac=0,tongxuatsac=0;
	int gioi=0,tonggioi=0;
	int kha=0,tongkha=0;
	int trbinh=0,tongtrbinh=0;
	int yeu=0,tongyeu=0;
	int count=1;
	int STT=1;
	
	printf("\n\n\n\n\n\n\n\n\n");
	printf("               ษออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออป\n");
	printf("               บ      ณ               ณ    Xuat sac   ณ      Gioi     ณ      Kha      ณ   Trung binh  ณ       Yeu     บ\n");
	printf("               บ STT  ณ     Ma Lop    ณฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n");
	printf("               บ      ณ               ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   บ\n");
	printf("               ฬออออออัอออออออออออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออถ\n");
	
	     
	for(int i=0;i<StudentAmount;i++)
	{
	if(i == StudentAmount-1)
	{
	if(Array[i].HocLuc == "Xuat Sac") 
	   xuatsac++;
	if(Array[i].HocLuc == "Gioi") 
	   gioi++;
	if(Array[i].HocLuc == "Kha") 
	   kha++;	
	if(Array[i].HocLuc == "TB") 
	   trbinh++;
	if(Array[i].HocLuc == "Yeu") 
	    yeu++;
	    
	int a = 100*(float)xuatsac/count;
	if(100*(float)xuatsac/count - a >= 0.5) a++;
	
	int b = 100*(float)gioi/count;
	if(100*(float)gioi/count - b >= 0.5) b++;
	
	int c = 100*(float)kha/count;
	if(100*(float)kha/count - c >= 0.5) c++;
	
	int d = 100*(float)trbinh/count;
	if(100*(float)trbinh/count - d >= 0.5) d++;
	
	int e = 100*(float)yeu/count;
	if(100*(float)yeu/count - e >= 0.5) e++;
	
	printf("               บ %-4d ณ   %-10s  ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% บ\n",STT,Array[i-1].ClassCode.c_str(),xuatsac,a,gioi,b,kha,c,trbinh,d,yeu,e);
	                       
	tongxuatsac += xuatsac;
	tonggioi += gioi;
	tongkha += kha;
	tongtrbinh += trbinh;
	tongyeu += yeu;
	    
	}
	else{
	if(Array[i].ClassCode == Array[i+1].ClassCode)
	  {
	  count++;
	  
	  if(Array[i].HocLuc == "Xuat Sac") 
	     xuatsac++;
	  if(Array[i].HocLuc == "Gioi") 
	     gioi++;
	  if(Array[i].HocLuc == "Kha") 
	     kha++;	
	  if(Array[i].HocLuc == "TB") 
	     trbinh++;
	  if(Array[i].HocLuc == "Yeu") 
	     yeu++;
	  }
	
	else
	{	
	if(Array[i].HocLuc == "Xuat Sac") 
	    xuatsac++;
	if(Array[i].HocLuc == "Gioi") 
	    gioi++;
	if(Array[i].HocLuc == "Kha") 
	    kha++;	
	if(Array[i].HocLuc == "TB") 
	    trbinh++;
	if(Array[i].HocLuc == "Yeu") 
	    yeu++;
	    
	int a = 100*(float)xuatsac/count;
	if(100*(float)xuatsac/count - a >= 0.5) a++;
	
	int b = 100*(float)gioi/count;
	if(100*(float)gioi/count - b >= 0.5) b++;
	
	int c = 100*(float)kha/count;
	if(100*(float)kha/count - c >= 0.5) c++;
	
	int d = 100*(float)trbinh/count;
	if(100*(float)trbinh/count - d >= 0.5) d++;
	
	int e = 100*(float)yeu/count;
	if(100*(float)yeu/count - e >= 0.5) e++;
	
	printf("               บ %-4d ณ   %-10s  ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% บ\n",STT,Array[i-1].ClassCode.c_str(),xuatsac,a,gioi,b,kha,c,trbinh,d,yeu,e);
    printf("               วฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤถ\n");
	                       
	tongxuatsac += xuatsac;
	tonggioi += gioi;
	tongkha += kha;
	tongtrbinh += trbinh;
	tongyeu += yeu;
	
	STT++;
	count = 1;
	xuatsac = 0;
	gioi = 0;
	kha = 0;
	trbinh = 0;
	yeu =0;	
	
	}
	}
	
	}
	
	int a = 100*(float)tongxuatsac/StudentAmount;
	if(100*(float)tongxuatsac/StudentAmount - a >= 0.5) a++;
	
	int b = 100*(float)tonggioi/StudentAmount;
	if(100*(float)tonggioi/StudentAmount - b >= 0.5) b++;
	
	int c = 100*(float)tongkha/StudentAmount;
	if(100*(float)tongkha/StudentAmount - c >= 0.5) c++;
	
	int d = 100*(float)tongtrbinh/StudentAmount;
	if(100*(float)tongtrbinh - d >= 0.5) d++;
	
	int e = 100*(float)tongyeu/StudentAmount;
	if(100*(float)tongyeu/StudentAmount - e >= 0.5) e++;
	
	printf("               ฬออออออฯอออออออออออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออน\n");
	printf("               บ          Tong        ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% บ\n",tongxuatsac,a,tonggioi,b,tongkha,c,tongtrbinh,d,tongyeu,e);
	printf("               ศออออออออออออออออออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออผ");	
	
	ExitOrEnter();
}

//==============================================================================================================================
//==============================================================================================================================

void MENU()
{
////========================================================================================================================	
	int kt=0;
	string PASS;
	string NAME;
	   
/*	textcolor(14);
    cout<<"\n\n\n\n";
    cout<<"\n               ษออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออป";
    cout<<"\n               บ               :                                        บ";                                             
	cout<<"\n               วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ";
	cout<<"\n               บ               :                                        บ";
	cout<<"\n               ศออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออผ\n";
	
	ToMau(18,7,"Ten Nguoi Dung",11,15);
	ToMau(21,9,"Mat Khau",11,15);	
	
d:	gotoxy(34,7);
    if(kt == 3) 
      {
      	gotoxy(10,10);
      	textcolor(15);
      	cout<<"OUT!";
      	return;
	  }
	textcolor(15);
	cin>>NAME;
	gotoxy(34,9);
	textcolor(238);
	cin>>PASS;
	
	if(PASS2(NAME) == 0 or PASS1(PASS) == 0)
	  {
	  	gotoxy(34,7);     
		textcolor(15);     
	  	cout<<"                    "; 
	  	gotoxy(34,9);
		kt++;
		cout<<"                    ";
	  	goto d;
	  }
	 else system("cls");       // Ham nay co tac dung doi voi tat ca man hinh Console*/
	
	textcolor(15);
	 
////========================================================================================================================	 

	while(true)
	     {
	     	textcolor(10);
	     	cout<<"\n\n\n\n\n" ;
	     	cout<<"                ษออออออออออออออออออออออออออออออออ      ออออออออออออออออออออออออออออออออป\n";
	     	cout<<"                บ 1.                                                                   บ\n";
	     	cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
			cout<<"                บ 2.                                                                   บ\n";
			cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
			cout<<"                บ 3.                                                                   บ\n";
			cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
	     	cout<<"                บ 4.                                                                   บ\n";	
	     	cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
	     	cout<<"                บ 5.                                                                   บ\n";
	     	cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
	     	cout<<"                บ 6.                                                                   บ\n";
	     	cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
	     	cout<<"                บ 7.                                                                   บ\n";
	     	cout<<"                ศอออออออออออออออออออออออออออออออออo0oออออออออออออออออออออออออออออออออออผ\n";
	     	
	     	int luachon;
	     	ToMau(43,2,"ษออออออออออออออออออออป",14,14);
	     	ToMau(43,3,"บ~ QUAN LI HOC VIEN ~บ",14,10);
	     	ToMau(43,4,"ศออออออออออออออออออออผ",14,10);
	     	ToMau(90,3,"Made By: ",12,10);
	     	ToMau(99,3,"Le Duy Dung ~ ANHTTT",11,10);
	     	ToMau(90,4,"Email: ",12,10);
	     	ToMau(97,4,"duydung.hdgl99@gmail.com",11,10);
	     	ToMau(51,6,"MENU",14,7);
	     	ToMau(22,7,"Them moi Ho so",14,7);
	     	ToMau(22,9,"In Danh sach",14,7);
	     	ToMau(22,11,"Sap xep",14,7);
	     	ToMau(22,13,"Tim kiem",14,7);
	     	ToMau(22,15,"Thong ke",14,7);
	     	ToMau(22,17,"Xoa 1 hoc vien",14,7);
	     	ToMau(22,19,"Exit",14,7);
	     	ToMau(51,20,"o0o",14,7);
	     	
	     	do{
	     	gotoxy(1,21);
	     	textcolor(10);
	     	cout<<"                Nhap lua chon: ";
	     	textcolor(14);
			cin>>luachon;
			if(luachon<1 or luachon>7) 
			  {
			  	gotoxy(32,21);
			  	cout<<"                ";
		      }
		    } while(luachon<1 or luachon>7);
		    
	     	// Them moi ho so //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	     	if(luachon == 1)         
	     	  {
	     	  	system("cls");
	     	  	AddFromKeyboard();	  	
			  }
		    // In danh sach///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 2)       
			  {
			  	system("cls");
			  	textcolor(7);
			  	
			  	Transcript ArrayIndex[MAX];

			  	AddToArrayFromFile(ArrayIndex);
			  	PrintAllTranscript(ArrayIndex);
			  } 
			// Sap xep  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 3)        
			  {
			  	system("cls");
			  	textcolor(2);
			  	cout<<"\n\n\n\n" ;
			  	cout<<"                ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n";
			  	cout<<"                บ                                                                      บ\n";
	     	    cout<<"                ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออถ\n";
	     	    cout<<"                บ 1.                                                                   บ\n";
	     	    cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
			    cout<<"                บ 2.                                                                   บ\n";
			    cout<<"                ศอออออออออออออออออออออออออออออออออo0oออออออออออออออออออออออออออออออออออผ\n";
			  	
			  	ToMau(50,6,"SAP XEP",14,7);
			  	ToMau(22,8,"Sap xep theo Diem TBTL",14,7);
			  	ToMau(22,10,"Sap xep theo DS lop, DS ten",14,7);
			  	int choose;
			  	do{
			  	textcolor(2);
			  	gotoxy(1,12);
			  	cout<<"                Nhap lua chon: ";
			  	textcolor(14);
			  	cin>>choose;
			  	if(choose<1 or choose>2)
			  	  {
			  	  	gotoxy(32,12);
			  	  	cout<<"            ";
					}
				  } while(choose<1 or choose>2);
			  	
			  	if(choose == 1)
			  	  {
			  	  	system("cls");
			  	  	Transcript Array[MAX];
			  	    AddToArrayFromFile(Array);
			     	RadixSortToScore(Array);
				  }
				 else{
				 	system("cls");
				 	Transcript Array[MAX];
				 	AddToArrayFromFile(Array);	 	
				 	SortClassAndName(Array,0,StudentAmount-1);
				 	PrintAllTranscript(Array);
				 }
			  			  	
			  }
			// Tim kiem ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
			if(luachon == 4)      
			  {
			  	string name;
				system("cls");
			  	textcolor(2);
			  	cout<<"\n\n\n\n" ;
			  	cout<<"                ษออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออป\n";
			  	cout<<"                บ                                                                          บ\n";
			  	cout<<"                บ                                                                          บ\n";
			  	cout<<"                บ                                                                          บ\n";
	     	    cout<<"                ศออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออผ\n";	  
				ToMau(19,7,"Nhap ten hoc vien can tim: ",12,14);	
			    fflush(stdin);
			    
			    gotoxy(46,7);
			    textcolor(14);
			    getline(cin,name);
			    ChuanHoaName(name);
                system("cls");
			  	textcolor(7);
				Transcript Array[MAX];
			  	AddToArrayFromFile(Array);	 	
			  	FindStudent(Array,name);		  	
			  } 
			// Thong ke  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 5)       
			  {
			  	system("cls");
			  	textcolor(2);
			  	cout<<"\n\n\n\n" ;
			  	cout<<"                ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n";
			  	cout<<"                บ                                                                      บ\n";
	     	    cout<<"                ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออถ\n";
	     	    cout<<"                บ 1.                                                                   บ\n";
	     	    cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
			    cout<<"                บ 2.                                                                   บ\n";
			    cout<<"                ศอออออออออออออออออออออออออออออออออo0oออออออออออออออออออออออออออออออออออผ\n";
			  	
			  	ToMau(50,6,"THONG KE",14,7);
			  	ToMau(22,8,"Thong ke So luong Hoc Vien moi lop",14,7);
			  	ToMau(22,10,"Thong ke ti le Kha, Gioi",14,7);
			  	int choose;
			  	do{
			  	textcolor(2);
			  	gotoxy(1,12);
			  	cout<<"                Nhap lua chon: ";
			  	textcolor(14);
			  	cin>>choose;
			  	if(choose<1 or choose>2)
			  	  {
			  	  	gotoxy(32,12);
			  	  	cout<<"            ";
					}
				  } while(choose<1 or choose>2);
			  	if(choose == 1)
				  {
				  	system("cls");
				  	textcolor(7);
			  	    Transcript Array[MAX];
			  	    AddToArrayFromFile(Array);
			  	    QuickSortToClassCode(Array,0,StudentAmount-1);
			  	    PrintEstimateClass(Array);
			      }
			      
			  	if(choose == 2)
			  	  {
			  	  	system("cls");
			  	  	textcolor(7);
			  	  	Transcript Array[MAX];
			  	  	AddToArrayFromFile(Array);
			  	  	QuickSortToClassCode(Array,0,StudentAmount-1);
			  	  	PrintEstimateScore(Array);
			  	  	
			  	  }
			  	
		      }  
			 // Xoa 1 hoc vien //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 6)       
			  {
			  	textcolor(15);
			  	Transcript Array[MAX];
			  	AddToArrayFromFile(Array);
			  	
			  	string name;
			  	system("cls");
			  	textcolor(2);
			  	cout<<"\n\n\n\n" ;
			  	cout<<"                ษออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออป\n";
			  	cout<<"                บ                                                                          บ\n";
			  	cout<<"                บ                                                                          บ\n";
			  	cout<<"                บ                                                                          บ\n";
	     	    cout<<"                ศออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออผ\n";	
			  	ToMau(19,7,"Nhap ten hoc vien muon xoa: ",4,14);
			  	fflush(stdin);
			    gotoxy(47,7);
			    textcolor(14);
			  	getline(cin,name);  
				ChuanHoaName(name);                         // Nhan vao ten
			  	textcolor(4);
			  	gotoxy(1,12);
			  	cout<<"                ษออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออป\n";
			  	cout<<"                บ                                                                          บ\n";
	     	    cout<<"                ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออถ\n";
	     	    cout<<"                บ 1.                                                                       บ\n";
	     	    cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
			    cout<<"                บ 2.                                                                       บ\n";
			    cout<<"                ศออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออผ\n";
			    
			  	ToMau(19,13,"Ban co chac chan muon xoa khong?",14,7);
			  	ToMau(22,15,"Xoa",13,7);
			  	ToMau(22,17,"Khong Xoa",11,7);
			  	
			  	gotoxy(17,19);
				cout<<"Nhap lua chon cua ban: ";
			  	int choose;
			  	do{
			  	 gotoxy(40,19);
			  	 textcolor(14);
			  	 cin>>choose;
			  	 if(choose == 1)
			  	  {
					DeleteOneStudent(Array,name);
					system("cls");
				  }
			  	 if(choose == 2)
			  	   system("cls");
			  	 if(choose<1 or choose>2)
			  	   {
			  	   	gotoxy(40,19);
			  	   	cout<<"             ";
				   }
			     } while(choose<1 or choose>2);
			  }	  	
			// Thoat  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
			if(luachon == 7)       
			  {
			  	system("cls");
			  	textcolor(4);
			  	gotoxy(1,12);
			  	cout<<"                ษออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออป\n";
			  	cout<<"                บ                                                                          บ\n";
	     	    cout<<"                ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออถ\n";
	     	    cout<<"                บ 1.                                                                       บ\n";
	     	    cout<<"                วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
			    cout<<"                บ 2.                                                                       บ\n";
			    cout<<"                ศออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออผ\n";
			    ToMau(19,13,"Ban co muon thoat khong?",14,7);
			  	ToMau(22,15,"Thoat",13,7);
			  	ToMau(22,17,"Khong thoat",11,10);
			  	
			  	gotoxy(17,19);
				cout<<"Nhap lua chon cua ban: ";
			  	int choose;
			  	do{
			  	 gotoxy(40,19);
			  	 textcolor(14);
			  	 cin>>choose;
			  	 if(choose == 1)
			  	  {
					exit(0);
				  }
			  	 if(choose == 2)
			  	    system("cls");
			  	 if(choose<1 or choose>2)
			  	   {
			  	   	gotoxy(40,19);
			  	   	cout<<"             ";
				   }
			     } while(choose<1 or choose>2);
			  }
		 }
}

//==============================================================================================================================
//==============================================================================================================================

int main()
{
	resizeConsole(1200,700);
	
	MENU();
	return 0;
}
