#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(int argc,char *argv[])

{
	FILE *fp;
	if(argc<3)//When no command line arguments are passed
	{
	system("color f2");
	printf("                __________PU@CAMPUS__LOGIN_Link_Creater______________\n\n\n");
	char username[20];
	char ch[20];		
		printf("                          Enter username\n                      ");
		scanf("%s",&username);
		system("color 4f");
	 	printf("                           Enter password\n                      ");
		scanf("%s",&ch);
		fp=fopen("Login.vbs","w"); //Main file that acually login.
		fprintf(fp,"if PingSite(\"www.google.com\") Then\n dim xHttp: Set xHttp = createobject(\"MSXML2.ServerXMLHTTP\")\nxHttp.Open \"GET\", \"https://securelogin.pu.ac.in/cgi-bin/login?cmd=login?q=&username=%s&password=%s\", False\nxHttp.setOption 2, 13056\nxHttp.Send\n\n",username,ch);	     
}
else //when command line arguments are used  <<
{
		fp=fopen("Login.vbs","w");
fprintf(fp,"if PingSite(\"www.google.com\") Then\ndim xHttp: Set xHttp = createobject(\"MSXML2.ServerXMLHTTP\")\nxHttp.Open \"GET\", \"https://securelogin.pu.ac.in/cgi-bin/login?cmd=login?q=&username=%s&password=%s\", False\nxHttp.setOption 2, 13056\nxHttp.Send\n\n",argv[1],argv[2]);	     
}

	fclose(fp);
	FILE *fs;
	fs=fopen("Loginchecker.vbs","r");
		FILE *ft;
		ft=fopen("Login.vbs","a");
		char cha;
		while ( 1 )
{
cha = fgetc ( fs ) ;
if ( cha == EOF )
break ;
else
fputc ( cha, ft ) ;
}
system("shortcutter.bat");//that creates shortcut on Desktop having different their individual Shortcut keys

}
