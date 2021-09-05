#include <iostream>

#include <string.h>

#include <math.h>

#include <stdlib.h>

#include <conio.h>

#include <stdio.h>

#include <winbgim.h>

char tecla;
int gd=DETECT,gm=DETECT,h,x=0,xx=0,yy=0,malone=1,post=0,fat=0,fat1=0,fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0,fat8=0,salir=0,n=1,y=0;
int ancho=800,alto=800;
void menu();
void contenidoprueba();
char *ingresar(int x, int y);
int BinDec(char binario[]);
void binadec();
void decabin();
char* DecBin(int decimal);
void hexadec();
int HexDec(char hexadecimal[]);
void decahex();
char* DecHex(int decimal);
void hexabin();
char* hexbin(char hexadecimal[]);
void binahex();
char* binhex(char binario[]);
void bcdadec();
char* BcdDec(char bcd[]);
void decaascii();
char* DecAsc(int decimal);
void decabcd();
char* DecBcd(char bcd[]);
void ascadec();
int AscDec(char ascii[]);
void mouse();
void teclas();



void salirr(){

	closegraph();

}

void returnmenu(){

	int y=0,x=0; 


   
	
    
     
	 setcolor(15);

	 rectangle(180,320,640,420);

	 

	 settextstyle(10,0,2);

	 outtextxy(200,340,"aa. Volver al menu");

	 outtextxy(200,380,"bb. Salir");

	 tecla=getch();
      
	 

	 if(tecla==97){
       
	 	setcolor(8);
        y=0;
		rectangle(190,330+y,630,370+y);
		while(!kbhit());
		menu();
		

          
          
	 }

	 if(tecla==98)

	 {
     
        y=40;
	 	setcolor(8);
		rectangle(190,330+y,630,370+y);
		while(!kbhit());
		salirr();


	 }


}

void contenidoprueba()
{
	
setcolor(15);	

 settextstyle(10,0,3);
 
void binadec();
	
}



void new_windows(char title[]){

 cleardevice();

 setcolor(15);

 rectangle(40,20,800-40,550);

 settextstyle(10,0,3);

 outtextxy(170,30,title);


 setcolor(0);

 settextstyle(8,0,2);

}

void menu()
{

setcolor(15);
setbkcolor(0);
do{
	h=0,malone=1;
do
{
if(n==1)
{cleardevice();
 n=0;} 	
setcolor(8);
 rectangle(40,95,ancho-35,alto-200);
 setcolor(8);
 settextstyle(10,0,5);
setcolor(6);
 outtextxy(35,30,"CONVERSION DE UNIDADES");
 
 settextstyle(10,0,3);
 setcolor(15);
 outtextxy(200,100,"a. BINARIO A DECIMAL");
setcolor(2);
 outtextxy(200,140,"b. DECIMAL A BINARIO");
setcolor(4);
 outtextxy(200,180,"c. HEXADECIMAL A DECIMAL");
setcolor(8);
 outtextxy(200,220,"d. DECIMAL A HEXADECIMAL");
setcolor(9);
 outtextxy(200,260,"e. HEXADECIMAL A BINARIO");
setcolor(10);
 outtextxy(200,300,"f. BINARIO A HEXADECIMA");
setcolor(12);
 outtextxy(200,340,"g. BCD A DECIMAL");
 setcolor(10);
  outtextxy(200,380,"h. DECIMAL A ASCII");
   outtextxy(200,420,"i. DECIMAL A BCD");
      outtextxy(200,460,"j. ASCII A DECIMAL");;
            outtextxy(200,500,"q. salir");
 rectangle(150,100+h,660,130+h);
if(kbhit())
{
 tecla=getch(); 
 n=1;	
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
    n=1;
}
else
{
	xx=0;
	yy=0;
}
  teclas();
  mouse();
 
 tecla=0;
}
while(x==0);
x=0;
if(h==0)
{	cleardevice();
   do{


	new_windows("BINARIO A DECIMAL");

 
    binadec();
	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}

if(h==40)
{	cleardevice();
do{
	

	new_windows("DECIMAL A BINARIO");

    decabin();

	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;	
}

if(h==80)
{	cleardevice();
 do{
 	
	new_windows("HEXADECIMAL A DECIMAL");

    hexadec();

	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==120)
{	cleardevice();
 do{
 	
	new_windows("DECIMAL A HEXADECIMAL");

    decahex();
	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==160)
{	cleardevice();
 do{
 	
	new_windows("HEXADECIMAL A BINARIO");

    hexabin();

	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==200)
{	cleardevice();
 do{
 	
	new_windows("BINARIO A HEXADECIMAL");
    binahex();


	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==240)
{	cleardevice();
 do{
 	
	new_windows("BCD A DECIMAL");
    bcdadec();


	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==280)
{	cleardevice();
 do{
 	
	new_windows("DECIMAL A ASCII");
    decaascii();


	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==320)
{	cleardevice();
 do{
 	
	new_windows("DECIMAL A BCD");
    decabcd();


	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==360)
{	cleardevice();
 do{
 	
	new_windows("ASCII A DECIMAL");
    ascadec();


	returnmenu();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}
if(h==400)
{	cleardevice();
 do{
 	
	salirr();
	
if(kbhit())tecla=getch();
else
{
	tecla=0;
}
if(ismouseclick(WM_LBUTTONDOWN))
{
	getmouseclick(WM_LBUTTONDOWN,xx,yy);
    clearmouseclick(WM_LBUTTONDOWN);
}
else
{
	xx=0;
	yy=0;
}	

}while(tecla==0&&xx==0&&yy==0);
n=1;
}

}while(salir==0);
}





int main(){
	
initwindow(ancho,alto);

menu();

	
}

char *ingresar(int x, int y){
	int len,f;

	char ingresar1[500];
	char tecla;
	strcpy(ingresar1,"");
	
	while(tecla!=13)
	{
	      tecla=getch();
	
			if(tecla!=13&&tecla!=8)
			{
				sprintf(ingresar1,"%s%c",ingresar1,tecla);
				
				outtextxy(x,y,ingresar1);	
			}
				if(tecla==8){

				ingresar1[(strlen(ingresar1)-1)]=' ';

				outtextxy(x,y,ingresar1);

				ingresar1[(strlen(ingresar1)-1)]='\0';

				outtextxy(x,y,ingresar1);

			}	
	}
	return ingresar1;
}

int BinDec(char binario[]){
	int i, pot=0, decimal=0;
	
	if(strlen(binario)==0){
		return -1;
	}
	
	for(i=0;i<strlen(binario);i++){
		if(binario[i]!='0' && binario[i]!='1'){
			return -1;
		}
	}
	
	for(i=strlen(binario)-1;i>=0;i--){
		if(binario[i]=='1'){
			decimal=decimal+pow(2, pot);
		}
		pot++;
	}
	return decimal;
}
void binadec()
{
	char num[200];
int res;
char res1[200];
lab1:
setcolor(15);
		settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE BINARIO: ");
	strcpy(num,ingresar(200,130)); 

    res=BinDec(num);
    
 

	    if (res==-1)
    {
    	outtextxy(100,230,"ERROR INGRESE NUEVAMENTE SU,"); 
    	outtextxy(100,250,"BINARIO"); 
    	getch();
    	cleardevice();
    	new_windows("BINARIO A DECIMAL");
    	goto lab1;
	}
	else
	{
	
    itoa (res,res1,10);
    outtextxy(200,230,"RESULTADO: "); 
	outtextxy(400,230,res1); 
	


	
	
	getch();
}
}
void decabin()
{
char num[200];
char *res;
setcolor(15);
settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE DECIMAL");
	strcpy(num,ingresar(200,130)); 

	int i = atoi(num);
	
    res=DecBin(i);
    outtextxy(200,230,"RESULTADO:" );
	outtextxy(400,230,res); 
	

	
	
	getch();

	
}
char* DecBin(int decimal){
	static char binario[100];
	
	if(decimal<0){
		strcat(binario, "Dato incorrecto");
		return binario;
	}
	
	if(decimal==0){
		strcat(binario, "0");
	}
	
	while(decimal>0){
		if(decimal%2==0){
			strcat(binario, "0");
		}
		else{
			strcat(binario, "1");
		}
		decimal=decimal/2;
	}
	
	strrev(binario);
	return binario;
}
void hexadec()
{
char num[200];
int res;
char res1[200];
lab1:
	setcolor(15);
		settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE HEXADECIMAL:");
	strcpy(num,ingresar(200,130)); 

	
	
    res=HexDec(num);
    if (res==-1)
    {
    	outtextxy(100,230,"INGRESE NUEVAMENTE SU HEXADECIMAL,"); 
    	outtextxy(100,250,"RECUERDA USAR MAYUSCULAS"); 
    	getch();
    	cleardevice();
    	new_windows("HEXADECIMAL A DECIMAL");
    	goto lab1;
	}
	else
	{
	
    itoa (res,res1,10);
    outtextxy(200,230,"RESULTADO: "); 
	outtextxy(400,230,res1); 
	

}
	
	getch();
}

int HexDec(char hexadecimal[]){
	int decimal=0, pot=0, i;
	
	if(strlen(hexadecimal)==0){
		return -1;
	}
	
	for(i=0;i<strlen(hexadecimal);i++){
		if(hexadecimal[i]<48 || (hexadecimal[i]>57 && hexadecimal[i]<65) || hexadecimal[i]>70){
			return -1;
		}
	}
	
	for(i=strlen(hexadecimal)-1;i>=0;i--){
		if(hexadecimal[i]=='1'){
			decimal=decimal+1*pow(16,pot);
		}
		else if(hexadecimal[i]=='2'){
			decimal=decimal+2*pow(16, pot);
		}
		else if(hexadecimal[i]=='3'){
			decimal=decimal+3*pow(16, pot);
		}
		else if(hexadecimal[i]=='4'){
			decimal=decimal+4*pow(16, pot);
		}
		else if(hexadecimal[i]=='5'){
			decimal=decimal+5*pow(16, pot);
		}
		else if(hexadecimal[i]=='6'){
			decimal=decimal+6*pow(16, pot);
		}
		else if(hexadecimal[i]=='7'){
			decimal=decimal+7*pow(16, pot);
		}
		else if(hexadecimal[i]=='8'){
			decimal=decimal+8*pow(16, pot);
		}
		else if(hexadecimal[i]=='9'){
			decimal=decimal+9*pow(16, pot);
		}
		else if(hexadecimal[i]=='A'){
			decimal=decimal+10*pow(16, pot);
		}
		else if(hexadecimal[i]=='B'){
			decimal=decimal+11*pow(16, pot);
		}
		else if(hexadecimal[i]=='C'){
			decimal=decimal+12*pow(16, pot);
		}
		else if(hexadecimal[i]=='D'){
			decimal=decimal+13*pow(16, pot);
		}
		else if(hexadecimal[i]=='E'){
			decimal=decimal+14*pow(16, pot);
		}
		else if(hexadecimal[i]=='F'){
			decimal=decimal+15*pow(16, pot);
		}
		pot++;
	}
	return decimal;
}

void decahex()
{
	char num[200];
    char *res;
    setcolor(15);
    settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE DECIMAL");
	strcpy(num,ingresar(200,130)); 
	int i = atoi(num);
    res=DecHex(i);
    outtextxy(200,230,"RESULTADO: "); 
    outtextxy(400,230,res); 
   
	
	getch();
}

char* DecHex(int decimal){
	static char hexadecimal[100];
	
	if(decimal<0){
		strcat(hexadecimal, "Dato incorrecto");
		return hexadecimal;
	}
	
	if(decimal==0){
		strcat(hexadecimal, "0");
	}
	
	while(decimal>0){
		if(decimal%16==0){
			strcat(hexadecimal, "0");
		}
		else if(decimal%16==1){
			strcat(hexadecimal, "1");
		}
		else if(decimal%16==2){
			strcat(hexadecimal, "2");
		}
		else if(decimal%16==3){
			strcat(hexadecimal, "3");
		}
		else if(decimal%16==4){
			strcat(hexadecimal, "4");
		}
		else if(decimal%16==5){
			strcat(hexadecimal, "5");
		}
		else if(decimal%16==6){
			strcat(hexadecimal, "6");
		}
		else if(decimal%16==7){
			strcat(hexadecimal, "7");
		}
		else if(decimal%16==8){
			strcat(hexadecimal, "8");
		}
		else if(decimal%16==9){
			strcat(hexadecimal, "9");
		}
		else if(decimal%16==10){
			strcat(hexadecimal, "A");
		}
		else if(decimal%16==11){
			strcat(hexadecimal, "B");
		}
		else if(decimal%16==12){
			strcat(hexadecimal, "C");
		}
		else if(decimal%16==13){
			strcat(hexadecimal, "D");
		}
		else if(decimal%16==14){
			strcat(hexadecimal, "E");
		}
		else if(decimal%16==15){
			strcat(hexadecimal, "F");
		}
		decimal=decimal/16;
	}
	
	strrev(hexadecimal);
	return hexadecimal;
}
void hexabin()
{
char num[200];
char *res;
    setcolor(15);
	settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE HEXADECIMAL");
	strcpy(num,ingresar(200,130)); 
    res=hexbin(num);
    outtextxy(200,230,"RESULTADO: ");
    outtextxy(400,230,res);
   
	
	getch();
	
}
char* hexbin(char hexadecimal[]){
	static char binario[100];
	int i;
	
	if(strlen(hexadecimal)==0){
		strcat(binario, "Dato incorrecto");
		return binario;
	}
	
	for(i=0;i<strlen(hexadecimal);i++){
		if(hexadecimal[i]<48 || (hexadecimal[i]>57 && hexadecimal[i]<65) || hexadecimal[i]>70){
			strcat(binario, "Dato incorrecto");
			return binario;
		}
	}
	
	for(i=0;i<strlen(hexadecimal);i++){
		if(hexadecimal[i]=='0'){
			strcat(binario,"0000");
		}
		else if(hexadecimal[i]=='1'){
			strcat(binario,"0001");
		}
		else if(hexadecimal[i]=='2'){
			strcat(binario,"0010");
		}
		else if(hexadecimal[i]=='3'){
			strcat(binario,"0011");
		}
		else if(hexadecimal[i]=='4'){
			strcat(binario,"0100");
		}
		else if(hexadecimal[i]=='5'){
			strcat(binario,"0101");
		}
		else if(hexadecimal[i]=='6'){
			strcat(binario,"0110");
		}
		else if(hexadecimal[i]=='7'){
			strcat(binario,"0111");
		}
		else if(hexadecimal[i]=='8'){
			strcat(binario,"1000");
		}
		else if(hexadecimal[i]=='9'){
			strcat(binario,"1001");
		}
		else if(hexadecimal[i]=='A'){
			strcat(binario,"1010");
		}
		else if(hexadecimal[i]=='B'){
			strcat(binario,"1011");
		}
		else if(hexadecimal[i]=='C'){
			strcat(binario,"1100");
		}
		else if(hexadecimal[i]=='D'){
			strcat(binario,"1101");
		}
		else if(hexadecimal[i]=='E'){
			strcat(binario,"1110");
		}
		else if(hexadecimal[i]=='F'){
			strcat(binario,"1111");
		}
	}
	return binario;
}
void binahex()
{
	
	char num[200];
char *res;
setcolor(15);
	settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE UN BINARIO");
	strcpy(num,ingresar(200,130)); 
    res=binhex(num);
    outtextxy(200,230,"RESULTADO: ");
    outtextxy(400,230,res);
   
	
	getch();
}
char* binhex(char binario[]){
	int i;
	char bit[5]={};
	static char hexadecimal[100]={};
	
	if(strlen(binario)==0){
		strcat(hexadecimal, "Dato incorrecto");
		return hexadecimal;
	}
	
	for(i=0;i<strlen(binario);i++){
		if(binario[i]!='0' && binario[i]!='1'){
			strcat(hexadecimal, "Dato incorrecto");
			return hexadecimal;
		}
	}
	
	if(strlen(binario)%4==1){
		strrev(binario);
		strcat(binario, "000");
		strrev(binario);
	}
	else if(strlen(binario)%4==2){
		strrev(binario);
		strcat(binario, "00");
		strrev(binario);
	}
	else if(strlen(binario)%4==3){
		strrev(binario);
		strcat(binario, "0");
		strrev(binario);
	}
	
	for(i=0;i<strlen(binario);i=i+4){
		bit[0]=binario[i];
		bit[1]=binario[i+1];
		bit[2]=binario[i+2];
		bit[3]=binario[i+3];
		
		if(strncmp(bit, "0000", 4)==0){
			strcat(hexadecimal, "0");
		}
		else if(strncmp(bit, "0001", 4)==0){
			strcat(hexadecimal, "1");
		}
		else if(strncmp(bit, "0010", 4)==0){
			strcat(hexadecimal, "2");
		}
		else if(strncmp(bit, "0011", 4)==0){
			strcat(hexadecimal, "3");
		}
		else if(strncmp(bit, "0100", 4)==0){
			strcat(hexadecimal, "4");
		}
		else if(strncmp(bit, "0101", 4)==0){
			strcat(hexadecimal, "5");
		}
		else if(strncmp(bit, "0110", 4)==0){
			strcat(hexadecimal, "6");
		}
		else if(strncmp(bit, "0111", 4)==0){
			strcat(hexadecimal, "7");
		}
		else if(strncmp(bit, "1000", 4)==0){
			strcat(hexadecimal, "8");
		}
		else if(strncmp(bit, "1001", 4)==0){
			strcat(hexadecimal, "9");
		}
		else if(strncmp(bit, "1010", 4)==0){
			strcat(hexadecimal, "A");
		}
		else if(strncmp(bit, "1011", 4)==0){
			strcat(hexadecimal, "B");
		}
		else if(strncmp(bit, "1100", 4)==0){
			strcat(hexadecimal, "C");
		}
		else if(strncmp(bit, "1101", 4)==0){
			strcat(hexadecimal, "D");
		}
		else if(strncmp(bit, "1110", 4)==0){
			strcat(hexadecimal, "E");
		}
		else if(strncmp(bit, "1111", 4)==0){
			strcat(hexadecimal, "F");
		}
	}
	return hexadecimal;
}
void bcdadec()
{
	char num[200];
char *res;

setcolor(15);
settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE SU BCD");
	strcpy(num,ingresar(200,130)); 
    res=BcdDec(num);
    outtextxy(200,230,"RESULTADO: ");
    outtextxy(400,230,res);
   
	
	getch();
}

char* BcdDec(char bcd[]){
	int num, i;
	char bits[5];
	static char decimal[100];
 decimal[100]=0;
	if(strlen(bcd)%4==0 && strlen(bcd)>=4){
		for(i=0;i<strlen(bcd);i++){
			if(bcd[i]!='0' && bcd[i]!='1'){
				strcat(decimal, "Dato incorrecto");
				return decimal;
			}
		}
		for(i=0;i<strlen(bcd);i=i+4){
			bits[0]=bcd[i];
			bits[1]=bcd[i+1];
			bits[2]=bcd[i+2];
			bits[3]=bcd[i+3];
			num= atoi(bits);
			if(num>1001){
				strcat(decimal, "Dato incorrecto");
				return decimal;
			}
		}
	}
	else{
		strcat(decimal, "Dato incorrecto");
		return decimal;
	}
	
	for(i=0;i<strlen(bcd);i=i+4){
		bits[0]=bcd[i];
		bits[1]=bcd[i+1];
		bits[2]=bcd[i+2];
		bits[3]=bcd[i+3];
		num= atoi(bits);
		
		if(num==0){
			strcat(decimal, "0");
		}
		else if(num==1){
			strcat(decimal, "1");
		}
		else if(num==10){
			strcat(decimal, "2");
		}
		else if(num==11){
			strcat(decimal, "3");
		}
		else if(num==100){
			strcat(decimal, "4");
		}
		else if(num==101){
			strcat(decimal, "5");
		}
		else if(num==110){
			strcat(decimal, "6");
		}
		else if(num==111){
			strcat(decimal, "7");
		}
		else if(num==1000){
			strcat(decimal, "8");
		}
		else if(num==1001){
			strcat(decimal, "9");
		}
	}
	return decimal;
}

void decaascii()
{
	char num[200];
char *res;
setcolor(15);
settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE SU DECIMAL");
	strcpy(num,ingresar(200,130)); 
	int i = atoi(num);
    res=DecAsc(i);
    outtextxy(200,230,"RESULTADO: ");
    outtextxy(400,230,res);
   
	
	getch();

}
char* DecAsc(int decimal){
	static char ascii[100];
	
	if(decimal<32 || decimal>255){
		strcat(ascii, "Dato incorrecto");
		return ascii;
	}
	ascii[0]=decimal;
	return ascii;
}
void decabcd()
{
	char num[200];
char *res;
setcolor(15);
	settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE SU BCD");
	strcpy(num,ingresar(200,130)); 
    res=BcdDec(num);
    outtextxy(200,230,"RESULTADO: ");
    outtextxy(400,230,res);
   
	
	getch();
}

char* DecBcd(char bcd[]){
	int num, i;
	char bits[5];
	static char decimal[100];
    decimal[100]=0;
	if(strlen(bcd)%4==0 && strlen(bcd)>=4){
		for(i=0;i<strlen(bcd);i++){
			if(bcd[i]!='0' && bcd[i]!='1'){
				strcat(decimal, "Dato incorrecto");
				return decimal;
			}
		}
		for(i=0;i<strlen(bcd);i=i+4){
			bits[0]=bcd[i];
			bits[1]=bcd[i+1];
			bits[2]=bcd[i+2];
			bits[3]=bcd[i+3];
			num= atoi(bits);
			if(num>1001){
				strcat(decimal, "Dato incorrecto");
				return decimal;
			}
		}
	}
	else{
		strcat(decimal, "Dato incorrecto");
		return decimal;
	}
	
	for(i=0;i<strlen(bcd);i=i+4){
		bits[0]=bcd[i];
		bits[1]=bcd[i+1];
		bits[2]=bcd[i+2];
		bits[3]=bcd[i+3];
		num= atoi(bits);
		
		if(num==0){
			strcat(decimal, "0");
		}
		else if(num==1){
			strcat(decimal, "1");
		}
		else if(num==10){
			strcat(decimal, "2");
		}
		else if(num==11){
			strcat(decimal, "3");
		}
		else if(num==100){
			strcat(decimal, "4");
		}
		else if(num==101){
			strcat(decimal, "5");
		}
		else if(num==110){
			strcat(decimal, "6");
		}
		else if(num==111){
			strcat(decimal, "7");
		}
		else if(num==1000){
			strcat(decimal, "8");
		}
		else if(num==1001){
			strcat(decimal, "9");
		}
	}
	return decimal;
}
void ascadec()
{
	char num[200];
int res;
char res1[200];
lab1:
setcolor(15);
settextstyle(4,0,1);
	outtextxy(200,100,"INGRESE SU ASCII O TECLA");
	strcpy(num,ingresar(200,130)); 
    res=AscDec(num);
    	if(res==-1)
	{
	outtextxy(200,230,"ERROR REINGRESE SU ASCII");
	getch();
	cleardevice();
	new_windows("ASCII A DECIMAL");
	goto lab1;	
	}
	else
	{
		
    itoa (res,res1,10);
    outtextxy(200,230,"RESULTADO: ");
    outtextxy(400,230,res1);
	
	}
	getch();
}
			
int AscDec(char ascii[]){
	int decimal;
	
	if(strlen(ascii)!=1){
		return -1;
	}
	decimal=(int)ascii[0];
	return decimal;
}

void teclas()
{
	if(tecla==80)
 {
 if(h<400)
 h+=40;
 }
if(tecla==72)
 {
 if(h>0)
 h-=40;
 }
if(tecla==13)
 {
 x=1;
 }
 if(tecla==27)
 {
 salir=1;
 }
}

void mouse()
{
if(50<yy&&yy<120&&100<=xx&&xx<700)
 {
 	fat=0;
 	post=0;
 	fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0,fat8=0;
 	malone=malone+1;
 	h=0;
 	if(malone==2)
 	{  malone=0;
 		x=1;
	 }
 }
 if(130<yy&&yy<180&&100<=xx&&xx<=700)
 {  
    malone=0;
    fat=0;
    fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0,fat8=0;
 	h=40;
 	post=post+1;
 	if(post==2)
 	{    post=0;
 		 x=1;
	 }
 }
 if(190<yy&&yy<220&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=80;
 	fat=fat+1;
 	fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0,fat8=0;
 	if(fat==2)
 	{
 		fat=0;
 		x=1;
	}
 }	
 
  if(220<yy&&yy<260&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=120;
 	fat1=fat1+1;
 	fat=0,fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0,fat8=0;
 	if(fat1==2)
 	{
 		fat1=0;
 		x=1;
	}
 }	
  if(260<yy&&yy<300&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=160;
 	fat2=fat2+1;
 	fat=0,fat1=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0,fat8=0;
 	if(fat2==2)
 	{
 		fat2=0;
 		x=1;
	}
 }	
  if(300<yy&&yy<340&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=200;
 	fat3=fat3+1;
 	if(fat3==2)
 	{
 		fat3=0;
 		x=1;
	}
 }	
  if(340<yy&&yy<380&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=240;
 	fat4=fat4+1;
 	fat=0,fat1=0,fat2=0,fat3=0,fat5=0,fat6=0,fat7=0,fat8=0;
 	if(fat4==2)
 	{
 		fat4=0;
 		x=1;
	}
 }	
  if(380<yy&&yy<420&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=280;
 	fat=0,fat1=0,fat2=0,fat3=0,fat4=0,fat6=0,fat7=0,fat8=0;
 	fat5=fat5+1;
 	if(fat5==2)
 	{
 		fat5=0;
 		x=1;
	}
 }	
  if(420<yy&&yy<460&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	h=320;
 	fat=0,fat1=0,fat2=0,fat3=0,fat4=0,fat5=0,fat7=0,fat8=0;
 	fat6=fat6+1;
 	if(fat6==2)
 	{
 		fat6=0;
 		x=1;
	}
 }	
  if(460<yy&&yy<500&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	fat=0,fat1=0,fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat8=0;
 	h=360;
 	fat7=fat7+1;
 	if(fat7==2)
 	{
 		fat7=0;
 		x=1;
	}
 }	
  if(500<yy&&yy<540&&100<=xx&&xx<=700)  
 {
 	malone=0;
 	post=0;
 	fat=0,fat1=0,fat2=0,fat3=0,fat4=0,fat5=0,fat6=0,fat7=0;
 	h=400;
 	fat8=fat8+1;
 	if(fat8==2)
 	{
 		fat8=0;
 		x=1;
	}
 }	
 
	
}
