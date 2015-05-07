// starter.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <tchar.h>
#include <windows.h>
#include <windows.h>
#include <tchar.h> 
#include <stdio.h>
#include <strsafe.h>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <tchar.h> 
#include <stdio.h>
#include <strsafe.h>
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <windows.h>
#include <tchar.h> 
#include <stdio.h>
#include <strsafe.h>

#include <iostream>
#include <stdlib.h>
#include <string>



#include "comutil.h"
#pragma comment(lib, "User32.lib")

using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{
	 
	home:
	
	string command;
	string Main;
	string Sub;
	string Data;
	int dotcount = 0;
	int temp;
	int pos = 0;
	int start=0;
	cout<<"Vul je command in"<<endl;
	
	bool go = true;
	TCHAR neww[MAX_PATH]={99,58,92,70,97,115,116,116,97,115,107};	
	while (go)
	{
		if (start==0)
		{
			temp=0;
			start = 1;
			goto starts;
		}
		else {
		goto startss;
			
		}

		startss:
		temp = _getch() ;
		command = command + char(temp);
		

		starts:
		system("cls");
		WIN32_FIND_DATA ffd;
		LARGE_INTEGER filesize;
		TCHAR szDir[MAX_PATH];
	   
		size_t length_of_arg;
		HANDLE hFind = INVALID_HANDLE_VALUE;
		DWORD dwError=0;
		int found=0;
			TCHAR latest[MAX_PATH];
		if(argc != 2)
		{
		  _tprintf(TEXT("\nUsage: %s <directory name>\n"), argv[0]);
		  //return (-1);
		}
   
		StringCchLength(argv[1], MAX_PATH, &length_of_arg);

		if (length_of_arg > (MAX_PATH - 3))
		{
		  _tprintf(TEXT("\nDirectory path is too long.\n"));
		  //return -1;
      
		}

	   cout<<"FastTask"<<endl << "___________________________\n" << endl;
	 
	 
	  // StringCchCopy(neww, MAX_PATH, argv[1]);
	   
		

	   StringCchCopy(szDir, MAX_PATH, neww);
	   StringCchCat(szDir, MAX_PATH, TEXT("\\*"));

	   hFind = FindFirstFile(szDir, &ffd);

	   if (INVALID_HANDLE_VALUE == hFind) 
	   {
		 cout <<"FindFirstFile"<<endl;
		 return -1;
	   } 
   
	   



	   do
	   {
		  if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		  {
			  std::wstring widestr;
			  if (command != "")
			  {
				widestr = std::wstring(command.begin(), command.end()-1);
			  }
			  
			  WCHAR* fn = ffd.cFileName;
			  WCHAR* fnn =L"";
			  if (wcsstr(fn,L".") != 0)
			  {} else if (wcsstr(fn,widestr.c_str()) != 0 )
				{
					widestr = std::wstring(Main.begin(), Main.end());

					if ( Main !="" && wcsstr(fn,widestr.c_str()) != 0)
					{
						found++;
						
						
						
					}StringCchCopy(latest, MAX_PATH, ffd.cFileName);
				_tprintf(TEXT("  %s   \n"), ffd.cFileName);
				
				}
				        
		  }
		  	   
	   }
	   while (FindNextFile(hFind, &ffd) != 0);
 
	   dwError = GetLastError();
	   if (dwError != ERROR_NO_MORE_FILES) 
	   {
		  cout <<(TEXT("FindFirstFile"));
	   }

	   FindClose(hFind);

	   if (temp == 9)
		{
			if (pos == 0)
			{
				
				Main = command;
				//TCHAR* path =  argv[1] +  Main;
				//Main = "C:\fasttask\bestand";

				std::wstring stemp = std::wstring(Main.begin(), Main.end());
				LPCWSTR sw = stemp.c_str();
				//if (found = 1)
				//{
					char ch[260];
					char DefChar = ' ';
					WideCharToMultiByte(CP_ACP,0,latest,-1, ch,260,&DefChar, NULL);
					Main = ch;
					
					for (int i = 0; i < (int)Main.length(); i++)
					{
						if (Main.at(i) != ' ')
						{
						int newww = i +12;
						neww[11] = char(92);
						neww[newww] = Main.at(i);
						}
					}

				//}
				
					start = 0;
				cout<<"vul je subcommand in"<<endl;
				pos++;
			} else 	if (pos == 1)
			{
				Data = command;
				
				//TCHAR* path =  argv[1] +  Main;
				//Main = "C:\fasttask\bestand";

				std::wstring stemp = std::wstring(Data.begin(), Data.end());
				LPCWSTR sw = stemp.c_str();
				//if (found = 1)
				//{
					char ch[260];
					char DefChar = '0';
					WideCharToMultiByte(CP_ACP,0,latest,-1, ch,260,&DefChar, NULL);
					Data = ch;
					
					for (int i = 0; i < (int)Data.length(); i++)
					{
						if (Data.at(i) != '0')
						{
						int newww = i +20;
						neww[19] = char(92);
						neww[newww] = Data.at(i);
						}
					}

					


					start = 0;
				cout<<"vul je data in"<<endl;	
				pos++;
			} else if (pos ==2)
			{
				Sub = command;
			
				
				//TCHAR* path =  argv[1] +  Main;
				//Main = "C:\fasttask\bestand";

				std::wstring stemp = std::wstring(Sub.begin(), Sub.end());
				LPCWSTR sw = stemp.c_str();
				//if (found = 1)
				//{
					char ch[260];
					char DefChar = '0';
					WideCharToMultiByte(CP_ACP,0,latest,-1, ch,260,&DefChar, NULL);
					Sub = ch;
					
					for (int i = 0; i < (int)Sub.length(); i++)
					{
						if (Sub.at(i) != '0')
						{
						int newww = i +20;
						neww[19] = char(92);
						neww[newww] = Sub.at(i);
						}
					}
					
				go = false;
			
			
			} command = "";

	   }else if(temp==27){
				return 0 ;
	   } else if (temp==8)
	   {
		   if (command.length() > 1)
		   {
			command = command.erase(command.length()-2,2);
		   
		   } else if (command.length()>0)
		   {
			   command = command.erase(command.length()-1,1);
		   }
		   
		   temp = 0;
	   }

		cout<< command;
	  
		

		
		
		
	}
	cout<<Main<<Data<<Sub<<endl;
	
	//string comm = "cd c:\ " ;
		//comm = comm + "c:\fasttask" + char(92) + Main + char(92) + Data + char(92)+ Sub + char(92) +Sub ;
	//system("cd ..");
	string hme= "C:\\FastTask";
	string comm  =  hme + char(92) + Main + char(92) + Data + char(92)+ Sub + char(92) +Sub ;
	system(comm.c_str());
	LPCWSTR a;
	std::string s = comm;
	a = (LPCWSTR)s.c_str();
	ShellExecute(0, L"open", a,L"", L"C:\\", SW_HIDE);
	goto home;
	return 0;
}


