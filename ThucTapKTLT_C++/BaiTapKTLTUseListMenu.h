
#ifndef BAITAPKTLTUSELISTMENU_H
#define BAITAPKTLTUSELISTMENU_H

#include "BaiTapKTLTUseListFunction.h"

void MENUforMember(List &l,Transcript Member)
{
	textcolor(7);
	PrintEmpty();
	
    
a:  while(true)
         {
         	textcolor(7);
         	PrintEmpty();
         	gotoxy(30,2);
         	textcolor(14);
         	cout<<"ษออออออออออออออออออออออออออออออออออออป";
	        gotoxy(30,3);
	        cout<<"บ~  Xin Chao, "<<setw(21)<<setfill('.')<<Member.StudentName<<" ~บ";
	        ToMau(30,4,"ศออออออออออออออออออออออออออออออออออออผ",14);
	        ToMau(90,3,"Made By: ",12);
	     	ToMau(99,3,"Le Duy Dung ~ ANHTTT",11);
	     	ToMau(90,4,"Email: ",12);
	     	ToMau(97,4,"duydung.hdgl99@gmail.com",11);

	        XoaConTro();
	        
	        // In ra thong bao chung cua quan tri vien
	        PrintThongBaoChung();
	        
	        int luachon;
	                                                            // 110-350
	        luachon = MouseEventToButtonOfMenuForMember(700,130,150,110,    700,130,200,160,   700,130,250,210,  700,130,300,260,  700,130,350,310);
	        
	        // Xem thong tin ca nhan /////////////////////////////////////////////////////////////////////////////////////////////
	        if(luachon == 1)
	          {
	          	PrintEmpty();
	          	PrintOneTranscript(Member);
	          	int x = MouseEventToButtonBack(1040,910,185,95);
	          	if(x == 1)
	          	  {
	          	  	textcolor(7);
	          	  	 goto a;
					}
	          	
			  }
			// Xem TIn nhan cua Ban Quan Tri//////////////////////////////////////////////////////////////////////////////////////
		    if(luachon == 2)
		      {
		      	HopThuDenCuaStudent(l,Member);
		      	int x = MouseEventToButtonBack(1040,910,185,95);
	          	if(x == 1)
	          	   goto a;
			  }
			// Gui y kien cho ban quan tri ////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 3)
			  {
			  	GuiTinNhanChoQuanTriVien(l,Member);
			  }
			// Doi mat khau ///////////////////////////////////////////////////////////////////////////////////////////////////////  
			if(luachon == 4)
			  {
f:			  	int wrong = 0;
			  	int kt = 0;
					
			  	gotoxy(42,15);
			    cout<<"                                   ";
			    gotoxy(42,17);
			    cout<<"                                   ";
				gotoxy(42,19);
			    cout<<"                                   ";
			    
			  	string OldPass;
			  	string NewPass1;
			  	string NewPass2;
			  	PrintChangePass();
			  	
f1:             int x = MouseEventToSelectChangePass(695,130,420,290,   945,820,195,105,   945,820,490,400);
                
                if(x == 1)
                {
                
			    do{
				textcolor(221);
			      if(wrong == 3)
			        {
				    	textcolor(7);
						goto a;
					}
				  gotoxy(42,16);
			      cin>>OldPass;
			      if(OldPass != Member.StudentPass)                       // Nhap mat khau cu
			        {
			        	ToMau(94,16,"! Nhap Sai (qua 3 lan se Huy)",4);
			        	textcolor(7);
			        	gotoxy(42,16);
			        	cout<<"                                   ";
			        	wrong++;
					}
				   else{
				   	ToMau(94,16,"                              ",4);
				   	ToMau(94,16,"๛ Hoan thanh",10);
				   }
				} while(OldPass != Member.StudentPass);
                
                
                wrong = 0;
                do{
				  textcolor(238);
                  if(wrong == 3)
                    {
				    	textcolor(7);
						goto a;
					}
                  gotoxy(42,19);
				  cin>>NewPass1;
				  if(NewPass1 == OldPass)                        // Nhap mat khau moi lan 1
				    {
				    	ToMau(94,19,"! Mat khau moi trung Mat khau cu",4);
				    	gotoxy(42,19);
				    	cout<<"                                    ";
				    	wrong++;
				    }
				   else{
				   	ToMau(94,19,"                               ",4);
				   	ToMau(94,19,"๛ Hoan thanh",10);
				   	textcolor(7);
				   }	
				} while(NewPass1 == OldPass);
				
				wrong = 0;
				do{
				  textcolor(238);
				  if(wrong == 3)
				    {
				    	textcolor(7);
						goto a;
					}
				     
				  gotoxy(42,20);
				  cin>>NewPass2;
				  if(NewPass2 != NewPass1)                                // Nhap mat khau moi lan 2
				    {
				    	ToMau(94,20,"! Mat khau nhap lai khong khop",4);
				    	gotoxy(42,20);
				    	cout<<"                                    ";
				    	wrong++;
					}
				  else{
				  	ToMau(94,20,"                                  ",4);
				  	ToMau(94,20,"๛ Hoan thanh",10);
				  	textcolor(7);
				  }
				} while(NewPass2 != NewPass1);
				
				kt = 1;		
				XoaConTro();
				goto f1;	
			    }
			    
			    if(x == 2)
			    {
			      	textcolor(7);
			      	goto a;
			    } 
				
				if(x == 3)
				{ 
				    ToMau(103,21,"ษอออออออออออออออป",6);
	                ToMau(103,22,"บ               บ",6);
                    ToMau(103,23,"บ      LUU      บ",6);
                    ToMau(103,24,"บ    MAT KHAU   บ",6);
                    ToMau(103,25,"บ               บ",6);
                    ToMau(103,26,"ศอออออออออออออออผ",6);
					
					if(kt == 0)
					{
						ToMau(100,27,"Yeu Cau nhap mat khau!",14);
						Sleep(2000);
						textcolor(7);
						goto f;
					}
					else{
						ToMau(100,27,"                      ",0);
						int choose;

	                    choose = MouseEventToYesOrNoChangePass(475,330,635,535,    995,850,635,535);
	            
	                    if(choose == 1)
	                      {
	              	        ofstream fileOutput;
			                fileOutput.open(fileStudentPass,ios::out);
			        
	              	        for(Node *p=l.Head ; p!=NULL ; p=p->Next)
	              	           {
	              	   	        if(p->data.StudentCode != Member.StudentCode)       // Neu ma hoc vien khac nhau thi cu the in lai vao file
	              	   	            fileOutput<<p->data.StudentPass<<"\n";
	              	   	        else{                                       
	              	   	            p->data.StudentPass = NewPass2;         // Neu trung roi thi thay doi StudentPass
	              	   	            fileOutput<<Encrypt(NewPass2)<<"\n";
	              	            }
					           }
	              	        cout<<"\n\n\t\t     Doi mat khau thanh cong!!!";
	              	        fileOutput.close();
	              	        
	              	        textcolor(7);
                            goto a;
	                      }
		                else{
		         	        textcolor(7);
	  	                    goto f;
	                    } 
					}
				}    
			  }      

			// Thoat ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 5)
			  {
			  	PrintEmpty();
				
			    int choose;
			    choose = MouseEventToYesOrNoExit(470,350,370,300,    905,795,370,300);
			    
			    if(choose == 1)
			      {
			      	textcolor(7);
			      	return;
				  }	
				if(choose == 2)
				  	textcolor(7);
			  }
		 }
}

//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================
//==============================================================================================================================

void MENU()
{	
    ReadAdminPass();
    
	List DanhSach;
	Init(DanhSach);
	CreateMessAmountToAdmin();
	
	AddToListFromFile(DanhSach);
	
//	ReSetStudentPass(DanhSach);  // reset lai mat khau trong fixbug
	
	
	Start();

a:	textcolor(7);
    PrintEmpty();
    LogIn(DanhSach);   
	textcolor(7);
	
	if(Direction == 1)
	  {
	  	MENUforMember(DanhSach,Member);
	  	goto a;
	  }	   
	else
	while(true)
	     {
b:	     	XoaConTro();
	     	PrintEmpty();
	     	PrintFrame(10);
	     	textcolor(7);
            int luachon;
            
		    luachon = MouseEventToButtonOfMenu(690,130,165,130,    690,130,215,180,   690,130,265,230,   690,130,320,280,   690,130,370,334,   690,130,420,385,   690,130,470,435,   690,130,520,485,    690,130,570,535  ,    690,130,620,585,    1035,945,190,170,    1035,945,225,205,    1035,945,260,240);
		    
	     	// Them moi ho so //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	     	if(luachon == 1)         
	     	  {
	     	    PrintEmpty();
	     	    HienConTro();
                
	     	  	AddFromKeyboard(DanhSach);	  
				XoaConTro();	
			  }
			  
		    // In danh sach///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 2)       
			  {
			  	PrintEmpty();
			  	textcolor(7);
			  	Transcript One;
			  	
			  	List2 DanhSach2;
	            Init2(DanhSach2);
	            
	            GanList2(DanhSach2,DanhSach);
	            
	            GhiFileDSCSX(DanhSach2);
	            
du:			  	PrintAllTranscriptByListNew(DanhSach2,One);
                if(ComeBack == 1)
                {
                while(DanhSach2.Head->Next != NULL )         // giai phong bo nho
			  	        DelHead2(DanhSach2);
			  	DelHead2(DanhSach2);     
				goto b;	
				}
                else{
                	int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto du;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto du;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto du;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto du;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto du;	
						      }
						   
			  	        XoaConTro();
				}		  	  
			  } 
			  
			// Sap xep  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 3)        
			  {
c:			  	textcolor(7);
                PrintEmpty();

			  	int choose1;
			  	
			  	choose1 = MouseEventToButtonSelectSort( 695,130,130,95,   695,130,210,165,   695,130,285,240 ,    695,130,355,310,    945,815,195,110   );
                
                if(choose1 == 1)/////////////////////////////// sap xep theo diem TBTL (tat ca)
                {
c2:             PrintEmpty();
			  	
			  	int choose2 = MouseEventToSortDTBTL( 695,130,130,95,   695,130,210,165,   695,130,285,240 ,    695,130,355,310,    945,815,195,110    );
			  	
			  	if(choose2 == 1)
			  	  {
			  	  	PrintEmpty();
			  	  	Transcript Array[StudentAmount];
			  	  	Transcript One;
			  	  	
			  	    AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	    
c21:			  	BubbleSortToScore(Array,0,StudentAmount);	
			  	    PrintAllTranscriptByArrayNew(Array,StudentAmount,One);
			  	    GhiFileDSSX2(Array,StudentAmount);
			  	    
			  	    if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c2;	
					}
					else{
						int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c21;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c21;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c21;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c21;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c21;	
						      }
						   
			  	        XoaConTro();
					}   	
					   
				  }
				if(choose2 == 2)
			  	  {
			  	  	PrintEmpty();
			  	  	Transcript Array[StudentAmount];
			  	    AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	    Transcript One;
			  	    
c22:			  	SelectionSortToScore(Array,0,StudentAmount);
			  	  	PrintAllTranscriptByArrayNew(Array,StudentAmount,One); 
			  	  	GhiFileDSSX2(Array,StudentAmount);
                    
                    if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c2;	
					}
					else{
						int x = MouseEventToDeleteOrFix(  445,315,520,435,    760,630,520,435,    1040,910,195,110  );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c22;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c22;
								  }
								else{
								    int y = MouseEventToYesOrNo(570,425,435,335,    1090,945,435,335);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c2;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c22;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c22;	
						      }
						   
			  	        XoaConTro();
					}  
					
				  }
				if(choose2 == 3)
			  	  {
			  	  	PrintEmpty();
			  	  	Transcript Array[StudentAmount];
			  	    AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	    Transcript One;
			  	    
c23:			  	QuickSortToScore(Array,0,StudentAmount-1);		     	
			     	PrintAllTranscriptByArrayNew(Array,StudentAmount,One);
			     	GhiFileDSSX2(Array,StudentAmount);

			     	if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c2;	
					}
					else{
						int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c23;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c23;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c2;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c23;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c23;	
						      }
						   
			  	        XoaConTro();
					}
					  	
				  }
				if(choose2 == 4)
			  	  {
			  	  	PrintEmpty();
			  	  	Transcript Array[StudentAmount];
			  	    AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	    Transcript One;
			  	    
c24:			    RadixSortToScore(Array,StudentAmount,One);
                    GhiFileDSSX2(Array,StudentAmount);

			     	if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c2;	
					}
					else{
						int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110);
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c24;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c24;
								  }
								else{
								    int y = MouseEventToYesOrNo(570,425,435,335,    1090,945,435,335);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c2;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c24;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c24;	
						      }
						   
			  	        XoaConTro();
					}
	                  
				  }
				if(choose2 == 5)
			  	  {
			  	  	textcolor(7);
	                goto c;	
				  }
			    }
			    
			    if(choose1 == 2)///////////////////// sap xep theo Ten (tat ca)
			      {
c4:			        PrintEmpty();
				 	
				    int choose2 = MouseEventToSortName(695,130,130,95,   695,130,210,165,   695,130,285,240 ,      945,815,195,110   );	 
				
				    if(choose2 == 1)
				      {
				     	PrintEmpty();
				 	 
					    List listphu;
					    Init(listphu);
					    Transcript One;
					    GanList(listphu,DanhSach);
	
				 	    BubbleSortToName(listphu);
				 	
				 	    List2 DanhSach2;
	                    Init2(DanhSach2);
	            
	                    GanList2(DanhSach2,listphu);
				 	    GhiFileDSSX1(DanhSach2);
				 	    
c10:				    PrintAllTranscriptByListNew(DanhSach2,One);
				 	    
				 	    if(ComeBack == 1)
                        {
                        while(DanhSach2.Head->Next != NULL )         // giai phong bo nho
			  	                DelHead2(DanhSach2);
			  	        DelHead2(DanhSach2);     
				        goto b;	
				        }
                        else{
                	        int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c10;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c10;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c10;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c10;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c10;	
						      }
						   
			  	        XoaConTro();
				}
				      }
				    if(choose2 == 2)  // selectionSort
				      {
					    PrintEmpty();
				 	 
					    List listphu;
					    Init(listphu);
					    Transcript One;
					    
					    GanList(listphu,DanhSach);
	                  
				 	    SelectionSortToName(listphu);
				 	
				 	    List2 DanhSach2;
	                    Init2(DanhSach2);
	            
	                    GanList2(DanhSach2,listphu);
				 	    GhiFileDSSX1(DanhSach2);
				 	    
c11:				 	PrintAllTranscriptByListNew(DanhSach2,One);
				 	    
				 	if(ComeBack == 1)
                {
                while(DanhSach2.Head->Next != NULL )         // giai phong bo nho
			  	        DelHead2(DanhSach2);
			  	DelHead2(DanhSach2);     
				goto b;	
				}
                else{
                	int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c11;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c11;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c11;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c11;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c4;	
						      }
						   
			  	        XoaConTro();
				}	
				      }
				
			        if(choose2 == 3)
				      {
					    PrintEmpty();
				 	 
					    List listphu;
					    Init(listphu);
					    Transcript One;
					    
					    GanList(listphu,DanhSach);
	
				 	    QuickSortToName(listphu);
				 	
				 	    List2 DanhSach2;
	                    Init2(DanhSach2);
	            
	                    GanList2(DanhSach2,listphu);
				 	    GhiFileDSSX1(DanhSach2);
				 	    
c12:			 	    PrintAllTranscriptByListNew(DanhSach2,One);
				 	    
				 	
				 	    if(ComeBack == 1)
                {
                while(DanhSach2.Head->Next != NULL )         // giai phong bo nho
			  	        DelHead2(DanhSach2);
			  	DelHead2(DanhSach2);     
				goto b;	
				}
                else{
                	int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c12;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c12;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c12;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c12;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c12;	
						      }
						   
			  	        XoaConTro();
				}	
	                      
				      }
				
				    if(choose2 == 4)
				      {
					    textcolor(7);
					    goto c;
				      }
			      }
	
			    if(choose1 == 3)//////////////////////////////////// sap xep theo DS lop, DTBTL
			      {
c5:                 PrintEmpty();
			  	
			      	int choose2 = MouseEventToSortClassAndDTBTL(695,130,130,95,   695,130,210,165,   695,130,285,240 ,    695,130,355,310,    945,815,195,110   );
			  	
			  	    if(choose2 == 1)
			  	      {
			  	  	    PrintEmpty();
			  	  	    Transcript Array[StudentAmount];
			  	        AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	        Transcript One; 
			  	        
c51:			  	    SortClassAndDTBTLByBubbleSort(Array,StudentAmount);	
			  	        PrintAllTranscriptByArrayNew(Array,StudentAmount,One);
			  	        GhiFileDSSX2(Array,StudentAmount);
			  	        
			  	    if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c5;	
					}
					else{
						int x = MouseEventToDeleteOrFix(445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c51;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c51;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c5;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c51;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c51;	
						      }
						   
			  	        XoaConTro();
					}
				      }
				    if(choose2 == 2)
			  	      {
			  	  	    PrintEmpty();
			  	  	    Transcript Array[StudentAmount];
			  	        AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	        Transcript One;
			  	    
c52:	      	        SortClassAndDTBTLBySelectionSort(Array,StudentAmount);
			  	        PrintAllTranscriptByArrayNew(Array,StudentAmount,One);
			  	        GhiFileDSSX2(Array,StudentAmount);
			  	        
			  	    if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c5;	
					}
					else{
						int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c52;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c52;
								  }
								else{
								    int y = MouseEventToYesOrNo(570,425,435,335,    1090,945,435,335);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c5;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c52;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c52;	
						      }
						   
			  	        XoaConTro();
					}
				      }
				    if(choose2 == 3)
			  	      {
			  	  	    PrintEmpty();
			  	  	    Transcript Array[StudentAmount];
			  	        AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	        Transcript One;
			  	        
c53:			        SortClassAndDTBTLByQuickSort(Array,StudentAmount);	
			     	    PrintAllTranscriptByArrayNew(Array,StudentAmount,One);
			     	    GhiFileDSSX2(Array,StudentAmount);
			  	        
			  	    if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c5;	
					}
					else{
						int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c53;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c53;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c5;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c53;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c53;	
						      }
						   
			  	        XoaConTro();
					}	
				      }
				    if(choose2 == 4)
			  	      {
			  	  	    PrintEmpty();
			  	  	    Transcript Array[StudentAmount];
			  	        AddToArrayFromList(DanhSach,Array,StudentAmount);
			  	    
			     	    Transcript One; 
			  	        
c54:			  	    SortClassAndDTBTLByRadixSort(Array,StudentAmount);	
			  	        PrintAllTranscriptByArrayNew(Array,StudentAmount,One);
			  	        GhiFileDSSX2(Array,StudentAmount);
			  	        
			  	    if(ComeBack == 1)
			  	    {
			  	        textcolor(7);
			     	    goto c5;	
					}
					else{
						int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto c54;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto c54;
								  }
								else{
								    int y = MouseEventToYesOrNo(570,425,435,335,    1090,945,435,335);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto c5;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto c54;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto c54;	
						      }
						   
			  	        XoaConTro();
					}
				      }
				    if(choose2 == 5)
			  	      {
			  	        textcolor(7);
	                    goto c;	
				      }
			      }	
				
			    
				if(choose1 == 4)/////////////////////////////////// sap xep theo DS lop, DS ten
				  {
c3:			        PrintEmpty();
				 	
				    int choose2 = MouseEventToSortClassAndName( 695,130,130,95,   695,130,210,165,   695,130,285,240 ,       945,815,195,110  );	 
				
				    if(choose2 == 1)
				      {
					    PrintEmpty();
				 	 
					    List listphu;
					    Init(listphu);
					    GanList(listphu,DanhSach);
	
				 	    SortClassAndNameByBubbleSort(listphu);
				 	
				 	    List2 DanhSach2;
	                    Init2(DanhSach2);
	            
	                    GanList2(DanhSach2,listphu);
				 	
				 	    PrintAllTranscriptClassByList(DanhSach2);
				 	    GhiFileDSSX1(DanhSach2);
				 	
				 	    while(listphu.Head != NULL)           // giai phong bo nho cho listphu
	                          DelHead(listphu);
	                    while(DanhSach2.Head->Next != NULL)   // giai phong bo nho cho DanhSach2
	                          DelHead2(DanhSach2);
	                    DelHead2(DanhSach2);
	                
	                    if(ComeBack == 1)
	                      {
	                      	textcolor(7);
							goto c3;
						  }
				      }
				    if(choose2 == 2)
				      {
					    PrintEmpty();
				 	 
					    List listphu;
					    Init(listphu);
					    GanList(listphu,DanhSach);
	
				 	    SortClassAndNameBySelectionSort(listphu);
				 	
				 	    List2 DanhSach2;
	                    Init2(DanhSach2);
	            
	                    GanList2(DanhSach2,listphu);
				 	
				 	    PrintAllTranscriptClassByList(DanhSach2);
				 	    GhiFileDSSX1(DanhSach2);
				 	
				 	    while(listphu.Head != NULL)           // giai phong bo nho cho listphu
	                          DelHead(listphu);
	                    while(DanhSach2.Head->Next != NULL)   // giai phong bo nho cho DanhSach2
	                          DelHead2(DanhSach2);
	                    DelHead2(DanhSach2);
	                
	                    if(ComeBack == 1)
	                      {
	                      	textcolor(7);
							goto c3;
						  }
				      }
				
			        if(choose2 == 3)
				      {
					    PrintEmpty();
				 	 
					    List listphu;
					    Init(listphu);
					    GanList(listphu,DanhSach);
	
				 	    SortClassAndNameByQuickSort(listphu);
				 	
				 	    List2 DanhSach2;
	                    Init2(DanhSach2);
	            
	                    GanList2(DanhSach2,listphu);
				 	
				 	    PrintAllTranscriptClassByList(DanhSach2);
				 	    GhiFileDSSX1(DanhSach2);
				 	
				 	    while(listphu.Head != NULL)           // giai phong bo nho cho listphu
	                          DelHead(listphu);
	                    while(DanhSach2.Head->Next != NULL)   // giai phong bo nho cho DanhSach2
	                          DelHead2(DanhSach2);
	                    DelHead2(DanhSach2);
	                
	                    if(ComeBack == 1)
	                      {
	                      	textcolor(7);
							goto c3;
						  }
	                       
				      }
				
				    if(choose2 == 4)
				      {
					    textcolor(7);
					    goto c;
				      }
			      }
				
				if(choose1 == 5)///////////////////////////////////////
				  {
				  	textcolor(7);
				  	goto b;
				  }
			  			  	
			  }
			// Tim kiem ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
			if(luachon == 4)      
			  {	        
		        XoaConTro();
		        
d:		        textcolor(7);
                PrintEmpty();
                int choose1;
		        List listphu;
		        Init(listphu);
		        GanList(listphu,DanhSach);
		        QuickSortToClassCode(listphu);
		        
d1:		        textcolor(7);
                PrintEmpty();
                choose1 = MouseEventToSelectFindStudent( 695,130,130,95,   695,130,210,165,     945,815,195,110  );
		        
		        if(choose1 == 1)                    ////// TH = 1
		          {
				    PrintEmpty();
			    
			        int choose2;
				    
d2:				    string name;
			  	    string code;
                    textcolor(7);
                    choose2 =  MouseEventToFindStudentByName( 700,130,180,110,    945,815,195,110 );
				
				    if(choose2 == 1)
				      {
				        HienConTro();
				        gotoxy(19,8);
			            textcolor(7);
			            
			            fflush(stdin);
			            string str;
			            int x = 0;
			            getline(cin,str);
			            fflush(stdin);
			            
			            for(int i=0 ; i<str.length() ; i++)
			                if(str[i] == ',')
			                  {
			                    x = 1;
			                  	break;
							  }
						if(x == 0)
			               name = str;
			            else{
			            	int i=0;
			            	while(str[i] != ',' )
			            	      name += str[i++];
			            	
			            	i++;
			            	while(i<str.length())
			            	      code += str[i++];
			            	ChuanHoaCode(code);
						}  
						
			            ChuanHoaName(name);
			            
                        PrintEmpty();

			  	        textcolor(7);
	 	                
d21:	 	            int wrong = 0;
			  	        textcolor(7);
                        Transcript One;
                        int choose3;
                        
                        choose3 = FindStudentByPartOfName(listphu,name,code,One,wrong);
                        
                        if(choose3 == 1)
                           goto d2;
                        
                        if(choose3 == 9)
                          {
                          	textcolor(7);
                          	goto d1;
						  }
                        
			  	        if(wrong == 1)
			  	          {
			  	          	textcolor(7);
			  	          	goto d2;
						  }
						 else{
						    int x = MouseEventToDeleteOrFix( 445,315,520,435,    760,630,520,435,    1040,910,195,110 );
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0 )
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto d21;
								  }
								else{
									int STT = 0;
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.StudentCode == One.StudentCode)
									   	    break;
									   }
									FixInformation(DanhSach,One,STT);
								    	
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	PrintEmpty();
						 	  	  	goto d21;
								  }
								else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,One.StudentCode);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto d2;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto d21;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto d2;	
						      }
						   
			  	        XoaConTro();
						 }
							
				      }
			    
			        if(choose2 == 2) 
			          {
			          	textcolor(7);
			          	PrintEmpty();
			      	    goto d1;
				      }
		     	
			      } 
			    
			    if(choose1 == 2)             ////// TH = 2
			      {
			    	string code;
				    PrintEmpty();
			    
			        int choose2;
				
d3:				    textcolor(7);
                    choose2 =  MouseEventToFindStudentByCode( 695,130,130,95,     945,815,195,110   );
				
				    if(choose2 == 1)
				      {
				        HienConTro();
				        gotoxy(19,8);
			            textcolor(7);
			            fflush(stdin);
			            getline(cin,code);
			            fflush(stdin);
			            ChuanHoaCode(code);
                        PrintEmpty();
			  	        textcolor(7);
	 	                
	 	                XoaConTro();
	 	                Transcript One;
	 	                int wrong = 0;
d31:			  	    textcolor(7);
                        FindStudentByStudentCode(DanhSach,One,code,wrong);
			  	        
			  	        if(wrong == 1)
			  	          {
			  	          	textcolor(7);
			  	          	goto d3;
							}
						 else{
						 	int x = MouseEventToDeleteOrFix(445,315,520,435,    760,630,520,435,    1040,910,195,110);
						 	
						 	if(x == 1)
						 	  {
						 	  	HienConTro();
						 	  	
						 	  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto d31;
								  }
								else{
									int STT = 0;
									
									for(Node *p=DanhSach.Head ; p!=NULL ; p=p->Next)
									   {
									   	STT++;
									   	if(p->data.ClassCode == One.ClassCode)
									   	   break;
									   }
									FixInformation(DanhSach,One,STT);
								}
							  }
							if(x == 2)
							  {
							  	HienConTro();
							  	
							  	if(KiemTraPass2() == 0)
						 	  	  {
						 	  	  	textcolor(7);
						 	  	  	PrintEmpty();
						 	  	  	goto d31;
								  }
								 else{
								    int y = MouseEventToYesOrNo(470,350,370,300,    905,795,370,300);
								    
							        if(y == 1)
							          {
							     	    DeleteOneStudent(DanhSach,code);
							     	    PrintEmpty();
							     	    ToMau(25,10,"Xoa Thanh Cong!",14);
							     	    Sleep(2000);
							     	    goto d3;
								      }
							        else{
							          textcolor(7);
							          PrintEmpty();
							    	  goto d31;
								    }	
								}
							  }
						    if(x == 3)
						      {
						      	textcolor(7);
						  	    PrintEmpty();
						  	    goto d3;	
						      }
						   
			  	        XoaConTro();
						}
							
				      }
			    
			        if(choose2 == 2) 
			          {
			          	textcolor(7);
			          	PrintEmpty();
			      	    goto d1;
				      }
		     	
				  }
			    
		        if(choose1 == 3)             ////// TH = 3
				  {
				  	textcolor(7);
				    goto b;	
				  }
		    }
			// Thong ke  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 5)       
			  {
e:			  	int StudentAmount;
	            
	            XoaConTro();
			  	PrintEmpty();
			  	
			  	int choose;
			  	
			  	choose = MouseEventToButtonSelectEstimate( 695,130,130,95,   695,130,210,165,     945,815,195,110   );

			  	if(choose == 1)
				  {
                    PrintEmpty2();
				  	textcolor(7);
				  	List listphu;
				  	Init(listphu);
				  	GanList(listphu,DanhSach);
                    
			  	    QuickSortToClassCode(listphu);
			  	    
			  	    
			  	    int x;
e1:			  	    PrintEstimateClass(listphu);

                    x = MouseEventToButtonBackOrNext(1200,1075,200,110,  50,20,490,420,   1100,1070,490,420);
                    textcolor(7);
                            
			  	    if(x == 1)
			  	      {
			  	      	while(listphu.Head != NULL)
					          DelHead(listphu);
			  	      	textcolor(7);
						goto e;
					  }
					if(x == 2 or x == 3)
					  {
					  	textcolor(7);
					  	PrintChartClass(listphu);
					  	int y = MouseEventToButtonBackOrNext(1200,1075,200,110,  50,20,490,420,   1100,1070,490,420);
					  	
					  	if(y == 1)
					  	  {
					  	  	while(listphu.Head != NULL)
					          DelHead(listphu);
			  	      	    textcolor(7);
						    goto e;
						  }
						  
						if(y == 2 or y == 3)
						  {
						  	textcolor(7);
						  	PrintEmpty2();
							goto e1;
						  }
						   
					  }
			      }
			      
			  	if(choose == 2)
			  	  {
			  	  	PrintEmpty2();
			  	  	textcolor(7);
			  	  	
				  	List listphu;
				  	Init(listphu);
				  	GanList(listphu,DanhSach);
                    
			  	    QuickSortToClassCode(listphu);
			  	    PrintEstimateScore(listphu);
			  	        
			  	  	int x;
			  	  	int trang;
e2:			  	    PrintEstimateScore(listphu);
                    x = MouseEventToButtonBackOrNext(1200,1075,200,110,  50,20,490,420,   1100,1070,490,420);
			  	    if(x == 1)
			  	      {
			  	      	while(listphu.Head != NULL)
					          DelHead(listphu);
			  	      	textcolor(7);
						goto e;
						}
					if(x == 2)
					  {
e3:					  	textcolor(7);
                        PrintChartScore2(listphu);
					  	
					  	int y = MouseEventToButtonBackOrNext(1200,1075,200,110,  50,20,490,420,   1100,1070,490,420);
					  	
					  	if(y == 1)
					  	  {
					  	  	while(listphu.Head != NULL)
					          DelHead(listphu);
			  	      	    textcolor(7);
						    goto e;
						  }
						  
						if(y == 2)
						  {
						  	textcolor(7);
						  	PrintEmpty2();
							goto e4;
						  }
						
						if(y == 3)
						  {
						  	textcolor(7);
						  	PrintEmpty2();
							goto e2;
						  }
						   
					  }
					  
					  if(x == 3)
					  {

e4:					  	textcolor(7);
                        PrintChartScore(listphu);

					  	int y = MouseEventToButtonBackOrNext(1200,1075,200,110,  50,20,490,420,   1100,1070,490,420);
					  	
					  	if(y == 1)
					  	  {
					  	  	while(listphu.Head != NULL)
					          DelHead(listphu);
			  	      	    textcolor(7);
						    goto e;
						  }
						  
						if(y == 2)
						  {
						  	textcolor(7);
						  	PrintEmpty2();
							goto e2;
						  }
						
						if(y == 3)
						  {
						  	textcolor(7);
						  	PrintEmpty2();
							goto e3;
						  }
						   
					  }
			  	  	   
			  	  }
			    if(choose == 3)
			      {
			      	textcolor(7);
			  	    goto b;
			      }
			  	
		      }  	
			  
		     // Doi Mat khau  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
			if(luachon == 6)
			  {
			    
f:			  	int wrong = 0;
			  	int kt = 0;
					
			  	gotoxy(42,16);
			    cout<<"                                   ";
			    gotoxy(42,19);
			    cout<<"                                   ";
				gotoxy(42,22);
			    cout<<"                                   ";
			    
			  	string OldPass;
			  	string NewPass1;
			  	string NewPass2;
			  	PrintChangePass();
			  	
f1:             int x = MouseEventToSelectChangePass(695,130,420,290,   945,820,195,105,   945,820,490,400);
                
                if(x == 1)
                {
                
			    do{
				textcolor(221);
			      if(wrong == 3)
			        {
				    	textcolor(7);
						goto b;
					}
				  gotoxy(42,16);
			      cin>>OldPass;
			      if(OldPass != AdminPass)                       // Nhap mat khau cu
			        {
			        	ToMau(94,16,"! Nhap Sai (qua 3 lan se Huy)",4);
			        	textcolor(7);
			        	gotoxy(42,16);
			        	cout<<"                                     ";
			        	wrong++;
					}
				   else{
				   	ToMau(94,16,"                                 ",4);
				   	ToMau(94,16,"๛ Hoan thanh",10);
				   }
				} while(OldPass != AdminPass);
                
                
                wrong = 0;
                do{
				  textcolor(255);
                  if(wrong == 3)
                    {
				    	textcolor(7);
						goto b;
					}
                  gotoxy(42,19);
				  cin>>NewPass1;
				  if(NewPass1 == OldPass)                        // Nhap mat khau moi lan 1
				    {
				    	ToMau(94,19,"! Mat khau moi trung Mat khau cu",4);
				    	gotoxy(42,19);
				    	cout<<"                                      ";
				    	wrong++;
				    }
				   else{
				   	ToMau(94,19,"                                 ",4);
				   	ToMau(94,19,"๛ Hoan thanh",10);   
				   	textcolor(7);
				   }	
				} while(NewPass1 == OldPass);
				
				wrong = 0;
				do{
				  textcolor(255);
				  if(wrong == 3)
				    {
				    	textcolor(7);
						goto b;
					}
				     
				  gotoxy(42,22);
				  cin>>NewPass2;
				  if(NewPass2 != NewPass1)                                // Nhap mat khau moi lan 2
				    {
				    	ToMau(94,22,"! Mat khau nhap lai khong khop",4);
				    	gotoxy(42,22);
				    	cout<<"                                     ";
				    	wrong++;
					}
				  else{
				  	ToMau(94,22,"                                    ",4);
				  	ToMau(94,22,"๛ Hoan thanh",10);
				  	textcolor(7);
				  }
				} while(NewPass2 != NewPass1);
				
				kt = 1;		
				XoaConTro();
				goto f1;	
			    }
			    
			    if(x == 2)
			    {
			      	textcolor(7);
			      	goto b;
			    } 
				
				if(x == 3)
				{ 
				
					if(kt == 0)
					{
						ToMau(100,30,"Yeu Cau nhap mat khau!",12);
						Sleep(2000);
						textcolor(7);
						goto f;
					}
					else{
						ToMau(100,27,"                      ",0);
						int choose;

	                    choose = MouseEventToYesOrNoChangePass(475,330,635,535,    995,850,635,535);
	            
	                    if(choose == 1)
	                      {
	              	        ofstream fileOutput;
			  	            fileOutput.open(fileAdminPass,ios::out);
			  	            
			  	            AdminPass = NewPass2;
	              	        fileOutput<<Encrypt(NewPass2)<<"\n";
	              	        fileOutput<<Encrypt(AdminPass2);     
							       
	              	        fileOutput.close();
	              	        
	              	        textcolor(7);
                            goto b;
	                      }
		                else{
		         	        textcolor(7);
	  	                    goto f;
	                    } 
					}
				}    
			  }  
			  
			// Bao cao cua hoc vien          /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 7)
			  {
			  	PrintEmpty();
			  	HopThuDenAdmin Array[MessAmount+1];
			  	
                //cout<<MessAmount<<" tin nhan ";
                //getch();

                // nap du lieu vao mang Array
			  	HopThuDenCuaAdmin(DanhSach,Array);
			  	
			  	// In ra danh sach va gui lai
			  	PrintAllMessToAdminByArray(DanhSach,Array);
			  } 
			  
			// Gui thong bao cho hoc vien    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(luachon == 8)
			  {
			  	
			  	GuiThongBaoChoTatCaHocVien(DanhSach);
                textcolor(7);
			  }
			
			// Nhung thanh nien ngao ngo ////////////////////////////////////////////////////////////////////////////////////////	
			if(luachon == 9)   
			  {
			  	PrintEmpty();
			  	
			  	STRING A[100];
			  	ifstream fileIntput(fileFoolPeople);
			  	int i=1;
			  	
			  	// nap du lieu tu fileInput vao mang A[]
			  	while(!fileIntput.eof())
			  	{
			  	string str;
			  	
				getline(fileIntput,str);
				if(str != "" and str != " ")
				{
				A[i++].str = str;	
				}	
				}
				
				int max = i-1;
				
			  	fileIntput.close();
			  	
			  	GhiFileDSMTK(A,max);
			  	PrintTableOfFoolPeople(DanhSach,A,max);
			  }
			
			// Thoat  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
			if(luachon == 10)       
			  {
			  	PrintEmpty();
				
			    int choose;
			    choose = MouseEventToYesOrNoExit(470,350,370,300,    905,795,370,300);
			    
			    if(choose == 1)
			      {
			      	textcolor(7);
			      	goto a;
				  }	
				if(choose == 2)
				  	textcolor(7);		    
			  }
		 }
}

//==============================================================================================================================
//==============================================================================================================================


#endif
