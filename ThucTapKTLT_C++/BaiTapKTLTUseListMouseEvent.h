#ifndef BAITAPKTLTUSELISTMOUSEEVENT_H
#define BAITAPKTLTUSELISTMOUSEEVENT_H

#include "BaiTapKTLTUseListRoot.h"

void PrintEmpty()
{
	gotoxy(1,1);
	for(int i=1;i<=168;i++)
	    printf("Û");
	printf("\n");
	printf("ÛÛÛÛ                                                                                                                                                                ÛÛÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛÛÛ                                                                                                                                                                ÛÛÛÛ\n");
	for(int i=1;i<=168;i++)
	    printf("Û");
	for (int i = 0; i<300; i++)
	{ 
	    // int r = rand()%15 +1;
	     int x = rand()%165 +3;
	     int y = rand()%41;
	     ToMau(x,y,"*",7);
	}    
	string c[] = {"Ü","฿"};
     for (int i = 0; i<200; i++)
    {
    	int x = rand()%165;
    	int j = rand()%2;
    	ToMau(x, 41,c[j],15);
	}
	
    int i = 10;
   
    ToMau(i+8,29,"ฒฐ",15);
    ToMau(i+7,30,"ฒฒฒฐ",15);
    ToMau(i+6,31,"ฒฒฒฒฒฐ",15);
    ToMau(i+8,30,"ฒ",10);
    ToMau(i+7,31,"ฒฒฒ",2);
    ToMau(i+5,32,"ฒฒฒฒฒฒฒฐ",10);
    ToMau(i+4,33,"ฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+3,34,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+2,35,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+3,36,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+2,37,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+1,38,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i  ,39,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+7,40,"ฒฒฒฐ",6);
    ToMau(i+7,41,"ฒฒฒฐ",6);
   
    
    //i = i+20;
    //==========================
    i = i+25;
    ToMau(i+6,34,"ฒฐ",15);
    ToMau(i+5,35,"ฒฒฒฐ",15);
    ToMau(i+6,35,"ฒ",2);
    ToMau(i+4,36,"ฒฒฒฒฒฐ",2);
    ToMau(i+3,37,"ฒฒฒฒฒฒฒฐ",10);
    ToMau(i+2,38,"ฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+1,39,"ฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i  ,40,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+5,41,"ฒฒฒฐ",6);
    //======================================
    i = i+20;
    ToMau(i+5,35,"ฒฐ",15);
    ToMau(i+4,36,"ฒฒฒฐ",15);
    ToMau(i+5,36,"ฒ",10);
    ToMau(i+3,37,"ฒฒฒฒฒฐ",2);
    ToMau(i+2,38,"ฒฒฒฒฒฒฒฐ",10);
    ToMau(i+1,39,"ฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i  ,40,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+4,41,"ฒฒฒฐ",6);
    
    
    //======================================
    i = i+20;
      ToMau(i+6,34,"ฒฐ",15);
    ToMau(i+5,35,"ฒฒฒฐ",15);
    ToMau(i+6,35,"ฒ",10);
    ToMau(i+4,36,"ฒฒฒฒฒฐ",2);	
    ToMau(i+3,37,"ฒฒฒฒฒฒฒฐ",2);
    ToMau(i+2,38,"ฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+1,39,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i  ,40,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+5,41,"ฒฒฒฐ",6);
    
    //===============================
    i = i+20;
    ToMau(i+7,32,"ฒฐ",15);
    ToMau(i+6,33,"ฒฒฒฐ",15);
    ToMau(i+5,34,"ฒฒฒฒฒฐ",15);
    ToMau(i+7,33,"ฒ",2);
    ToMau(i+6,34,"ฒฒฒ",10);
    ToMau(i+4,35,"ฒฒฒฒฒฒฒฐ",10);
    ToMau(i+3,36,"ฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+2,37,"ฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+1,38,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i  ,39,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+6,40,"ฒฒฒฐ",6);
    ToMau(i+6,41,"ฒฒฒฐ",6);
    
    //============================================
    
    i = i+21;
    ToMau(i+5,35,"ฒฐ",15);
    ToMau(i+4,36,"ฒฒฒฐ",15);
    ToMau(i+5,36,"ฒ",2);
    ToMau(i+3,37,"ฒฒฒฒฒฐ",10);
    ToMau(i+2,38,"ฒฒฒฒฒฒฒฐ",10);
    ToMau(i+1,39,"ฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i  ,40,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+4,41,"ฒฒฒฐ",6);
    //========================================
    
    //=======================================
    i = i+25;
    ToMau(i+8,29,"ฒฐ",15);
    ToMau(i+7,30,"ฒฒฒฐ",10);
    ToMau(i+6,31,"ฒฒฒฒฒฐ",10);
    ToMau(i+8,30,"ฒ",10);
    ToMau(i+7,31,"ฒฒฒ",2);
    ToMau(i+5,32,"ฒฒฒฒฒฒฒฐ",10);
    ToMau(i+4,33,"ฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+3,34,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+2,35,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+3,36,"ฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+2,37,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",2);
    ToMau(i+1,38,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i  ,39,"ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฐ",10);
    ToMau(i+7,40,"ฒฒฒฐ",6);
    ToMau(i+7,41,"ฒฒฒฐ",6);
    
	gotoxy(1,1);
}

void PrintEmpty2()
{
	gotoxy(1,1);
	for(int i=1;i<=168;i++)
	    printf("Û");
	printf("\n");
	printf("ÛÛÛÛ                                                                                                                                                                ÛÛÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛ                                                                                                                                                                    ÛÛ\n");
	printf("ÛÛÛÛ                                                                                                                                                                ÛÛÛÛ\n");
	for(int i=1;i<=168;i++)
	    printf("Û");
    
	gotoxy(1,1);
}

void PrintFrame(int color)
{
	
	for(int i=1 ; i<=42 ; i++)
	{
	ToMau(1,i,"ÛÛ",color);
	ToMau(167,i,"ÛÛ",color);
	}
	
	for(int i=1 ; i<=168 ; i++)
	    ToMau(i,1,"Û",color);
	
	for(int i=1 ; i<=168 ; i++)
	    ToMau(i,42,"Û",color);
	
}


void Start()
{
//	PrintEmpty();
//	gotoxy(1,1); 
	textcolor(10);
	XoaConTro();
	Sleep(500);
	cout<<"";
	cout<<"                                            ฐฐ                                          ฐ\n";
	cout<<"                                           ฒฒฐ                                        ฒฐ \n";
	cout<<"                                            ฒ                                        ฒ \n";
	cout<<"                  ฐฐฐฐฐฐ     ฐ      ฐ       ฐ        ฐฐ     ฐ           ฐ           ฐ\n";
	cout<<"                 ฒฒฒฒฒฒฐฐ   ฒฐ     ฒฐ      ฒ ฐ      ฒฒ ฐ   ฒฐ          ฒฐ          ฒฐ\n";
	cout<<"                ฒ      ฒฐ   ฒฐ     ฒฐ     ฒ ฒฐฐ     ฒฐฒ ฐ  ฒฐ          ฒฐ          ฒฐ\n";
	cout<<"                ฒ      ฒฐ   ฒฐ     ฒฐ    ฒฒฒฒฒ ฐ    ฒฐ ฒ ฐ ฒฐ          ฒฐ          ฒฐ\n";
	cout<<"                ฒ    ฒ ฒฐ   ฒฐฐฐฐฐฐฒฐ   ฒฐ    ฒ ฐ   ฒฐ  ฒ ฐฒฐ          ฒฐฐฐฐฐฐฐฐ   ฒฐ\n";
	cout<<"                 ฒฒฒฒฒฒ  ฐ   ฒฒฒฒฒฒ    ฒ       ฒ    ฒ    ฒฒฒ           ฒฒฒฒฒฒฒฒ    ฒ \n";
	cout<<"                       ฒ";
	Sleep(500);
	textcolor(11);
	cout<<"                                                     ฐฐ \n";
	cout<<"                                                                      ฐ     ฒฒ ฐ\n";
	cout<<"                                                                     ฒ     ฒ  ฒ \n";
	cout<<"                 ฐ      ฐ     ฐฐฐฐฐฐ     ฐฐฐฐฐฐฐ         ฐ        ฐ   ฐ   ฐฐฐฐฐฐฐ   ฐฐ     ฐ\n";
	cout<<"                ฒฐ     ฒฐ    ฒฒฒฒฒฒฐฐ   ฒฒฒฒฒฒฒ         ฒ ฐ     ฒฐ   ฒฐ  ฒฒฒฒฒฒฒ   ฒฒ ฐ   ฒฐ\n";
	cout<<"                ฒฐฐฐฐฐฐฒฐ   ฒฐ     ฒฐ  ฒฐ                ฒ ฐ   ฒฐ    ฒฐ  ฒฐฐฐฐฐฐ   ฒฐฒ ฐ  ฒฐ\n";
	cout<<"                ฒฒฒฒฒฒฒฒฐ   ฒฐ     ฒฐ  ฒฐ                 ฒ ฐ ฒฐ     ฒฐ  ฒฒฒฒฒฒ    ฒฐ ฒ ฐ ฒฐ\n";
	cout<<"                ฒฐ     ฒฐ   ฒฐฐฐฐฐฐฒฐ  ฒ ฐฐฐฐฐฐฐ           ฒ ฒฐ      ฒฐ  ฒฐฐฐฐฐฐฐ  ฒฐ  ฒ ฐฒฐ\n";
	cout<<"                ฒ      ฒ     ฒฒฒฒฒฒ     ฒฒฒฒฒฒฒ             ฒ        ฒ   ฒฒฒฒฒฒฒ   ฒ    ฒฒฒ\n";
	cout<<"                                ฐฐ                                                               \n";
	cout<<"                               ฒฒ\n";
	Sleep(500);
	textcolor(12);
	cout<<"                ฐฐ       ฐฐ     ฐฐ        ฐฐ              ฐฐ   ฐฐ   ฐฐฐฐฐฐฐฐฐฐ    ฐฐฐฐฐฐ       ฐฐฐฐฐฐ  \n";
	cout<<"               ฒฒฐ      ฒฒฐ    ฒฒฐฐ     ฒฒฐ              ฒฒฐ ฒฒฐ   ฒฒฒฒฒฒฒฒฒฒ    ฒฒฒฒฒฒฒฐฐ    ฒฒฒฒฒฒฐ \n";
	cout<<"               ฒฒฐฐฐฐฐฐฐฒฒฐ     ฒฒฐฐ   ฒฒฐ       ฐฐฐฐ    ฒฒฐฒฒฐ        ฒฒฐฐ     ฒฒ     ฒฒฐ    ฒฒฐฐ  ฒฐ\n";
	cout<<"               ฒฒฒฒฒฒฒฒฒฒฒฐ      ฒฒฐฐ ฒฒฐ       ฒฒฒฒ     ฒฒฒฒฐ         ฒฒฐฐ     ฒฒ    ฐฒฒฐ    ฐฒฒฐฐ   \n";
	cout<<"               ฒฒฒฒฒฒฒฒฒฒฒฐ       ฒฒ ฒฒฐ                 ฒฒฐฒฒฐฐ       ฒฒฐฐ     ฒฒ   ฒ ฒฒฐ    ฐฐฒฒฐฐ  \n";
	cout<<"               ฒฒฐ      ฒฒฐ        ฒฒฒฐ                  ฒฒฐ ฒฒฐฐฐ     ฒฒฐฐ     ฒฒ   ฒฒฒฒ    ฒ ฐฐฐฒฒฐ \n";
	cout<<"               ฒฒ       ฒฒ          ฒ                    ฒฒ   ฒฒฒ      ฒฒ        ฒฒฒฒฒฒฒฐ    ฒฒฒฒฒฒฒ \n";
	cout<<"                                                                                      ฒ";
	
	Sleep(500);
	ToMau(10,30,"Made By: ",12);
	ToMau(19,30,"Le Duy Dung ~ ANHTTT",11);
	ToMau(10,31,"Email: ",12);
	ToMau(17,31,"duydung.hdgl99@gmail.com",11);
    
	getch();
	PrintEmpty();
	
//	ToMau(70,20,"Vui long cho giay lat",14);
//	Sleep(500);
//	cout<<".";
//	Sleep(500);
//	cout<<".";
//	Sleep(500);
//	cout<<".";
//	Sleep(500);
//	cout<<".";
//	Sleep(500);
//	cout<<".";
//	Sleep(500);
}



void End()
{

	textcolor(10);
	Sleep(500);
	cout<<"";
	cout<<"                                            ฐฐ                                          ฐ\n";
	cout<<"                                           ฒฒฐ                                        ฒฐ \n";
	cout<<"                                            ฒ                                        ฒ \n";
	cout<<"                  ฐฐฐฐฐฐ     ฐ      ฐ       ฐ        ฐฐ     ฐ           ฐ           ฐ\n";
	cout<<"                 ฒฒฒฒฒฒฐฐ   ฒฐ     ฒฐ      ฒ ฐ      ฒฒ ฐ   ฒฐ          ฒฐ          ฒฐ\n";
	cout<<"                ฒ      ฒฐ   ฒฐ     ฒฐ     ฒ ฒฐฐ     ฒฐฒ ฐ  ฒฐ          ฒฐ          ฒฐ\n";
	cout<<"                ฒ      ฒฐ   ฒฐ     ฒฐ    ฒฒฒฒฒ ฐ    ฒฐ ฒ ฐ ฒฐ          ฒฐ          ฒฐ\n";
	cout<<"                ฒ    ฒ ฒฐ   ฒฐฐฐฐฐฐฒฐ   ฒฐ    ฒ ฐ   ฒฐ  ฒ ฐฒฐ          ฒฐฐฐฐฐฐฐฐ   ฒฐ\n";
	cout<<"                 ฒฒฒฒฒฒ  ฐ   ฒฒฒฒฒฒ    ฒ       ฒ    ฒ    ฒฒฒ           ฒฒฒฒฒฒฒฒ    ฒ \n";
	cout<<"                       ฒ";
	textcolor(11);
	Sleep(500);
	cout<<"                                                     ฐฐ \n";
	cout<<"                                                                      ฐ     ฒฒ ฐ\n";
	cout<<"                                                                     ฒ     ฒ  ฒ \n";
	cout<<"                 ฐ      ฐ     ฐฐฐฐฐฐ     ฐฐฐฐฐฐฐ         ฐ        ฐ   ฐ   ฐฐฐฐฐฐฐ   ฐฐ     ฐ\n";
	cout<<"                ฒฐ     ฒฐ    ฒฒฒฒฒฒฐฐ   ฒฒฒฒฒฒฒ         ฒ ฐ     ฒฐ   ฒฐ  ฒฒฒฒฒฒฒ   ฒฒ ฐ   ฒฐ\n";
	cout<<"                ฒฐฐฐฐฐฐฒฐ   ฒฐ     ฒฐ  ฒฐ                ฒ ฐ   ฒฐ    ฒฐ  ฒฐฐฐฐฐฐ   ฒฐฒ ฐ  ฒฐ\n";
	cout<<"                ฒฒฒฒฒฒฒฒฐ   ฒฐ     ฒฐ  ฒฐ                 ฒ ฐ ฒฐ     ฒฐ  ฒฒฒฒฒฒ    ฒฐ ฒ ฐ ฒฐ\n";
	cout<<"                ฒฐ     ฒฐ   ฒฐฐฐฐฐฐฒฐ  ฒ ฐฐฐฐฐฐฐ           ฒ ฒฐ      ฒฐ  ฒฐฐฐฐฐฐฐ  ฒฐ  ฒ ฐฒฐ\n";
	cout<<"                ฒ      ฒ     ฒฒฒฒฒฒ     ฒฒฒฒฒฒฒ             ฒ        ฒ   ฒฒฒฒฒฒฒ   ฒ    ฒฒฒ\n";
	cout<<"                                ฐฐ                                                               \n";
	cout<<"                               ฒฒ\n";
	textcolor(12);
	Sleep(500);
	cout<<"                ฐฐ       ฐฐ     ฐฐ        ฐฐ              ฐฐ   ฐฐ   ฐฐฐฐฐฐฐฐฐฐ    ฐฐฐฐฐฐ       ฐฐฐฐฐฐ  \n";
	cout<<"               ฒฒฐ      ฒฒฐ    ฒฒฐฐ     ฒฒฐ              ฒฒฐ ฒฒฐ   ฒฒฒฒฒฒฒฒฒฒ    ฒฒฒฒฒฒฒฐฐ    ฒฒฒฒฒฒฐ \n";
	cout<<"               ฒฒฐฐฐฐฐฐฐฒฒฐ     ฒฒฐฐ   ฒฒฐ       ฐฐฐฐ    ฒฒฐฒฒฐ        ฒฒฐฐ     ฒฒ     ฒฒฐ    ฒฒฐฐ  ฒฐ\n";
	cout<<"               ฒฒฒฒฒฒฒฒฒฒฒฐ      ฒฒฐฐ ฒฒฐ       ฒฒฒฒ     ฒฒฒฒฐ         ฒฒฐฐ     ฒฒ    ฐฒฒฐ    ฐฒฒฐฐ   \n";
	cout<<"               ฒฒฒฒฒฒฒฒฒฒฒฐ       ฒฒ ฒฒฐ                 ฒฒฐฒฒฐฐ       ฒฒฐฐ     ฒฒ   ฒ ฒฒฐ    ฐฐฒฒฐฐ  \n";
	cout<<"               ฒฒฐ      ฒฒฐ        ฒฒฒฐ                  ฒฒฐ ฒฒฐฐฐ     ฒฒฐฐ     ฒฒ   ฒฒฒฒ    ฒ ฐฐฐฒฒฐ \n";
	cout<<"               ฒฒ       ฒฒ          ฒ                    ฒฒ   ฒฒฒ      ฒฒ        ฒฒฒฒฒฒฒฐ    ฒฒฒฒฒฒฒ \n";
	cout<<"                                                                                      ฒ";
	
	Sleep(500);
	ToMau(10,30,"Made By: ",12);
	ToMau(19,30,"Le Duy Dung ~ ANHTTT",11);
	ToMau(10,31,"Email: ",12);
	ToMau(17,31,"duydung.hdgl99@gmail.com",11);
	
	Sleep(2000);
	XoaConTro();
	PrintEmpty();
	
	ToMau(70,20,"Good Bye! See You Again",14);
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	textcolor(0);
}

int MouseEventToButtonBack(int X1_high,int X1_low,int Y1_high,int Y1_low)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(115, 6,"ษอออออออออออออออป",225);
	        ToMau(115, 7,"บ               บ",225);
	        ToMau(115, 8,"บ     QUAY      บ",225);
        	ToMau(115, 9,"บ     LAI       บ",225);
        	ToMau(115,10,"บ               บ",225);
	        ToMau(115,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 2)
		  	{
		  	ToMau(115, 6,"ษอออออออออออออออป",225);
	        ToMau(115, 7,"บ               บ",225);
	        ToMau(115, 8,"บ     COME      บ",225);
        	ToMau(115, 9,"บ     BACK      บ",225);
        	ToMau(115,10,"บ               บ",225);
	        ToMau(115,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115, 6,"ษอออออออออออออออป",225);
	        ToMau(115, 7,"บ               บ",225);
	        ToMau(115, 8,"บ    TOURNE     บ",225);
        	ToMau(115, 9,"บ               บ",225);
        	ToMau(115,10,"บ               บ",225);
	        ToMau(115,11,"ศอออออออออออออออผ",225);	
			}
	     	
	
		  }
		 else{
		 	if(Language == 1)
		  	{
		  	ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     QUAY      บ",11);
        	ToMau(115, 9,"บ     LAI       บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     COME      บ",11);
        	ToMau(115, 9,"บ     BACK      บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ    TOURNE     บ",11);
        	ToMau(115, 9,"บ               บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
		    }
		 	
		break;
    }	
    }
}

int MouseEventToButtonBack2(int X1_high,int X1_low,int Y1_high,int Y1_low)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(128, 6,"ษอออออออออออออออป",225);
	        ToMau(128, 7,"บ               บ",225);
	        ToMau(128, 8,"บ     QUAY      บ",225);
        	ToMau(128, 9,"บ     LAI       บ",225);
        	ToMau(128,10,"บ               บ",225);
	        ToMau(128,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 2)
		  	{
		  	ToMau(128, 6,"ษอออออออออออออออป",225);
	        ToMau(128, 7,"บ               บ",225);
	        ToMau(128, 8,"บ     COME      บ",225);
        	ToMau(128, 9,"บ     BACK      บ",225);
        	ToMau(128,10,"บ               บ",225);
	        ToMau(128,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128, 6,"ษอออออออออออออออป",225);
	        ToMau(128, 7,"บ               บ",225);
	        ToMau(128, 8,"บ    TOURNE     บ",225);
        	ToMau(128, 9,"บ               บ",225);
        	ToMau(128,10,"บ               บ",225);
	        ToMau(128,11,"ศอออออออออออออออผ",225);	
			}
	     	
	
		  }
		 else{
		 	if(Language == 1)
		  	{
		  	ToMau(128, 6,"ษอออออออออออออออป",11);
	        ToMau(128, 7,"บ               บ",11);
	        ToMau(128, 8,"บ     QUAY      บ",11);
        	ToMau(128, 9,"บ     LAI       บ",11);
        	ToMau(128,10,"บ               บ",11);
	        ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(128, 6,"ษอออออออออออออออป",11);
	        ToMau(128, 7,"บ               บ",11);
	        ToMau(128, 8,"บ     COME      บ",11);
        	ToMau(128, 9,"บ     BACK      บ",11);
        	ToMau(128,10,"บ               บ",11);
	        ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128, 6,"ษอออออออออออออออป",11);
	        ToMau(128, 7,"บ               บ",11);
	        ToMau(128, 8,"บ    TOURNE     บ",11);
        	ToMau(128, 9,"บ               บ",11);
        	ToMau(128,10,"บ               บ",11);
	        ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		    }
		 	
		break;
    }	
    }
}

int MouseEventToButtonBackAndPrint(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ      QUAY     บ",225);
	     	ToMau(115,7,"บ      LAI      บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ      COME     บ",225);
	     	ToMau(115,7,"บ      BACK     บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ     TOURNE    บ",225);
	     	ToMau(115,7,"บ               บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
			}
	     	
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
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	 if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
		  	
		  	 ToMau(4,24,"ษอป",226);
	         ToMau(4,25,"บ บ",226);
	         ToMau(4,26,"บ<บ",226);
        	 ToMau(4,27,"บ บ",226);
	         ToMau(4,28,"ศอผ",226);
	
	         ToMau(114,24,"ษอป",4);
	         ToMau(114,25,"บ บ",4);
	         ToMau(114,26,"บ>บ",4);
	         ToMau(114,27,"บ บ",4);
	         ToMau(114,28,"ศอผ",4);
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	    if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(114,24,"ษอป",226);
	            ToMau(114,25,"บ บ",226);
	            ToMau(114,26,"บ>บ",226);
	            ToMau(114,27,"บ บ",226);
	            ToMau(114,28,"ศอผ",226);
		     }
			 else{
		 	    if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToButtonBackAndPrint2(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,
                                  int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,
								  int X5_high,int X5_low,int Y5_high,int Y5_low,int X6_high,int X6_low,int Y6_high,int Y6_low,
								  int X7_high,int X7_low,int Y7_high,int Y7_low,int X8_high,int X8_low,int Y8_high,int Y8_low,
								  int X9_high,int X9_low,int Y9_high,int Y9_low,int X10_high,int X10_low,int Y10_high,int Y10_low,
								  int X11_high,int X11_low,int Y11_high,int Y11_low,int X12_high,int X12_low,int Y12_high,int Y12_low,
								  int X13_high,int X13_low,int Y13_high,int Y13_low, int soluong)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low )
			  {
			  	return 5;
			  }
			if(point.x <= X6_high and point.x>=X6_low and point.y<=Y6_high and point.y>=Y6_low )
			  {
			  	return 6;
			  }
			if(point.x <= X7_high and point.x>=X7_low and point.y<=Y7_high and point.y>=Y7_low )
			  {
			  	return 7;
			  }
			if(point.x <= X8_high and point.x>=X8_low and point.y<=Y8_high and point.y>=Y8_low )
			  {
			  	return 8;
			  }
			if(point.x <= X9_high and point.x>=X9_low and point.y<=Y9_high and point.y>=Y9_low )
			  {
			  	return 9;
			  }
			if(point.x <= X10_high and point.x>=X10_low and point.y<=Y10_high and point.y>=Y10_low)
			  {
			  	return 10;
			  }
			if(point.x <= X11_high and point.x>=X11_low and point.y<=Y11_high and point.y>=Y11_low )
			  {
			  	return 11;
			  }
			if(point.x <= X12_high and point.x>=X12_low and point.y<=Y12_high and point.y>=Y12_low )
			  {
			  	return 12;
			  }
			if(point.x <= X13_high and point.x>=X13_low and point.y<=Y13_high and point.y>=Y13_low )
			  { 
			  	return 13;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",225);
	     	ToMau(128,7,"บ               บ",225);
	     	ToMau(128,8,"บ      QUAY     บ",225);
	     	ToMau(128,9,"บ      LAI      บ",225);
	     	ToMau(128,10,"บ               บ",225);
	     	ToMau(128,11,"ศอออออออออออออออผ",225);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",225);
	     	ToMau(128,7,"บ               บ",225);
	     	ToMau(128,8,"บ      COME     บ",225);
	     	ToMau(128,9,"บ      BACK     บ",225);
	     	ToMau(128,10,"บ               บ",225);
	     	ToMau(128,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",225);
	     	ToMau(128,7,"บ               บ",225);
	     	ToMau(128,8,"บ     TOURNE    บ",225);
	     	ToMau(128,9,"บ               บ",225);
	     	ToMau(128,10,"บ               บ",225);
	     	ToMau(128,11,"ศอออออออออออออออผ",225);	
			}
	     	
	     	ToMau(4,24,"ษอป",4);
	        ToMau(4,25,"บ บ",4);
	        ToMau(4,26,"บ<บ",4);
        	ToMau(4,27,"บ บ",4);
	        ToMau(4,28,"ศอผ",4);
	
	        ToMau(84,24,"ษอป",4);
	        ToMau(84,25,"บ บ",4);
	        ToMau(84,26,"บ>บ",4);
	        ToMau(84,27,"บ บ",4);
	        ToMau(84,28,"ศอผ",4);
	        
	        for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	 if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	 ToMau(4,24,"ษอป",226);
	         ToMau(4,25,"บ บ",226);
	         ToMau(4,26,"บ<บ",226);
        	 ToMau(4,27,"บ บ",226);
	         ToMau(4,28,"ศอผ",226);
	
	         ToMau(84,24,"ษอป",4);
	         ToMau(84,25,"บ บ",4);
	         ToMau(84,26,"บ>บ",4);
	         ToMau(84,27,"บ บ",4);
	         ToMau(84,28,"ศอผ",4);
	         
	         for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
		   }
		  else
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	    if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",226);
	            ToMau(84,25,"บ บ",226);
	            ToMau(84,26,"บ>บ",226);
	            ToMau(84,27,"บ บ",226);
	            ToMau(84,28,"ศอผ",226);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
		     }
		    else
		    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low and soluong >= 1)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,15,"þþ",11);
			}
			else
		    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low and soluong >= 2)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,17,"þþ",11);
			}
			else
		    if(point1.x <= X6_high and point1.x>=X6_low and point1.y<=Y6_high and point1.y>=Y6_low and soluong >= 3)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,19,"þþ",11);
			}
			else
		    if(point1.x <= X7_high and point1.x>=X7_low and point1.y<=Y7_high and point1.y>=Y7_low and soluong >= 4)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,21,"þþ",11);
			}
			else
		    if(point1.x <= X8_high and point1.x>=X8_low and point1.y<=Y8_high and point1.y>=Y8_low and soluong >= 5)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,23,"þþ",11);
			}
			else
		    if(point1.x <= X9_high and point1.x>=X9_low and point1.y<=Y9_high and point1.y>=Y9_low and soluong >= 6)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,25,"þþ",11);
			}
			else
		    if(point1.x <= X10_high and point1.x>=X10_low and point1.y<=Y10_high and point1.y>=Y10_low and soluong >= 7)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,27,"þþ",11);
			}
			else
		    if(point1.x <= X11_high and point1.x>=X11_low and point1.y<=Y11_high and point1.y>=Y11_low and soluong >= 8)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,29,"þþ",11);
			}
			else
		    if(point1.x <= X12_high and point1.x>=X12_low and point1.y<=Y12_high and point1.y>=Y12_low and soluong >= 9)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,31,"þþ",11);
			}
			else
		    if(point1.x <= X13_high and point1.x>=X13_low and point1.y<=Y13_high and point1.y>=Y13_low and soluong == 10)
		    {
		    	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
	            
	            ToMau(25,33,"þþ",11);
			}
	
			 else{
			
		 	    if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  	    ToMau(4,24,"ษอป",4);
	            ToMau(4,25,"บ บ",4);
	            ToMau(4,26,"บ<บ",4);
        	    ToMau(4,27,"บ บ",4);
	            ToMau(4,28,"ศอผ",4);
	
	            ToMau(84,24,"ษอป",4);
	            ToMau(84,25,"บ บ",4);
	            ToMau(84,26,"บ>บ",4);
	            ToMau(84,27,"บ บ",4);
	            ToMau(84,28,"ศอผ",4);
	            
	            for(int i=15 ; i<=33 ; i+=2)
	            ToMau(25,i,"  ",11);
		      }
		   
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToButtonBackAndPrintAndFind(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,
                                          int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,
										  int X5_high,int X5_low,int Y5_high,int Y5_low,int X6_high,int X6_low,int Y6_high,int Y6_low,
										  int X7_high,int X7_low,int Y7_high,int Y7_low,int X8_high,int X8_low,int Y8_high,int Y8_low,
										  int X9_high,int X9_low,int Y9_high,int Y9_low,int X10_high,int X10_low,int Y10_high,int Y10_low,
										  int X11_high,int X11_low,int Y11_high,int Y11_low,int X12_high,int X12_low,int Y12_high,int Y12_low,
										  int X13_high,int X13_low,int Y13_high,int Y13_low,int X14_high,int X14_low,int Y14_high,int Y14_low,
										  int X15_high,int X15_low,int Y15_high,int Y15_low,int X16_high,int X16_low,int Y16_high,int Y16_low,
										  int X17_high,int X17_low,int Y17_high,int Y17_low,int X18_high,int X18_low,int Y18_high,int Y18_low,int soluong)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low and soluong >= 2)
			  {
			  	return 5;
			  }
			if(point.x <= X6_high and point.x>=X6_low and point.y<=Y6_high and point.y>=Y6_low and soluong >= 3)
			  {
			  	return 6;
			  }
			if(point.x <= X7_high and point.x>=X7_low and point.y<=Y7_high and point.y>=Y7_low and soluong >= 4)
			  {
			  	return 7;
			  }
			if(point.x <= X8_high and point.x>=X8_low and point.y<=Y8_high and point.y>=Y8_low and soluong >= 5)
			  {
			  	return 8;
			  }
			if(point.x <= X9_high and point.x>=X9_low and point.y<=Y9_high and point.y>=Y9_low and soluong >= 6)
			  {
			  	return 9;
			  }
			if(point.x <= X10_high and point.x>=X10_low and point.y<=Y10_high and point.y>=Y10_low and soluong >= 7)
			  {
			  	return 10;
			  }
			if(point.x <= X11_high and point.x>=X11_low and point.y<=Y11_high and point.y>=Y11_low and soluong >= 8)
			  {
			  	return 11;
			  }
			if(point.x <= X12_high and point.x>=X12_low and point.y<=Y12_high and point.y>=Y12_low and soluong >= 9)
			  {
			  	return 12;
			  }
			if(point.x <= X13_high and point.x>=X13_low and point.y<=Y13_high and point.y>=Y13_low and soluong >= 10)
			  { 
			  	return 13;
			  }
			if(point.x <= X14_high and point.x>=X14_low and point.y<=Y14_high and point.y>=Y14_low and soluong >= 11)
			  {
			  	return 14;
			  }
			if(point.x <= X15_high and point.x>=X15_low and point.y<=Y15_high and point.y>=Y15_low and soluong >= 12)
			  {
			  	return 15;
			  }
			if(point.x <= X16_high and point.x>=X16_low and point.y<=Y16_high and point.y>=Y16_low and soluong >= 13)
			  {
			  	return 16;
			  }
			if(point.x <= X17_high and point.x>=X17_low and point.y<=Y17_high and point.y>=Y17_low and soluong >= 14)
			  {
			  	return 17;
			  }
			if(point.x <= X18_high and point.x>=X18_low and point.y<=Y18_high and point.y>=Y18_low and soluong == 15)
			  {
			  	return 18;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	XoaConTro();
		  	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ      QUAY     บ",225);
	     	ToMau(115,7,"บ      LAI      บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ      COME     บ",225);
	     	ToMau(115,7,"บ      BACK     บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ     TOURNE    บ",225);
	     	ToMau(115,7,"บ               บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
			}
	     	
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
	        for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
		  }
		 else
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		    XoaConTro();
		  	 if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
		  	
		  	 ToMau(4,24,"ษอป",226);
	         ToMau(4,25,"บ บ",226);
	         ToMau(4,26,"บ<บ",226);
        	 ToMau(4,27,"บ บ",226);
	         ToMau(4,28,"ศอผ",226);
	
	         ToMau(114,24,"ษอป",4);
	         ToMau(114,25,"บ บ",4);
	         ToMau(114,26,"บ>บ",4);
	         ToMau(114,27,"บ บ",4);
	         ToMau(114,28,"ศอผ",4);
	         for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }

		   }
		  else
		  	
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
			    XoaConTro();
	     	    if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
		  	
		    ToMau(4,24,"ษอป",4);
	        ToMau(4,25,"บ บ",4);
	        ToMau(4,26,"บ<บ",4);
        	ToMau(4,27,"บ บ",4);
	        ToMau(4,28,"ศอผ",4);
	
	        ToMau(114,24,"ษอป",226);
	        ToMau(114,25,"บ บ",226);
	        ToMau(114,26,"บ>บ",226);
	        ToMau(114,27,"บ บ",226);
	        ToMau(114,28,"ศอผ",226);
	        for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
		     }
			 else
			if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low and soluong >= 1)
			{
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
                
                for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,12,"Û",11);
	            ToMau(69,12,"ÛÛÛ",11);
	            
		    }	
		    else
		    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low and soluong >= 2)
		      {
		    
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,14,"Û",11);
	            ToMau(69,14,"ÛÛÛ",11);
			  }
			else
			if(point1.x <= X6_high and point1.x>=X6_low and point1.y<=Y6_high and point1.y>=Y6_low and soluong >= 3)
			  {
			 
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,16,"Û",11);
	            ToMau(69,16,"ÛÛÛ",11);
		    }	
		    else
		    if(point1.x <= X7_high and point1.x>=X7_low and point1.y<=Y7_high and point1.y>=Y7_low and soluong >= 4)
		      {
		      	XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,18,"Û",11);
	            ToMau(69,18,"ÛÛÛ",11);
			  }
			else
			if(point1.x <= X8_high and point1.x>=X8_low and point1.y<=Y8_high and point1.y>=Y8_low and soluong >= 5)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,20,"Û",11);
	            ToMau(69,20,"ÛÛÛ",11);
			  }
			else
			if(point1.x <= X9_high and point1.x>=X9_low and point1.y<=Y9_high and point1.y>=Y9_low and soluong >= 6)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,22,"Û",11);
	            ToMau(69,22,"ÛÛÛ",11); 	
			  }
			else
			if(point1.x <= X10_high and point1.x>=X10_low and point1.y<=Y10_high and point1.y>=Y10_low and soluong >= 7)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,24,"Û",11);
	            ToMau(69,24,"ÛÛÛ",11); 	
			  }
			else
			if(point1.x <= X11_high and point1.x>=X11_low and point1.y<=Y11_high and point1.y>=Y11_low and soluong >= 8)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,26,"Û",11);
	            ToMau(69,26,"ÛÛÛ",11); 	
			  }
			else
			if(point1.x <= X12_high and point1.x>=X12_low and point1.y<=Y12_high and point1.y>=Y12_low and soluong >= 9)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,28,"Û",11);
	            ToMau(69,28,"ÛÛÛ",11);  	
			  }
			else
			if(point1.x <= X13_high and point1.x>=X13_low and point1.y<=Y13_high and point1.y>=Y13_low and soluong >= 10)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,30,"Û",11);
	            ToMau(69,30,"ÛÛÛ",11); 	
			  }
			else
			if(point1.x <= X14_high and point1.x>=X14_low and point1.y<=Y14_high and point1.y>=Y14_low and soluong >= 11)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,32,"Û",11);
	            ToMau(69,32,"ÛÛÛ",11);  	
			  }
			else
			if(point1.x <= X15_high and point1.x>=X15_low and point1.y<=Y15_high and point1.y>=Y15_low and soluong >= 12)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,34,"Û",11);
	            ToMau(69,34,"ÛÛÛ",11); 	
			  }
			else
			if(point1.x <= X16_high and point1.x>=X16_low and point1.y<=Y16_high and point1.y>=Y16_low and soluong >= 13)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,36,"Û",11);
	            ToMau(69,36,"ÛÛÛ",11); 	
			  }
			else
			if(point1.x <= X17_high and point1.x>=X17_low and point1.y<=Y17_high and point1.y>=Y17_low and soluong >= 14)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,38,"Û",11);
	            ToMau(69,38,"ÛÛÛ",11);  	
			  }
			else
			if(point1.x <= X18_high and point1.x>=X18_low and point1.y<=Y18_high and point1.y>=Y18_low and soluong ==15)
			  {
			XoaConTro();
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
	            for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
				ToMau(15,40,"Û",11);
	            ToMau(69,40,"ÛÛÛ",11); 	
			  }
			  else{	
		
		 	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	
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
			for(int i=12 ; i<=40 ; i+=2)
                   {
                   	ToMau(15,i," ",11);
	                ToMau(69,i,"   ",11);
				   }
					
			  } 	
		break;
    }	
    }
}


int MouseEventToButtonOfMenu( int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,
                              int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low,int X6_high,int X6_low,int Y6_high,int Y6_low,
							  int X7_high,int X7_low,int Y7_high,int Y7_low,int X8_high,int X8_low,int Y8_high,int Y8_low,int X9_high,int X9_low,int Y9_high,int Y9_low,
							  int X10_high,int X10_low,int Y10_high,int Y10_low, int X11_high,int X11_low,int Y11_high,int Y11_low,int X12_high,int X12_low,int Y12_high,int Y12_low,
							  int X13_high,int X13_low,int Y13_high,int Y13_low )
{
	int colorFrame = 12;
	
a:	if(Language == 1)
	{
	ToMau(37,2,"                               ",14);
	ToMau(37,3,"                               ",14);
	ToMau(37,4,"                               ",14);
	ToMau(37,5,"                               ",14);
	ToMau(37,6,"                               ",14);
	
	ToMau(40,2,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",14);
	ToMau(40,3,"ÛษออออออออออออออออออออปÛ",14);
	ToMau(40,4,"Ûบ~ QUAN LI HOC VIEN ~บÛ",14);
	ToMau(40,5,"ÛศออออออออออออออออออออผÛ",14);
	ToMau(40,6,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",14);
	
	ToMau(90,3,"                                          ",12);
	ToMau(90,3,"Winner: ",12);
	ToMau(99,3,"Le Duy Dung ~ ANHTTT",11);
	ToMau(90,4,"Email: ",12);
	ToMau(97,4,"duydung.hdgl99@gmail.com",11);	
	
	ToMau(120,10,"                ",14);
	ToMau(120,12,"                ",14);
	ToMau(120,14,"                ",14);
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
	}
	
	if(Language == 2)
	{
	ToMau(37,2,"                               ",14);
	ToMau(37,3,"                               ",14);
	ToMau(37,4,"                               ",14);
	ToMau(37,5,"                               ",14);
	ToMau(37,6,"                               ",14);
	
	ToMau(40,2,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",14);
	ToMau(40,3,"ÛษออออออออออออออออออออออปÛ",14);
	ToMau(40,4,"Ûบ~ STUDENT MANAGEMENT ~บÛ",14);
	ToMau(40,5,"ÛศออออออออออออออออออออออผÛ",14);
	ToMau(40,6,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",14);
	
	ToMau(90,3,"                                          ",12);
	ToMau(90,3,"Made By: ",12);
	ToMau(99,3,"Le Duy Dung ~ ANHTTT",11);
	ToMau(90,4,"Email: ",12);
	ToMau(97,4,"duydung.hdgl99@gmail.com",11);
	
	ToMau(120,10,"                ",14);
	ToMau(120,12,"                ",14);
	ToMau(120,14,"                ",14);
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	if(Language == 3)
	{
	ToMau(37,2,"                                 ",14);
	ToMau(37,3,"                                 ",14);
	ToMau(37,4,"                                 ",14);
	ToMau(37,5,"                                 ",14);
	ToMau(37,6,"                                 ",14);
	
	ToMau(37,2,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",14);
	ToMau(37,3,"ÛษอออออออออออออออออออออออออปÛ",14);
	ToMau(37,4,"Ûบ~ GESTION DES ETUDIANTS ~บÛ",14);
	ToMau(37,5,"ÛศอออออออออออออออออออออออออผÛ",14);
	ToMau(37,6,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ",14);
	
	ToMau(90,3,"Fait par: ",12);
	ToMau(99,3,"Le Duy Dung ~ ANHTTT",11);
	ToMau(90,4,"Email: ",12);
	ToMau(97,4,"duydung.hdgl99@gmail.com",11);	
	
	ToMau(120,10,"                ",14);
	ToMau(120,12,"                ",14);
	ToMau(120,14,"                ",14);
	
	ToMau(120,10,"Vietnamien",14);
	ToMau(120,12,"Anglais",14);
	ToMau(120,14,"Francaise",14);
	}
	
    gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	textcolor(colorFrame);
	
	if(Language == 1)
	{
	cout<<"Û";textcolor(1);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(1);cout<<"               Û 1. Them moi Ho so                                                    Û\n";
	cout<<"Û";textcolor(1);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(2);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(2);cout<<"               Û 2. In Danh Sach                                                      Û\n";
	cout<<"Û";textcolor(2);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(3);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(3);cout<<"               Û 3. Sap Xep                                                           Û\n";
	cout<<"Û";textcolor(3);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(4);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(4);cout<<"               Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	cout<<"Û";textcolor(4);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(5);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(5);cout<<"               Û 5. Thong ke                                                          Û\n";
	cout<<"Û";textcolor(5);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(6);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(6);cout<<"               Û 6. Doi Mat khau                                                      Û\n";
	cout<<"Û";textcolor(6);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(7);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(7);cout<<"               Û 7. Bao cao cua Hoc vien                                              Û\n";
	cout<<"Û";textcolor(7);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(12);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(12);cout<<"               Û 8. Gui thong bao cho tat ca Hoc vien                                        Û\n";
	cout<<"Û";textcolor(12);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(9);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(9);cout<<"               Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	cout<<"Û";textcolor(9);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û";textcolor(1);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(1);cout<<"               Û 10. Thoat                                                            Û\n";
	cout<<"Û";textcolor(1);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	
	
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
	}
	
	if(Language == 2)
	{
	cout<<"Û";textcolor(1);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(1);cout<<"               Û 1. Add New Account                                                   Û\n";
	cout<<"Û";textcolor(1);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(2);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(2);cout<<"               Û 2. Display List                                                      Û\n";
	cout<<"Û";textcolor(2);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(3);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(3);cout<<"               Û 3. Sorts                                                             Û\n";
	cout<<"Û";textcolor(3);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(4);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(4);cout<<"               Û 4. Find, Change or Delete Account                                    Û\n";
	cout<<"Û";textcolor(4);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(5);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(5);cout<<"               Û 5. Statistics                                                        Û\n";
	cout<<"Û";textcolor(5);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(6);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(6);cout<<"               Û 6. Change Password                                                   Û\n";
	cout<<"Û";textcolor(6);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(7);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(7);cout<<"               Û 7. Opinion Of Student                                                Û\n";
	cout<<"Û";textcolor(7);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(12);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(12);cout<<"               Û 8. Send Notification To  All Students                                      Û\n";
	cout<<"Û";textcolor(12);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(9);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(9);cout<<"               Û 9. Foolish People!!!                                                 Û\n";
	cout<<"Û";textcolor(9);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û";textcolor(1);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(1);cout<<"               Û 10. Exit                                                             Û\n";
	cout<<"Û";textcolor(1);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);		
	}
	
	if(Language == 3)
	{
	cout<<"Û";textcolor(1);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(1);cout<<"               Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	cout<<"Û";textcolor(1);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(2);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(2);cout<<"               Û 2. Imprimer La Liste                                                 Û\n";
	cout<<"Û";textcolor(2);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(3);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(3);cout<<"               Û 3. Organiser                                                         Û\n";
	cout<<"Û";textcolor(3);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(4);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(4);cout<<"               Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	cout<<"Û";textcolor(4);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(5);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(5);cout<<"               Û 5. Des Statistiques                                                  Û\n";
	cout<<"Û";textcolor(5);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(6);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(6);cout<<"               Û 6. Changer Le Mot De Passe                                           Û\n";
	cout<<"Û";textcolor(6);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(7);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(7);cout<<"               Û 7. Rapport D'Etudiant                                                Û\n";
	cout<<"Û";textcolor(7);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(12);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(12);cout<<"               Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	cout<<"Û";textcolor(12);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û";textcolor(9);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(9);cout<<"               Û 9. Des Imbeciles!!!                                                  Û\n";
	cout<<"Û";textcolor(9);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û";textcolor(1);cout<<"               ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"Û";textcolor(1);cout<<"               Û 10. Sortir                                                           Û\n";
	cout<<"Û";textcolor(1);cout<<"               ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	ToMau(120,10,"Vietnamien",14);
	ToMau(120,12,"Anglais",14);
	ToMau(120,14,"Francaise",14);	
	}
	 
//	for(int i=7;i<=37;i++)
//	    ToMau(2,i,"Û",12);    	
	ToMauInt(90,26,MessAmount,244);
	textcolor(7);
	
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
    
    XoaConTro();
    
	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		       return 1;
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	           return 2;
	        if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)	
	           return 3;
	        if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)	
	           return 4;
	        if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)	
	           return 5;
	        if(point.x <= X6_high and point.x>=X6_low and point.y<=Y6_high and point.y>=Y6_low)	
	           return 6;
	        if(point.x <= X7_high and point.x>=X7_low and point.y<=Y7_high and point.y>=Y7_low)	
	           return 7;
	        if(point.x <= X8_high and point.x>=X8_low and point.y<=Y8_high and point.y>=Y8_low)	
	           return 8;
	        if(point.x <= X9_high and point.x>=X9_low and point.y<=Y9_high and point.y>=Y9_low)	
	           return 9;
	        if(point.x <= X10_high and point.x>=X10_low and point.y<=Y10_high and point.y>=Y10_low)	
	           return 10;
            if(point.x <= X11_high and point.x>=X11_low and point.y<=Y11_high and point.y>=Y11_low)	
              {
              	Language = 1;
              	goto a;
			  }
	           
	        if(point.x <= X12_high and point.x>=X12_low and point.y<=Y12_high and point.y>=Y12_low)	
	          {
              	Language = 2;
              	goto a;
			  }
	        if(point.x <= X13_high and point.x>=X13_low and point.y<=Y13_high and point.y>=Y13_low)	
	          {
              	Language = 3;
              	goto a;
			  }
          }
        break;
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
		
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);	
	}
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
	    if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
		
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);	
	}
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
	    
		  }
		else
	    if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);		
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
		
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);	
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
	    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);		
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
	    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);			
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
	    if(point1.x <= X6_high and point1.x>=X6_low and point1.y<=Y6_high and point1.y>=Y6_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);		
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);		
	}
	     	
    ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
	    if(point1.x <= X7_high and point1.x>=X7_low and point1.y<=Y7_high and point1.y>=Y7_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);	
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
	    if(point1.x <= X8_high and point1.x>=X8_low and point1.y<=Y8_high and point1.y>=Y8_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);		
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
		if(point1.x <= X9_high and point1.x>=X9_low and point1.y<=Y9_high and point1.y>=Y9_low)	
	      {
	      	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";		
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		  }
		else
		if(point1.x <= X10_high and point1.x>=X10_low and point1.y<=Y10_high and point1.y>=Y10_low)
		{
		    gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(228);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);	
	}
	     	
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
		}
	    
		else
		if(point1.x <= X11_high and point1.x>=X11_low and point1.y<=Y11_high and point1.y>=Y11_low)
		{
			gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	     	
	     	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",10);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",10);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",10);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);	
	}
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
	}
	else
	if(point1.x <= X12_high and point1.x>=X12_low and point1.y<=Y12_high and point1.y>=Y12_low)
	{
			gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",10);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",10);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
		
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",10);
    ToMau(120,14,"Francaise",14);		
	}
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);
    }
	else
	if(point1.x <= X13_high and point1.x>=X13_low and point1.y<=Y13_high and point1.y>=Y13_low)
	{
	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",10);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",10);	
	}
	
	if(Language == 3)
	{
		
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",10);		
	}
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);		
	}
	else{
	gotoxy(1,1);
	cout<<"\n\n\n\n\n\n" ;
	
	if(Language == 1)
	{	
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Them moi Ho so                                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. In Danh Sach                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sap Xep                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Tim Kiem, Thay Doi hoac Xoa tai khoan                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Thong ke                                                          Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Doi Mat khau                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Bao cao cua Hoc vien                                              Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Gui thong bao cho tat ca Hoc vien                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Nhung thanh nien ngao ngo!!!                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Thoat                                                            Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	ToMau(120,10,"Tieng Viet",14);
	ToMau(120,12,"Tieng Anh",14);
	ToMau(120,14,"Tieng Phap",14);
    }
    
    if(Language == 2)
    {
    textcolor(colorFrame);
    cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Add New Account                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Display List                                                      Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Sorts                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Find, Change or Delete Account                                    Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Statistics                                                        Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Change Password                                                   Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Opinion Of Student                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Send Notification To  All Students                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Foolish People!!!                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Exit                                                             Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamese",14);
	ToMau(120,12,"English",14);
	ToMau(120,14,"French",14);	
	}
	
	if(Language == 3)
	{
		
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 1. Ajouter De Nouveaux Comptes                                       Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"Û 2. Imprimer La Liste                                                 Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(2);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"Û 3. Organiser                                                         Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(3);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"Û 4. Rechercher, Modifier Ou Supprimer Des Comptes                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(4);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"Û 5. Des Statistiques                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(5);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"Û 6. Changer Le Mot De Passe                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(6);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"Û 7. Rapport D'Etudiant                                                Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(7);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"Û 8. Envoyer Des Avis Aux Etudiant                                     Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(12);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"Û 9. Des Imbeciles!!!                                                  Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(9);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
    textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"Û 10. Sortir                                                           Û\n";
	textcolor(colorFrame);
	cout<<"Û               ";textcolor(1);cout<<"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	ToMau(120,10,"Vietnamien",14);
    ToMau(120,12,"Anglais",14);
    ToMau(120,14,"Francaise",14);		
	}
	ToMau(90,25,"     ",244);
	ToMau(90,26,"     ",244);
	ToMau(90,27,"     ",244);
	ToMauInt(92,26,MessAmount,244);
	textcolor(7);		
	}
	    break;
    }
	}
}

int MouseEventToButtonOfMenuForMember(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low)
{
	gotoxy(1,1);
	cout<<"\n\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                Û 1.                                                                   Û\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                Û 2.                                                                   Û\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                Û 3.                                                                   Û\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                Û 4.                                                                   Û\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                Û 5.                                                                   Û\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	
	for(int i=6 ; i<=20 ; i++)
	    ToMau(1,i,"ÛÛ",7);
	
	ToMau(22, 7,"Xem thong tin ca nhan",14);	        
	ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	ToMau(22,16,"Doi mat khau",14);
	ToMau(22,19,"Thoat",14);
	
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
    
    XoaConTro();
    
	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		       return 1;
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	           return 2;
	        if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)	
	           return 3;
	        if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)	
	           return 4;
	        if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)	
	           return 5;
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	gotoxy(1,1);
	     	cout<<"\n\n\n\n\n" ;

	     	ToMau(17,6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",242);
	     	ToMau(17,7,"Û 1.                                                                   Û",242);
	     	ToMau(17,8,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",242);
	     	gotoxy(1,9);
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 2.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 3.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 4.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 5.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	
	     	for(int i=6 ; i<=20 ; i++)
	            ToMau(1,i,"ÛÛ",7);
	     	
	     	ToMau(22,7,"Xem thong tin ca nhan",14);	        
	        ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	        ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	        ToMau(22,16,"Doi mat khau",14);
	        ToMau(22,19,"Thoat",14);
		  }
		else
	    if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)	
	      {
	      	gotoxy(1,1);
	     	cout<<"\n\n\n\n\n" ;
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 1.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ";
	     	ToMau(17,9 ,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",242);
	     	ToMau(17,10,"Û 2.                                                                   Û",242);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",242);
	     	textcolor(10);
	     	gotoxy(1,12);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 3.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 4.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 5.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	
	     	for(int i=6 ; i<=20 ; i++)
	            ToMau(1,i,"ÛÛ",7);
	     	
	     	ToMau(22,7,"Xem thong tin ca nhan",14);	        
	        ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	        ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	        ToMau(22,16,"Doi mat khau",14);
	        ToMau(22,19,"Thoat",14);
		  }
		else
	    if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)	
	      {
	      	gotoxy(1,1);
	     	cout<<"\n\n\n\n\n" ;
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 1.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 2.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ";
	     	ToMau(17,12,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",242);
	     	ToMau(17,13,"Û 3.                                                                   Û",242);
	     	ToMau(17,14,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",242);
	     	textcolor(10);
	     	gotoxy(1,15);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 4.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 5.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	
	     		for(int i=6 ; i<=20 ; i++)
	    ToMau(1,i,"ÛÛ",7);
	     	
	     	ToMau(22,7,"Xem thong tin ca nhan",14);	        
	        ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	        ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	        ToMau(22,16,"Doi mat khau",14);
	        ToMau(22,19,"Thoat",14);
		  }
		else
	    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)	
	      {
	      	gotoxy(1,1);
	     	cout<<"\n\n\n\n\n" ;
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 1.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 2.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 3.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	ToMau(17,15,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",242);
	     	ToMau(17,16,"Û 4.                                                                   Û",242);
	     	ToMau(17,17,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",242);
	     	gotoxy(1,18);
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 5.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	
	     		for(int i=6 ; i<=20 ; i++)
	    ToMau(1,i,"ÛÛ",7);
	     	
	     	ToMau(22,7,"Xem thong tin ca nhan",14);	        
	        ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	        ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	        ToMau(22,16,"Doi mat khau",14);
	        ToMau(22,19,"Thoat",14);
		  }
		else
	    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)	
	      {
	      	gotoxy(1,1);
	     	cout<<"\n\n\n\n\n" ;
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 1.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 2.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 3.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 4.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ";
	     	ToMau(17,18,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",242);
	     	ToMau(17,19,"Û 5.                                                                   Û",242);
	     	ToMau(17,20,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",242);
	     	
	     		for(int i=6 ; i<=20 ; i++)
	    ToMau(1,i,"ÛÛ",7);
	     	
	     	ToMau(22,7,"Xem thong tin ca nhan",14);	        
	        ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	        ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	        ToMau(22,16,"Doi mat khau",14);
	        ToMau(22,19,"Thoat",14);
		  }
		else{
			gotoxy(1,1);
	     	cout<<"\n\n\n\n\n" ;
	     	textcolor(10);
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 1.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 2.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 3.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 4.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	     	cout<<"                Û 5.                                                                   Û\n";
	     	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	     	
	     		for(int i=6 ; i<=20 ; i++)
	    ToMau(1,i,"ÛÛ",7);
	     	
	     	ToMau(22,7,"Xem thong tin ca nhan",14);	        
	        ToMau(22,10,"Tin nhan cua ban Quan tri",14);	               
	        ToMau(22,13,"Gui y kien cho ban Quan tri",14);
	        ToMau(22,16,"Doi mat khau",14);
	        ToMau(22,19,"Thoat",14);
			
		}
	
	    break;
    }
	}
}

int MouseEventToButtonForLogIn( int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low )   
{
	int colorFrame = 12;
	PrintFrame(colorFrame);
	
    DWORD soBanGhi;      // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];         // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
    
    XoaConTro();
    
	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)	
	          {
	          	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)	
	          {
	          	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)	
	          {
	          	return 5;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
	    
	    if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
	      {   
	        XoaConTro();
	        ToMau(17, 8,"Ten nguoi dung",11);
	        ToMau(20,10,"Mat khau",14);
	        
	        ToMau(103,6 ,"ษอออออออออออออออป",14);
            ToMau(103,7 ,"บ               บ",14);
            ToMau(103,8 ,"บ      DANG     บ",14);                                             
	        ToMau(103,9 ,"บ      NHAP     บ",14);
	        ToMau(103,10,"บ               บ",14);
	        ToMau(103,11,"ศอออออออออออออออผ",14);
	        
	        ToMau(103,15,"ษอออออออออออออออป",14);
            ToMau(103,16,"บ               บ",14);
            ToMau(103,17,"บ     THOAT     บ",14);                                             
	        ToMau(103,18,"บ  CHUONG TRINH บ",14);
	        ToMau(103,19,"บ               บ",14);
	        ToMau(103,20,"ศอออออออออออออออผ",14);
	        
	        ToMau(55,14,"Quen mat khau! Help!",10);
	        ToMau(55,15,"                    ",11);
	        
	        HienConTro();
	        gotoxy(34,8);
		  }
		 else
		 if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		      {
		      	XoaConTro();
		      	ToMau(17, 8,"Ten nguoi dung",14);
	            ToMau(20,10,"Mat khau",11);
	            
	            ToMau(103,6 ,"ษอออออออออออออออป",14);
                ToMau(103,7 ,"บ               บ",14);
                ToMau(103,8 ,"บ      DANG     บ",14);                                             
	            ToMau(103,9 ,"บ      NHAP     บ",14);
	            ToMau(103,10,"บ               บ",14);
	            ToMau(103,11,"ศอออออออออออออออผ",14);
	            
		  	    ToMau(103,15,"ษอออออออออออออออป",14);
                ToMau(103,16,"บ               บ",14);
                ToMau(103,17,"บ     THOAT     บ",14);                                             
	            ToMau(103,18,"บ  CHUONG TRINH บ",14);
	            ToMau(103,19,"บ               บ",14);
	            ToMau(103,20,"ศอออออออออออออออผ",14);
	            
	            ToMau(55,14,"Quen mat khau! Help!",10);
	     	    ToMau(55,15,"                    ",11);
	     	    
	     	    HienConTro();
	     	    gotoxy(34,10);
		      }
		    else
		 	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
		      	XoaConTro();
		      	ToMau(17, 8,"Ten nguoi dung",14);
	            ToMau(20,10,"Mat khau",14);
	            
		  	    ToMau(103,6 ,"ษอออออออออออออออป",244);
                ToMau(103,7 ,"บ               บ",244);
                ToMau(103,8 ,"บ      DANG     บ",244);                                             
	            ToMau(103,9 ,"บ      NHAP     บ",244);
	            ToMau(103,10,"บ               บ",244);
	            ToMau(103,11,"ศอออออออออออออออผ",244);
	            
	            ToMau(103,15,"ษอออออออออออออออป",14);
                ToMau(103,16,"บ               บ",14);
                ToMau(103,17,"บ     THOAT     บ",14);                                             
	            ToMau(103,18,"บ  CHUONG TRINH บ",14);
	            ToMau(103,19,"บ               บ",14);
	            ToMau(103,20,"ศอออออออออออออออผ",14);
	            
	            ToMau(55,14,"Quen mat khau! Help!",10);
	     	    ToMau(55,15,"                    ",11);
	     	    
		      }
		    else
		    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)
		      {
		      	XoaConTro();
		      	ToMau(17, 8,"Ten nguoi dung",14);
	            ToMau(20,10,"Mat khau",14);
	            
	            ToMau(103,6 ,"ษอออออออออออออออป",14);
                ToMau(103,7 ,"บ               บ",14);
                ToMau(103,8 ,"บ      DANG     บ",14);                                             
	            ToMau(103,9 ,"บ      NHAP     บ",14);
	            ToMau(103,10,"บ               บ",14);
	            ToMau(103,11,"ศอออออออออออออออผ",14);
	            
		  	    ToMau(103,15,"ษอออออออออออออออป",244);
                ToMau(103,16,"บ               บ",244);
                ToMau(103,17,"บ     THOAT     บ",244);                                             
	            ToMau(103,18,"บ  CHUONG TRINH บ",244);
	            ToMau(103,19,"บ               บ",244);
	            ToMau(103,20,"ศอออออออออออออออผ",244);
	            
	            ToMau(55,14,"Quen mat khau! Help!",10);
	            ToMau(55,15,"                    ",11);
	     	
		      }
		      else
		    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)
		      {
		      	XoaConTro();
		      	ToMau(17, 8,"Ten nguoi dung",14);
	            ToMau(20,10,"Mat khau",14);
	            
	            ToMau(103,6 ,"ษอออออออออออออออป",14);
                ToMau(103,7 ,"บ               บ",14);
                ToMau(103,8 ,"บ      DANG     บ",14);                                             
	            ToMau(103,9 ,"บ      NHAP     บ",14);
	            ToMau(103,10,"บ               บ",14);
	            ToMau(103,11,"ศอออออออออออออออผ",14);
	            
		  	    ToMau(103,15,"ษอออออออออออออออป",14);
                ToMau(103,16,"บ               บ",14);
                ToMau(103,17,"บ     THOAT     บ",14);                                             
	            ToMau(103,18,"บ  CHUONG TRINH บ",14);
	            ToMau(103,19,"บ               บ",14);
	            ToMau(103,20,"ศอออออออออออออออผ",14);
	            
	            ToMau(55,14,"Quen mat khau! Help!",11);
	            ToMau(55,15,"฿฿฿฿฿฿฿฿฿฿฿฿฿฿฿฿฿฿฿฿",11);
	     	
		      }
		     else{
		     	XoaConTro();
		      	ToMau(17, 8,"Ten nguoi dung",14);
	            ToMau(20,10,"Mat khau",14);
		     	
		     	ToMau(103,6 ,"ษอออออออออออออออป",14);
                ToMau(103,7 ,"บ               บ",14);
                ToMau(103,8 ,"บ      DANG     บ",14);                                             
	            ToMau(103,9 ,"บ      NHAP     บ",14);
	            ToMau(103,10,"บ               บ",14);
	            ToMau(103,11,"ศอออออออออออออออผ",14);
		     	
		  	    ToMau(103,15,"ษอออออออออออออออป",14);
                ToMau(103,16,"บ               บ",14);
                ToMau(103,17,"บ     THOAT     บ",14);                                             
	            ToMau(103,18,"บ  CHUONG TRINH บ",14);
	            ToMau(103,19,"บ               บ",14);
	            ToMau(103,20,"ศอออออออออออออออผ",14);
	            
	            ToMau(55,14,"Quen mat khau! Help!",10);
	            ToMau(55,15,"                    ",11);
		       }
		
	      	
		break;
    }	
    }
}        


int MouseEventToFindStudentByCode(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low)
{
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",10);
	     	ToMau(17, 7,"บ                                                                      บ",10);
	     	ToMau(17, 8,"บ                                                                      บ",10);
	     	ToMau(17, 9,"บ                                                                      บ",10);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",10);
	     	ToMau(19, 5,"Nhap Ma hoc vien can tim: ",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",10);
	     	ToMau(17, 7,"บ                                                                      บ",10);
	     	ToMau(17, 8,"บ                                                                      บ",10);
	     	ToMau(17, 9,"บ                                                                      บ",10);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",10);
	     	ToMau(19, 5,"Entry code of student to find: ",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",10);
	     	ToMau(17, 7,"บ                                                                      บ",10);
	     	ToMau(17, 8,"บ                                                                      บ",10);
	     	ToMau(17, 9,"บ                                                                      บ",10);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",10);
	     	ToMau(19, 5,"Entrez le code de I'etudiant: ",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	     	
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	if(Language == 1)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	ToMau(19, 5,"Nhap Ma hoc vien can tim: ",10);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ     LAI       บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	ToMau(19, 5,"Entry code of student to find: ",10);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     COME      บ",225);
        	ToMau(103, 9,"บ     BACK      บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	ToMau(19, 5,"Entrez le code de I'etudiant: ",10);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ    TOURNE     บ",225);
        	ToMau(103, 9,"บ               บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
		   }
			else{
		 	if(Language == 1)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	ToMau(19, 5,"Nhap Ma hoc vien can tim: ",10);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	ToMau(19, 5,"Entry code of student to find: ",10);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	ToMau(19, 5,"Entrez le code de I'etudiant: ",10);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
		      }
		   }
		 	
		break;
    }	
    }
}

int MouseEventToSelectAddAccount(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low,int X6_high,int X6_low,int Y6_high,int Y6_low,int X7_high,int X7_low,int Y7_high,int Y7_low)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
    
    XoaConTro();
    
    if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
    
	
	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		       return 1;
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	           return 2;
	        if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)	
	           return 3;
	        if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)	
	           return 4;
	        if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)	
	           return 5;
	        if(point.x <= X6_high and point.x>=X6_low and point.y<=Y6_high and point.y>=Y6_low)	
	           return 6;
	        if(point.x <= X7_high and point.x>=X7_low and point.y<=Y7_high and point.y>=Y7_low)	
	           return 7;
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
//		  	ToMau(1,1,"*1*",14);
            XoaConTro();
            
		  	if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	        
	        HienConTro();
	        gotoxy(54,10);
		  }
		else
	    if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)	
	      {
//	      	ToMau(1,1,"*2*",14);
            XoaConTro();
if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
			
			HienConTro();
			gotoxy(54,13);
		  }
		else
	    if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)	
	      {
//	      	ToMau(1,1,"*3*",14);
            XoaConTro();
            
	      if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
			
			HienConTro();
			gotoxy(54,16);
		  }
		else
	    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)	
	      {
//	      	ToMau(1,1,"*4*",14);
            XoaConTro();
            
	      	if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
			
			HienConTro();
			gotoxy(54,25);
		  }
		else
	    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)	
	      {
//	      	ToMau(1,1,"*5*",14);
            XoaConTro();
	      	if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",225);
	ToMau(125, 7,"บ               บ",225);
	ToMau(125, 8,"บ     QUAY      บ",225);
    ToMau(125, 9,"บ    VE MENU    บ",225);
    ToMau(125,10,"บ               บ",225);
	ToMau(125,11,"ศอออออออออออออออผ",225);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",225);
	ToMau(125, 7,"บ               บ",225);
	ToMau(125, 8,"บ   COME BACK   บ",225);
    ToMau(125, 9,"บ    TO MENU    บ",225);
    ToMau(125,10,"บ               บ",225);
	ToMau(125,11,"ศอออออออออออออออผ",225);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",225);
	ToMau(125, 7,"บ               บ",225);
	ToMau(125, 8,"บ    RETOUR     บ",225);
    ToMau(125, 9,"บ    AU MENU    บ",225);
    ToMau(125,10,"บ               บ",225);
	ToMau(125,11,"ศอออออออออออออออผ",225);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
		  }
		else
		if(point1.x <= X6_high and point1.x>=X6_low and point1.y<=Y6_high and point1.y>=Y6_low)	
	      {
//	      	ToMau(1,1,"*5*",14);
            XoaConTro();
            
	      	if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",181);
	ToMau(125,14,"บ               บ",181);
	ToMau(125,15,"บ      XOA      บ",181);
    ToMau(125,16,"บ   THONG TIN   บ",181);
    ToMau(125,17,"บ               บ",181);
	ToMau(125,18,"ศอออออออออออออออผ",181);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",181);
	ToMau(125,14,"บ               บ",181);
	ToMau(125,15,"บ    DELETE     บ",181);
    ToMau(125,16,"บ  INFORMATION  บ",181);
    ToMau(125,17,"บ               บ",181);
	ToMau(125,18,"ศอออออออออออออออผ",181);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",181);
	ToMau(125,14,"บ               บ",181);
	ToMau(125,15,"บ    EFFACER    บ",181);
    ToMau(125,16,"บ               บ",181);
    ToMau(125,17,"บ               บ",181);
	ToMau(125,18,"ศอออออออออออออออผ",181);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
		  }
		else
		if(point1.x <= X7_high and point1.x>=X7_low and point1.y<=Y7_high and point1.y>=Y7_low)	
	      {
//	      	ToMau(1,1,"*5*",14);
            XoaConTro();
            
	      	if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",174);
	ToMau(125,21,"บ               บ",174);
	ToMau(125,22,"บ      LUU      บ",174);
    ToMau(125,23,"บ   TAI KHOAN   บ",174);
    ToMau(125,24,"บ               บ",174);
	ToMau(125,25,"ศอออออออออออออออผ",174);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",174);
	ToMau(125,21,"บ               บ",174);
	ToMau(125,22,"บ      SAVE     บ",174);
    ToMau(125,23,"บ    ACCOUNT    บ",174);
    ToMau(125,24,"บ               บ",174);
	ToMau(125,25,"ศอออออออออออออออผ",174);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",174);
	ToMau(125,21,"บ               บ",174);
	ToMau(125,22,"บ    SAUVER     บ",174);
    ToMau(125,23,"บ  INFORMATION  บ",174);
    ToMau(125,24,"บ               บ",174);
	ToMau(125,25,"ศอออออออออออออออผ",174);	
	}
		  }
		else{
		    XoaConTro();
//			ToMau(1,1,"*0*",14);
			if(Language == 1)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ     QUAY      บ",11);
    ToMau(125, 9,"บ    VE MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ      XOA      บ",4);
    ToMau(125,16,"บ   THONG TIN   บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      LUU      บ",6);
    ToMau(125,23,"บ   TAI KHOAN   บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 2)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ   COME BACK   บ",11);
    ToMau(125, 9,"บ    TO MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    DELETE     บ",4);
    ToMau(125,16,"บ  INFORMATION  บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ      SAVE     บ",6);
    ToMau(125,23,"บ    ACCOUNT    บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
	
	if(Language == 3)
    {
    ToMau(125, 6,"ษอออออออออออออออป",11);
	ToMau(125, 7,"บ               บ",11);
	ToMau(125, 8,"บ    RETOUR     บ",11);
    ToMau(125, 9,"บ    AU MENU    บ",11);
    ToMau(125,10,"บ               บ",11);
	ToMau(125,11,"ศอออออออออออออออผ",11);
	
	ToMau(125,13,"ษอออออออออออออออป",4);
	ToMau(125,14,"บ               บ",4);
	ToMau(125,15,"บ    EFFACER    บ",4);
    ToMau(125,16,"บ               บ",4);
    ToMau(125,17,"บ               บ",4);
	ToMau(125,18,"ศอออออออออออออออผ",4);
	
	ToMau(125,20,"ษอออออออออออออออป",6);
	ToMau(125,21,"บ               บ",6);
	ToMau(125,22,"บ    SAUVER     บ",6);
    ToMau(125,23,"บ  INFORMATION  บ",6);
    ToMau(125,24,"บ               บ",6);
	ToMau(125,25,"ศอออออออออออออออผ",6);	
	}
		}
	
	    break;
    }
	}
}

int MouseEventToSelectFindStudent(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Tim kiem theo ten hoc vien",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Tim kiem theo ma hoc vien",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
	        if(Language == 2)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Find to name of student",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Find to code of student",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ   TO MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
	        if(Language == 3)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Rechercher par nom d'etudiant",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Rechercher par code d'etudiant	",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    RETOUR     บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	if(Language == 1)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Tim kiem theo ten hoc vien",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Tim kiem theo ma hoc vien",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
	        if(Language == 2)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Find to name of student",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Find to code of student",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ   TO MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
	        if(Language == 3)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Rechercher par nom d'etudiant",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Rechercher par code d'etudiant",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    RETOUR     บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		   }
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	    if(Language == 1)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Tim kiem theo ten hoc vien",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Tim kiem theo ma hoc vien",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ   VE MENU     บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	       }
	        if(Language == 2)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Find to name of student",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Find to code of student",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ   COME BACK   บ",225);
        	ToMau(103, 9,"บ   TO MENU     บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	       }
	        if(Language == 3)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Rechercher par nom d'etudiant",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Rechercher par code d'etudiant",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ    RETOUR     บ",225);
        	ToMau(103, 9,"บ    AU MENU    บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
		   }
		     }
			 else{
		 	    if(Language == 1)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Tim kiem theo ten hoc vien",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Tim kiem theo ma hoc vien",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
	        if(Language == 2)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Find to name of student",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Find to code of student",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ   TO MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	       }
	        if(Language == 3)
		  	{
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Rechercher par nom d'etudiant",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Rechercher par code d'etudiant",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    RETOUR     บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		   }
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToSelectChangePass(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	int colorFrame = 11;
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
	
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
		      {
		      	return 3;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  { 
		    XoaConTro();	
		    
		    if(Language ==1)
		    {
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        
	ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ      LUU      บ",6);
    ToMau(103,26,"บ    MAT KHAU   บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
	        }
	        
	        if(Language == 2)
	        {			
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        
	ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ     SAVE      บ",6);
    ToMau(103,26,"บ   PASSWORD    บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
	        	
			}
	        HienConTro();
	     	gotoxy(42,16);
		  }
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		  {
	     	XoaConTro();
	     	if(Language == 1)
	     	{
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ   VE MENU     บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        
	ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ      LUU      บ",6);
    ToMau(103,26,"บ    MAT KHAU   บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
            }
            	        if(Language == 2)
	        {			
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     COME      บ",225);
        	ToMau(103, 9,"บ     BACK      บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        
	ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ     SAVE      บ",6);
    ToMau(103,26,"บ   PASSWORD    บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
	        	
			}
	        
		  } 
		else
		if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		    {
	     	XoaConTro();
	     	
	     	if(Language == 1)
	     	{
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        
    ToMau(103,23,"ษอออออออออออออออป",174);
	ToMau(103,24,"บ               บ",174);
    ToMau(103,25,"บ      LUU      บ",174);
    ToMau(103,26,"บ    MAT KHAU   บ",174);
    ToMau(103,27,"บ               บ",174);
    ToMau(103,28,"ศอออออออออออออออผ",174);
            }
            	        if(Language == 2)
	        {			
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        
	ToMau(103,23,"ษอออออออออออออออป",174);
	ToMau(103,24,"บ               บ",174);
    ToMau(103,25,"บ     SAVE      บ",174);
    ToMau(103,26,"บ   PASSWORD    บ",174);
    ToMau(103,27,"บ               บ",174);
    ToMau(103,28,"ศอออออออออออออออผ",174);
	        	
			}
	        
		   } 
		else{
		        XoaConTro();
	     	    
	     	    if(Language ==1)
	     	    {
				 
			    ToMau(103, 6,"ษอออออออออออออออป",11);
	            ToMau(103, 7,"บ               บ",11);
	            ToMau(103, 8,"บ     QUAY      บ",11);
        	    ToMau(103, 9,"บ   VE MENU     บ",11);
        	    ToMau(103,10,"บ               บ",11);
	            ToMau(103,11,"ศอออออออออออออออผ",11);
	            
	ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ      LUU      บ",6);
    ToMau(103,26,"บ    MAT KHAU   บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
               }
               
               	        if(Language == 2)
	        {			
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        
	ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ     SAVE      บ",6);
    ToMau(103,26,"บ   PASSWORD    บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
	        	
			}
		      }
		   
		   break;
	}
		 	
		
    }
}

void PrintChangePass()
{
	
	PrintEmpty();
	textcolor(1);
	gotoxy(1,12);
	cout<<"                ษออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออป\n";
	cout<<"                บ                                  Doi Mat Khau                            บ\n";
	cout<<"                ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n";
	cout<<"                บ                      ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟบ\n";
	cout<<"                บ           Mat khau cuณ                                                  ณบ\n";
	cout<<"                บ                      ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤูบ\n";
	cout<<"                บ                      ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟบ\n";
	cout<<"                บ          Mat khau moiณ                                                  ณบ\n";
	cout<<"                บ                      ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤูบ\n";
	cout<<"                บ                      ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟบ\n";
	cout<<"                บ Nhap lai mat khau moiณ                                                  ณบ\n";
	cout<<"                บ                      ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤูบ\n";
	cout<<"                ศออออออออออออออออออออออออออออออออออออออo0oอออออออออออออออออออออออออออออออออผ\n";
	ToMau(52,13,"Doi Mat Khau",14);
	ToMau(29,16,"Mat khau cu",14);
	ToMau(28,19,"Mat khau moi",14);
	ToMau(19,22,"Nhap lai mat khau moi",14);
	
	ToMau(103, 6,"ษอออออออออออออออป",11);
	ToMau(103, 7,"บ               บ",11);
    ToMau(103, 8,"บ     QUAY      บ",11);
    ToMau(103, 9,"บ   VE MENU     บ",11);
    ToMau(103,10,"บ               บ",11);
    ToMau(103,11,"ศอออออออออออออออผ",11);
      
    ToMau(103,23,"ษอออออออออออออออป",6);
	ToMau(103,24,"บ               บ",6);
    ToMau(103,25,"บ      LUU      บ",6);
    ToMau(103,26,"บ    MAT KHAU   บ",6);
    ToMau(103,27,"บ               บ",6);
    ToMau(103,28,"ศอออออออออออออออผ",6);
}

int MouseEventToFindStudentByName(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low)
{
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",10);
	     	ToMau(17, 7,"บ                                                                      บ",10);
	     	ToMau(17, 8,"บ                                                                      บ",10);
	     	ToMau(17, 9,"บ                                                                      บ",10);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",10);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19 , 5,"Nhap ten hoc vien can tim: ",14);	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
			 }
	     	
	     	if(Language == 2)
	     	{
	     	ToMau(19, 5,"Entry name of student to find: ",14);	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
			 }
	     	
	     	if(Language == 3)
	     	{
	     	ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",14);	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
			 }
	     	
	     	
			
		  }
		 else
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ     LAI       บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
			 }
	     	
	     	if(Language == 2)
	     	{
	     	ToMau(19, 5,"Entry name of student to find: ",10);	
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     COME      บ",225);
        	ToMau(103, 9,"บ     BACK      บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
			 }
	     	
	     	if(Language == 3)
	     	{
	     	ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);	
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ    TOURNE     บ",225);
        	ToMau(103, 9,"บ               บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
			 }
		   }
			else{
		 	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
			 }
	     	
	     	if(Language == 2)
	     	{
	     	ToMau(19, 5,"Entry name of student to find: ",10);	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
			 }
	     	
	     	if(Language == 3)
	     	{
	     	ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
			 }
		    }
		 	
		break;
    }	
    }
}


int MouseEventToYesOrNo(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low)
{
	PrintEmpty();
	
	ToMau(60,15,"Quan tri vien co chac chan muon xoa khong?",14);
	
	ToMau(45,17,"ษอออออออออออออป",10);
	ToMau(45,18,"บ             บ",10);
    ToMau(45,19,"บ     CO      บ",10);
    ToMau(45,20,"บ             บ",10);
	ToMau(45,21,"ศอออออออออออออผ",10);
	
	ToMau(100,17,"ษอออออออออออออป",4);
	ToMau(100,18,"บ             บ",4);
    ToMau(100,19,"บ    KHONG    บ",4);
    ToMau(100,20,"บ             บ",4);
	ToMau(100,21,"ศอออออออออออออผ",4);
	
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
		    if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)
		      {
		      	return 2;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(45,17,"ษอออออออออออออป",242);
	        ToMau(45,18,"บ             บ",242);
            ToMau(45,19,"บ     CO      บ",242);
            ToMau(45,20,"บ             บ",242);
	        ToMau(45,21,"ศอออออออออออออผ",242);
	        
	        ToMau(100,17,"ษอออออออออออออป",4);
	        ToMau(100,18,"บ             บ",4);
            ToMau(100,19,"บ    KHONG    บ",4);
            ToMau(100,20,"บ             บ",4);
	        ToMau(100,21,"ศอออออออออออออผ",4);
	
		  }
		  
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low){
		 	
		 	ToMau(45,17,"ษอออออออออออออป",10);
	        ToMau(45,18,"บ             บ",10);
            ToMau(45,19,"บ     CO      บ",10);
            ToMau(45,20,"บ             บ",10);
	        ToMau(45,21,"ศอออออออออออออผ",10);
		 	
		 	ToMau(100,17,"ษอออออออออออออป",202);
	        ToMau(100,18,"บ             บ",202);
            ToMau(100,19,"บ    KHONG    บ",202);
            ToMau(100,20,"บ             บ",202);
	        ToMau(100,21,"ศอออออออออออออผ",202);
		    }
		else{
			ToMau(45,17,"ษอออออออออออออป",10);
	        ToMau(45,18,"บ             บ",10);
            ToMau(45,19,"บ     CO      บ",10);
            ToMau(45,20,"บ             บ",10);
	        ToMau(45,21,"ศอออออออออออออผ",10);
	
	        ToMau(100,17,"ษอออออออออออออป",4);
	        ToMau(100,18,"บ             บ",4);
            ToMau(100,19,"บ    KHONG    บ",4);
            ToMau(100,20,"บ             บ",4);
	        ToMau(100,21,"ศอออออออออออออผ",4);
		}
		 	
		break;
    }	
    }
}

int MouseEventToYesOrNoExit(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low)
{
	PrintEmpty();
	
	ToMau(60,15,"Quan tri vien co chac chan muon thoat khong?",14);
	
	ToMau(45,17,"ษอออออออออออออป",10);
	ToMau(45,18,"บ             บ",10);
    ToMau(45,19,"บ     CO      บ",10);
    ToMau(45,20,"บ             บ",10);
	ToMau(45,21,"ศอออออออออออออผ",10);
	
	ToMau(100,17,"ษอออออออออออออป",4);
	ToMau(100,18,"บ             บ",4);
    ToMau(100,19,"บ    KHONG    บ",4);
    ToMau(100,20,"บ             บ",4);
	ToMau(100,21,"ศอออออออออออออผ",4);
	
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
		    if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)
		      {
		      	return 2;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(45,17,"ษอออออออออออออป",242);
	        ToMau(45,18,"บ             บ",242);
            ToMau(45,19,"บ     CO      บ",242);
            ToMau(45,20,"บ             บ",242);
	        ToMau(45,21,"ศอออออออออออออผ",242);
	        
	        ToMau(100,17,"ษอออออออออออออป",4);
	        ToMau(100,18,"บ             บ",4);
            ToMau(100,19,"บ    KHONG    บ",4);
            ToMau(100,20,"บ             บ",4);
	        ToMau(100,21,"ศอออออออออออออผ",4);
	
		  }
		  
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low){
		 	
		 	ToMau(45,17,"ษอออออออออออออป",10);
	        ToMau(45,18,"บ             บ",10);
            ToMau(45,19,"บ     CO      บ",10);
            ToMau(45,20,"บ             บ",10);
	        ToMau(45,21,"ศอออออออออออออผ",10);
		 	
		 	ToMau(100,17,"ษอออออออออออออป",202);
	        ToMau(100,18,"บ             บ",202);
            ToMau(100,19,"บ    KHONG    บ",202);
            ToMau(100,20,"บ             บ",202);
	        ToMau(100,21,"ศอออออออออออออผ",202);
		    }
		else{
			ToMau(45,17,"ษอออออออออออออป",10);
	        ToMau(45,18,"บ             บ",10);
            ToMau(45,19,"บ     CO      บ",10);
            ToMau(45,20,"บ             บ",10);
	        ToMau(45,21,"ศอออออออออออออผ",10);
	
	        ToMau(100,17,"ษอออออออออออออป",4);
	        ToMau(100,18,"บ             บ",4);
            ToMau(100,19,"บ    KHONG    บ",4);
            ToMau(100,20,"บ             บ",4);
	        ToMau(100,21,"ศอออออออออออออผ",4);
		}
		 	
		break;
    }	
    }
}

int MouseEventToYesOrNoAddAccount(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low)
{
	
	ToMau(50,28,"Quan tri vien co chac chan muon them khong?",14);
	                                                                     
	ToMau(35,30,"ษอออออออออออออป",10);
	ToMau(35,31,"บ             บ",10);
    ToMau(35,32,"บ     CO      บ",10);
    ToMau(35,33,"บ             บ",10);
	ToMau(35,34,"ศอออออออออออออผ",10);    
	                                                                 
	ToMau(90,30,"ษอออออออออออออป",4);
	ToMau(90,31,"บ             บ",4);
    ToMau(90,32,"บ    KHONG    บ",4);
    ToMau(90,33,"บ             บ",4);
	ToMau(90,34,"ศอออออออออออออผ",4);
	
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
		    if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)
		      {
		      	return 2;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	ToMau(35,30,"ษอออออออออออออป",242);
	ToMau(35,31,"บ             บ",242);
    ToMau(35,32,"บ     CO      บ",242);
    ToMau(35,33,"บ             บ",242);
	ToMau(35,34,"ศอออออออออออออผ",242);
	        
	ToMau(90,30,"ษอออออออออออออป",4);
	ToMau(90,31,"บ             บ",4);
    ToMau(90,32,"บ    KHONG    บ",4);
    ToMau(90,33,"บ             บ",4);
	ToMau(90,34,"ศอออออออออออออผ",4);
	
		  }
		  
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low){
		 	
	ToMau(35,30,"ษอออออออออออออป",10);
	ToMau(35,31,"บ             บ",10);
    ToMau(35,32,"บ     CO      บ",10);
    ToMau(35,33,"บ             บ",10);
	ToMau(35,34,"ศอออออออออออออผ",10);
		 	
    ToMau(90,30,"ษอออออออออออออป",202);
	ToMau(90,31,"บ             บ",202);
    ToMau(90,32,"บ    KHONG    บ",202);
    ToMau(90,33,"บ             บ",202);
	ToMau(90,34,"ศอออออออออออออผ",202);
		    }
		else{
	ToMau(35,30,"ษอออออออออออออป",10);
	ToMau(35,31,"บ             บ",10);
    ToMau(35,32,"บ     CO      บ",10);
    ToMau(35,33,"บ             บ",10);
	ToMau(35,34,"ศอออออออออออออผ",10);
	
    ToMau(90,30,"ษอออออออออออออป",4);
	ToMau(90,31,"บ             บ",4);
    ToMau(90,32,"บ    KHONG    บ",4);
    ToMau(90,33,"บ             บ",4);
	ToMau(90,34,"ศอออออออออออออผ",4);
		}
		 	
		break;
    }	
    }
}

int MouseEventToYesOrNoChangePass(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low)
{
	
	ToMau(50,25,"Quan tri vien co chac chan muon doi khong?",14);
	                                                                     
	ToMau(35,27,"ษอออออออออออออป",10);
	ToMau(35,28,"บ             บ",10);
    ToMau(35,29,"บ     CO      บ",10);
    ToMau(35,30,"บ             บ",10);
	ToMau(35,31,"ศอออออออออออออผ",10);    
	                                                                 
	ToMau(90,27,"ษอออออออออออออป",4);
	ToMau(90,28,"บ             บ",4);
    ToMau(90,29,"บ    KHONG    บ",4);
    ToMau(90,30,"บ             บ",4);
	ToMau(90,31,"ศอออออออออออออผ",4);
	
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
		    if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)
		      {
		      	return 2;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(35,27,"ษอออออออออออออป",242);
	        ToMau(35,28,"บ             บ",242);
            ToMau(35,29,"บ     CO      บ",242);
            ToMau(35,30,"บ             บ",242);
	        ToMau(35,31,"ศอออออออออออออผ",242);
	        
	        ToMau(90,27,"ษอออออออออออออป",4);
	        ToMau(90,28,"บ             บ",4);
            ToMau(90,29,"บ    KHONG    บ",4);
            ToMau(90,30,"บ             บ",4);
	        ToMau(90,31,"ศอออออออออออออผ",4);
	
		  }
		  
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low){
		 	
		 	ToMau(35,27,"ษอออออออออออออป",10);
	        ToMau(35,28,"บ             บ",10);
            ToMau(35,29,"บ     CO      บ",10);
            ToMau(35,30,"บ             บ",10);
	        ToMau(35,31,"ศอออออออออออออผ",10);
		 	
		 	ToMau(90,27,"ษอออออออออออออป",202);
	        ToMau(90,28,"บ             บ",202);
            ToMau(90,29,"บ    KHONG    บ",202);
            ToMau(90,30,"บ             บ",202);
	        ToMau(90,31,"ศอออออออออออออผ",202);
		    }
		else{
			ToMau(35,27,"ษอออออออออออออป",10);
	        ToMau(35,28,"บ             บ",10);
            ToMau(35,29,"บ     CO      บ",10);
            ToMau(35,30,"บ             บ",10);
	        ToMau(35,31,"ศอออออออออออออผ",10);
	
	        ToMau(90,27,"ษอออออออออออออป",4);
	        ToMau(90,28,"บ             บ",4);
            ToMau(90,29,"บ    KHONG    บ",4);
            ToMau(90,30,"บ             บ",4);
	        ToMau(90,31,"ศอออออออออออออผ",4);
		}
		 	
		break;
    }	
    }
}

int MouseEventToButtonBackOrNext(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x<=X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
		    if(point.x<=X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)
		      {
		      	return 2;
		      }
		    if(point.x<=X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
		      {
		      	return 3;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",225);
	        ToMau(135, 7,"บ               บ",225);
	        ToMau(135, 8,"บ     QUAY      บ",225);
        	ToMau(135, 9,"บ     LAI       บ",225);
        	ToMau(135,10,"บ               บ",225);
	        ToMau(135,11,"ศอออออออออออออออผ",225);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",225);
	        ToMau(135, 7,"บ               บ",225);
	        ToMau(135, 8,"บ     COME      บ",225);
        	ToMau(135, 9,"บ     BACK      บ",225);
        	ToMau(135,10,"บ               บ",225);
	        ToMau(135,11,"ศอออออออออออออออผ",225);
			}
			if(Language == 3)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",225);
	        ToMau(135, 7,"บ               บ",225);
	        ToMau(135, 8,"บ    TOURNE     บ",225);
        	ToMau(135, 9,"บ               บ",225);
        	ToMau(135,10,"บ               บ",225);
	        ToMau(135,11,"ศอออออออออออออออผ",225);
			}
	        
	        ToMau(4,24,"ษอป",4);
	        ToMau(4,25,"บ บ",4);
	        ToMau(4,26,"บ<บ",4);
        	ToMau(4,27,"บ บ",4);
	        ToMau(4,28,"ศอผ",4);
	
	        ToMau(135,24,"ษอป",4);
	        ToMau(135,25,"บ บ",4);
	        ToMau(135,26,"บ>บ",4);
	        ToMau(135,27,"บ บ",4);
	        ToMau(135,28,"ศอผ",4);
		  }
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ     QUAY      บ",11);
        	ToMau(135, 9,"บ     LAI       บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ     COME      บ",11);
        	ToMau(135, 9,"บ     BACK      บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
			if(Language == 3)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ    TOURNE     บ",11);
        	ToMau(135, 9,"บ               บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
	        
	        ToMau(4,24,"ษอป",225);
	        ToMau(4,25,"บ บ",225);
	        ToMau(4,26,"บ<บ",225);
        	ToMau(4,27,"บ บ",225);
	        ToMau(4,28,"ศอผ",225);
	
	        ToMau(135,24,"ษอป",4);
	        ToMau(135,25,"บ บ",4);
	        ToMau(135,26,"บ>บ",4);
	        ToMau(135,27,"บ บ",4);
	        ToMau(135,28,"ศอผ",4);
		  }
		else
		if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ     QUAY      บ",11);
        	ToMau(135, 9,"บ     LAI       บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ     COME      บ",11);
        	ToMau(135, 9,"บ     BACK      บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
			if(Language == 3)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ    TOURNE     บ",11);
        	ToMau(135, 9,"บ               บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
	        
	        ToMau(4,24,"ษอป",4);
	        ToMau(4,25,"บ บ",4);
	        ToMau(4,26,"บ<บ",4);
        	ToMau(4,27,"บ บ",4);
	        ToMau(4,28,"ศอผ",4);
	
	        ToMau(135,24,"ษอป",225);
	        ToMau(135,25,"บ บ",225);
	        ToMau(135,26,"บ>บ",225);
	        ToMau(135,27,"บ บ",225);
	        ToMau(135,28,"ศอผ",225);
		  }
		else{
		 	if(Language == 1)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ     QUAY      บ",11);
        	ToMau(135, 9,"บ     LAI       บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ     COME      บ",11);
        	ToMau(135, 9,"บ     BACK      บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
			if(Language == 3)
		  	{
		  	ToMau(135, 6,"ษอออออออออออออออป",11);
	        ToMau(135, 7,"บ               บ",11);
	        ToMau(135, 8,"บ    TOURNE     บ",11);
        	ToMau(135, 9,"บ               บ",11);
        	ToMau(135,10,"บ               บ",11);
	        ToMau(135,11,"ศอออออออออออออออผ",11);
			}
	        
	        ToMau(4,24,"ษอป",4);
	        ToMau(4,25,"บ บ",4);
	        ToMau(4,26,"บ<บ",4);
        	ToMau(4,27,"บ บ",4);
	        ToMau(4,28,"ศอผ",4);
	
	        ToMau(135,24,"ษอป",4);
	        ToMau(135,25,"บ บ",4);
	        ToMau(135,26,"บ>บ",4);
	        ToMau(135,27,"บ บ",4);
	        ToMau(135,28,"ศอผ",4);
		    }
		 	
		break;
    }	
    }
}

int MouseEventToDeleteOrFix(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
		      }
		    if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)
		      {
		      	return 2;
		      }
		    if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
		      {
		      	return 3;
		      }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",226);
	        ToMau(40,26,"บ               บ",226);
	        ToMau(40,27,"บ      SUA      บ",226);
        	ToMau(40,28,"บ   THONG TIN   บ",226);
        	ToMau(40,29,"บ               บ",226);
	        ToMau(40,30,"ศอออออออออออออออผ",226);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ      XOA      บ",13);
        	ToMau(80,28,"บ   TAI KHOAN   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     QUAY      บ",11);
        	ToMau(115, 9,"บ     LAI       บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",226);
	        ToMau(40,26,"บ               บ",226);
	        ToMau(40,27,"บ      FIX      บ",226);
        	ToMau(40,28,"บ  INFORMATION  บ",226);
        	ToMau(40,29,"บ               บ",226);
	        ToMau(40,30,"ศอออออออออออออออผ",226);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ     DELETE    บ",13);
        	ToMau(80,28,"บ     ACCOUNT   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     COME      บ",11);
        	ToMau(115, 9,"บ     BACK      บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",226);
	        ToMau(40,26,"บ               บ",226);
	        ToMau(40,27,"บ   MODIFIER    บ",226);
        	ToMau(40,28,"บ  INFORMATION  บ",226);
        	ToMau(40,29,"บ               บ",226);
	        ToMau(40,30,"ศอออออออออออออออผ",226);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ   SUPPRIMER   บ",13);
        	ToMau(80,28,"บ   LE COMPTE   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ    TOURNE     บ",11);
        	ToMau(115, 9,"บ               บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
		  	
		  }
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		{
		    if(Language == 1)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ      SUA      บ",10);
        	ToMau(40,28,"บ   THONG TIN   บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",157);
	        ToMau(80,26,"บ               บ",157);
	        ToMau(80,27,"บ      XOA      บ",157);
        	ToMau(80,28,"บ   TAI KHOAN   บ",157);
        	ToMau(80,29,"บ               บ",157);
	        ToMau(80,30,"ศอออออออออออออออผ",157);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     QUAY      บ",11);
        	ToMau(115, 9,"บ     LAI       บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ      FIX      บ",10);
        	ToMau(40,28,"บ  INFORMATION  บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",157);
	        ToMau(80,26,"บ               บ",157);
	        ToMau(80,27,"บ     DELETE    บ",157);
        	ToMau(80,28,"บ     ACCOUNT   บ",157);
        	ToMau(80,29,"บ               บ",157);
	        ToMau(80,30,"ศอออออออออออออออผ",157);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     COME      บ",11);
        	ToMau(115, 9,"บ     BACK      บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ   MODIFIER    บ",10);
        	ToMau(40,28,"บ  INFORMATION  บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",157);
	        ToMau(80,26,"บ               บ",157);
	        ToMau(80,27,"บ   SUPPRIMER   บ",157);
        	ToMau(80,28,"บ   LE COMPTE   บ",157);
        	ToMau(80,29,"บ               บ",157);
	        ToMau(80,30,"ศอออออออออออออออผ",157);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ    TOURNE     บ",11);
        	ToMau(115, 9,"บ               บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}	
		}
		else
		if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		{
		    if(Language == 1)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ      SUA      บ",10);
        	ToMau(40,28,"บ   THONG TIN   บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ      XOA      บ",13);
        	ToMau(80,28,"บ   TAI KHOAN   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",225);
	        ToMau(115, 7,"บ               บ",225);
	        ToMau(115, 8,"บ     QUAY      บ",225);
        	ToMau(115, 9,"บ     LAI       บ",225);
        	ToMau(115,10,"บ               บ",225);
	        ToMau(115,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 2)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ      FIX      บ",10);
        	ToMau(40,28,"บ  INFORMATION  บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ     DELETE    บ",13);
        	ToMau(80,28,"บ     ACCOUNT   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",225);
	        ToMau(115, 7,"บ               บ",225);
	        ToMau(115, 8,"บ     COME      บ",225);
        	ToMau(115, 9,"บ     BACK      บ",225);
        	ToMau(115,10,"บ               บ",225);
	        ToMau(115,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ   MODIFIER    บ",10);
        	ToMau(40,28,"บ  INFORMATION  บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ   SUPPRIMER   บ",13);
        	ToMau(80,28,"บ   LE COMPTE   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",225);
	        ToMau(115, 7,"บ               บ",225);
	        ToMau(115, 8,"บ    TOURNE     บ",225);
        	ToMau(115, 9,"บ               บ",225);
        	ToMau(115,10,"บ               บ",225);
	        ToMau(115,11,"ศอออออออออออออออผ",225);	
			}	
		}
		 else{
		 	if(Language == 1)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ      SUA      บ",10);
        	ToMau(40,28,"บ   THONG TIN   บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ      XOA      บ",13);
        	ToMau(80,28,"บ   TAI KHOAN   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     QUAY      บ",11);
        	ToMau(115, 9,"บ     LAI       บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ      FIX      บ",10);
        	ToMau(40,28,"บ  INFORMATION  บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ     DELETE    บ",13);
        	ToMau(80,28,"บ     ACCOUNT   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ     COME      บ",11);
        	ToMau(115, 9,"บ     BACK      บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(40,25,"ษอออออออออออออออป",10);
	        ToMau(40,26,"บ               บ",10);
	        ToMau(40,27,"บ   MODIFIER    บ",10);
        	ToMau(40,28,"บ  INFORMATION  บ",10);
        	ToMau(40,29,"บ               บ",10);
	        ToMau(40,30,"ศอออออออออออออออผ",10);
		  	
		  	
	     	ToMau(80,25,"ษอออออออออออออออป",13);
	        ToMau(80,26,"บ               บ",13);
	        ToMau(80,27,"บ   SUPPRIMER   บ",13);
        	ToMau(80,28,"บ   LE COMPTE   บ",13);
        	ToMau(80,29,"บ               บ",13);
	        ToMau(80,30,"ศอออออออออออออออผ",13);
	        
	        
	        ToMau(115, 6,"ษอออออออออออออออป",11);
	        ToMau(115, 7,"บ               บ",11);
	        ToMau(115, 8,"บ    TOURNE     บ",11);
        	ToMau(115, 9,"บ               บ",11);
        	ToMau(115,10,"บ               บ",11);
	        ToMau(115,11,"ศอออออออออออออออผ",11);	
			}
		 }
		break;
    }	
    }
}

int MouseEventToChooseFindStudentName(string name, string code, int soluong,int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low,int X6_high,int X6_low,int Y6_high,int Y6_low,int X7_high,int X7_low,int Y7_high,int Y7_low,int X8_high,int X8_low,int Y8_high,int Y8_low,int X9_high,int X9_low,int Y9_high,int Y9_low    )
{
	XoaConTro();
		  	
	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	ToMau(17, 7,"บ                                                                      บ",14);
	ToMau(17, 8,"บ                                                                      บ",14);
	ToMau(17, 9,"บ                                                                      บ",14);
	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	
	if(Language == 1)
	ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	if(Language == 2)
	ToMau(19, 5,"Entry name of student to find: ",10);
	if(Language == 3)
	ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	
	ToMau(19,8,name + " , " +  code,7);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
    
    XoaConTro();
    
	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);
    
    switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		       return 1;
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low )	
	           return 2;
	        if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low and soluong >= 2)	
	           return 3;
	        if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low and soluong >= 3)	
	           return 4;
	        if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low and soluong >= 4)	
	           return 5;
	        if(point.x <= X6_high and point.x>=X6_low and point.y<=Y6_high and point.y>=Y6_low and soluong == 5)	
	           return 6;
	        if(point.x <= X7_high and point.x>=X7_low and point.y<=Y7_high and point.y>=Y7_low)	
	           return 7;
	        if(point.x <= X8_high and point.x>=X8_low and point.y<=Y8_high and point.y>=Y8_low)	
	           return 8;
	        if(point.x <= X9_high and point.x>=X9_low and point.y<=Y9_high and point.y>=Y9_low)	
	           return 9;
          }
          
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",10);
	     	ToMau(17, 7,"บ                                                                      บ",10);
	     	ToMau(17, 8,"บ                                                                      บ",10);
	     	ToMau(17, 9,"บ                                                                      บ",10);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",10);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",14);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",14);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",14);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			
	        
	        HienConTro();
	     	gotoxy(19,8);
	     	
		  }
		else
		if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	        
	     	ToMau(72,12,"ÜÜÜÜÜÜ",11);
	     	ToMau(72,14,"      ",11);
	     	ToMau(72,16,"      ",11);
	     	ToMau(72,18,"      ",11);
	     	ToMau(72,20,"      ",11);
		  }
		else
		if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low and soluong >= 2)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	        
	        ToMau(72,12,"      ",11);
	     	ToMau(72,14,"ÜÜÜÜÜÜ",11);
	     	ToMau(72,16,"      ",11);
	     	ToMau(72,18,"      ",11);
	     	ToMau(72,20,"      ",11);
		  }
		else
		if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low and soluong >= 3)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	        
	        ToMau(72,12,"      ",11);
	     	ToMau(72,14,"      ",11);
	     	ToMau(72,16,"ÜÜÜÜÜÜ",11);
	     	ToMau(72,18,"      ",11);
	     	ToMau(72,20,"      ",11);
		  }
		else
		if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low and soluong >= 4)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	        
	        ToMau(72,12,"      ",11);
	     	ToMau(72,14,"      ",11);
	     	ToMau(72,16,"      ",11);
	     	ToMau(72,18,"ÜÜÜÜÜÜ",11);
	     	ToMau(72,20,"      ",11);
		  }
		else
		if(point1.x <= X6_high and point1.x>=X6_low and point1.y<=Y6_high and point1.y>=Y6_low and soluong == 5)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	        
	     	ToMau(72,12,"      ",11);
	     	ToMau(72,14,"      ",11);
	     	ToMau(72,16,"      ",11);
	     	ToMau(72,18,"      ",11);
	     	ToMau(72,20,"ÜÜÜÜÜÜ",11);
		  }
		else
		if(point1.x <= X7_high and point1.x>=X7_low and point1.y<=Y7_high and point1.y>=Y7_low)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " + code,7);
	     	
	     	ToMau(12,15,"ษอป",225);
	        ToMau(12,16,"บ บ",225);
	        ToMau(12,17,"บ<บ",225);
	        ToMau(12,18,"บ บ",225);
	        ToMau(12,19,"ศอผ",225);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
		  }
		else
		if(point1.x <= X8_high and point1.x>=X8_low and point1.y<=Y8_high and point1.y>=Y8_low)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " +  code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",225);
	        ToMau(90,16,"บ บ",225);
	        ToMau(90,17,"บ>บ",225);
	        ToMau(90,18,"บ บ",225);
	        ToMau(90,19,"ศอผ",225);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
		  }
		else
		if(point1.x <= X9_high and point1.x>=X9_low and point1.y<=Y9_high and point1.y>=Y9_low)
		  {
		  	XoaConTro();
		  	
		  	ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , " + code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ     LAI       บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     COME      บ",225);
        	ToMau(103, 9,"บ     BACK      บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ    TOURNE     บ",225);
        	ToMau(103, 9,"บ               บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
		  }
		else{
			XoaConTro();
			
			ToMau(17, 6,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",14);
	     	ToMau(17, 7,"บ                                                                      บ",14);
	     	ToMau(17, 8,"บ                                                                      บ",14);
	     	ToMau(17, 9,"บ                                                                      บ",14);
	     	ToMau(17,10,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",14);
	     	if(Language == 1)
	        ToMau(19, 5,"Nhap ten hoc vien can tim: ",10);
	        if(Language == 2)
	        ToMau(19, 5,"Entry name of student to find: ",10);
	        if(Language == 3)
	        ToMau(19, 5,"Entrez le nom de I'etudiant a rechercher: ",10);
	        
	     	ToMau(19,8,name + " , "+ code,7);
	     	
	     	ToMau(12,15,"ษอป",4);
	        ToMau(12,16,"บ บ",4);
	        ToMau(12,17,"บ<บ",4);
	        ToMau(12,18,"บ บ",4);
	        ToMau(12,19,"ศอผ",4);
	
	        ToMau(90,15,"ษอป",4);
	        ToMau(90,16,"บ บ",4);
	        ToMau(90,17,"บ>บ",4);
	        ToMau(90,18,"บ บ",4);
	        ToMau(90,19,"ศอผ",4);
	     	
			if(Language == 1)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
	     	{
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	        
	        ToMau(72,12,"      ",11);
	     	ToMau(72,14,"      ",11);
	     	ToMau(72,16,"      ",11);
	     	ToMau(72,18,"      ",11);
	     	ToMau(72,20,"      ",11);
		}
		
    }
    }
}


int MouseEventToButtonSelectSort(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low)
{
	int colorFrame = 12;
	textcolor(2);
	
	if(Language == 1)
	{
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      QUAY     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    VE MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
			  	
		
	ToMau(22,6 ,"Sap xep theo Diem TBTL (tat ca)",14);
	ToMau(22,10,"Sap xep theo thu tu Ten (tat ca)",14);
	ToMau(22,14,"Sap xep theo DS lop, Diem TBTL",14);
	ToMau(22,18,"Sap xep theo DS lop, DS Ten",14);
	}
	if(Language == 2)
	{
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ   COME BACK   บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    TO MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
			  	
		
	ToMau(22,6 ,"Sort to Score (all)",14);
	ToMau(22,10,"Sort to Name (all)",14);
	ToMau(22,14,"Sort to List of class and Score",14);
	ToMau(22,18,"Sort to List of class and Name",14);
	}
	if(Language == 3)
	{
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ     RETOUR    บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    AU MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
			  	
		
	ToMau(22,6 ,"Trie par Score (tout ca)",14);
	ToMau(22,10,"Trie par Nom (tout ca)",14);
	ToMau(22,14,"Trie par Liste de classe et Score",14);
	ToMau(22,18,"Trie par Liste de classe et Nom",14);
	}
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)
			  {
			  	return 5;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
			ToMau(19, 6,"1. Sap xep theo Diem TBTL (tat ca)",14);
	     	ToMau(19,10,"2. Sap xep theo thu tu Ten (tat ca)",14);	
			ToMau(19,14,"3. Sap xep theo DS lop, Diem TBTL",14);
			ToMau(19,18,"4. Sap xep theo DS lop, DS Ten",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	     	if(Language == 2)
	     	{
	     	ToMau(19,6 ,"1. Sort to Score (all)",14);
	        ToMau(19,10,"2. Sort to Name (all)",14);
	        ToMau(19,14,"3. Sort to List of class and Score",14);
	        ToMau(19,18,"4. Sort to List of class and Name",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        
	        if(Language == 3)
	     	{
			ToMau(19,6 ,"1. Trie par Score (tout ca)",14);
	        ToMau(19,10,"2. Trie par Nom (tout ca)",14);
	        ToMau(19,14,"3. Trie par Liste de classe et Score",14);
	        ToMau(19,18,"4. Trie par Liste de classe et Nom",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     RETOUR    บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
			ToMau(19, 6,"1. Sap xep theo Diem TBTL (tat ca)",14);
	     	ToMau(19,10,"2. Sap xep theo thu tu Ten (tat ca)",14);	
			ToMau(19,14,"3. Sap xep theo DS lop, Diem TBTL",14);
			ToMau(19,18,"4. Sap xep theo DS lop, DS Ten",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	     	if(Language == 2)
	     	{
	     	ToMau(19,6 ,"1. Sort to Score (all)",14);
	        ToMau(19,10,"2. Sort to Name (all)",14);
	        ToMau(19,14,"3. Sort to List of class and Score",14);
	        ToMau(19,18,"4. Sort to List of class and Name",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        
	        if(Language == 3)
	     	{
			ToMau(19,6 ,"1. Trie par Score (tout ca)",14);
	        ToMau(19,10,"2. Trie par Nom (tout ca)",14);
	        ToMau(19,14,"3. Trie par Liste de classe et Score",14);
	        ToMau(19,18,"4. Trie par Liste de classe et Nom",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     RETOUR    บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,14,"บ                                                                      บ",219);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
			ToMau(19, 6,"1. Sap xep theo Diem TBTL (tat ca)",14);
	     	ToMau(19,10,"2. Sap xep theo thu tu Ten (tat ca)",14);	
			ToMau(19,14,"3. Sap xep theo DS lop, Diem TBTL",14);
			ToMau(19,18,"4. Sap xep theo DS lop, DS Ten",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	     	if(Language == 2)
	     	{
	     	ToMau(19,6 ,"1. Sort to Score (all)",14);
	        ToMau(19,10,"2. Sort to Name (all)",14);
	        ToMau(19,14,"3. Sort to List of class and Score",14);
	        ToMau(19,18,"4. Sort to List of class and Name",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        
	        if(Language == 3)
	     	{
			ToMau(19,6 ,"1. Trie par Score (tout ca)",14);
	        ToMau(19,10,"2. Trie par Nom (tout ca)",14);
	        ToMau(19,14,"3. Trie par Liste de classe et Score",14);
	        ToMau(19,18,"4. Trie par Liste de classe et Nom",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     RETOUR    บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		     }
			 else{
		 	    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)
		        {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,18,"บ                                                                      บ",219);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	
	     	if(Language == 1)
	     	{
			ToMau(19, 6,"1. Sap xep theo Diem TBTL (tat ca)",14);
	     	ToMau(19,10,"2. Sap xep theo thu tu Ten (tat ca)",14);	
			ToMau(19,14,"3. Sap xep theo DS lop, Diem TBTL",14);
			ToMau(19,18,"4. Sap xep theo DS lop, DS Ten",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	     	if(Language == 2)
	     	{
	     	ToMau(19,6 ,"1. Sort to Score (all)",14);
	        ToMau(19,10,"2. Sort to Name (all)",14);
	        ToMau(19,14,"3. Sort to List of class and Score",14);
	        ToMau(19,18,"4. Sort to List of class and Name",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        
	        if(Language == 3)
	     	{
			ToMau(19,6 ,"1. Trie par Score (tout ca)",14);
	        ToMau(19,10,"2. Trie par Nom (tout ca)",14);
	        ToMau(19,14,"3. Trie par Liste de classe et Score",14);
	        ToMau(19,18,"4. Trie par Liste de classe et Nom",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     RETOUR    บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		        }
		        else{
		        	if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)
		            {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
			ToMau(19, 6,"1. Sap xep theo Diem TBTL (tat ca)",14);
	     	ToMau(19,10,"2. Sap xep theo thu tu Ten (tat ca)",14);	
			ToMau(19,14,"3. Sap xep theo DS lop, Diem TBTL",14);
			ToMau(19,18,"4. Sap xep theo DS lop, DS Ten",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ   VE MENU     บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        }
	     	if(Language == 2)
	     	{
	     	ToMau(19,6 ,"1. Sort to Score (all)",14);
	        ToMau(19,10,"1. Sort to Name (all)",14);
	        ToMau(19,14,"1. Sort to List of class and Score",14);
	        ToMau(19,18,"1. Sort to List of class and Name",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ   COME BACK   บ",225);
        	ToMau(103, 9,"บ    TO MENU    บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        }
	        
	        if(Language == 3)
	     	{
			ToMau(19,6 ,"1. Trie par Score (tout ca)",14);
	        ToMau(19,10,"2. Trie par Nom (tout ca)",14);
	        ToMau(19,14,"3. Trie par Liste de classe et Score",14);
	        ToMau(19,18,"4. Trie par Liste de classe et Nom",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     RETOUR    บ",225);
        	ToMau(103, 9,"บ    AU MENU    บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        }
		           }
		           else{
		    ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
			ToMau(19, 6,"1. Sap xep theo Diem TBTL (tat ca)",14);
	     	ToMau(19,10,"2. Sap xep theo thu tu Ten (tat ca)",14);	
			ToMau(19,14,"3. Sap xep theo DS lop, Diem TBTL",14);
			ToMau(19,18,"4. Sap xep theo DS lop, DS Ten",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	     	if(Language == 2)
	     	{
	     	ToMau(19,6 ,"1. Sort to Score (all)",14);
	        ToMau(19,10,"2. Sort to Name (all)",14);
	        ToMau(19,14,"3. Sort to List of class and Score",14);
	        ToMau(19,18,"4. Sort to List of class and Name",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        
	        if(Language == 3)
	     	{
			ToMau(19,6 ,"1. Trie par Score (tout ca)",14);
	        ToMau(19,10,"2. Trie par Nom (tout ca)",14);
	        ToMau(19,14,"3. Trie par Liste de classe et Score",14);
	        ToMau(19,18,"4. Trie par Liste de classe et Nom",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     RETOUR    บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
				   }
				}
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToSortDTBTL(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low)                                
{
	int colorFrame = 12;
	
	textcolor(2);
	if(Language == 1)
	{
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      QUAY     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ      LAI      บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
				
	ToMau(22, 6,"Sap xep DTBTL dung BubbleSort",14);
	ToMau(22,10,"Sap xep DTBTL dung SelectionSort",14);	
	ToMau(22,14,"Sap xep DTBTL dung QuickSort",14);
	ToMau(22,18,"Sap xep DTBTL dung RadixSort",14);	
	}
	
	if(Language == 2)
	{
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      COME     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ      BACK     บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
				
	ToMau(22, 6,"Sort to Score using BubbleSort",14);
	ToMau(22,10,"Sort to Score using SelectionSort",14);	
	ToMau(22,14,"Sort to Score using QuickSort",14);
	ToMau(22,18,"Sort to Score using RadixSort",14);	
	}
	
	if(Language == 3)
	{
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ     TOURNE    บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ               บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
				
	ToMau(22, 6,"Trier le score en untilisant un bulles",14);
	ToMau(22,10,"Trier le score en untilisant un tri ",14);	
	ToMau(22,14,"Trier le score en untilisant un rapide",14);
	ToMau(22,18,"Trier le score en untilisant un radial",14);	
	}
	
	
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)
			  {
			  	return 5;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     		
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 6,"1. Sap xep DTBTL dung BubbleSort",14);
	     	ToMau(19,10,"2. Sap xep DTBTL dung SelectionSort",14);
	     	ToMau(19,14,"3. Sap xep DTBTL dung QuickSort",14);
	     	ToMau(19,18,"4. Sap xep DTBTL dung RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 2)
	     	{
	     	ToMau(19, 6,"1. Sort to Score using BubbleSort",14);
	     	ToMau(19,10,"2. Sort to Score using SelectionSort",14);
	     	ToMau(19,14,"3. Sort to Score using QuickSort",14);
	     	ToMau(19,18,"4. Sort to Score using RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 3)
	     	{
	     	ToMau(19, 6,"1. Trier le score en untilisant un bulles",14);
	     	ToMau(19,10,"2. Trier le score en untilisant un tri",14);
	     	ToMau(19,14,"3. Trier le score en untilisant un rapide",14);
	     	ToMau(19,18,"4. Trier le score en untilisant un radial",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     		
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 6,"1. Sap xep DTBTL dung BubbleSort",14);
	     	ToMau(19,10,"2. Sap xep DTBTL dung SelectionSort",14);
	     	ToMau(19,14,"3. Sap xep DTBTL dung QuickSort",14);
	     	ToMau(19,18,"4. Sap xep DTBTL dung RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 2)
	     	{
	     	ToMau(19, 6,"1. Sort to Score using BubbleSort",14);
	     	ToMau(19,10,"2. Sort to Score using SelectionSort",14);
	     	ToMau(19,14,"3. Sort to Score using QuickSort",14);
	     	ToMau(19,18,"4. Sort to Score using RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 3)
	     	{
	     	ToMau(19, 6,"1. Trier le score en untilisant un bulles",14);
	     	ToMau(19,10,"2. Trier le score en untilisant un tri",14);
	     	ToMau(19,14,"3. Trier le score en untilisant un rapide",14);
	     	ToMau(19,18,"4. Trier le score en untilisant un radial",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,14,"บ                                                                      บ",219);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     		
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 6,"1. Sap xep DTBTL dung BubbleSort",14);
	     	ToMau(19,10,"2. Sap xep DTBTL dung SelectionSort",14);
	     	ToMau(19,14,"3. Sap xep DTBTL dung QuickSort",14);
	     	ToMau(19,18,"4. Sap xep DTBTL dung RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 2)
	     	{
	     	ToMau(19, 6,"1. Sort to Score using BubbleSort",14);
	     	ToMau(19,10,"2. Sort to Score using SelectionSort",14);
	     	ToMau(19,14,"3. Sort to Score using QuickSort",14);
	     	ToMau(19,18,"4. Sort to Score using RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 3)
	     	{
	     	ToMau(19, 6,"1. Trier le score en untilisant un bulles",14);
	     	ToMau(19,10,"2. Trier le score en untilisant un tri",14);
	     	ToMau(19,14,"3. Trier le score en untilisant un rapide",14);
	     	ToMau(19,18,"4. Trier le score en untilisant un radial",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		     }
			 else{
		 	    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)
		        {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     		
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,18,"บ                                                                      บ",219);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 6,"1. Sap xep DTBTL dung BubbleSort",14);
	     	ToMau(19,10,"2. Sap xep DTBTL dung SelectionSort",14);
	     	ToMau(19,14,"3. Sap xep DTBTL dung QuickSort",14);
	     	ToMau(19,18,"4. Sap xep DTBTL dung RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 2)
	     	{
	     	ToMau(19, 6,"1. Sort to Score using BubbleSort",14);
	     	ToMau(19,10,"2. Sort to Score using SelectionSort",14);
	     	ToMau(19,14,"3. Sort to Score using QuickSort",14);
	     	ToMau(19,18,"4. Sort to Score using RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 3)
	     	{
	     	ToMau(19, 6,"1. Trier le score en untilisant un bulles",14);
	     	ToMau(19,10,"2. Trier le score en untilisant un tri",14);
	     	ToMau(19,14,"3. Trier le score en untilisant un rapide",14);
	     	ToMau(19,18,"4. Trier le score en untilisant un radial",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
		        }
		        else{
		        	if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)
		            {
	     	        ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     		
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 6,"1. Sap xep DTBTL dung BubbleSort",14);
	     	ToMau(19,10,"2. Sap xep DTBTL dung SelectionSort",14);
	     	ToMau(19,14,"3. Sap xep DTBTL dung QuickSort",14);
	     	ToMau(19,18,"4. Sap xep DTBTL dung RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ     LAI       บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        }
	        if(Language == 2)
	     	{
	     	ToMau(19, 6,"1. Sort to Score using BubbleSort",14);
	     	ToMau(19,10,"2. Sort to Score using SelectionSort",14);
	     	ToMau(19,14,"3. Sort to Score using QuickSort",14);
	     	ToMau(19,18,"4. Sort to Score using RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     COME      บ",225);
        	ToMau(103, 9,"บ     BACK      บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        }
	        if(Language == 3)
	     	{
	     	ToMau(19, 6,"1. Trier le score en untilisant un bulles",14);
	     	ToMau(19,10,"2. Trier le score en untilisant un tri",14);
	     	ToMau(19,14,"3. Trier le score en untilisant un rapide",14);
	     	ToMau(19,18,"4. Trier le score en untilisant un radial",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ    TOURNE     บ",225);
        	ToMau(103, 9,"บ               บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
	        }
		           }
		           else{
		            ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);	
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     		
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	
	     	if(Language == 1)
	     	{
	     	ToMau(19, 6,"1. Sap xep DTBTL dung BubbleSort",14);
	     	ToMau(19,10,"2. Sap xep DTBTL dung SelectionSort",14);
	     	ToMau(19,14,"3. Sap xep DTBTL dung QuickSort",14);
	     	ToMau(19,18,"4. Sap xep DTBTL dung RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 2)
	     	{
	     	ToMau(19, 6,"1. Sort to Score using BubbleSort",14);
	     	ToMau(19,10,"2. Sort to Score using SelectionSort",14);
	     	ToMau(19,14,"3. Sort to Score using QuickSort",14);
	     	ToMau(19,18,"4. Sort to Score using RadixSort",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     COME      บ",11);
        	ToMau(103, 9,"บ     BACK      บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
	        if(Language == 3)
	     	{
	     	ToMau(19, 6,"1. Trier le score en untilisant un bulles",14);
	     	ToMau(19,10,"2. Trier le score en untilisant un tri",14);
	     	ToMau(19,14,"3. Trier le score en untilisant un rapide",14);
	     	ToMau(19,18,"4. Trier le score en untilisant un radial",14);
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    TOURNE     บ",11);
        	ToMau(103, 9,"บ               บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	        }
				   }
				}
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToSortClassAndDTBTL(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,int X5_high,int X5_low,int Y5_high,int Y5_low)                                
{
	int colorFrame = 12;
	
	textcolor(2);
	
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
    cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      QUAY     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ      LAI      บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n"; 
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";
	cout<<"\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 4.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n"; 
				
	ToMau(22, 6,"Sap xep DS lop, diem TBTL dung BubbleSort",14);
	ToMau(22,10,"Sap xep DS lop, diem TBTL dung SelectionSort",14);	
	ToMau(22,14,"Sap xep DS lop, diem TBTL dung QuickSort",14);
	ToMau(22,18,"Sap xep DS lop, diem TBTL dung RadixSort",14);
	
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low)
			  {
			  	return 5;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Sap xep DS lop, diem TBTL dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep DS lop, diem TBTL dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep DS lop, diem TBTL dung QuickSort",14);
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,18,"4. Sap xep DS lop, diem TBTL dung RadixSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep DS lop, diem TBTL dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Sap xep DS lop, diem TBTL dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep DS lop, diem TBTL dung QuickSort",14);
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,18,"4. Sap xep DS lop, diem TBTL dung RadixSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep DS lop, diem TBTL dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep DS lop, diem TBTL dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,14,"บ                                                                      บ",219);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,14,"3. Sap xep DS lop, diem TBTL dung QuickSort",14);
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,18,"4. Sap xep DS lop, diem TBTL dung RadixSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		     }
			 else{
		 	    if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)
		        {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep DS lop, diem TBTL dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep DS lop, diem TBTL dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep DS lop, diem TBTL dung QuickSort",14);
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,18,"บ                                                                      บ",219);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,18,"4. Sap xep DS lop, diem TBTL dung RadixSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		        }
		        else{
		        	if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low)
		            {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep DS lop, diem TBTL dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep DS lop, diem TBTL dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep DS lop, diem TBTL dung QuickSort",14);
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,18,"4. Sap xep DS lop, diem TBTL dung RadixSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ     LAI       บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
		           }
		           else{
		    ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep DS lop, diem TBTL dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep DS lop, diem TBTL dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep DS lop, diem TBTL dung QuickSort",14);
	     	
	     	ToMau(17,17,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,18,"บ                                                                      บ",2);
	     	ToMau(17,19,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,18,"4. Sap xep DS lop, diem TBTL dung RadixSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
				   }
				}
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToSortClassAndName(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low)
{
	int colorFrame = 12;

	textcolor(2);
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      QUAY     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    VE MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n\n";
	
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	
			  			
	ToMau(22, 6,"Sap xep DS lop, ten dung BubbleSort",14);
	ToMau(22,10,"Sap xep DS lop, ten dung SelectionSort",14);
	ToMau(22,14,"Sap xep DS lop, ten dung QuickSort",14);
	
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Sap xep DS lop, ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep DS lop, ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep DS lop, ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep DS lop, ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Sap xep DS lop, ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"2. Sap xep DS lop, ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
		      	
	     	    ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17, 6,"บ                                                                      บ",2);
	     	    ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19, 6,"1. Sap xep DS lop, ten dung BubbleSort",14);
	
	            ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17,10,"บ                                                                      บ",2);
	     	    ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19,10,"2. Sap xep DS lop, ten dung SelectionSort",14);
	     	    
	     	    ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	    ToMau(17,14,"บ                                                                      บ",219);
	     	    ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	    ToMau(19,14,"2. Sap xep DS lop, ten dung QuickSort",14);
	     	    
	     	    ToMau(103, 6,"ษอออออออออออออออป",11);
	            ToMau(103, 7,"บ               บ",11);
	            ToMau(103, 8,"บ     QUAY      บ",11);
        	    ToMau(103, 9,"บ     LAI       บ",11);
        	    ToMau(103,10,"บ               บ",11);
	            ToMau(103,11,"ศอออออออออออออออผ",11);
		     }
			 else{
			 	if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)
		        {
		      	
	     	    ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17, 6,"บ                                                                      บ",2);
	     	    ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19, 6,"1. Sap xep DS lop, ten dung BubbleSort",14);
	
	            ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17,10,"บ                                                                      บ",2);
	     	    ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19,10,"2. Sap xep DS lop, ten dung SelectionSort",14);
	     	    
	     	    ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17,14,"บ                                                                      บ",2);
	     	    ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19,14,"2. Sap xep DS lop, ten dung QuickSort",14);
	     	    
	     	    ToMau(103, 6,"ษอออออออออออออออป",225);
	            ToMau(103, 7,"บ               บ",225);
	            ToMau(103, 8,"บ     QUAY      บ",225);
        	    ToMau(103, 9,"บ     LAI       บ",225);
        	    ToMau(103,10,"บ               บ",225);
	            ToMau(103,11,"ศอออออออออออออออผ",225);
		        }
			 	else{
		 	    ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17, 6,"บ                                                                      บ",2);
	     	    ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19, 6,"1. Sap xep DS lop, ten dung BubbleSort",14);
	
	            ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17,10,"บ                                                                      บ",2);
	     	    ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19,10,"2. Sap xep DS lop, ten dung SelectionSort",14);
	     	    
	     	    ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	    ToMau(17,14,"บ                                                                      บ",2);
	     	    ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	    ToMau(19,14,"2. Sap xep DS lop, ten dung QuickSort",14);
	     	    
	     	    ToMau(103, 6,"ษอออออออออออออออป",11);
	            ToMau(103, 7,"บ               บ",11);
	            ToMau(103, 8,"บ     QUAY      บ",11);
        	    ToMau(103, 9,"บ     LAI       บ",11);
        	    ToMau(103,10,"บ               บ",11);
	            ToMau(103,11,"ศอออออออออออออออผ",11);
	           }
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToSortName(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low)
{
	int colorFrame = 12;
	
	textcolor(2);
	cout<<"\n\n\n\n" ;
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      QUAY     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    VE MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n\n";
	
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 3.                                                                   บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ\n";	
	
			  			
	ToMau(22, 6,"Sap xep Ten dung BubbleSort",14);
	ToMau(22,10,"Sap xep Ten dung SelectionSort",14);
	ToMau(22,14,"Sap xep Ten dung QuickSort",14);
	
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Sap xep Ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep Ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep Ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep Ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Sap xep Ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep Ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
		      	
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep Ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep Ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,14,"บ                                                                      บ",219);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,14,"3. Sap xep Ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
		     }
			 else{
			 	if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low)
		        {
		      	
	     	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep Ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep Ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep Ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ     LAI       บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);
		        }
			 	else{
		 	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Sap xep Ten dung BubbleSort",14);
	
	        ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Sap xep Ten dung SelectionSort",14);
	     	
	     	ToMau(17,13,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,14,"บ                                                                      บ",2);
	     	ToMau(17,15,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,14,"3. Sap xep Ten dung QuickSort",14);
	     	
	     	ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ     LAI       บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);
	           }
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
}

int MouseEventToButtonSelectEstimate(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	int colorFrame = 12;
	
	textcolor(2);
	cout<<"\n\n\n\n" ;
	if(Language == 1)
	{
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ      QUAY     บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    VE MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n";	
	
	ToMau(22,6,"Thong ke So luong Hoc Vien moi lop",14);
	ToMau(22,10,"Thong ke ti le Kha, Gioi",14);
	}
	
	if(Language == 2)
	{
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ   COME BACK   บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ    TO MENU    บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n";
	ToMau(22,6 ,"Statistics are base on amount of student in class",14);
	ToMau(22,10,"Statistics are base on fairly good and excellent ratio",14);	
	}
	if(Language == 3)
	{
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป\n";
	cout<<"                บ 1.                                                                   บ              ษอออออออออออออออป\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              บ               บ\n";
	cout<<"                                                                                                      บ     RETOUR    บ\n";
	cout<<"                ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป              บ     AU MENU   บ\n";
	cout<<"                บ 2.                                                                   บ              บ               บ\n";
	cout<<"                ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ              ศอออออออออออออออผ\n";	
	ToMau(22,6 ,"Statisques par nombre d'eleves pas classe",14);
	ToMau(22,10,"Statisques basees sur le taux de tres bon",14);
	}
			  	
	
	PrintFrame(colorFrame);
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	if(Language == 1)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Thong ke theo So hoc vien moi lop",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Thong ke theo ti le Kha, Gioi moi lop",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Statistics are base on amount of student in class",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Statistics are base on fairly good and excellent ratio",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17, 6,"บ                                                                      บ",219);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19, 6,"1. Statisques par nombre d'eleves pas classe",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Statisques basees sur le taux de tres bon",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    RETOUR     บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
	     	
	     	
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		  	if(Language == 1)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Thong ke theo So hoc vien moi lop",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Thong ke theo ti le Kha, Gioi moi lop",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Statistics are base on amount of student in class",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Statistics are base on fairly good and excellent ratio",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Statisques par nombre d'eleves pas classe",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",219);
	     	ToMau(17,10,"บ                                                                      บ",219);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",219);
	     	ToMau(19,10,"2. Statisques basees sur le taux de tres bon",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    RETOUR     บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	    if(Language == 1)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Thong ke theo So hoc vien moi lop",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Thong ke theo ti le Kha, Gioi moi lop",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ     QUAY      บ",225);
        	ToMau(103, 9,"บ   VE MENU     บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Statistics are base on amount of student in class",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Statistics are base on fairly good and excellent ratio",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ   COME BACK   บ",225);
        	ToMau(103, 9,"บ    TO MENU    บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Statisques par nombre d'eleves pas classe",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Statisques basees sur le taux de tres bon",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",225);
	        ToMau(103, 7,"บ               บ",225);
	        ToMau(103, 8,"บ    RETOUR     บ",225);
        	ToMau(103, 9,"บ    AU MENU    บ",225);
        	ToMau(103,10,"บ               บ",225);
	        ToMau(103,11,"ศอออออออออออออออผ",225);	
			}
		     }
			 else{
		 	    if(Language == 1)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Thong ke theo So hoc vien moi lop",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Thong ke theo ti le Kha, Gioi moi lop",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ     QUAY      บ",11);
        	ToMau(103, 9,"บ   VE MENU     บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 2)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Statistics are base on amount of student in class",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Statistics are base on fairly good and excellent ratio",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ   COME BACK   บ",11);
        	ToMau(103, 9,"บ    TO MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(17, 5,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17, 6,"บ                                                                      บ",2);
	     	ToMau(17, 7,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19, 6,"1. Statisques par nombre d'eleves pas classe",14);
	     	
	     	ToMau(17, 9,"ษþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþป",2);
	     	ToMau(17,10,"บ                                                                      บ",2);
	     	ToMau(17,11,"ศþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþo0oþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþผ",2);
	     	ToMau(19,10,"2. Statisques basees sur le taux de tres bon",14);
	     	
			ToMau(103, 6,"ษอออออออออออออออป",11);
	        ToMau(103, 7,"บ               บ",11);
	        ToMau(103, 8,"บ    RETOUR     บ",11);
        	ToMau(103, 9,"บ    AU MENU    บ",11);
        	ToMau(103,10,"บ               บ",11);
	        ToMau(103,11,"ศอออออออออออออออผ",11);	
			}
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }	
}

int MouseEventForFoolPeople(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low, string maHV )
{
	
	PrintEmpty();
	
	ToMau(50,14,"Yeu cau nhap Ma hoc vien tu The hoc vien:",10);	
	ToMau(50,15,"ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ",6);
	ToMau(50,16,"ณ                                         ณ",6);
	ToMau(50,17,"ณ                                         ณ",6);
	ToMau(50,18,"ณ                                         ณ",6);
	ToMau(50,19,"ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู",6);
	
	ToMau(95,14,"ษอออออออออออออออป",10);
	ToMau(95,15,"บ               บ",10);
	ToMau(95,16,"บ    GUI DEN    บ",10);
    ToMau(95,17,"บ  BAN QUAN TRI บ",10);
    ToMau(95,18,"บ               บ",10);
	ToMau(95,19,"ศอออออออออออออออผ",10);
	
	ToMau(115, 6,"ษอออออออออออออออป",11);
	ToMau(115, 7,"บ               บ",11);
	ToMau(115, 8,"บ     QUAY      บ",11);
    ToMau(115, 9,"บ     LAI       บ",11);
    ToMau(115,10,"บ               บ",11);
	ToMau(115,11,"ศอออออออออออออออผ",11);
	
	
	
//	if(Language == 2)
//	{
//	ToMau(30,12,"Enter the Student ID from the card:",10);	
//	
//	ToMau(103, 6,"ษอออออออออออออออป",11);
//	ToMau(103, 7,"บ               บ",11);
//	ToMau(103, 8,"บ    SEND TO    บ",11);
//    ToMau(103, 9,"บ     ADMIN     บ",11);
//    ToMau(103,10,"บ               บ",11);
//	ToMau(103,11,"ศอออออออออออออออผ",11);
//	
//	ToMau(103,15,"ษอออออออออออออออป",11);
//	ToMau(103,16,"บ               บ",11);
//	ToMau(103,17,"บ     COME      บ",11);
//    ToMau(103,18,"บ     BACK      บ",11);
//    ToMau(103,19,"บ               บ",11);
//	ToMau(103,20,"ศอออออออออออออออผ",11);
//	}
//	if(Language == 3)
//	{
//	ToMau(30,12,"Entrez l'ID de l'etudiant partir de carte: ",10);	
//	envoyer เ l'administrateur
//	ToMau(103, 6,"ษอออออออออออออออป",11);
//	ToMau(103, 7,"บ               บ",11);
//	ToMau(103, 8,"บ   ENVOYER A   บ",11);
//    ToMau(103, 9,"บ ADMINISTRATEURบ",11);
//    ToMau(103,10,"บ               บ",11);
//	ToMau(103,11,"ศอออออออออออออออผ",11);
//	
//	ToMau(103,15,"ษอออออออออออออออป",11);
//	ToMau(103,16,"บ               บ",11);
//	ToMau(103,17,"บ    TOURNE     บ",11);
//    ToMau(103,18,"บ               บ",11);
//    ToMau(103,19,"บ               บ",11);
//	ToMau(103,20,"ศอออออออออออออออผ",11);
//	}
	

	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	XoaConTro();
	ToMau(50,15,"ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ",14);
	ToMau(50,16,"ณ                                         ณ",14);
	ToMau(50,17,"ณ                                         ณ",14);
	ToMau(50,18,"ณ                                         ณ",14);
	ToMau(50,19,"ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู",14);
	
	ToMau(65,17,maHV,7);
	
	ToMau(95,14,"ษอออออออออออออออป",10);
	ToMau(95,15,"บ               บ",10);
	ToMau(95,16,"บ    GUI DEN    บ",10);
    ToMau(95,17,"บ  BAN QUAN TRI บ",10);
    ToMau(95,18,"บ               บ",10);
	ToMau(95,19,"ศอออออออออออออออผ",10);
	
	ToMau(115, 6,"ษอออออออออออออออป",11);
	ToMau(115, 7,"บ               บ",11);
	ToMau(115, 8,"บ     QUAY      บ",11);
    ToMau(115, 9,"บ     LAI       บ",11);
    ToMau(115,10,"บ               บ",11);
	ToMau(115,11,"ศอออออออออออออออผ",11);
	        
	        HienConTro();
	        gotoxy(65,17);
			
		  }
		 else{
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		    XoaConTro();
		
	ToMau(50,15,"ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ",6);
	ToMau(50,16,"ณ                                         ณ",6);
	ToMau(50,17,"ณ                                         ณ",6);
	ToMau(50,18,"ณ                                         ณ",6);
	ToMau(50,19,"ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู",6);
	
	ToMau(65,17,maHV,7);
	
	ToMau(95,14,"ษอออออออออออออออป",174);
	ToMau(95,15,"บ               บ",174);
	ToMau(95,16,"บ    GUI DEN    บ",174);
    ToMau(95,17,"บ  BAN QUAN TRI บ",174);
    ToMau(95,18,"บ               บ",174);
	ToMau(95,19,"ศอออออออออออออออผ",174);
	
	ToMau(115, 6,"ษอออออออออออออออป",11);
	ToMau(115, 7,"บ               บ",11);
	ToMau(115, 8,"บ     QUAY      บ",11);
    ToMau(115, 9,"บ     LAI       บ",11);
    ToMau(115,10,"บ               บ",11);
	ToMau(115,11,"ศอออออออออออออออผ",11);
			
		
			
		   }
		  else{
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	
	     	XoaConTro();
	     	
	ToMau(50,15,"ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ",6);
	ToMau(50,16,"ณ                                         ณ",6);
	ToMau(50,17,"ณ                                         ณ",6);
	ToMau(50,18,"ณ                                         ณ",6);
	ToMau(50,19,"ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู",6);
	
	ToMau(65,17,maHV,7);
	
	ToMau(95,14,"ษอออออออออออออออป",10);
	ToMau(95,15,"บ               บ",10);
	ToMau(95,16,"บ    GUI DEN    บ",10);
    ToMau(95,17,"บ  BAN QUAN TRI บ",10);
    ToMau(95,18,"บ               บ",10);
	ToMau(95,19,"ศอออออออออออออออผ",10);
	
	ToMau(115, 6,"ษอออออออออออออออป",148);
	ToMau(115, 7,"บ               บ",148);
	ToMau(115, 8,"บ     QUAY      บ",148);
    ToMau(115, 9,"บ     LAI       บ",148);
    ToMau(115,10,"บ               บ",148);
	ToMau(115,11,"ศอออออออออออออออผ",148);
			
			
		     }
			 else{
		 	XoaConTro();
		 	
	ToMau(50,15,"ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ",6);
	ToMau(50,16,"ณ                                         ณ",6);
	ToMau(50,17,"ณ                                         ณ",6);
	ToMau(50,18,"ณ                                         ณ",6);
	ToMau(50,19,"ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู",6);
	
	ToMau(65,17,maHV,7);
	
	ToMau(95,14,"ษอออออออออออออออป",10);
	ToMau(95,15,"บ               บ",10);
	ToMau(95,16,"บ    GUI DEN    บ",10);
    ToMau(95,17,"บ  BAN QUAN TRI บ",10);
    ToMau(95,18,"บ               บ",10);
	ToMau(95,19,"ศอออออออออออออออผ",10);
	
	ToMau(115, 6,"ษอออออออออออออออป",11);
	ToMau(115, 7,"บ               บ",11);
	ToMau(115, 8,"บ     QUAY      บ",11);
    ToMau(115, 9,"บ     LAI       บ",11);
    ToMau(115,10,"บ               บ",11);
	ToMau(115,11,"ศอออออออออออออออผ",11);
			
			
			
		      }
		   }
		   
		 }
		 	
		break;
    }	
    }
	
	
}



int MouseEventToTableOfFoolPeople(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,
                                  int X3_high,int X3_low,int Y3_high,int Y3_low,int X4_high,int X4_low,int Y4_high,int Y4_low,
								  int X5_high,int X5_low,int Y5_high,int Y5_low,int X6_high,int X6_low,int Y6_high,int Y6_low,
								  int X7_high,int X7_low,int Y7_high,int Y7_low,int X8_high,int X8_low,int Y8_high,int Y8_low,
								  int X9_high,int X9_low,int Y9_high,int Y9_low,int X10_high,int X10_low,int Y10_high,int Y10_low,
								  int X11_high,int X11_low,int Y11_high,int Y11_low,int X12_high,int X12_low,int Y12_high,int Y12_low,
								  int X13_high,int X13_low,int Y13_high,int Y13_low,int soluong)
{
	
	DWORD soBanGhi;   // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
    
    
	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
			if(point.x <= X4_high and point.x>=X4_low and point.y<=Y4_high and point.y>=Y4_low)
			  {
			  	return 4;
			  }
			if(point.x <= X5_high and point.x>=X5_low and point.y<=Y5_high and point.y>=Y5_low and soluong >= 2)
			  {
			  	return 5;
			  }
			if(point.x <= X6_high and point.x>=X6_low and point.y<=Y6_high and point.y>=Y6_low and soluong >= 3)
			  {
			  	return 6;
			  }
			if(point.x <= X7_high and point.x>=X7_low and point.y<=Y7_high and point.y>=Y7_low and soluong >= 4)
			  {
			  	return 7;
			  }
			if(point.x <= X8_high and point.x>=X8_low and point.y<=Y8_high and point.y>=Y8_low and soluong >= 5)
			  {
			  	return 8;
			  }
			if(point.x <= X9_high and point.x>=X9_low and point.y<=Y9_high and point.y>=Y9_low and soluong >= 6)
			  {
			  	return 9;
			  }
			if(point.x <= X10_high and point.x>=X10_low and point.y<=Y10_high and point.y>=Y10_low and soluong >= 7)
			  {
			  	return 10;
			  }
			if(point.x <= X11_high and point.x>=X11_low and point.y<=Y11_high and point.y>=Y11_low and soluong >= 8)
			  {
			  	return 11;
			  }
			if(point.x <= X12_high and point.x>=X12_low and point.y<=Y12_high and point.y>=Y12_low and soluong >= 9)
			  {
			  	return 12;
			  }
			if(point.x <= X13_high and point.x>=X13_low and point.y<=Y13_high and point.y>=Y13_low and soluong >= 10)
			  { 
			  	return 13;
			  }

          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	XoaConTro();
		  	if(Language == 1)
		  	{
		ToMau(115,6 ,"ษอออออออออออออออป",225);
	    ToMau(115,7 ,"บ               บ",225);
	    ToMau(115,8 ,"บ      QUAY     บ",225);
	    ToMau(115,9,"บ      LAI      บ",225);
	    ToMau(115,10,"บ               บ",225);
	    ToMau(115,11,"ศอออออออออออออออผ",225);	
	  }
	if(Language == 2)
	  {
	    ToMau(115,6 ,"ษอออออออออออออออป",225);
	    ToMau(115,7 ,"บ               บ",225);
	    ToMau(115,8 ,"บ      COME     บ",225);
	    ToMau(115,9,"บ      BACK     บ",225);
	    ToMau(115,10,"บ               บ",225);
	    ToMau(115,11,"ศอออออออออออออออผ",225);	
	  }
	if(Language == 3)
	  {
		ToMau(115,6 ,"ษอออออออออออออออป",225);
	    ToMau(115,7 ,"บ               บ",225);
	    ToMau(115,8 ,"บ     TOURNE    บ",225);
	    ToMau(115,9,"บ               บ",225);
	    ToMau(115,10,"บ               บ",225);
	    ToMau(115,11,"ศอออออออออออออออผ",225);	
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
                
		  }
		 else
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		    XoaConTro();
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
		  	
	ToMau(20,21,"ษอป",226);
	ToMau(20,22,"บ บ",226);
    ToMau(20,23,"บ<บ",226);
    ToMau(20,24,"บ บ",226);
	ToMau(20,25,"ศอผ",226);
	
	ToMau(68,21,"ษอป",4);
	ToMau(68,22,"บ บ",4);
	ToMau(68,23,"บ>บ",4);
	ToMau(68,24,"บ บ",4);
	ToMau(68,25,"ศอผ",4);  

		   }
		  else
		  	
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
			    XoaConTro();

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
	
	ToMau(68,21,"ษอป",226);
	ToMau(68,22,"บ บ",226);
	ToMau(68,23,"บ>บ",226);
	ToMau(68,24,"บ บ",226);
	ToMau(68,25,"ศอผ",226);  

		     }
			 else
			if(point1.x <= X4_high and point1.x>=X4_low and point1.y<=Y4_high and point1.y>=Y4_low and soluong >= 1)
			{
			XoaConTro();
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
                for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,15,"Û",11);
	            
		    }	
		    else
		    if(point1.x <= X5_high and point1.x>=X5_low and point1.y<=Y5_high and point1.y>=Y5_low and soluong >= 2)
		      {
		    XoaConTro();
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
               for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,17,"Û",11);
			  }
			else
			if(point1.x <= X6_high and point1.x>=X6_low and point1.y<=Y6_high and point1.y>=Y6_low and soluong >= 3)
			  {
			 XoaConTro();
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
               for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,19,"Û",11);
		    }	
		    else
		    if(point1.x <= X7_high and point1.x>=X7_low and point1.y<=Y7_high and point1.y>=Y7_low and soluong >= 4)
		      {
		      	XoaConTro();
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
               for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,21,"Û",11);
			  }
			else
			if(point1.x <= X8_high and point1.x>=X8_low and point1.y<=Y8_high and point1.y>=Y8_low and soluong >= 5)
			  {
			XoaConTro();
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
	            for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,23,"Û",11);
			  }
			else
			if(point1.x <= X9_high and point1.x>=X9_low and point1.y<=Y9_high and point1.y>=Y9_low and soluong >= 6)
			  {
			XoaConTro();
			
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
	            for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,25,"Û",11);
			  }
			else
			if(point1.x <= X10_high and point1.x>=X10_low and point1.y<=Y10_high and point1.y>=Y10_low and soluong >= 7)
			  {
			XoaConTro();
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
	            for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,27,"Û",11);
			  }
			else
			if(point1.x <= X11_high and point1.x>=X11_low and point1.y<=Y11_high and point1.y>=Y11_low and soluong >= 8)
			  {
			  	XoaConTro();
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
	            for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,29,"Û",11);
			  }
			else
			if(point1.x <= X12_high and point1.x>=X12_low and point1.y<=Y12_high and point1.y>=Y12_low and soluong >= 9)
			  {
			XoaConTro();
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
	          	for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,31,"Û",11);
			  }
			else
			if(point1.x <= X13_high and point1.x>=X13_low and point1.y<=Y13_high and point1.y>=Y13_low and soluong == 10)
			  {
			XoaConTro();
			
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
	            for(int i=15 ; i<=33 ; i+=2)
                   {
				   
	                ToMau(59,i," ",11);
				   }
	            ToMau(59,33,"Û",11);   
			  }
			
			 else{	
		    
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
               for(int i=15 ; i<=33 ; i+=2)
                   {
	                ToMau(59,i," ",11);
				   }
					
			  } 
		
		break;
    	
    }
    }
}

int MouseEventToGuiThongBaoChoTatCaHocVien(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
	
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	XoaConTro();
		  	if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ      QUAY     บ",225);
	     	ToMau(115,7,"บ      LAI      บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
	     	
	     	ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ      GUI      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ      COME     บ",225);
	     	ToMau(115,7,"บ      BACK     บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
	     	
	     	ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     SEND      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",225);
	     	ToMau(115,5,"บ               บ",225);
	     	ToMau(115,6,"บ     TOURNE    บ",225);
	     	ToMau(115,7,"บ               บ",225);
	     	ToMau(115,8,"บ               บ",225);
	     	ToMau(115,9,"ศอออออออออออออออผ",225);	
	     	
	     	ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     ENVOYE    บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
			}
	     	
	     	
		  }
		 else
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		    	XoaConTro();
		  	 if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
	     	
	    ToMau(115,15,"ษอออออออออออออออป",225);
	    ToMau(115,16,"บ               บ",225);
	    ToMau(115,17,"บ      GUI      บ",225);
	    ToMau(115,18,"บ               บ",225);
	    ToMau(115,19,"บ               บ",225);
	    ToMau(115,20,"ศอออออออออออออออผ",225);
			}
	     	if(Language == 2)
		  	{
		  	
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);
			 
		ToMau(115,15,"ษอออออออออออออออป",225);
	    ToMau(115,16,"บ               บ",225);
	    ToMau(115,17,"บ     SEND      บ",225);
	    ToMau(115,18,"บ               บ",225);
	    ToMau(115,19,"บ               บ",225);
	    ToMau(115,20,"ศอออออออออออออออผ",225);	
			}
			if(Language == 3)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
	     	
	     	ToMau(115,15,"ษอออออออออออออออป",225);
	    ToMau(115,16,"บ               บ",225);
	    ToMau(115,17,"บ     ENVOYE    บ",225);
	    ToMau(115,18,"บ               บ",225);
	    ToMau(115,19,"บ               บ",225);
	    ToMau(115,20,"ศอออออออออออออออผ",225);
			}
		  	
		   }
		  else
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
	     	    if(Language == 1)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);
			 
		ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ      GUI      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
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
		  		
		ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     ENVOYE    บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
		  	
		  	HienConTro();
		  	gotoxy(39,15);
		     }
			 else{
			 	XoaConTro();
		 	    if(Language == 1)
		  	{
		  		    ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ      GUI      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);
		  	
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      QUAY     บ",11);
	     	ToMau(115,7,"บ      LAI      บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
	     	if(Language == 2)
		  	{
		  			ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     SEND      บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);	
		  	
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ      COME     บ",11);
	     	ToMau(115,7,"บ      BACK     บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			if(Language == 3)
		  	{
		ToMau(115,15,"ษอออออออออออออออป",11);
	    ToMau(115,16,"บ               บ",11);
	    ToMau(115,17,"บ     ENVOYE    บ",11);
	    ToMau(115,18,"บ               บ",11);
	    ToMau(115,19,"บ               บ",11);
	    ToMau(115,20,"ศอออออออออออออออผ",11);	
		  		
		  	ToMau(115,4,"ษอออออออออออออออป",11);
	     	ToMau(115,5,"บ               บ",11);
	     	ToMau(115,6,"บ     TOURNE    บ",11);
	     	ToMau(115,7,"บ               บ",11);
	     	ToMau(115,8,"บ               บ",11);
	     	ToMau(115,9,"ศอออออออออออออออผ",11);	
			}
			}
 
		 	
		break;
    }	
    }
}


int MouseEventToGuiThuChoStudent(int X1_high,int X1_low,int Y1_high,int Y1_low,int X2_high,int X2_low,int Y2_high,int Y2_low,int X3_high,int X3_low,int Y3_high,int Y3_low)
{
		
	DWORD soBanGhi;            // so nguyen ko dau soBanGhi, 
	INPUT_RECORD Mang[1];      // Ban ghi dau vao
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (true)
	{	
    ReadConsoleInput(hStdin,Mang,1,&soBanGhi);

	switch (Mang[0].Event.MouseEvent.dwEventFlags)
	{
	case 0:
	    if(Mang[0].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
	      {
	        POINT point;
	        GetCursorPos(&point);	     
		    if(point.x <= X1_high and point.x>=X1_low and point.y<=Y1_high and point.y>=Y1_low)
		      {
		      	return 1;
			  }
	        if(point.x <= X2_high and point.x>=X2_low and point.y<=Y2_high and point.y>=Y2_low)	
	          {
	          	return 2;
			  }
			if(point.x <= X3_high and point.x>=X3_low and point.y<=Y3_high and point.y>=Y3_low)
			  {
			  	return 3;
			  }
          }
        break;
        
    case MOUSE_MOVED:
    	POINT point1;
	    GetCursorPos(&point1);
    	if(point1.x <= X1_high and point1.x>=X1_low and point1.y<=Y1_high and point1.y>=Y1_low)
		  {
		  	XoaConTro();
		  	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",225);
	     	ToMau(128,7,"บ               บ",225);
	     	ToMau(128,8,"บ      QUAY     บ",225);
	     	ToMau(128,9,"บ      LAI      บ",225);
	     	ToMau(128,10,"บ               บ",225);
	     	ToMau(128,11,"ศอออออออออออออออผ",225);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      GUI      บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",225);
	     	ToMau(128,7,"บ               บ",225);
	     	ToMau(128,8,"บ      COME     บ",225);
	     	ToMau(128,9,"บ      BACK     บ",225);
	     	ToMau(128,10,"บ               บ",225);
	     	ToMau(128,11,"ศอออออออออออออออผ",225);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      SEND     บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",225);
	     	ToMau(128,7,"บ               บ",225);
	     	ToMau(128,8,"บ     TOURNE    บ",225);
	     	ToMau(128,9,"บ               บ",225);
	     	ToMau(128,10,"บ               บ",225);
	     	ToMau(128,11,"ศอออออออออออออออผ",225);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ    ENVOYER    บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
	     	
	     	
		  }
		 else
		  if(point1.x <= X2_high and point1.x>=X2_low and point1.y<=Y2_high and point1.y>=Y2_low)
		    {
		    	XoaConTro();
		  	 		  			  	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      GUI      บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      SEND     บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ    ENVOYER    บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
		  	HienConTro();
		  	
		  	gotoxy(102,24);
		   }
		  else
		  	if(point1.x <= X3_high and point1.x>=X3_low and point1.y<=Y3_high and point1.y>=Y3_low)
		      {
		      	XoaConTro();
	     	    		  	if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",225);
	ToMau(128,31,"บ               บ",225);
	ToMau(128,32,"บ      GUI      บ",225);
	ToMau(128,33,"บ               บ",225);
	ToMau(128,34,"บ               บ",225);
	ToMau(128,35,"ศอออออออออออออออผ",225);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",225);
	ToMau(128,31,"บ               บ",225);
	ToMau(128,32,"บ      SEND     บ",225);
	ToMau(128,33,"บ               บ",225);
	ToMau(128,34,"บ               บ",225);
	ToMau(128,35,"ศอออออออออออออออผ",225);
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",225);
	ToMau(128,31,"บ               บ",225);
	ToMau(128,32,"บ    ENVOYER    บ",225);
	ToMau(128,33,"บ               บ",225);
	ToMau(128,34,"บ               บ",225);
	ToMau(128,35,"ศอออออออออออออออผ",225);
			}
		     }
			 else{
			 	XoaConTro();
		 	    if(Language == 1)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      QUAY     บ",11);
	     	ToMau(128,9,"บ      LAI      บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      GUI      บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
	     	if(Language == 2)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ      COME     บ",11);
	     	ToMau(128,9,"บ      BACK     บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ      SEND     บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
			if(Language == 3)
		  	{
		  	ToMau(128,6,"ษอออออออออออออออป",11);
	     	ToMau(128,7,"บ               บ",11);
	     	ToMau(128,8,"บ     TOURNE    บ",11);
	     	ToMau(128,9,"บ               บ",11);
	     	ToMau(128,10,"บ               บ",11);
	     	ToMau(128,11,"ศอออออออออออออออผ",11);	
	     	
	ToMau(128,30,"ษอออออออออออออออป",11);
	ToMau(128,31,"บ               บ",11);
	ToMau(128,32,"บ    ENVOYER    บ",11);
	ToMau(128,33,"บ               บ",11);
	ToMau(128,34,"บ               บ",11);
	ToMau(128,35,"ศอออออออออออออออผ",11);
			}
			}
 
		 	
		break;
    }	
    }
}





#endif
