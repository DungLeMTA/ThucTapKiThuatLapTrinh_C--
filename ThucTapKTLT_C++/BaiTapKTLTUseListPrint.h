#ifndef BAITAPKTLTUSELISTPRINT_H
#define BAITAPKTLTUSELISTPRINT_H

#include "BaiTapKTLTUseListMouseEvent.h"


void GhiFile1HV(Transcript One)
{
	FILE *fileOutput;
	
	fileOutput = fopen(fileGhiFile1HV,"w");
	
	fprintf(fileOutput,"\n\n\n\n\n");
    fprintf(fileOutput,"\n\t\t======================================================================================================");
    fprintf(fileOutput,"\n\t\t|                                         THONG TIN HOC VIEN                                         |");
	fprintf(fileOutput,"\n\t\t|====================================================================================================|");
	fprintf(fileOutput,"\n\t\t| %-4s |   %-10s| %-11s |      %-20s|   %-10s |  %-6s  |  %-8s  |","STT","MA LOP","MA HOC VIEN","TEN HOC VIEN","Ngay Sinh","DTBTL","Hoc Luc");	
	fprintf(fileOutput,"\n\t\t|====================================================================================================|");
	fprintf(fileOutput,"\n\t\t|      |             |             |                          |              |          |            |");
	fprintf(fileOutput,"\n\t\t| %-4d |  %-10s | %-12s|  %-21s   |  %2d/%2d/%4d  |  %-6.2f  |  %-8s  |",1,One.ClassCode.c_str(),One.StudentCode.c_str(),One.StudentName.c_str(),One.Day,One.Month,One.Year,One.DTBTL,One.HocLuc.c_str());  
	fprintf(fileOutput,"\n\t\t|      |             |             |                          |              |          |            |");	
	fprintf(fileOutput,"\n\t\t======================================================================================================");
	
	fclose(fileOutput);
}


void GhiFileDSCSX(List2 l)
{
	FILE *fileOutput;
	fileOutput = fopen(fileGhiFileDSCSX,"w");
	
	int vitri = 1;
	fprintf(fileOutput,"\n\t=======================================================================================================");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
	fprintf(fileOutput,"\n\t|=====================================================================================================|");
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","","","","","","","");
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","STT","MA LOP","MA HOC VIEN","TEN HOC VIEN","Ngay Sinh ","DTBTL","Hoc Luc");	
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","","","","","","","");
	fprintf(fileOutput,"\n\t|=====================================================================================================|");
    
	for(Node2* p=l.Head ; p!=NULL ; p=p->Next)
	{
	fprintf(fileOutput,"\n\t| %-4d |  %-10s | %-12s|  %-22s   |  %2d/%2d/%4d  |  %-6.2f  |  %-8s  |",vitri++,p->data.ClassCode.c_str(),p->data.StudentCode.c_str(),p->data.StudentName.c_str(),p->data.Day,p->data.Month,p->data.Year,p->data.DTBTL,p->data.HocLuc.c_str());  	
	fprintf(fileOutput,"\n\t=======================================================================================================");
	}
	
	fclose(fileOutput);
}

void GhiFileDSSX1(List2 l)
{
	FILE *fileOutput;
	fileOutput = fopen(fileGhiFileDSSX,"w");
	
	int vitri = 1;
	fprintf(fileOutput,"\n\t=======================================================================================================");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
	fprintf(fileOutput,"\n\t|=====================================================================================================|");
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","","","","","","","");
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","STT","MA LOP","MA HOC VIEN","TEN HOC VIEN","Ngay Sinh ","DTBTL","Hoc Luc");	
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","","","","","","","");
	fprintf(fileOutput,"\n\t|=====================================================================================================|");
    
	for(Node2* p=l.Head ; p!=NULL ; p=p->Next)
	{
	fprintf(fileOutput,"\n\t| %-4d |  %-10s | %-12s|  %-22s   |  %2d/%2d/%4d  |  %-6.2f  |  %-8s  |",vitri++,p->data.ClassCode.c_str(),p->data.StudentCode.c_str(),p->data.StudentName.c_str(),p->data.Day,p->data.Month,p->data.Year,p->data.DTBTL,p->data.HocLuc.c_str());  	
	fprintf(fileOutput,"\n\t=======================================================================================================");
	}
	
	fclose(fileOutput);
}

void GhiFileDSSX2(Transcript A[],int n)
{
	FILE *fileOutput;
	fileOutput = fopen(fileGhiFileDSSX,"w");
	
	fprintf(fileOutput,"\n\t=======================================================================================================");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
    fprintf(fileOutput,"\n\t|                                                                                                     |");
	fprintf(fileOutput,"\n\t|=====================================================================================================|");
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","","","","","","","");
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","STT","MA LOP","MA HOC VIEN","TEN HOC VIEN","Ngay Sinh ","DTBTL","Hoc Luc");	
	fprintf(fileOutput,"\n\t| %-4s |   %-10s| %-12s|      %-21s|    %-10s|  %-6s  |  %-8s  |","","","","","","","");
	fprintf(fileOutput,"\n\t|=====================================================================================================|");
    
	for(int i=0 ; i<n ; i++)
	{
	fprintf(fileOutput,"\n\t| %-4d |  %-10s | %-12s|  %-22s   |  %2d/%2d/%4d  |  %-6.2f  |  %-8s  |",i+1,A[i].ClassCode.c_str(),A[i].StudentCode.c_str(),A[i].StudentName.c_str(),A[i].Day,A[i].Month,A[i].Year,A[i].DTBTL,A[i].HocLuc.c_str());  	
	fprintf(fileOutput,"\n\t=======================================================================================================");
	}
	
	fclose(fileOutput);
}

void GhiFileDSMTK(STRING A[],int n)
{
	FILE *fileOutput;
	fileOutput = fopen(fileGhiFileDSMTK,"w");
	
	fprintf(fileOutput,"\n\n");
	fprintf(fileOutput,"\tษอออออออออออออออออออออออออออออป\n");
	fprintf(fileOutput,"\tบ                             บ\n");
    fprintf(fileOutput,"\tบ   DANH SACH MAT TAI KHOAN   บ\n");
    fprintf(fileOutput,"\tบ                             บ\n");
    fprintf(fileOutput,"\tฬอออออหอออออออออออออออออออออออน\n");	
    fprintf(fileOutput,"\tบ     บ                       บ\n");
    fprintf(fileOutput,"\tบ STT บ      Ma Hoc Vien      บ\n");
    fprintf(fileOutput,"\tบ     บ                       บ\n");
    fprintf(fileOutput,"\tฬอออออฮอออออออออออออออออออออออน\n");
    
    for(int i=1 ; i<=n ; i++)
    {
    fprintf(fileOutput,"\tบ %-2d  บ   %-9s         บ\n",i,A[i].str.c_str());	
    fprintf(fileOutput,"\tศอออออสอออออออออออออออออออออออผ\n");	
	}

    
    fclose(fileOutput);
}

void PrintOneTranscriptToFind(Transcript One,string name,string code, int y)
{
	gotoxy(1,y);
	textcolor(5);
	   cout<<"\t\tฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ";
	printf("\n\t\tณ %-22s - %-35s         ณ",One.StudentName.c_str(),ClassName(One.ClassCode).c_str());
	 cout<<"\n\t\tภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู";
	
	ToMau(19,y+1,One.StudentName,7 );
	ToMau(44,y+1,ClassName(One.ClassCode),6);
	
	int i = One.StudentName.find(name);
//	int j = One.StudentCode.find(code);
	
	ToMau(19+i,y+1,name,14);
	textcolor(7);	
}

void PrintOneTranscript(Transcript One)
{
	PrintEmpty();
	textcolor(11);
	XoaConTro();
	int colorFrame = 14;
	
	
	if(Language == 1)
	{
	cout<<"\n\n\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     QUAY      บ\n";
	cout<<"                                                                                                                  บ     LAI       บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	if(Language == 2)
	{
	cout<<"\n\n\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     COME      บ\n";
	cout<<"                                                                                                                  บ     BACK      บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	if(Language == 3)
	{
	cout<<"\n\n\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     TOURNE    บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	
	gotoxy(1,1);
	textcolor(5);
	cout<<"\n\n\n\n\n\n\n\n\n\n";
    printf("\n\t\tษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\t\tบ                                                                                                    บ");
	printf("\n\t\tฬออออออัอออออออออออออัอออออออออออออัออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\t\tบ %-4s ณ   %-10sณ %-11s ณ      %-20sณ   %-10s ณ  %-6s  ณ  %-8s  บ","STT","MA LOP"," A HOC VIEN","TEN HOC VIEN","Ngay Sinh","DTBTL","Hoc Luc");	
	printf("\n\t\tฬออออออุอออออออออออออุอออออออออออออุออออออออออออออออออออออออออุออออออออออออออุออออออออออุออออออออออออน");
	printf("\n\t\tบ      ณ             ณ             ณ                          ณ              ณ          ณ            บ");
	printf("\n\t\tบ %-4d ณ  %-10s ณ %-12sณ  %-21s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",1,One.ClassCode.c_str(),One.StudentCode.c_str(),One.StudentName.c_str(),One.Day,One.Month,One.Year,One.DTBTL,One.HocLuc.c_str());  
	printf("\n\t\tบ      ณ             ณ             ณ                          ณ              ณ          ณ            บ");	
	printf("\n\t\tศออออออฯอออออออออออออฯอออออออออออออฯออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
	
	
	PrintFrame(colorFrame);
	if(Language == 1)
	{
	ToMau(61,13,"THONG TIN HOC VIEN",14);
    ToMau(19,15,"STT",11);
    ToMau(28,15,"MA LOP",11);
    ToMau(40,15,"MA HOC VIEN",11);
    ToMau(59,15,"TEN HOC VIEN",11);
    ToMau(83,15,"NGAY SINH",11);
    ToMau(97,15,"DTBTL",11);
    ToMau(108,15,"HOC LUC",11);	
	}
	if(Language == 2)
	{
	ToMau(59,13,"INFORMATION OF STUDENT",14);
    ToMau(19,15,"N-O",11);
    ToMau(28,15,"CODCLA",11);
    ToMau(40,15,"STUDENTCODE",11);
    ToMau(59,15,"NAME STUDENT",11);
    ToMau(83,15,"DATEOFBIR",11);
    ToMau(97,15,"SCORE",11);
    ToMau(108,15,"LEVEL  ",11);	
	}

	if(Language == 3)
	{
	ToMau(59,13,"INFORMATION D'ETUDIANT",14);
    ToMau(19,15,"N-O",11);
    ToMau(28,15,"CODCLA",11);        // code de classe
    ToMau(40,15,"CODETU",11);        // code de etudiant
    ToMau(59,15,"NOM DE L'ETU",11);  // nom de l'etudiant
    ToMau(83,15,"DATE DE NA",11);    // date de naissin
    ToMau(97,15,"MARQUER",11);     
    ToMau(108,15,"POUDAPP",11);	     // pouvoir d'apperentissage
	}
    
    ToMau(19,18,"1",15);
    ToMau(27,18,One.ClassCode,15);
    ToMau(40,18,One.StudentCode,15);
    ToMau(55,18,One.StudentName,15);
    
    ostringstream convert;
	convert<<One.Day;

    if(One.Day<10)
        ToMau(82,18,"0"+convert.str(),15);
     else
        ToMauInt(82,18,One.Day,15);
        
    ostringstream convert2;
    convert2<<One.Month;
    if(One.Month<10)
       ToMau(85,18,"0"+convert2.str(),15);
    else
       ToMauInt(85,18,One.Month,15);
    ToMauInt(88,18,One.Year,15);
    ToMauFloat(97,18,One.DTBTL,15);
    ToMau(108,18,One.HocLuc,15);
    
    GhiFile1HV(One);    // ghi ra file GhiFile1HV
}

//==============================================================================================================================
//==============================================================================================================================

void PrintAllTranscriptByList(List2 l)
{
	
	PrintEmpty();
	textcolor(7);
	if(Language == 1)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     QUAY      บ\n";
	cout<<"                                                                                                                  บ     LAI       บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	if(Language == 2)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     COME      บ\n";
	cout<<"                                                                                                                  บ     BACK      บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	if(Language == 3)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     TOURNE    บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	
		
	textcolor(5);
	gotoxy(1,1);
	cout<<"\n";
    printf("\n\tษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","STT","MA LOP","MA HOC VIEN"," EN HOC VIEN","Ngay Sin ","DTBTL","Hoc Luc");	
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tฬออออออุอออออออออออออุอออออออออออออุอออออออออออออออออออออออออออุออออออออออออออุออออออออออุออออออออออออน");
	
    int vitri = 1;
    int vitritrang = 1;
	Node2 *p;
	Node2 *g = l.Head;
	gotoxy(58,2);
	
	int sotrang;
	if((float)StudentAmount/15 > (int)StudentAmount/15)
	   sotrang = (int)StudentAmount/15 + 1;
	 else
	   sotrang = (int)StudentAmount/15;
	textcolor(245);
    cout<<"Trang:  /"<<sotrang;
	
	int kiemtra = 0;
	int firstime = 0;
	
a:  int y = 12;
    int dem = 0;
    
    if(vitritrang == sotrang)
    {
    gotoxy(1,12);
    textcolor(7);
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	
	}
    
    gotoxy(1,11);
    
	for(p=g ; p!=NULL ; p=p->Next)
	{
	textcolor(5);
	//Sleep(tocdo);
	printf("\n\tบ %-4d ณ  %-10s ณ %-12sณ  %-22s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",vitri,p->data.ClassCode.c_str(),p->data.StudentCode.c_str(),p->data.StudentName.c_str(),p->data.Day,p->data.Month,p->data.Year,p->data.DTBTL,p->data.HocLuc.c_str());  
	dem ++;
	
	ToMauInt(11,y,vitri++,6);
	ToMau(19,y,p->data.ClassCode,15);
	ToMau(32,y,p->data.StudentCode,6);
	ToMau(47,y,p->data.StudentName,15);
	
	if(p->data.Day < 10)
	  {
	  	ToMauInt(75,y,0,6);
	    ToMauInt(76,y,p->data.Day,6);	
	  }
	else
	   ToMauInt(75,y,p->data.Day,6);
	 
	if(p->data.Month < 10)
	  {
	  	ToMauInt(78,y,0,6);
	  	ToMauInt(79,y,p->data.Month,6);
	  }   
	else
	   ToMauInt(78,y,p->data.Month,6); 
	 
	ToMauInt(81,y,p->data.Year,6); 
	
	gotoxy(90,y);
	textcolor(15);
	printf("%-6.2f",p->data.DTBTL);
	
	ToMau(101,y,p->data.HocLuc,6);
	   
	y+=2;
	
	if( dem == 15)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;
	}
	
	if(p == l.Tail)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");

    break;	
	} 
	
	textcolor(5);
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	
	PrintFrame(11);
//	ToMau(53, 5,"DANH SACH HOC VIEN K53",14);
//	ToMau(11,9,"STT",11);
//	ToMau(20,9,"MA LOP",11);
//	ToMau(32,9,"MA HOC VIEN",11);
//	ToMau(52,9,"TEN HOC VIEN",11);
//	ToMau(76,9,"NGAY SINH",11);
//	ToMau(90,9,"DTBTL",11);
//	ToMau(101,9,"HOC LUC",11);
	if(Language == 1)
	{
	ToMau(53,5,"DANH SACH HOC VIEN K53",14);
    ToMau(11,9,"STT",11);
    ToMau(20,9,"MA LOP",11);
    ToMau(32,9,"MA HOC VIEN",11);
    ToMau(52,9,"TEN HOC VIEN",11);
    ToMau(76,9,"NGAY SINH",11);
    ToMau(90,9,"DTBTL",11);
    ToMau(101,9,"HOC LUC",11);	
	}
	if(Language == 2)
	{
	ToMau(53,5,"LIST OF K53 STUDENT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);
    ToMau(32,9,"CODESTUDENT",11);
    ToMau(52,9,"NAME STUDENT",11);
    ToMau(76,9,"DATEOFBIR",11);
    ToMau(90,9,"SCORE",11);
    ToMau(101,9,"LEVEL  ",11);	
	}

	if(Language == 3)
	{
	ToMau(53,5,"LISTE DE K53 ETUDIANT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);       // code de classe
    ToMau(32,9,"CODETUDIENT",11);        // code de etudiant
    ToMau(52,9,"NOM DE L'ETU",11);  // nom de l'etudiant
    ToMau(76,9,"DATE DE NA",11);    // date de naissin
    ToMau(90,9,"MARQUER",11);     
    ToMau(101,9,"POUDAPP",11);	  // pouvoir d'apperentissage
	}
	
	gotoxy(1,1);
	XoaConTro();
    
    ToMau(4,24,"ษอป",4);
	ToMau(4,25,"บ บ",4);
	ToMau(4,26,"บ<บ",4);
	ToMau(4,27,"บ บ",4);
	ToMau(4,28,"ศอผ",4);
	
	ToMau(114,24,"ษอป",4);
	ToMau(114,25,"บ บ",4);
	ToMau(114,26,"บ>บ",4);
	ToMau(114,27,"บ บ",4);
	ToMau(114,28,"ศอผ",4);
	 
	gotoxy(65,2);
	textcolor(245);
	cout<<vitritrang;
	textcolor(7);
	
	
	
b:  gotoxy(1,1);
    XoaConTro();

    ComeBack = MouseEventToButtonBackAndPrint(1250,1090,190,90,    80,30,580,480,   1130,1080,580,480);
    
	if(ComeBack == 2)
	  {		
	  	if(vitri == StudentAmount+1)
	  	  {
	  	  	vitri --;
	  	  	vitri -= StudentAmount%15;
	  	    vitri -= 14;
		  }  
	  	 else
	  	   if(vitri == 16)
	  	      vitri = 1;
	  	    else
      	  	  vitri -= 30;
	  	
	  	if(p == l.Tail)
	  	  {  	
			int count = 0;
	  	  	do{
	  	  		p = p->Previous;
	  	  		count ++;
			} while(count < StudentAmount%15 - 1);
			
			count = 0;
			do{
			    
	  		    p = p->Previous;
	  	        count ++;
		    } while(count <= 14);   
		  }
		 else{
		    int count = 0;
	  	    do{
	  		 p = p->Previous;
	  	     count ++;
	  	     if(p == l.Head)
	  	        break;
		    } while(count <= 28);
	       }
		    
        g=p;
        
        vitritrang --;
        
        if(g == l.Head and firstime == 0)
          	firstime = 1;
		 else
		    if(g == l.Head and firstime == 1)
		       vitritrang ++;
		goto a;  	
	  }  
	
	if(ComeBack == 3)
	  {
	  	firstime = 0;
	  	
	  	if(p == l.Tail)
	  	  {
	  	  	goto b;
		  }     	
	  	 else{
	  	 	vitritrang ++;
	  	    g = p->Next;
	  	    goto a;
		   }  	 	
	  }   		    
}

void PrintAllTranscriptByListNew(List2 l,Transcript &One)
{
	
	PrintEmpty();
	textcolor(7);
	if(Language == 1)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     QUAY      บ\n";
	cout<<"                                                                                                                  บ     LAI       บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	if(Language == 2)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     COME      บ\n";
	cout<<"                                                                                                                  บ     BACK      บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	if(Language == 3)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     TOURNE    บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	
		
	textcolor(5);
	gotoxy(1,1);
	cout<<"\n";
    printf("\n\tษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","STT","MA LOP","MA HOC VIEN"," EN HOC VIEN","Ngay Sin ","DTBTL","Hoc Luc");	
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tฬออออออุอออออออออออออุอออออออออออออุอออออออออออออออออออออออออออุออออออออออออออุออออออออออุออออออออออออน");
	
    int vitri = 1;
    int vitritrang = 1;
	Node2 *p;
	Node2 *g = l.Head;
	gotoxy(58,2);
	
	int sotrang;
	if((float)StudentAmount/15 > (int)StudentAmount/15)
	   sotrang = (int)StudentAmount/15 + 1;
	 else
	   sotrang = (int)StudentAmount/15;
	textcolor(245);
    cout<<"Trang:  /"<<sotrang;
	
	int kiemtra = 0;
	int firstime = 0;
	
a:  int y = 12;
    int dem = 0;
    
    if(vitritrang == sotrang)
    {
    gotoxy(1,12);
    textcolor(7);
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	
	}
    
    gotoxy(1,11);
    
	for(p=g ; p!=NULL ; p=p->Next)
	{
	textcolor(5);
	//Sleep(tocdo);
	printf("\n\tบ %-4d ณ  %-10s ณ %-12sณ  %-22s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",vitri,p->data.ClassCode.c_str(),p->data.StudentCode.c_str(),p->data.StudentName.c_str(),p->data.Day,p->data.Month,p->data.Year,p->data.DTBTL,p->data.HocLuc.c_str());  
	dem ++;
	
	ToMauInt(11,y,vitri++,6);
	ToMau(19,y,p->data.ClassCode,15);
	ToMau(32,y,p->data.StudentCode,6);
	ToMau(47,y,p->data.StudentName,15);
	
	if(p->data.Day < 10)
	  {
	  	ToMauInt(75,y,0,6);
	    ToMauInt(76,y,p->data.Day,6);	
	  }
	else
	   ToMauInt(75,y,p->data.Day,6);
	 
	if(p->data.Month < 10)
	  {
	  	ToMauInt(78,y,0,6);
	  	ToMauInt(79,y,p->data.Month,6);
	  }   
	else
	   ToMauInt(78,y,p->data.Month,6); 
	 
	ToMauInt(81,y,p->data.Year,6); 
	
	gotoxy(90,y);
	textcolor(15);
	printf("%-6.2f",p->data.DTBTL);
	
	ToMau(101,y,p->data.HocLuc,6);
	   
	y+=2;
	
	if( dem == 15)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;
	}
	
	if(p == l.Tail)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");

    break;	
	} 
	
	textcolor(5);
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	
	PrintFrame(11);
//	ToMau(53, 5,"DANH SACH HOC VIEN K53",14);
//	ToMau(11,9,"STT",11);
//	ToMau(20,9,"MA LOP",11);
//	ToMau(32,9,"MA HOC VIEN",11);
//	ToMau(52,9,"TEN HOC VIEN",11);
//	ToMau(76,9,"NGAY SINH",11);
//	ToMau(90,9,"DTBTL",11);
//	ToMau(101,9,"HOC LUC",11);
	if(Language == 1)
	{
	ToMau(53,5,"DANH SACH HOC VIEN K53",14);
    ToMau(11,9,"STT",11);
    ToMau(20,9,"MA LOP",11);
    ToMau(32,9,"MA HOC VIEN",11);
    ToMau(52,9,"TEN HOC VIEN",11);
    ToMau(76,9,"NGAY SINH",11);
    ToMau(90,9,"DTBTL",11);
    ToMau(101,9,"HOC LUC",11);	
	}
	if(Language == 2)
	{
	ToMau(53,5,"LIST OF K53 STUDENT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);
    ToMau(32,9,"CODESTUDENT",11);
    ToMau(52,9,"NAME STUDENT",11);
    ToMau(76,9,"DATEOFBIR",11);
    ToMau(90,9,"SCORE",11);
    ToMau(101,9,"LEVEL  ",11);	
	}

	if(Language == 3)
	{
	ToMau(53,5,"LISTE DE K53 ETUDIANT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);       // code de classe
    ToMau(32,9,"CODETUDIENT",11);        // code de etudiant
    ToMau(52,9,"NOM DE L'ETU",11);  // nom de l'etudiant
    ToMau(76,9,"DATE DE NA",11);    // date de naissin
    ToMau(90,9,"MARQUER",11);     
    ToMau(101,9,"POUDAPP",11);	  // pouvoir d'apperentissage
	}
	
	gotoxy(1,1);
	XoaConTro();
    
    ToMau(4,24,"ษอป",4);
	ToMau(4,25,"บ บ",4);
	ToMau(4,26,"บ<บ",4);
	ToMau(4,27,"บ บ",4);
	ToMau(4,28,"ศอผ",4);
	
	ToMau(114,24,"ษอป",4);
	ToMau(114,25,"บ บ",4);
	ToMau(114,26,"บ>บ",4);
	ToMau(114,27,"บ บ",4);
	ToMau(114,28,"ศอผ",4);
	 
	gotoxy(65,2);
	textcolor(245);
	cout<<vitritrang;
	textcolor(7);
	
	
	
b:  gotoxy(1,1);
    XoaConTro();

    int soluong = StudentAmount - (vitritrang-1)*15;
    
    if(soluong >= 15)
       soluong = 15;
                              // 200                                                                                      
    ComeBack = MouseEventToButtonBackAndPrintAndFind(1045,915,160,75,    45,20,495,415,   935,910,495,415,   880,70,233,200,   880,70,267,234,   880,70,301,268,    880,70,335,302,   880,70,369,336,   880,70,403,370,   880,70,437,404,  880,70,471,438,   880,70,505,472,   880,70,539,506,   880,70,573,540,   880,70,607,574,   880,70,641,608,   880,70,675,642,  880,70,705,675,  soluong);
    
    if(ComeBack == 1)
       return;
    
	if(ComeBack == 2)
	  {		
	  	if(vitri == StudentAmount+1)
	  	  {
	  	  	vitri --;
	  	  	vitri -= StudentAmount%15;
	  	    vitri -= 14;
		  }  
	  	 else
	  	   if(vitri == 16)
	  	      vitri = 1;
	  	    else
      	  	  vitri -= 30;
	  	
	  	if(p == l.Tail)
	  	  {  	
			int count = 0;
	  	  	do{
	  	  		p = p->Previous;
	  	  		count ++;
			} while(count < StudentAmount%15 - 1);
			
			count = 0;
			do{
			    
	  		    p = p->Previous;
	  	        count ++;
		    } while(count <= 14);   
		  }
		 else{
		    int count = 0;
	  	    do{
	  		 p = p->Previous;
	  	     count ++;
	  	     if(p == l.Head)
	  	        break;
		    } while(count <= 28);
	       }
		    
        g=p;
        
        vitritrang --;
        
        if(g == l.Head and firstime == 0)
          	firstime = 1;
		 else
		    if(g == l.Head and firstime == 1)
		       vitritrang ++;
		goto a;  	
	  }  
	
	if(ComeBack == 3)
	  {
	  	firstime = 0;
	  	
	  	if(p == l.Tail)
	  	  {
	  	  	goto b;
		  }     	
	  	 else{
	  	 	vitritrang ++;
	  	    g = p->Next;
	  	    goto a;
		   }  	 	
	  }  
	if(ComeBack == 4 or ComeBack == 5 or ComeBack == 6 or ComeBack == 7 or ComeBack == 8 or ComeBack == 9 or ComeBack == 10 or ComeBack == 11 or ComeBack == 12 or ComeBack == 13 or ComeBack == 14 or ComeBack == 15 or ComeBack == 16 or ComeBack == 17 or ComeBack == 18)
	  {
	  	if(p == l.Tail)
	  	  {
	  	  	for(int i=1 ; i<=soluong-ComeBack+3 ; i++)
	  	  	    p=p->Previous;
	  	  	Gan(One,p->data);
	  	  	PrintOneTranscript(One);
		  }
		else{
			for(int i=1 ; i<=18-ComeBack ; i++)
	  	        p=p->Previous;
	  	    Gan(One,p->data);
	  	    PrintOneTranscript(One);
		}
	  	
	  	return ;
	  }		    
}

void PrintAllTranscriptClassByList(List2 l)
{
	
	PrintEmpty();
	textcolor(7);
	if(Language == 1)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     QUAY      บ\n";
	cout<<"                                                                                                                  บ     LAI       บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	if(Language == 2)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     COME      บ\n";
	cout<<"                                                                                                                  บ     BACK      บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
	if(Language == 3)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     TOURNE    บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";
	}
		
	textcolor(5);
	gotoxy(1,1);
	cout<<"\n";
    printf("\n\tษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","STT","MA LOP","MA HOC VIEN"," EN HOC VIEN","Ngay Sin ","DTBTL","Hoc Luc");	
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tฬออออออุอออออออออออออุอออออออออออออุอออออออออออออออออออออออออออุออออออออออออออุออออออออออุออออออออออออน");
	
    int vitri = 1;
    int vitritrang = 1;
	Node2 *p;
	Node2 *g = l.Head;
	gotoxy(58,2);
	
	int sotrang;
	if((float)StudentAmount/15 > (int)StudentAmount/15)
	   sotrang = (int)StudentAmount/15 + 1;
	 else
	   sotrang = (int)StudentAmount/15;
	textcolor(245);
	if(Language == 1)
    cout<<"Trang:  /"<<sotrang;
    if(Language == 2)
    cout<<" Page:  /"<<sotrang;
    if(Language == 3)
    cout<<" Page:  /"<<sotrang;
	
	int firstime = 0; 
	
a:  int y = 12;
    int dem = 0;
    
    if(vitritrang == sotrang)
    {
    gotoxy(1,12);
    textcolor(7);
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");

	}
    gotoxy(1,11);
	for(p=g ; p!=NULL ; p=p->Next)
	{
	textcolor(5);
	//Sleep(tocdo);
	printf("\n\tบ %-4d ณ  %-10s ณ %-12sณ  %-22s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",vitri,p->data.ClassCode.c_str(),p->data.StudentCode.c_str(),p->data.StudentName.c_str(),p->data.Day,p->data.Month,p->data.Year,p->data.DTBTL,p->data.HocLuc.c_str());  
	dem ++;
	
	ToMauInt(11,y,vitri++,6);
	ToMau(19,y,p->data.ClassCode,15);
	ToMau(32,y,p->data.StudentCode,6);
	ToMau(47,y,p->data.StudentName,15);
	
	if(p->data.Day < 10)
	  {
	  	ToMauInt(75,y,0,6);
	    ToMauInt(76,y,p->data.Day,6);	
	  }
	else
	   ToMauInt(75,y,p->data.Day,6);
	 
	if(p->data.Month < 10)
	  {
	  	ToMauInt(78,y,0,6);
	  	ToMauInt(79,y,p->data.Month,6);
	  }   
	else
	   ToMauInt(78,y,p->data.Month,6); 
	 
	ToMauInt(81,y,p->data.Year,6); 
	
	gotoxy(90,y);
	textcolor(15);
	printf("%-6.2f",p->data.DTBTL);
	
	ToMau(101,y,p->data.HocLuc,6);
	   
	y+=2;
	
	if( dem == 15)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;
	}
	
	if(p == l.Tail)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");

    break;	
	} 
	
	if(p->data.ClassCode != p->Next->data.ClassCode) 
	{
	textcolor(11);
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	else{
	textcolor(5);
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	
	}
	
	PrintFrame(11);
	
	if(Language == 1)
	{
	ToMau(53,5,"DANH SACH HOC VIEN K53",14);
    ToMau(11,9,"STT",11);
    ToMau(20,9,"MA LOP",11);
    ToMau(32,9,"MA HOC VIEN",11);
    ToMau(52,9,"TEN HOC VIEN",11);
    ToMau(76,9,"NGAY SINH",11);
    ToMau(90,9,"DTBTL",11);
    ToMau(101,9,"HOC LUC",11);	
	}
	if(Language == 2)
	{
	ToMau(53,5,"LIST OF K53 STUDENT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);
    ToMau(32,9,"CODSTUDENT",11);
    ToMau(52,9,"NAME STUDENT",11);
    ToMau(76,9,"DATEOFBIR",11);
    ToMau(90,9,"SCORE",11);
    ToMau(101,9,"LEVEL",11);	
	}

	if(Language == 3)
	{
	ToMau(53,5,"LISTE DE K53 ETUDIANT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);       // code de classe
    ToMau(32,9,"CODETU",11);        // code de etudiant
    ToMau(52,9,"NOM DE L'ETU",11);  // nom de l'etudiant
    ToMau(76,9,"DATE DE NA",11);    // date de naissin
    ToMau(90,9,"MARQUER",11);     
    ToMau(101,9,"POUDAPP",11);	  // pouvoir d'apperentissage
	}
	
	gotoxy(1,1);
	XoaConTro();
    
    ToMau(4,24,"ษอป",4);
	ToMau(4,25,"บ บ",4);
	ToMau(4,26,"บ<บ",4);
	ToMau(4,27,"บ บ",4);
	ToMau(4,28,"ศอผ",4);
	
	ToMau(114,24,"ษอป",4);
	ToMau(114,25,"บ บ",4);
	ToMau(114,26,"บ>บ",4);
	ToMau(114,27,"บ บ",4);
	ToMau(114,28,"ศอผ",4);
	 
	gotoxy(65,2);
	textcolor(245);
	cout<<vitritrang;
	textcolor(7);
	
b:  gotoxy(1,1);
    XoaConTro();

    ComeBack = MouseEventToButtonBackAndPrint(1250,1090,190,90,    80,30,580,480,   1130,1080,580,480);
    
	if(ComeBack == 2)
	  {		
	  	if(vitri == StudentAmount+1)
	  	  {
	  	  	vitri --;
	  	  	vitri -= StudentAmount%15;
	  	    vitri -= 14;
		  }  
	  	 else
	  	   if(vitri == 16)
	  	      vitri = 1;
	  	    else
      	  	  vitri -= 30;
	  	
	  	if(p == l.Tail)
	  	  {  	
			int count = 0;
	  	  	do{
	  	  		p = p->Previous;
	  	  		count ++;
			} while(count < StudentAmount%15 - 1);
			
			count = 0;
			do{
			    
	  		    p = p->Previous;
	  	        count ++;
		    } while(count <= 14);   
		  }
		 else{
		    int count = 0;
	  	    do{
	  		 p = p->Previous;
	  	     count ++;
	  	     if(p == l.Head)
	  	        break;
		    } while(count <= 28);
	       }
		    
        g=p;
        
        vitritrang --;
        
        if(g == l.Head and firstime == 0)
          	firstime = 1;
		 else
		    if(g == l.Head and firstime == 1)
		       vitritrang ++;
		       
		goto a;  	
	  }  
	
	if(ComeBack == 3)
	  {
	  	firstime = 0;
	  	
	  	if(p == l.Tail)
	  	  {
	  	  	goto b;
		  }     	
	  	 else{
	  	 	vitritrang ++;
	  	    g = p->Next;
	  	    goto a;
		   }  	 	
	  }
}

void PrintGuiThuChoStudent(Transcript Member,string &message)
{
	ToMau(100,12,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(100,13,"บ                                                        บ",2);
	ToMau(100,14,"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(100,15,"บ                                                        บ",2);
	ToMau(100,16,"บ                                                        บ",2);
	ToMau(100,17,"บ                                                        บ",2);
	ToMau(100,18,"บ                                                        บ",2);
	ToMau(100,19,"บ                                                        บ",2);
	ToMau(100,20,"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ",2);
	
	ToMau(102,13,Member.StudentCode+" :",14);
	int i=0;
	int x=102;
	int y=15;
	while(i <= Member.ThuGui.length() )
	     {
	     	if(x == 155)
	     	  {
	     	  	x = 102;
	     	  	y++;
			   }
	     	ToMauChar(x++,y,Member.ThuGui[i],7);
	     	i++;
		 }
	
	ToMau(100,21,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(100,22,"บ                                                        บ",2);
	ToMau(100,23,"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(100,24,"บ                                                        บ",2);
	ToMau(100,25,"บ                                                        บ",2);
	ToMau(100,26,"บ                                                        บ",2);
	ToMau(100,27,"บ                                                        บ",2);
	ToMau(100,28,"บ                                                        บ",2);
	ToMau(100,29,"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ",2);
	
	ToMau(102,22,"Loi dap cua quan tri vien:",14);
	
	if(Language == 1)
	{
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      GUI      บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
    }
    
    if(Language == 2)
	{
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      SEND     บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
    }
    
    if(Language == 3)
	{
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ    ENVOYER    บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
    }
    
    // neu truong hop da co tin nhan cu thi in no ra, neu chua thi bao rong
//    if(Member.ThuDen != "" and Member.ThuDen != " ")
//    {
//    	int i=0;
//	    int x=102;
//	    int y=24;
//	    
//	    while(i <= Member.ThuDen.length() )
//	         {
//	     	    if(x == 155)
//	     	      {
//	     	  	    x = 102;
//	     	  	    y++;
//			      }
//	     	    ToMauChar(x++,y,Member.ThuGui[i],7);
//	     	    i++;
//		     }
//	}
//	else{
	
	int Max = 155;
	int b = 102;
	int c = 24;
a:	int choose = MouseEventToGuiThuChoStudent(1120,990,200,110,    1245,790,505,405,   1120,990,605,505);

	if(choose == 1)
	  {
	  	for(int i=12 ; i<=37 ; i++)
	  	    ToMau(100,i,"                                                          ",7);
	  	return;
	  }
	if(choose == 2)
	  {

	  	HienConTro();
	  	gotoxy(b,c);

	    char x = getch();
	
	    while(x != 13)
	    {
		    if(b==155 and c==28)
			   break;
			 
		    if(x != 8)
		      {
		  	    message += x;
		  	    ToMauChar(b++,c,message[message.length()-1],15);
		  	    if(b == Max)
		          {
		  	        b = 102;
		  	        c++;
		          }
		      }
		  
		    if(x == 8)  // phim BackSpace
		      {
		  	    if(!message.empty())
		  	        message.erase(message.length()-1,1);
		  	    
		  	    if(b == 102 and c == 24)
		  	      {
				  }
				else
		  	  	    ToMau(--b,c," ",0);
		  	    if(b == 102)
		  	    {
		  	
		  	  	   if(c == 24)
		  	  	        gotoxy(b,c);
		  	  	    else{
		  	  	    b = 155;
		  	  	    c--;	
				    }
		  	  	
			    }	
		  	    gotoxy(b,c);
		     }
		 
		    x = getch();
	    }  
	   XoaConTro();
	   goto a;
	  
	  }
	if(choose == 3)
	  {
	   if(message.length() <= 3)
	   {
	  	  	ToMau(120,36,"Hay nhap tin nhan dai hon!",12);
	  	  	Sleep(1000);
	  	  	ToMau(120,36,"                           ",12);
	  	  	goto a;
		}
		else{
			ToMau(120,36,"Da gui thanh cong!",10);
			Sleep(1000);
			ToMau(120,36,"                  ",10);
		    goto a;
		}
		
	  }
//    }
}

void PrintAllMessToAdminByArray(List &l, HopThuDenAdmin Array[])
{
	int sotrang;
	if(MessAmount%10 == 0)
	   sotrang = MessAmount/10;
	else
	   sotrang = (int)MessAmount/10 + 1;

	int vitritrang = 1;
	
	PrintEmpty();
	textcolor(7);
	if(Language == 1)
	{
	cout<<"\n\n\n\n\n" ;
	cout<<"                                                                                                                               ษอออออออออออออออป\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               บ      QUAY     บ\n";
	cout<<"                                                                                                                               บ      LAI      บ\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               ศอออออออออออออออผ\n";	
	}
	if(Language == 2)
	{
	cout<<"\n\n\n\n\n" ;
	cout<<"                                                                                                                               ษอออออออออออออออป\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               บ      COME     บ\n";
	cout<<"                                                                                                                               บ      BACK     บ\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               ศอออออออออออออออผ\n";	
	}
	if(Language == 3)
	{
	cout<<"\n\n\n\n\n" ;
	cout<<"                                                                                                                               ษอออออออออออออออป\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               บ     TOURNE    บ\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               บ               บ\n";
	cout<<"                                                                                                                               ศอออออออออออออออผ\n";	
	}
	
	gotoxy(1,1);
	
	textcolor(3);
	cout<<"\n\n\n\n";
    printf("\n\tษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                      บ");
    printf("\n\tบ                                                                      บ");
    printf("\n\tบ                                                                      บ");
	printf("\n\tฬออออออออออออออัอออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
	printf("\n\tบ              ณ                                                       บ");
	printf("\n\tบ %-12s ณ                                                       บ","");
	printf("\n\tบ              ณ                                                       บ");	
	printf("\n\tฬออออออออออออออุอออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
	
	if(Language == 1)
	{
	ToMau(30, 8,"Y KIEN PHAN HOI CUA HOC VIEN",14);
	ToMau(11,12,"MA HOC VIEN",14);
	ToMau(48,12,"Y KIEN",15);	
	}
	
	if(Language == 2)
	{
	ToMau(35, 8,"OPINION OF STUDENT",14);
	ToMau(11,12,"CODEOFSTUDENT",14);
	ToMau(48,12,"OPINION",15);		
	}
	if(Language == 3)
	{
	ToMau(32, 8,"I'OPINION DE I'ETUDIANT",14);
	ToMau(11,12,"CODEOFSTUDENT",14);
	ToMau(48,12,"COMMENT",15);	
	}
	
	
a:  int soluong;
    if(vitritrang < sotrang)
        soluong = 10;
	else{
		soluong = MessAmount-(vitritrang-1)*10;
	}
	
	for(int j=1 ; j<=10 ; j++)
	    ToMau(81,13+2*j," ",7);
	for(int i=1 ; i<=soluong ; i++)
	{
	    
	ToMau(9,13+2*i,"บ              ณ                                                       บ",3);
	
	for(Node* p=l.Head ; p!=NULL ; p=p->Next)
	   {
	   	if(p->data.StudentCode == Array[(vitritrang-1)*10+i].StudentCode)
	   	  {
	   	  	if(p->data.ThuDen == "" or p->data.ThuDen == " ")
	   	  	    ToMau(81,13+2*i,"!",12);
	   	  	else
	   	  	    ToMau(81,13+2*i,"!",10);
	   	  	break;
		  }
	   }
	   
	string str1;
	string str2;
	str1 = Array[(vitritrang-1)*10+i].ThuDen;
	
	if(str1.length() >= 50)
	  {
	  	while(str1.length() >= 50)
	  	     {
	  	     	str1.erase(str1.length()-1,1);
			 }
	    str2 = str1;
	    str2.append("...");
	  }  
	else
	    str2 = str1;
	
	ToMau(11,13+2*i,Array[(vitritrang-1)*10+i].StudentCode,6);
	ToMau(27,13+2*i,str2,7);
	textcolor(3);
	if(i != soluong)
	printf("\n\tฬฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ");
	else
	printf("\n\tศออออออออออออออฯอออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
	}

	PrintFrame(11);
	                                                                                                // 245-590
	int choose = MouseEventToButtonBackAndPrint2(1120,990,200,110, 50,25,495,415,   685,660,495,415 ,   630,65,280,245,  630,65,315,281,  630,65,350,316,  630,65,385,351,   630,65,420,386,  630,65,455,421,   630,65,490,456,   630,65,525,491,    630,65,560,526,   630,65,595,561 , soluong);
	
	if(choose == 1)
	  {
	  	textcolor(7);
	  	return;
	  }
	if(choose == 2)
	  {
	  	if(vitritrang != 1)
	  	  {
	  	  	vitritrang --;
	  	  	for(int i=15 ; i<=34 ; i++)
	  	  	   	ToMau(9,i,"                                                                        ",7);
				   
	  	  	goto a;
		  }
		else{
			goto a;
		}
	  }
	if(choose == 3)
	  {
	  	if(vitritrang != sotrang)
	  	  {
	  	  	vitritrang ++;
	  	  	for(int i=15 ; i<=34 ; i++)
	  	  	   	ToMau(9,i,"                                                                        ",7);
	  	  	goto a;
	      }
	    else{
	    	goto a;
		}
	  }
	if(choose == 4 or choose == 5 or choose == 6 or choose == 7 or choose == 8 or choose == 8 or choose == 9 or choose == 10 or choose == 11 or choose == 12 or choose == 13)
	  {
	  	
	  	string str = Array[(vitritrang-1)*10+choose-3].StudentCode;
	  	Transcript Member;
	  	
	  	// Xac dinh doi tuong Member
	  	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	  	   {
	  	   	if(p->data.StudentCode == str)
	  	   	  {
	  	   	  	p->data.ThuGui = Array[(vitritrang-1)*10+choose-3].ThuDen;
	  	   	  	Gan(Member,p->data);
	  	   	  	break;
			  }	   
		   }
	  	
	  	string message;
	  	
	  	// lay noi dung message
	  	PrintGuiThuChoStudent(Member,message);
	  	
	  	// ghi du lieu message vao file
	  	GuiThuChoStudent(l,Member,message);
	  	
	  	goto a;
	  }
	
}

void PrintAllTranscriptByArray(Transcript Array[],int StudentAmount)
{
	PrintEmpty();
	textcolor(7);
	if(Language == 1)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ      QUAY     บ\n";
	cout<<"                                                                                                                  บ      LAI      บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	
	if(Language == 2)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ      COME     บ\n";
	cout<<"                                                                                                                  บ      BACK     บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	if(Language == 3)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     TOURNE    บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	
	gotoxy(1,1);
	
	textcolor(5);
	cout<<"\n";
    printf("\n\tษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","STT","MA LOP","MA HOC VIEN"," EN HOC VIEN","Ngay Sin ","DTBTL","Hoc Luc");	
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tฬออออออุอออออออออออออุอออออออออออออุอออออออออออออออออออออออออออุออออออออออออออุออออออออออุออออออออออออน");
	
	gotoxy(58,2);
	
	int sotrang;
	if((float)StudentAmount/15 > (int)StudentAmount/15)
	   sotrang = (int)StudentAmount/15 + 1;
	 else
	   sotrang = (int)StudentAmount/15;
	textcolor(245);
	
	if(Language == 1)
    cout<<"Trang:  /"<<sotrang;
    if(Language == 2)
    cout<<" Page:  /"<<sotrang;
    if(Language == 3)
    cout<<" Page:  /"<<sotrang;
    
	textcolor(7);
	
	int danhdau = 0;
	int vitritrang = 1;
	
a:  textcolor(5);
    gotoxy(1,11);
    int dem = 1;
	int y = 12;
	
	
	if(vitritrang == sotrang)
	{
	gotoxy(1,12);
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	
	gotoxy(1,11);
	
	}
	for(int i=danhdau;i<StudentAmount;i++)
	{
	
    textcolor(5);
    
	printf("\n\tบ %-4d ณ  %-10s ณ %-12sณ  %-22s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",i+1,Array[i].ClassCode.c_str(),Array[i].StudentCode.c_str(),Array[i].StudentName.c_str(),Array[i].Day,Array[i].Month,Array[i].Year,Array[i].DTBTL,Array[i].HocLuc.c_str());  
	
	ToMauInt(11,y,i+1,6);
	ToMau(19,y,Array[i].ClassCode,15);
	ToMau(32,y,Array[i].StudentCode,6);
	ToMau(47,y,Array[i].StudentName,15);
	
	if(Array[i].Day < 10)
	  {
	  	ToMauInt(75,y,0,6);
	    ToMauInt(76,y,Array[i].Day,6);	
	  }
	else
	   ToMauInt(75,y,Array[i].Day,6);
	 
	if(Array[i].Month < 10)
	  {
	  	ToMauInt(78,y,0,6);
	  	ToMauInt(79,y,Array[i].Month,6);
	  }   
	else
	   ToMauInt(78,y,Array[i].Month,6); 
	 
	ToMauInt(81,y,Array[i].Year,6); 
	
	gotoxy(90,y);
	textcolor(15);
	printf("%-6.2f",Array[i].DTBTL);
	
	ToMau(101,y,Array[i].HocLuc,6);
	   
	dem ++;
	if( dem == 16)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;
	}
	
	if(i == StudentAmount-1)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;	
	} 
	
	if(i != StudentAmount-1 or dem != 15)
	{
	textcolor(5);
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	
	y+=2;
	}
	
	PrintFrame(11);
	
	if(Language == 1)
	{
	ToMau(53,5,"DANH SACH HOC VIEN K53",14);
    ToMau(11,9,"STT",11);
    ToMau(20,9,"MA LOP",11);
    ToMau(32,9,"MA HOC VIEN",11);
    ToMau(52,9,"TEN HOC VIEN",11);
    ToMau(76,9,"NGAY SINH",11);
    ToMau(90,9,"DTBTL",11);
    ToMau(101,9,"HOC LUC",11);	
	}
	if(Language == 2)
	{
	ToMau(53,5,"LIST OF K53 STUDENT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);
    ToMau(32,9,"CODESTUDENT",11);
    ToMau(52,9,"NAME STUDENT",11);
    ToMau(76,9,"DATEOFBIR",11);
    ToMau(90,9,"SCORE",11);
    ToMau(101,9,"LEVEL",11);	
	}

	if(Language == 3)
	{
	ToMau(53,5,"LISTE DE K53 ETUDIANT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);       // code de classe
    ToMau(32,9,"CODETUDIANT",11);        // code de etudiant
    ToMau(52,9,"NOM DE L'ETU",11);  // nom de l'etudiant
    ToMau(76,9,"DATE DE NA",11);    // date de naissin
    ToMau(90,9,"MARQUER",11);     
    ToMau(101,9,"POUDAPP",11);	  // pouvoir d'apperentissage
	}
	
	gotoxy(1,1);
	XoaConTro();
    
    ToMau(4,24,"ษอป",4);
	ToMau(4,25,"บ บ",4);
	ToMau(4,26,"บ<บ",4);
	ToMau(4,27,"บ บ",4);
	ToMau(4,28,"ศอผ",4);
	
	ToMau(114,24,"ษอป",4);
	ToMau(114,25,"บ บ",4);
	ToMau(114,26,"บ>บ",4);
	ToMau(114,27,"บ บ",4);
	ToMau(114,28,"ศอผ",4);
	 
	gotoxy(65,2);
	textcolor(245);
	cout<<vitritrang;
	textcolor(7);
	
    gotoxy(1,1);
    XoaConTro();

    ComeBack = MouseEventToButtonBackAndPrint(1250,1090,190,90,    80,30,580,480,   1130,1080,580,480);
    
    
	if(ComeBack == 2)
       if(danhdau != 0)
         {
         	danhdau -= 15;
			vitritrang --;
         	goto a;	
         }
		else
		    goto a;
      	   
	
	if(ComeBack == 3)
	   if(danhdau < StudentAmount - 14)
	     {
	     	danhdau += 15;
	     	vitritrang ++;
	     	goto a;
		 }
		else   
		    goto a;
}

void PrintAllTranscriptByArrayNew(Transcript Array[],int StudentAmount,Transcript &One)
{
	PrintEmpty();
	textcolor(7);
	if(Language == 1)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ      QUAY     บ\n";
	cout<<"                                                                                                                  บ      LAI      บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	
	if(Language == 2)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ      COME     บ\n";
	cout<<"                                                                                                                  บ      BACK     บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	if(Language == 3)
	{
	cout<<"\n\n\n" ;
	cout<<"                                                                                                                  ษอออออออออออออออป\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ     TOURNE    บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  บ               บ\n";
	cout<<"                                                                                                                  ศอออออออออออออออผ\n";	
	}
	
	gotoxy(1,1);
	
	textcolor(5);
	cout<<"\n";
    printf("\n\tษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
    printf("\n\tบ                                                                                                     บ");
	printf("\n\tฬออออออัอออออออออออออัอออออออออออออัอออออออออออออออออออออออออออัออออออออออออออัออออออออออัออออออออออออน");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","STT","MA LOP","MA HOC VIEN"," EN HOC VIEN","Ngay Sin ","DTBTL","Hoc Luc");	
	printf("\n\tบ %-4s ณ   %-10sณ %-12sณ      %-21sณ    %-10sณ  %-6s  ณ  %-8s  บ","","","","","","","");
	printf("\n\tฬออออออุอออออออออออออุอออออออออออออุอออออออออออออออออออออออออออุออออออออออออออุออออออออออุออออออออออออน");
	
	gotoxy(58,2);
	
	int sotrang;
	if((float)StudentAmount/15 > (int)StudentAmount/15)
	   sotrang = (int)StudentAmount/15 + 1;
	 else
	   sotrang = (int)StudentAmount/15;
	textcolor(245);
	
	if(Language == 1)
    cout<<"Trang:  /"<<sotrang;
    if(Language == 2)
    cout<<" Page:  /"<<sotrang;
    if(Language == 3)
    cout<<" Page:  /"<<sotrang;
    
	textcolor(7);
	
	int danhdau = 0;
	int vitritrang = 1;
	
a:  textcolor(5);
    gotoxy(1,11);
    int dem = 1;
	int y = 12;
	
	if(vitritrang == sotrang)
	{
	gotoxy(1,12);
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	printf("                                                                                                                        \n");
	
	gotoxy(1,11);
	
	}
	for(int i=danhdau;i<StudentAmount;i++)
	{
	
    textcolor(5);
    
	printf("\n\tบ %-4d ณ  %-10s ณ %-12sณ  %-22s   ณ  %2d/%2d/%4d  ณ  %-6.2f  ณ  %-8s  บ",i+1,Array[i].ClassCode.c_str(),Array[i].StudentCode.c_str(),Array[i].StudentName.c_str(),Array[i].Day,Array[i].Month,Array[i].Year,Array[i].DTBTL,Array[i].HocLuc.c_str());  
	
	ToMauInt(11,y,i+1,6);
	ToMau(19,y,Array[i].ClassCode,15);
	ToMau(32,y,Array[i].StudentCode,6);
	ToMau(47,y,Array[i].StudentName,15);
	
	if(Array[i].Day < 10)
	  {
	  	ToMauInt(75,y,0,6);
	    ToMauInt(76,y,Array[i].Day,6);	
	  }
	else
	   ToMauInt(75,y,Array[i].Day,6);
	 
	if(Array[i].Month < 10)
	  {
	  	ToMauInt(78,y,0,6);
	  	ToMauInt(79,y,Array[i].Month,6);
	  }   
	else
	   ToMauInt(78,y,Array[i].Month,6); 
	 
	ToMauInt(81,y,Array[i].Year,6); 
	
	gotoxy(90,y);
	textcolor(15);
	printf("%-6.2f",Array[i].DTBTL);
	
	ToMau(101,y,Array[i].HocLuc,6);
	   
	dem ++;
	if( dem == 16)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;
	}
	
	if(i == StudentAmount-1)
	{
	textcolor(5);
	printf("\n\tศออออออฯอออออออออออออฯอออออออออออออฯอออออออออออออออออออออออออออฯออออออออออออออฯออออออออออฯออออออออออออผ\n");
    break;	
	} 
	
	if(i != StudentAmount-1 or dem != 15)
	{
	textcolor(5);
	printf("\n\tวฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤถ");
	}
	
	y+=2;
	}
	
	PrintFrame(11);
	
	if(Language == 1)
	{
	ToMau(53,5,"DANH SACH HOC VIEN K53",14);
    ToMau(11,9,"STT",11);
    ToMau(20,9,"MA LOP",11);
    ToMau(32,9,"MA HOC VIEN",11);
    ToMau(52,9,"TEN HOC VIEN",11);
    ToMau(76,9,"NGAY SINH",11);
    ToMau(90,9,"DTBTL",11);
    ToMau(101,9,"HOC LUC",11);	
	}
	if(Language == 2)
	{
	ToMau(53,5,"LIST OF K53 STUDENT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);
    ToMau(32,9,"CODESTUDENT",11);
    ToMau(52,9,"NAME STUDENT",11);
    ToMau(76,9,"DATEOFBIR",11);
    ToMau(90,9,"SCORE",11);
    ToMau(101,9,"LEVEL",11);	
	}

	if(Language == 3)
	{
	ToMau(53,5,"LISTE DE K53 ETUDIANT",14);
    ToMau(11,9,"N-O",11);
    ToMau(20,9,"CODCLA",11);       // code de classe
    ToMau(32,9,"CODETUDIANT",11);        // code de etudiant
    ToMau(52,9,"NOM DE L'ETU",11);  // nom de l'etudiant
    ToMau(76,9,"DATE DE NA",11);    // date de naissin
    ToMau(90,9,"MARQUER",11);     
    ToMau(101,9,"POUDAPP",11);	  // pouvoir d'apperentissage
	}
	
	gotoxy(1,1);
	XoaConTro();
    
    ToMau(4,24,"ษอป",4);
	ToMau(4,25,"บ บ",4);
	ToMau(4,26,"บ<บ",4);
	ToMau(4,27,"บ บ",4);
	ToMau(4,28,"ศอผ",4);
	
	ToMau(114,24,"ษอป",4);
	ToMau(114,25,"บ บ",4);
	ToMau(114,26,"บ>บ",4);
	ToMau(114,27,"บ บ",4);
	ToMau(114,28,"ศอผ",4);
	 
	gotoxy(65,2);
	textcolor(245);
	cout<<vitritrang;
	textcolor(7);
	
    gotoxy(1,1);
    XoaConTro();
    
    int soluong = StudentAmount - (vitritrang-1)*15;
    
    if(soluong >= 15)
       soluong = 15;
       
    ComeBack = MouseEventToButtonBackAndPrintAndFind(1045,915,160,75,    45,20,495,415,   930,905,495,415,   880,70,233,200,   880,70,267,234,   880,70,301,268,    880,70,335,302,   880,70,369,336,   880,70,403,370,   880,70,437,404,  880,70,471,438,   880,70,505,472,   880,70,539,506,   880,70,573,540,   880,70,607,574,   880,70,641,608,   880,70,675,642,  880,70,705,675,  soluong);
    
    if(ComeBack == 1)
       return ;
    
	if(ComeBack == 2)
       if(danhdau != 0)
         {
         	danhdau -= 15;
			vitritrang --;
         	goto a;	
         }
		else
		    goto a;
      	   
	
	if(ComeBack == 3)
	   if(danhdau < StudentAmount - 14)
	     {
	     	danhdau += 15;
	     	vitritrang ++;
	     	goto a;
		 }
		else   
		    goto a;
		    
    if(ComeBack == 4 or ComeBack == 5 or ComeBack == 6 or ComeBack == 7 or ComeBack == 8 or ComeBack == 9 or ComeBack == 10 or ComeBack == 11 or ComeBack == 12 or ComeBack == 13 or ComeBack == 14 or ComeBack == 15 or ComeBack == 16 or ComeBack == 17 or ComeBack == 18  )
      {
      	Gan(One,Array[15*(vitritrang-1)+ComeBack-4]);
      	PrintOneTranscript(One);
      	return ;
	  }
	
}

//==============================================================================================================================
//==============================================================================================================================

void PrintEstimateClass(List l)
{
	int count=1; 
	int STT=1;   
    
    textcolor(5);
	gotoxy(1,1);
	
	printf("\n\n\n\n\n\n\n");
	if(Language == 1)
	{
	printf("                         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("                         บ                                                                             บ\n");	
	printf("                         ฬออออออัอออออออออออออออัออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	printf("                         บ %-4s ณ    %-10s ณ              %-9s               ณ  %-12s บ\n","","","","");
	printf("                         บ %-4s ณ    %-10s ณ              %-9s               ณ  %-12s บ\n","STT","Ma lop","Ten lop","So Hoc Vien");
	printf("                         บ %-4s ณ    %-10s ณ              %-9s               ณ  %-12s บ\n","","","","");
	printf("                         ฬออออออุอออออออออออออออุออออออออออออออออออออออออออออออออออออออุอออออออออออออออน\n");
	
	ToMau(55, 9,"BANG THONG KE SO HOC VIEN",14);
	ToMau(28,12,"STT",11);	
	ToMau(38,12,"Ma lop",11);	
	ToMau(64,12,"Ten lop",11);	
	ToMau(91,12,"So Hoc Vien",11);	
	}
		
	if(Language == 2)
	{
	printf("                         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("                         บ                                                                             บ\n");	
	printf("                         ฬออออออัอออออออออออออออัออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	printf("                         บ %-4s ณ    %-10s ณ              %-7s                 ณ %-14sบ\n","","","","");
	printf("                         บ %-4s ณ    %-10s ณ              %-7s                 ณ %-14sบ\n","STT","Ma lop","Ten lop","So Hoc Vien");
	printf("                         บ %-4s ณ    %-10s ณ              %-7s                 ณ %-14sบ\n","","","","");
	printf("                         ฬออออออุอออออออออออออออุออออออออออออออออออออออออออออออออออออออุอออออออออออออออน\n");
	
	ToMau(56, 9,"STUDENT STATISTIC TABLE",14);
	ToMau(28,12,"N-O",11);	
	ToMau(38,12,"ClassCode",11);	
	ToMau(64,12,"ClassName",11);	
	ToMau(90,12,"StudentAmount",11);	
	}
	if(Language == 3)
	{
	printf("                         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("                         บ                                                                             บ\n");	
	printf("                         ฬออออออัอออออออออออออออัออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	printf("                         บ %-4s ณ    %-10s ณ              %-10s              ณ %-14sบ\n","","","","");
	printf("                         บ %-4s ณ    %-10s ณ              %-10s              ณ %-14sบ\n","STT","Ma lop","Ten lop","So Hoc Vien");
	printf("                         บ %-4s ณ    %-10s ณ              %-10s              ณ %-14sบ\n","","","","");
	printf("                         ฬออออออุอออออออออออออออุออออออออออออออออออออออออออออออออออออออุอออออออออออออออน\n");
	
	ToMau(50, 9,"TABLEAU DE STATISQUES DES ETUDIANT",14);
	ToMau(28,12,"N-O",11);	
	ToMau(38,12,"CodeClasse",11);	
	ToMau(64,12,"NomClasse",11);	
	ToMau(90,12,"NumerEtudient",11);	
	}
	gotoxy(1,15);
	
	int y = 15;
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	if(p->data.ClassCode == p->Next->data.ClassCode)
	   count++;
	   
	if(p->data.ClassCode != p->Next->data.ClassCode)
	{	
	gotoxy(1,y);
	textcolor(5);
	printf("                         บ %-4d ณ   %-10s  ณ  %-36sณ      %-4d     บ\n",STT,p->data.ClassCode.c_str(),ClassName(p->data.ClassCode).c_str(),count);
    printf("                         วฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n");
    
    ToMauInt(28,y,STT,15);
    ToMau(37,y,p->data.ClassCode,6);
    ToMau(52,y,ClassName(p->data.ClassCode),15);
    ToMauInt(95,y,count,6);
    
    y += 2;
	count = 1;     
	STT++;         
	}

	if(p->Next == l.Tail)
	{
	textcolor(5);
	
	gotoxy(1,y);
	printf("                         บ %-4d ณ   %-10s  ณ  %-36sณ      %-4d     บ\n",STT,p->data.ClassCode.c_str(),ClassName(p->data.ClassCode).c_str(),count);
    printf("                         วฤฤฤฤฤฤมฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤมฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤมฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"); 
	
	ToMauInt(28,y,STT,15);
    ToMau(37,y,p->data.ClassCode,6);
    ToMau(52,y,ClassName(p->data.ClassCode),15);
    ToMauInt(95,y,count,6);
	y += 2; 
    break;
	}
    } 
    
    gotoxy(1,y);
    textcolor(13);
    if(Language == 1)
    {
    printf("                         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	printf("                         บ                       TONG SO HOC VIEN                      ณ      %-4d     บ\n",StudentAmount);
	printf("                         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฯอออออออออออออออผ");	
	
	ToMau(50,y+1,"TONG SO HOC VIEN",14);	
	}
	if(Language == 2)
    {
    printf("                         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	printf("                         บ                       TOTAL OF STUDENT                      ณ      %-4d     บ\n",StudentAmount);
	printf("                         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฯอออออออออออออออผ");	
	
	ToMau(50,y+1,"TOTAL OF STUDENT",14);	
	}
	if(Language == 3)
    {
    printf("                         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออัอออออออออออออออน\n");
	printf("                         บ                   NOMBRE TOTAL D'ETUDIANT                   ณ      %-4d     บ\n",StudentAmount);
	printf("                         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออฯอออออออออออออออผ");	
	
	ToMau(46,y+1,"NOMBRE TOTAL D'ETUDIANT",14);	
	}
	
	ToMauInt(95,y+1,StudentAmount,14);
	
	int colorFrame = 11;
	PrintFrame(colorFrame);
}

void PrintChartClass(List l)
{
	
	PrintEmpty2();
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	int k = 1;
	while(k<4)
	     {
	     	p->data.ClassCode.erase(p->data.ClassCode.begin() + p->data.ClassCode.length() - 1);
	     	k++;
		 }
	}
    
	int count = 1;
	int x = 30;
	int y = 32;
	
	gotoxy(1,1);
	textcolor(12);
	cout<<"\n\n\n";
	cout<<"\n\t\t\t^";
	cout<<"\n\t\t\tณ";
	for(int i=1 ; i<=24 ; i++)
	   	cout<<"\n\t\t\tณ";
	cout<<"\n\t\t\tภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ>";
	
	for(int i=1; i<=5 ; i++)
	   {
	   	ToMauInt(21,y-i*5,i*5,11);
	   	ToMau(24,y-i*5-1,"_",12);
	   	for(int j=1 ; j<=50 ; j++)
	   	   	ToMau(24+j*2,y-i*5-1,".",12);	
	   }
	
	textcolor(14);
    gotoxy(1,36);
    if(Language == 1)
    {
    cout<<"                                           Bieu do cot the hien So hoc vien moi lop"; 
    cout<<"\n                                               cua dai doi 153 nam hoc 2018-2019         "; 
    
    int colorFrame = 11;
	PrintFrame(colorFrame);
    
    ToMau(15,4,"So Hoc Vien",9);
	ToMau(15,5,"(nguoi)",9);
	ToMau(120,32,"Lop",2);
	ToMau(124,32,"(ten)",2);
	ToMau(21,32,"0",9);
    ToMau(90,5,"ÛÛ",14);
    ToMau(93,5,": So luong hoc vien",7);	
	}
	if(Language == 2)
    {
    cout<<"                                           The bar graph shows the number of students in each class"; 
    cout<<"\n                                                  of the company 153 in the coures 2018-2019        "; 
    
    int colorFrame = 11;
	PrintFrame(colorFrame);
    
    ToMau(15,4,"StudentAmount",9);
	ToMau(15,5,"(people)",9);
	ToMau(119,32,"Class",2);
	ToMau(124,32,"(name)",2);
	ToMau(21,32,"0",9);
    ToMau(90,5,"ÛÛ",14);
    ToMau(93,5,": StudentAmount",7);	
	}
	if(Language == 3)
    {
    cout<<"                                           Le graphique a barres montre le nombre d'eleves dans chaque"; 
    cout<<"\n                                                    classe de entreprise 153 cours 2018-2019        "; 
    
    int colorFrame = 11;
	PrintFrame(colorFrame);
    
    ToMau(15,4,"NombreEtudiant",9);
	ToMau(15,5,"(gens)",9);
	ToMau(119,32,"Classe",2);
	ToMau(120,33,"(le nom)",2);
	ToMau(21,32,"0",9);
    ToMau(90,5,"ÛÛ",14);
    ToMau(93,5,": Nombre D'etudiant",7);	
	}
    
    ToMau(12,2,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",5);
    
    for(int i=1;i<=36;i++)
       	ToMau(12,2+i,"ÛÛ",5);
	ToMau(12,39,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",5);
	for(int i=1;i<=36;i++)
       	ToMau(130,39-i,"ÛÛ",5);
	
    for(Node *p=l.Head ; p!=NULL ; p=p->Next)
    {
    if(p->data.ClassCode == p->Next->data.ClassCode)
	   count++;
	  
	if(p->data.ClassCode != p->Next->data.ClassCode)
	{
	ToMau(x-1,y,p->data.ClassCode,10);
	
	ToMau(x,y-1,"฿฿",14);
	Sleep(tocdo);
	for(int i=2;i<=count;i++)
	   {
	    ToMau(x,y-i,"ÛÛ",14);
	   	Sleep(tocdo);
	   }     
        
	ToMauInt(x,y-count-1,count,11);
	
	count = 1;
	
	x += 11;
	}
	
	if(p->Next == l.Tail)
	{
	ToMau(x-1,y,p->data.ClassCode,10);
	
	ToMau(x,y-1,"฿฿",14);
	Sleep(tocdo);
	
	for(int i=2;i<=count;i++)
	   {
	   	ToMau(x,y-i,"ÛÛ",14);
	   	Sleep(tocdo);
	   }   
        
    ToMauInt(x,y-count-1,count,11);
	    
	break;
	}
	}	    
    
    for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	    p->data.ClassCode += "K53";
	}
	
}

//==============================================================================================================================
//==============================================================================================================================

void PrintEstimateScore(List l)
{
	int xuatsac=0,tongxuatsac=0;
	int gioi=0   ,tonggioi=0;
	int kha=0    ,tongkha=0;
	int trbinh=0 ,tongtrbinh=0;
	int yeu=0    ,tongyeu=0;
	
	int count=1;
	int STT=1;
	
	gotoxy(1,12);
	textcolor(5);
	
	if(Language == 1)
	{
	printf("                  ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("                  บ                                      BANG THONG KE TI LE HOC LUC                                     บ\n");
	printf("                  ฬออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออน\n");
	printf("                  บ      ณ               ณ    Xuat sac   ณ      Gioi     ณ      Kha      ณ   Trung binh  ณ       Yeu     บ\n");
	printf("                  บ STT  ณ     Ma Lop    รฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤถ\n");
	printf("                  บ      ณ               ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   บ\n");
	printf("                  ฬออออออุอออออออออออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออน\n");
	
	ToMau(58,13,"BANG THONG KE TI LE HOC LUC",14);
	ToMau(21,16,"STT",11);
	ToMau(32,16,"Ma Lop",11);
	ToMau(47,15,"Xuat Sac",11);
	ToMau(65,15,"Gioi",11);
	ToMau(81,15,"Kha",11);
	ToMau(94,15,"Trung binh",11);
	ToMau(114,15,"Yeu",11);
	ToMau(46,17,"SL",10);
	ToMau(62,17,"SL",10);
	ToMau(78,17,"SL",10);
	ToMau(94,17,"SL",10);
	ToMau(110,17,"SL",10);
	ToMau(54,17,"%",6);
	ToMau(70,17,"%",6);
	ToMau(86,17,"%",6);
	ToMau(102,17,"%",6);
	ToMau(118,17,"%",6);	
	}
	if(Language == 2)
	{
	printf("                  ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("                  บ                                                                                                      บ\n");
	printf("                  ฬออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออน\n");
	printf("                  บ      ณ               ณ    Xuat sac   ณ      Gioi     ณ      Kha      ณ   Trung       ณ       Yeu     บ\n");
	printf("                  บ STT  ณ     Ma Lop    รฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤถ\n");
	printf("                  บ      ณ               ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   บ\n");
	printf("                  ฬออออออุอออออออออออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออน\n");
	
	ToMau(56,13,"ACADEMIC PERFORMANCE STATISTICS TABLE",14);
	ToMau(21,16,"N-O",11);
	ToMau(32,16,"ClaCod",11);
	ToMau(47,15,"Excellent",11);
	ToMau(65,15,"Good",11);
	ToMau(81,15,"Pretty",11);
	ToMau(94,15,"Medium",11);
	ToMau(114,15,"Weak",11);
	ToMau(46,17,"AM",10);
	ToMau(62,17,"AM",10);
	ToMau(78,17,"AM",10);
	ToMau(94,17,"AM",10);
	ToMau(110,17,"AM",10);
	ToMau(54,17,"%",6);
	ToMau(70,17,"%",6);
	ToMau(86,17,"%",6);
	ToMau(102,17,"%",6);
	ToMau(118,17,"%",6);	
	}
	if(Language == 3)
	{
	printf("                  ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
	printf("                  บ                                                                                                      บ\n");
	printf("                  ฬออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออัอออออออออออออออน\n");
	printf("                  บ      ณ               ณ    Xuat sac   ณ      Gioi     ณ      Kha      ณ   Trung binh  ณ       Yeu     บ\n");
	printf("                  บ STT  ณ     Ma Lop    รฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤลฤฤฤฤฤฤฤยฤฤฤฤฤฤฤถ\n");
	printf("                  บ      ณ               ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   ณ   SL  ณ   %   บ\n");
	printf("                  ฬออออออุอออออออออออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออุอออออออน\n");
	
	ToMau(50,13,"TABLEAU DE STATISTIQUES DE PERFORMANCE ยCDEMIQUE",14);
	ToMau(21,16,"N-O",11);
	ToMau(32,16,"ClaCod",11);
	ToMau(47,15,"Excellent",11);
	ToMau(65,15,"Bon ",11);
	ToMau(81,15,"Jolie",11);
	ToMau(94,15,"En Moyenne",11);
	ToMau(114,15,"Faible",11);
	ToMau(46,17,"QU",10);
	ToMau(62,17,"QU",10);
	ToMau(78,17,"QU",10);
	ToMau(94,17,"QU",10);
	ToMau(110,17,"QU",10);
	ToMau(54,17,"%",6);
	ToMau(70,17,"%",6);
	ToMau(86,17,"%",6);
	ToMau(102,17,"%",6);
	ToMau(118,17,"%",6);	
	}
	
	
	gotoxy(1,19);
	int y = 19;
	  
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	textcolor(5);
	if(p == l.Tail)
	{
	if(p->data.HocLuc == "Xuat Sac") 
	   xuatsac++;
	if(p->data.HocLuc == "Gioi") 
	   gioi++;
	if(p->data.HocLuc == "Kha") 
	   kha++;	
	if(p->data.HocLuc == "TB") 
	   trbinh++;
	if(p->data.HocLuc == "Yeu") 
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
	
	gotoxy(1,y);
	printf("                  บ %-4d ณ   %-10s  ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% บ\n",STT,p->data.ClassCode.c_str(),xuatsac,a,gioi,b,kha,c,trbinh,d,yeu,e);
	
	ToMauInt(21,y,STT,7);
	ToMau(30,y,p->data.ClassCode,7);
	ToMauInt(45,y,xuatsac,2);
	ToMauInt(53,y,a,6);
	ToMauInt(61,y,gioi,2);
	ToMauInt(69,y,b,6);
	ToMauInt(77,y,kha,2);
	ToMauInt(85,y,c,6);
	ToMauInt(93,y,trbinh,2);
	ToMauInt(101,y,d,6);
	ToMauInt(109,y,yeu,2);
	ToMauInt(117,y,e,6);
	     
	y += 2;	                   
	tongxuatsac += xuatsac;
	tonggioi += gioi;
	tongkha += kha;
	tongtrbinh += trbinh;
	tongyeu += yeu;
	    
	}
	else{
	if(p->data.ClassCode == p->Next->data.ClassCode)
	  {
	  count++;
	  
	  if(p->data.HocLuc == "Xuat Sac") 
	     xuatsac++;
	  if(p->data.HocLuc == "Gioi") 
	     gioi++;
	  if(p->data.HocLuc == "Kha") 
	     kha++;	
	  if(p->data.HocLuc == "TB") 
	     trbinh++;
	  if(p->data.HocLuc == "Yeu") 
	     yeu++;
	  }
	
	else
	{	
	if(p->data.HocLuc == "Xuat Sac") 
	    xuatsac++;
	if(p->data.HocLuc == "Gioi") 
	    gioi++;
	if(p->data.HocLuc == "Kha") 
	    kha++;	
	if(p->data.HocLuc == "TB") 
	    trbinh++;
	if(p->data.HocLuc == "Yeu") 
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
	
	gotoxy(1,y);
	printf("                  บ %-4d ณ   %-10s  ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% บ\n",STT,p->data.ClassCode.c_str(),xuatsac,a,gioi,b,kha,c,trbinh,d,yeu,e);
    printf("                  วฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤลฤฤฤฤฤฤฤถ\n");
	 
	ToMauInt(21,y,STT++,7);
	ToMau(30,y,p->data.ClassCode,7);
	ToMauInt(45,y,xuatsac,2);
	ToMauInt(53,y,a,6);
	ToMauInt(61,y,gioi,2);
	ToMauInt(69,y,b,6);
	ToMauInt(77,y,kha,2);
	ToMauInt(85,y,c,6);
	ToMauInt(93,y,trbinh,2);
	ToMauInt(101,y,d,6);
	ToMauInt(109,y,yeu,2);
	ToMauInt(117,y,e,6);
	                       
	tongxuatsac += xuatsac;
	tonggioi += gioi;
	tongkha += kha;
	tongtrbinh += trbinh;
	tongyeu += yeu;                      
	
	y += 2;
	count = 1;
	xuatsac = 0;
	gioi = 0;
	kha = 0;
	trbinh = 0;
	yeu = 0;	
	
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
	
	textcolor(5);
	gotoxy(1,y-1);
	printf("                  ศออออออออออออออออออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออผ");
	
	gotoxy(1,y);
	textcolor(13);
	printf("                  ษออออออออออออออออออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออัอออออออป\n");
	printf("                  บ          Tong        ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% ณ  %-4d ณ  %-3d% บ\n",tongxuatsac,a,tonggioi,b,tongkha,c,tongtrbinh,d,tongyeu,e);
	printf("                  ศออออออออออออออออออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออฯอออออออผ");	
	
	if(Language == 1)
	ToMau(30,y+1,"Tong",14);
	if(Language == 2)
	ToMau(30,y+1,"Total",14);
	if(Language == 1)
	ToMau(30,y+1,"Total",14);
	ToMauInt(45,y+1,tongxuatsac,10);
	ToMauInt(53,y+1,a,14);
	ToMauInt(61,y+1,tonggioi,10);
	ToMauInt(69,y+1,b,14);
	ToMauInt(77,y+1,tongkha,10);
	ToMauInt(85,y+1,c,14);
	ToMauInt(93,y+1,tongtrbinh,10);
	ToMauInt(101,y+1,d,14);
	ToMauInt(109,y+1,tongyeu,10);
	ToMauInt(117,y+1,e,14);
	
    int colorFrame = 11;
	PrintFrame(colorFrame);
}

void PrintChartScore(List l)
{
	PrintEmpty2();
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	int k = 1;
	while(k<4)
	     {
	     	p->data.ClassCode.erase(p->data.ClassCode.begin() + p->data.ClassCode.length() - 1);
	     	k++;
		 }
	}
	int xuatsac=0,tongxuatsac=0;
	int gioi=0,tonggioi=0;
	int kha=0,tongkha=0;
	int trbinh=0,tongtrbinh=0;
	int yeu=0,tongyeu=0;
	int count=1;
	int x = 30, y = 32;
	
	gotoxy(1,1);
	textcolor(12);
	cout<<"\n\n\n";
	cout<<"\n\t\t\t^";
	cout<<"\n\t\t\tณ";
	for(int i=1 ; i<=24 ; i++)
	   	cout<<"\n\t\t\tณ";
	cout<<"\n\t\t\tภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ>";
	
	for(int i=1; i<25 ; i++)
	    ToMau(24,y-i-1,"_",12);
	       
    for(int i=1 ; i<=5 ; i++)
       {
       	ToMauInt(21,y-i*5,i*5,11);
	   	ToMau(24,y-i*5-1,"_",11);
	   	for(int j=1 ; j<=50 ; j++)
	   	   	ToMau(24+j*2,y-i*5-1,".",12);
	   }
	   	
    
    textcolor(14);
    gotoxy(1,36);
    if(Language == 1)
    {
    cout<<"                                             Bieu do cot the hien Hoc Luc moi lop cua dai doi 153"; 
    cout<<"\n                                                             nam hoc 2018-2019         "; 
    
    int colorFrame = 11;
	PrintFrame(colorFrame);
    
    ToMau(15,4,"So Hoc Vien",9);
	ToMau(15,5,"(nguoi)",9);
	ToMau(120,32,"Lop",2);
	ToMau(124,32,"(ten)",2);
	ToMau(21,32,"0",11);
    ToMau(90,5,"þ",6);
    ToMau(93,5,": So luong hoc vien xuat sac",7);
    ToMau(90,6,"þ",2);
    ToMau(93,6,": So luong hoc vien gioi",7);
    ToMau(90,7,"þ",3);
    ToMau(93,7,": So luong hoc vien kha",7);
    ToMau(90,8,"þ",4);
    ToMau(93,8,": So luong hoc vien tb",7);
    ToMau(90,9,"þ",5);
    ToMau(93,9,": So luong hoc vien yeu",7);	
	}
	if(Language == 2)
    {
    cout<<"                                             The bar graph shows each class perfomance "; 
    cout<<"\n                                             in the company 153 in the course 2018-2019 ";
    int colorFrame = 11;
	PrintFrame(colorFrame);
    
    ToMau(15,4,"StudentAmount",9);
	ToMau(15,5,"(people)",9);
	ToMau(119,32,"Class",2);
	ToMau(124,32,"(name)",2);
	ToMau(21,32,"0",11);
    ToMau(90,5,"þ ",6);
    ToMau(93,5,": Number of excellent students ",7);
    ToMau(90,6,"þ",2);
    ToMau(93,6,": Number of good students",7);
    ToMau(90,7,"þ",3);
    ToMau(93,7,": Number of pretty students",7);
    ToMau(90,8,"þ",4);
    ToMau(93,8,": Number of intermediate students",7);
    ToMau(90,9,"þ",5);
    ToMau(93,9,": Number of weak students",7);	
	}
	if(Language == 3)
    {
    cout<<"                                             Le graphique a barres montre  la force de chaque classe de"; 
    cout<<"\n                                                             I'entreprise cours 2018-2019         "; 
    
    int colorFrame = 11;
	PrintFrame(colorFrame);
    
    ToMau(15,4,"NumeEtudiant",9);
	ToMau(15,5,"(gens)",9);
	ToMau(118,32,"Classe",2);
	ToMau(124,32,"(nom)",2);
	ToMau(21,32,"0",11);
    ToMau(90,5,"þ",6);
    ToMau(93,5,": Nombre D'excellent Etudiants",7);
    ToMau(90,6,"þ",2);
    ToMau(93,6,": Nombre D'bon Etudiants",7);
    ToMau(90,7,"þ",3);
    ToMau(93,7,": Nombre D'jolie Etudiants",7);
    ToMau(90,8,"þ",4);
    ToMau(93,8,": Nombre D'moyenne Etudiants",7);
    ToMau(90,9,"þ",5);
    ToMau(93,9,": Nombre D'failble Etudiants",7);	
	}
    
    
//    ToMau(12,2,"๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐๐",5);
    ToMau(12,2,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",5);
    
    for(int i=1;i<=36;i++)
//       	ToMau(12,2+i,"๔",5);
       	ToMau(12,2+i,"ÛÛ",5);
	ToMau(12,39,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",5);
	for(int i=1;i<=36;i++)
       	ToMau(130,39-i,"ÛÛ",5);
	     
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	if(p == l.Tail)
	{
	if(p->data.HocLuc == "Xuat Sac") 
	   xuatsac++;
	if(p->data.HocLuc == "Gioi") 
	   gioi++;
	if(p->data.HocLuc == "Kha") 
	   kha++;	
	if(p->data.HocLuc == "TB") 
	   trbinh++;
	if(p->data.HocLuc == "Yeu") 
	    yeu++;
	
	ToMau(x+2,y,p->data.ClassCode,10);
	
	if(xuatsac!= 0)
	  {
	  	ToMau(x,y-1,"฿",6);
	  	Sleep(tocdo1);
	  }
	  
	for(int i=2;i<=xuatsac;i++)
	   {
	   	ToMau(x,y-i,"Û",6);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x,y-xuatsac-1,xuatsac,6);
	
	if(gioi!= 0)   
	  {
	   ToMau(x+2,y-1,"฿",2);	
	   Sleep(tocdo1);
	  }
	   
	for(int i=2;i<=gioi;i++)
	   {
	   	ToMau(x+2,y-i,"Û",2);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+2,y-gioi-1,gioi,2);
	
	if(kha != 0)  
	  {
	  	ToMau(x+4,y-1,"฿",3);
	  	Sleep(tocdo1);
	   } 
	   
	for(int i=2;i<=kha;i++)
	   {
	   	ToMau(x+4,y-i,"Û",3);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+4,y-kha-1,kha,3);
	 
	if(trbinh != 0) 
	  {
	  	ToMau(x+6,y-1,"฿",4);
	  	Sleep(tocdo1);
		 }   
	   
	for(int i=2;i<=trbinh;i++)
	   {
	   	ToMau(x+6,y-i,"Û",4);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+6,y-trbinh-1,trbinh,4);
	
	if(yeu != 0)  
	  {
	  	ToMau(x+8,y-1,"฿",5);
	  	Sleep(tocdo1);
		}  
	  
	for(int i=2;i<=yeu;i++)
	   {
	   	ToMau(x+8,y-i,"Û",5);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+8,y-yeu-1,yeu,5);                     
	    
	}
	else{
	if(p->data.ClassCode == p->Next->data.ClassCode)
	  {	  
	  if(p->data.HocLuc == "Xuat Sac") 
	     xuatsac++;
	  if(p->data.HocLuc == "Gioi") 
	     gioi++;
	  if(p->data.HocLuc == "Kha") 
	     kha++;	
	  if(p->data.HocLuc == "TB") 
	     trbinh++;
	  if(p->data.HocLuc == "Yeu") 
	     yeu++;
	  }
	
	else
	{	
	if(p->data.HocLuc == "Xuat Sac") 
	    xuatsac++;
	if(p->data.HocLuc == "Gioi") 
	    gioi++;
	if(p->data.HocLuc == "Kha") 
	    kha++;	
	if(p->data.HocLuc == "TB") 
	    trbinh++;
	if(p->data.HocLuc == "Yeu") 
	    yeu++;
		                       
	tongxuatsac += xuatsac;
	tonggioi += gioi;
	tongkha += kha;
	tongtrbinh += trbinh;
	tongyeu += yeu;
	
	ToMau(x+2,y,p->data.ClassCode,10);
	
    if(xuatsac!= 0)
	  {
	  	ToMau(x,y-1,"฿",6);
	  	Sleep(tocdo1);
	  }
	  
	for(int i=2;i<=xuatsac;i++)
	   {
	   	ToMau(x,y-i,"Û",6);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x,y-xuatsac-1,xuatsac,6);
	
	if(gioi!= 0)   
	  {
	   ToMau(x+2,y-1,"฿",2);	
	   Sleep(tocdo1);
	  }
	   
	for(int i=2;i<=gioi;i++)
	   {
	   	ToMau(x+2,y-i,"Û",2);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+2,y-gioi-1,gioi,2);
	
	if(kha != 0)  
	  {
	  	ToMau(x+4,y-1,"฿",3);
	  	Sleep(tocdo1);
	   } 
	   
	for(int i=2;i<=kha;i++)
	   {
	   	ToMau(x+4,y-i,"Û",3);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+4,y-kha-1,kha,3);
	 
	if(trbinh != 0) 
	  {
	  	ToMau(x+6,y-1,"฿",4);
	  	Sleep(tocdo1);
		 }   
	   
	for(int i=2;i<=trbinh;i++)
	   {
	   	ToMau(x+6,y-i,"Û",4);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+6,y-trbinh-1,trbinh,4);
	
	if(yeu != 0)  
	  {
	  	ToMau(x+8,y-1,"฿",5);
	  	Sleep(tocdo1);
		}  
	  
	for(int i=2;i<=yeu;i++)
	   {
	   	ToMau(x+8,y-i,"Û",5);
	   	Sleep(tocdo1);
	   }
	    
	ToMauInt(x+8,y-yeu-1,yeu,5);  
	
	x += 15;    
	count = 1;
	xuatsac = 0;
	gioi = 0;
	kha = 0;
	trbinh = 0;
	yeu =0;	
	
	}
	}
	
	}
	
    for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	    p->data.ClassCode += "K53";
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PrintChartScore2(List l) /////////////////////////////////////////////////////////////////////////////////////////////////////////////
{
	PrintEmpty2();
	
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	int k = 1;
	while(k<4)
	     {
	     	p->data.ClassCode.erase(p->data.ClassCode.begin() + p->data.ClassCode.length() - 1);
	     	k++;
		 }
	}
		
	int xuatsac=0;
	int gioi=0;
	int kha=0;
	int trbinh=0;
	int yeu=0;
	
	int x = 25, y = 27;
	
	gotoxy(1,1);
	textcolor(12);
	cout<<"\n\n\n";
	cout<<"\n\t\t\t^";
	cout<<"\n\t\t\tณ";
	for(int i=1 ; i<=24 ; i++)
	   	cout<<"\n\t\t\tณ";
	cout<<"\n\t\t\tภฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤลฤฤฤฤฤ>";
	
	     
	for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
		if(p->data.HocLuc == "Xuat Sac") 
	        xuatsac++;
	    if(p->data.HocLuc == "Gioi") 
	        gioi++;
	    if(p->data.HocLuc == "Kha") 
	        kha++;	
	    if(p->data.HocLuc == "TB") 
	        trbinh++;
	    if(p->data.HocLuc == "Yeu") 
	        yeu++;	    
	}	
	
	int a = 100*(float)xuatsac/StudentAmount;
	if(100*(float)xuatsac/StudentAmount - a >= 0.5) a++;
	
	int b = 100*(float)gioi/StudentAmount;
	if(100*(float)gioi/StudentAmount - b >= 0.5) b++;
	
	int c = 100*(float)kha/StudentAmount;
	if(100*(float)kha/StudentAmount - c >= 0.5) c++;
	
	int d = 100*(float)trbinh/StudentAmount;
	if(100*(float)trbinh - d >= 0.5) d++;
	
	int e = 100*(float)yeu/StudentAmount;
	if(100*(float)yeu/StudentAmount - e >= 0.5) e++;
    
    textcolor(14);
    gotoxy(1,36); 
    cout<<"                                                    Bieu do cot the hien Hoc Luc cua dai doi 153"; 
    cout<<"\n                                                                nam hoc 2018-2019         "; 
    
    ToMau(18,4,"Hoc Luc",9);
    ToMau(18,5,"(loai)",9);
	ToMau(120,33,"Ty Le",11);
	ToMau(125,33,"(%)",11);
	ToMau(21,32,"0",11);
	
	int colorFrame = 11;
	PrintFrame(colorFrame);
	
	for(int i=1 ; i<=19 ; i++)
	   {
	   	ToMauInt(x+5*i,32,5*i,3);
	   	for(int j=1 ; j<=27 ; j++)
	   	   	ToMau(x+5*i,31-j,".",12);
	   }
	    
	
    ToMau(90,5,"þ",6);
    ToMau(93,5,": Ty le hoc vien xuat sac",7);
    ToMau(90,6,"þ",2);
    ToMau(93,6,": Ty le hoc vien gioi",7);
    ToMau(90,7,"þ",3);
    ToMau(93,7,": Ty le hoc vien kha",7);
    ToMau(90,8,"þ",4);
    ToMau(93,8,": Ty le hoc vien trung binh",7);
    ToMau(90,9,"þ",5);
    ToMau(93,9,": Ty le hoc vien yeu",7);
    
    ToMau(12,2,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",5);
    
    for(int i=1;i<=36;i++)
       	ToMau(12,2+i,"ÛÛ",5);
	ToMau(12,39,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",5);
	for(int i=1;i<=36;i++)
       	ToMau(130,39-i,"ÛÛ",5);
       	
    gotoxy(x-9,y);
    textcolor(14);
    printf("%8s","Yeu");
    if(e!=0)
      {
      	ToMau(x,y,"Þ",5);
      	Sleep(tocdo1);
	  }
       
    for(int i=1 ; i<e ; i++)
       {
       	ToMau(x+i,y,"Û",5);
       	Sleep(tocdo1);
	   }
        
    ToMauInt(x+e+1,y,e,11);
    cout<<" %";
    
    y -= 4;
    gotoxy(x-11,y);
    textcolor(14);
    printf("%8s","Trung Binh");
    if(d!=0)
      {
      	ToMau(x,y,"Þ",4);
      	Sleep(tocdo1);
	  }
       
    for(int i=1 ; i<d ; i++)
       {
       	ToMau(x+i,y,"Û",4);
       	Sleep(tocdo1);
	   }
        
    ToMauInt(x+d+1,y,d,11);
    cout<<" %";  
    
    y -= 4;
    
    gotoxy(x-9,y);
    textcolor(14);
    printf("%8s","Kha");
    
    if(c!=0)
      {
      	ToMau(x,y,"Þ",3);
      	Sleep(tocdo1);
	  }
       
    for(int i=1 ; i<c ; i++)
       {
       	ToMau(x+i,y,"Û",3);
       	Sleep(tocdo1);
	   }
        
    ToMauInt(x+c+1,y,c,11);
    cout<<" %";
    
    y -= 4;
    
    gotoxy(x-9,y);
    textcolor(14);
    printf("%8s","Gioi");
    
    if(b!=0)
      {
      	ToMau(x,y,"Þ",2);
      	Sleep(tocdo1);
	  }
       
    for(int i=1 ; i<b ; i++)
       {
       	ToMau(x+i,y,"Û",2);
       	Sleep(tocdo1);
	   }
        
    ToMauInt(x+b+1,y,b,11);
    cout<<" %";
      
    y -= 4;
    
    gotoxy(x-9,y);
    textcolor(14);
    printf("%8s","Xuat Sac");
    
    if(a!=0)
      {
      	ToMau(x,y,"Þ",6);
      	Sleep(tocdo1);
	  }
       
    for(int i=1 ; i<a ; i++)
       {
       	ToMau(x+i,y,"Û",6);
       	Sleep(tocdo1);
	   }
        
    ToMauInt(x+a+1,y,a,11);
    cout<<" %";  
	
    for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	{
	    p->data.ClassCode += "K53";
	}
	
}


void PrintTableOfFoolPeople(List l,STRING A[],int n)
{
	int sotrang;
	if(n%10 == 0)
	   sotrang = n/10;
	else
	   sotrang = (int)n/10 + 1;

	int vitritrang = 1;
	
	if(Language == 1)
	{
	ToMau(30, 6,"ษอออออออออออออออออออออออออออออป",6);
	ToMau(30, 7,"บ                             บ",6);
    ToMau(30, 8,"บ   DANH SACH MAT TAI KHOAN   บ",6);
    ToMau(30, 9,"บ                             บ",6);
    ToMau(30,10,"ฬอออออหอออออออออออออออออออออออน",6);	
    ToMau(30,11,"บ     บ                       บ",6);
    ToMau(30,12,"บ STT บ      Ma Hoc Vien      บ",6);
    ToMau(30,13,"บ     บ                       บ",6);
    ToMau(30,14,"ฬอออออฮอออออออออออออออออออออออน",6);
    ToMau(34,8,"DANH SACH MAT TAI KHOAN",14);
    ToMau(32,12,"STT",10);
    ToMau(43,12,"Ma Hoc Vien",15);
	}
	
	if(Language == 2)
	{
	ToMau(30, 6,"ษอออออออออออออออออออออออออออออป",6);
	ToMau(30, 7,"บ                             บ",6);
    ToMau(30, 8,"บ    LIST OF LOST ACCOUNTS    บ",6);
    ToMau(30, 9,"บ                             บ",6);
    ToMau(30,10,"ฬอออออหอออออออออออออออออออออออน",6);	
    ToMau(30,11,"บ     บ                       บ",6);
    ToMau(30,12,"บ N-O บ      Student Code     บ",6);
    ToMau(30,13,"บ     บ                       บ",6);
    ToMau(30,14,"ฬอออออฮอออออออออออออออออออออออน",6);
    ToMau(34,8,"LIST OF LOST ACCOUNTS",14);
    ToMau(32,12,"N-O",10);
    ToMau(43,12,"Studen Code",15);
	}
	
	if(Language == 3)
	{
	ToMau(30, 6,"ษอออออออออออออออออออออออออออออป",6);
	ToMau(30, 7,"บ                             บ",6);
    ToMau(30, 8,"บ   LISTE DE COMPTES PERDUS   บ",6);
    ToMau(30, 9,"บ                             บ",6);
    ToMau(30,10,"ฬอออออหอออออออออออออออออออออออน",6);	
    ToMau(30,11,"บ     บ                       บ",6);
    ToMau(30,12,"บ N-O บ      Student Cod      บ",6);
    ToMau(30,13,"บ     บ                       บ",6);
    ToMau(30,14,"ฬอออออฮอออออออออออออออออออออออน",6);
    ToMau(34,8,"LISTE DE COMPTES PERDUS",14);
    ToMau(32,12,"N-O",10);
    ToMau(43,12,"Student Code",15);
	}
    
a:  
    for(int i=1 ; i<=10 ; i++)
    {
    ToMau(30,13+2*i,"                               ",6);	
    ToMau(30,14+2*i,"                               ",6);	
	}
	
    int soluong;
    if(vitritrang < sotrang)
        soluong = 10;
	else{
		soluong = n-(vitritrang-1)*10;
	}
    for(int i=1 ; i<=soluong ; i++)
    {
    if(i != soluong)
    {
    ToMau(30,13+2*i,"บ     บ                       บ",6);	
    ToMau(30,14+2*i,"วฤฤฤฤฤืฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ",6);	
	}
	else{
	ToMau(30,13+2*i,"บ     บ                       บ",6);	
    ToMau(30,14+2*i,"ศอออออสอออออออออออออออออออออออผ",6);	
	}
	ToMauInt(32,13+2*i,(vitritrang-1)*10+i,2);
	ToMau(42,13+2*i,A[(vitritrang-1)*10+i].str,7);
	}
	
	if(Language == 1)
	  {
		ToMau(115,6 ,"ษอออออออออออออออป",11);
	    ToMau(115,7 ,"บ               บ",11);
	    ToMau(115,8 ,"บ      QUAY     บ",11);
	    ToMau(115,9,"บ      LAI      บ",11);
	    ToMau(115,10,"บ               บ",11);
	    ToMau(115,11,"ศอออออออออออออออผ",11);	
	  }
	if(Language == 2)
	  {
	    ToMau(115,6 ,"ษอออออออออออออออป",11);
	    ToMau(115,7 ,"บ               บ",11);
	    ToMau(115,8 ,"บ      COME     บ",11);
	    ToMau(115,9,"บ      BACK     บ",11);
	    ToMau(115,10,"บ               บ",11);
	    ToMau(115,11,"ศอออออออออออออออผ",11);	
	  }
	if(Language == 3)
	  {
		ToMau(115,6 ,"ษอออออออออออออออป",11);
	    ToMau(115,7 ,"บ               บ",11);
	    ToMau(115,8 ,"บ     TOURNE    บ",11);
	    ToMau(115,9,"บ               บ",11);
	    ToMau(115,10,"บ               บ",11);
	    ToMau(115,11,"ศอออออออออออออออผ",11);	
	  }
	     	
	ToMau(20,21,"ษอป",4);
	ToMau(20,22,"บ บ",4);
    ToMau(20,23,"บ<บ",4);
    ToMau(20,24,"บ บ",4);
	ToMau(20,25,"ศอผ",4);
	
	ToMau(68,21,"ษอป",4);
	ToMau(68,22,"บ บ",4);
	ToMau(68,23,"บ>บ",4);
	ToMau(68,24,"บ บ",4);
	ToMau(68,25,"ศอผ",4);  
	                                                                                       
	int choose = MouseEventToTableOfFoolPeople(  1040,910,210,120,   172,149,437,364,   558,535,437,364,   470,235,278,245,   470,235,313,279,    470,235,348,314,   470,235,382,349,   470,235,415,383,   470,235,449,416,     470,235,483,450,    470,235,519,485,    470,235,554,520,    470,235,585,555,  soluong   );     
	
	if(choose == 1)    //button Quay lai
	{
		textcolor(7);
		return;	
	}
	if(choose == 2)
	{
		if(vitritrang != 1)
		  {
		  	vitritrang --;
		  	goto a;
		  }
		else goto a;
		
	}
	if(choose == 3)
	{
		if(vitritrang != sotrang)
		  {
		  	vitritrang ++;
		  	goto a;
		  }
		else goto a;
	}
	if(choose == 4 or choose == 5 or choose == 6 or choose == 7 or choose == 8 or choose == 9 or choose == 10 or choose == 11 or choose == 12 or choose == 13  )
	{
		int index = (vitritrang-1)*10 + choose-3;
	    
	    if(A[index].str == "")
	      {
	      	ToMau(90,15,"Thong tin Tai khoan nay da bi xoa!",12);
	      	Sleep(1000);
	      	ToMau(90,15,"                                  ",7);
		  }
		else{
		ToMau(90,15,"Nhap mat khau cap 2:",5);
		ToMau(90,16,"ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ",2);
		ToMau(90,17,"ณ                          ณ",2);
		ToMau(90,18,"ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู",2);
		HienConTro();
		gotoxy(92,17);
		textcolor(255);
		string str;
		cin>>str;
		
	    if(PASSADMIN2(str) == 1)
	    {
	    ToMau(90,20,"ษอออออออออออออออออออออออออออออออออป",5);
	    ToMau(90,21,"บ       THONG TIN DANG NHAP       บ",5);
	    ToMau(90,22,"ฬอออออออออออออออออออออออออออออออออน",5);
	    ToMau(90,23,"บ Ten dang nhap:                  บ",5);
	    ToMau(90,24,"วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ",5);
	    ToMau(90,25,"บ                                 บ",5);
	    ToMau(90,26,"ฬอออออออออออออออออออออออออออออออออน",5);
	    ToMau(90,27,"บ Mat khau:                       บ",5);
	    ToMau(90,28,"วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ",5);
	    ToMau(90,29,"บ                                 บ",5);
	    ToMau(90,30,"ศอออออออออออออออออออออออออออออออออผ",5);
	    
	    ToMau(90,32,"- Thong tin ve Tai khoan nay se bi xoa trong Danh sach!",14);
	    
	    for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	       {
	       	if(A[index].str == p->data.StudentCode)
	       	  {
	       	  	XoaConTro();
	       	  	ToMau(100,25,p->data.StudentName,7);
	       	  	ToMau(100,29,p->data.StudentPass,7);
	       	  	A[index].str = "";
				break;
			  }
		   }
		
		ofstream fileOutput;
		fileOutput.open(fileFoolPeople,ios::out);
		
		for(int i=1 ; i<=n ; i++)
		    if(A[i].str != "")
		      {
		      	fileOutput<<A[i].str<<"\n";
			  }
		
		fileOutput.close();
		}
		else{
		XoaConTro();
		ToMau(90,19,"Nhap sai mat khau!",12);
		Sleep(1000);
		ToMau(90,15,"                            ",5);
		ToMau(90,16,"                            ",2);
		ToMau(90,17,"                            ",2);
		ToMau(90,18,"                            ",2);
		ToMau(90,19,"                            ",2);
		goto a;
		}
		
	int x = MouseEventToButtonBack(1040,910,185,95);
	
	if(x == 1)
	{
	for(int i=0 ; i<=18 ; i++)
	ToMau(90,15+i,"                                                            ",7);		
	}	
	goto a;
    }
	}
	
}


void GuiThongBaoChoTatCaHocVien(List &l)
{
	PrintEmpty();
	
	if(Language == 1)
	  {
	ToMau(20,10,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(20,11,"บ                                                            บ",2);
	ToMau(20,12,"บ              GUI THONG BAO CHO TAT CA HOC VIEN             บ",2);
	ToMau(20,13,"บ                                                            บ",2);
	ToMau(20,14,"ฬออออออออออออออออหอออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(20,15,"บ                บ                                           บ",2);
	ToMau(20,16,"บ                บ                                           บ",2);
	ToMau(20,17,"บ                บ                                           บ",2);
	ToMau(20,18,"บ Nhap thong bao บ                                           บ",2);
	ToMau(20,19,"บ                บ                                           บ",2);
	ToMau(20,20,"บ                บ                                           บ",2);
	ToMau(20,21,"บ                บ                                           บ",2);
	ToMau(20,22,"ศออออออออออออออออสอออออออออออออออออออออออออออออออออออออออออออผ",2);
	
	ToMau(35,12,"GUI THONG BAO CHO TAT CA HOC VIEN",14);
	ToMau(22,18,"Nhap thong bao",6);
	  	
		ToMau(115,4 ,"ษอออออออออออออออป",11);
	    ToMau(115,5 ,"บ               บ",11);
	    ToMau(115,6 ,"บ      QUAY     บ",11);
	    ToMau(115,7 ,"บ      LAI      บ",11);
	    ToMau(115,8 ,"บ               บ",11);
	    ToMau(115,9 ,"ศอออออออออออออออผ",11);	
	    
	    ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ      GUI      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
	  }
	if(Language == 2)
	  {
	ToMau(20,10,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(20,11,"บ                                                            บ",2);
	ToMau(20,12,"บ                 SEND MESSAGE TO ALL STUDENTS               บ",2);
	ToMau(20,13,"บ                                                            บ",2);
	ToMau(20,14,"ฬออออออออออออออออหอออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(20,15,"บ                บ                                           บ",2);
	ToMau(20,16,"บ                บ                                           บ",2);
	ToMau(20,17,"บ                บ                                           บ",2);
	ToMau(20,18,"บ    Message     บ                                           บ",2);
	ToMau(20,19,"บ                บ                                           บ",2);
	ToMau(20,20,"บ                บ                                           บ",2);
	ToMau(20,21,"บ                บ                                           บ",2);
	ToMau(20,22,"ศออออออออออออออออสอออออออออออออออออออออออออออออออออออออออออออผ",2);
	  	
	ToMau(38,12,"SEND MESSAGE TO ALL STUDENTS",14);
	ToMau(25,18,"Message",6);
	    ToMau(115,4 ,"ษอออออออออออออออป",11);
	    ToMau(115,5 ,"บ               บ",11);
	    ToMau(115,6 ,"บ      COME     บ",11);
	    ToMau(115,7 ,"บ      BACK     บ",11);
	    ToMau(115,8,"บ               บ",11);
	    ToMau(115,9,"ศอออออออออออออออผ",11);
		
		ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     SEND      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);	
	  }
	if(Language == 3)
	  {
	ToMau(20,10,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(20,11,"บ                                                            บ",2);
	ToMau(20,12,"บ           Envoyer des avis a tous les etudiants            บ",2);
	ToMau(20,13,"บ                                                            บ",2);
	ToMau(20,14,"ฬออออออออออออออออหอออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(20,15,"บ                บ                                           บ",2);
	ToMau(20,16,"บ                บ                                           บ",2);
	ToMau(20,17,"บ                บ                                           บ",2);
	ToMau(20,18,"บ   Le message   บ                                           บ",2);
	ToMau(20,19,"บ                บ                                           บ",2);
	ToMau(20,20,"บ                บ                                           บ",2);
	ToMau(20,21,"บ                บ                                           บ",2);
	ToMau(20,22,"ศออออออออออออออออสอออออออออออออออออออออออออออออออออออออออออออผ",2);
	 
	ToMau(32,12,"Envoyer des avis a tous les etudiants",14);
	ToMau(24,18,"Le mesage",6);
	 	
		ToMau(115,4 ,"ษอออออออออออออออป",11);
	    ToMau(115,5 ,"บ               บ",11);
	    ToMau(115,6 ,"บ     TOURNE    บ",11);
	    ToMau(115,7,"บ               บ",11);
	    ToMau(115,8,"บ               บ",11);
	    ToMau(115,9,"ศอออออออออออออออผ",11);	
	    
	    ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     ENVOYE    บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
	  }
	string message;  
	int Max = 79;
	int i = 39;
	int y = 15;
a:	
    int choose = MouseEventToGuiThongBaoChoTatCaHocVien(1040,880,180,80,    1040,880,370,270,   640,240,500,100);
	
	if(choose == 1)
	  {
	  	textcolor(7);
	  	return;
	  }
	if(choose == 2)
	  {
	  	if(message.length() <= 10)
	  	  {
	  	  	ToMau(105,21,"Hay nhap thong bao dai hon!",12);
	  	  	Sleep(1000);
	  	  	ToMau(105,21,"                           ",12);
	  	  	goto a;
			}
		else{
			ThongBaoChung = message;
			ofstream fileOutput;
			fileOutput.open(fileThongBaoChung,ios::out);
			
			fileOutput<<Encrypt(ThongBaoChung);
			
			fileOutput.close();
		}
	  }
	if(choose == 3)
	  {
	  	HienConTro();
	  	gotoxy(i,y);

	    char x = getch();
	
	    while(x != 13)
	    { 
		    if(x != 8)
		      {
		  	    message += x;
		  	    ToMauChar(i++,y,message[message.length()-1],15);
		  	    if(i == Max)
		          {
		  	        i = 39;
		  	        y++;
		          }
		      }
		  
		    if(x == 8)  // phim BackSpace
		      {
		  	    if(!message.empty())
		  	        message.erase(message.length()-1,1);
		  	    
		  	    if(i == 39 and y == 15)
		  	      {
				  }
				else
		  	  	    ToMau(--i,y," ",0);
		  	    if(i == 39)
		  	    {
		  	
		  	  	   if(y == 15)
		  	  	        gotoxy(i,y);
		  	  	    else{
		  	  	    i = 79;
		  	  	    y--;	
				    }
		  	  	
			    }
		  	    gotoxy(i,y);
		     }
		    if(y == 22)
		       break;
		    x = getch();
	    }
	   
	   XoaConTro();
	   textcolor(7);
//	   ToMau(20,30,message,14);
//	   getch();
	   goto a;
	  }	
}

void GuiTinNhanChoQuanTriVien(List &l, Transcript Member)
{
	PrintEmpty();
	
	if(Language == 1)
	  {
	ToMau(20,10,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(20,11,"บ                                                            บ",2);
	ToMau(20,12,"บ                GUI TIN NHAN CHO QUAN TRI VIEN              บ",2);
	ToMau(20,13,"บ                                                            บ",2);
	ToMau(20,14,"ฬออออออออออออออออหอออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(20,15,"บ                บ                                           บ",2);
	ToMau(20,16,"บ                บ                                           บ",2);
	ToMau(20,17,"บ                บ                                           บ",2);
	ToMau(20,18,"บ Nhap tin nhan  บ                                           บ",2);
	ToMau(20,19,"บ                บ                                           บ",2);
	ToMau(20,20,"บ                บ                                           บ",2);
	ToMau(20,21,"บ                บ                                           บ",2);
	ToMau(20,22,"ศออออออออออออออออสอออออออออออออออออออออออออออออออออออออออออออผ",2);
	
	ToMau(37,12,"GUI TIN NHAN CHO QUAN TRI VIEN",14);
	ToMau(22,18,"Nhap tin nhan",6);
	  	
		ToMau(115,4 ,"ษอออออออออออออออป",11);
	    ToMau(115,5 ,"บ               บ",11);
	    ToMau(115,6 ,"บ      QUAY     บ",11);
	    ToMau(115,7 ,"บ      LAI      บ",11);
	    ToMau(115,8 ,"บ               บ",11);
	    ToMau(115,9 ,"ศอออออออออออออออผ",11);	
	    
	    ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ      GUI      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
	  }
	if(Language == 2)
	  {
	ToMau(20,10,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(20,11,"บ                                                            บ",2);
	ToMau(20,12,"บ                   SEND MESSAGE TO ADMIN                    บ",2);
	ToMau(20,13,"บ                                                            บ",2);
	ToMau(20,14,"ฬออออออออออออออออหอออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(20,15,"บ                บ                                           บ",2);
	ToMau(20,16,"บ                บ                                           บ",2);
	ToMau(20,17,"บ                บ                                           บ",2);
	ToMau(20,18,"บ    Message     บ                                           บ",2);
	ToMau(20,19,"บ                บ                                           บ",2);
	ToMau(20,20,"บ                บ                                           บ",2);
	ToMau(20,21,"บ                บ                                           บ",2);
	ToMau(20,22,"ศออออออออออออออออสอออออออออออออออออออออออออออออออออออออออออออผ",2);
	  	
	ToMau(40,12,"SEND MESSAGE TO ADMIN",14);
	ToMau(25,18,"Message",6);
	    ToMau(115,4 ,"ษอออออออออออออออป",11);
	    ToMau(115,5 ,"บ               บ",11);
	    ToMau(115,6 ,"บ      COME     บ",11);
	    ToMau(115,7 ,"บ      BACK     บ",11);
	    ToMau(115,8,"บ               บ",11);
	    ToMau(115,9,"ศอออออออออออออออผ",11);
		
		ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     SEND      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);	
	  }
	if(Language == 3)
	  {
	ToMau(20,10,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(20,11,"บ                                                            บ",2);
	ToMau(20,12,"บ            Envoyer des avis a tous les admins              บ",2);
	ToMau(20,13,"บ                                                            บ",2);
	ToMau(20,14,"ฬออออออออออออออออหอออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(20,15,"บ                บ                                           บ",2);
	ToMau(20,16,"บ                บ                                           บ",2);
	ToMau(20,17,"บ                บ                                           บ",2);
	ToMau(20,18,"บ   Le message   บ                                           บ",2);
	ToMau(20,19,"บ                บ                                           บ",2);
	ToMau(20,20,"บ                บ                                           บ",2);
	ToMau(20,21,"บ                บ                                           บ",2);
	ToMau(20,22,"ศออออออออออออออออสอออออออออออออออออออออออออออออออออออออออออออผ",2);
	 
	ToMau(33,12,"Envoyer des avis a tous les admins",14);
	ToMau(24,18,"Le mesage",6);
	 	
		ToMau(115,4,"ษอออออออออออออออป",11);
	    ToMau(115,5,"บ               บ",11);
	    ToMau(115,6,"บ     TOURNE    บ",11);
	    ToMau(115,7,"บ               บ",11);
	    ToMau(115,8,"บ               บ",11);
	    ToMau(115,9,"ศอออออออออออออออผ",11);	
	    
	    ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     ENVOYE    บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
	  }
	string message;  
	int Max = 79;
	int i = 39;
	int y = 15;
a:	
    int choose = MouseEventToGuiThongBaoChoTatCaHocVien(1040,880,180,80,    1040,880,370,270,   640,240,500,100);
	
	if(choose == 1)
	  {
	  	textcolor(7);
	  	return;
	  }
	if(choose == 2)
	  {
	  	if(message.length() <= 10)
	  	  {
	  	  	ToMau(105,21,"Hay nhap tin nhan dai hon!",12);
	  	  	Sleep(1000);
	  	  	ToMau(105,21,"                           ",12);
	  	  	goto a;
			}
		else{
	        GuiThuChoAdmin(l,Member,message);
		}
	  }
	if(choose == 3)
	  {
	  	HienConTro();
	  	gotoxy(i,y);

	    char x = getch();
	
	    while(x != 13)
	    { 
		    if(x != 8)
		      {
		  	    message += x;
		  	    ToMauChar(i++,y,message[message.length()-1],15);
		  	    if(i == Max)
		          {
		  	        i = 39;
		  	        y++;
		          }
		      }
		  
		    if(x == 8)  // phim BackSpace
		      {
		  	    if(!message.empty())
		  	        message.erase(message.length()-1,1);
		  	    
		  	    if(i == 39 and y == 15)
		  	      {
				  }
				else
		  	  	    ToMau(--i,y," ",0);
		  	    if(i == 39)
		  	    {
		  	
		  	  	   if(y == 15)
		  	  	        gotoxy(i,y);
		  	  	    else{
		  	  	    i = 79;
		  	  	    y--;	
				    }
		  	  	
			    }
		  	    gotoxy(i,y);
		     }
		    if(y == 22)
		       break;
		    x = getch();
	    }
	   
	   XoaConTro();
	   textcolor(7);
//	   ToMau(20,30,message,14);
//	   getch();
	   goto a;
	  }	
}

void PrintThongBaoChung()
{
	ifstream fileInput;
	fileInput.open(fileThongBaoChung);
	
	string str;
	
	getline(fileInput,str);
	
	ThongBaoChung = Decrypt(str);
	
	fileInput.close();
		
	ToMau(105,6 ,"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออป",2);
	ToMau(105,7 ,"บ                                                        บ",2);
	ToMau(105,8 ,"บ                THONG BAO CUA QUAN TRI VIEN             บ",2);
	ToMau(105,9 ,"บ                                                        บ",2);
	ToMau(105,10,"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออน",2);
	ToMau(105,11,"บ                                                        บ",2);
	ToMau(105,12,"บ                                                        บ",2);
	ToMau(105,13,"บ                                                        บ",2);
	ToMau(105,14,"บ                                                        บ",2);
	ToMau(105,15,"บ                                                        บ",2);
	ToMau(105,16,"บ                                                        บ",2);
	ToMau(105,17,"บ                                                        บ",2);
	ToMau(105,18,"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ",2);
	
	ToMau(122,8,"THONG BAO CUA QUAN TRI VIEN",14);
	
	int i=0;
	int x=112;
	int y=12;
	while(i <=ThongBaoChung.length() )
	     {
	     	if(x == 160)
	     	  {
	     	  	x = 107;
	     	  	y++;
			   }
	     	ToMauChar(x++,y,ThongBaoChung[i],6);
	     	i++;
		 }
	
}



#endif
