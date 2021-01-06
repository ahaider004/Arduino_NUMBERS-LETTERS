
//We always have to include the library
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to LOAD(CS)
 pin 10 is connected to the CLK 
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,10,11,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime1=1200;
unsigned long delaytime2=500;
unsigned long delaytime3=5000;
unsigned long delaytime4=1000;
void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,15);
  /* and clear the display */
  lc.clearDisplay(0);
}

/*
 This method will display the characters 
 (you need at least 5x7 leds to see the whole chars)
  * ALL THE UPPERCASE LETTERS: ONLY USE 5x8 MATRIX OUT OF THE 8x8 MATRIX MODULE. 
  * THE SIZE CAN BE INCREASED ON DECREASED BASED ON THE SIZE OF THE CHAR ARRAY DECLARED AS BYTE
*/

  void All_UPPER_CASE_LETTERS(){
    
  byte A[5]={B01111110,
             B10001000,
             B10001000,
             B10001000,
             B01111110};

  byte B[5]={B00110110,
             B01001001,
             B01001001,
             B01000001,
             B01111111}; 

  byte C[5]={B00000000,
             B01000010,
             B01000010,
             B01000010,
             B00111100}; 

  byte D[5]={B00000000,
             B00111100,
             B01000010,
             B01000010,
             B01111110};  

  byte E[5]={B01000001,
             B01000001,
             B01001001,
             B01001001,
             B01111111};
               
  byte F[5]={B01000000,
             B01000000,
             B01001000,
             B01001000,
             B01111111};

  byte G[5]={B10001111,
             B10001001,
             B10001101,
             B10000001,
             B11111111};

  byte H[5]={B01111111,
             B00001000,
             B00001000,
             B00001000,
             B01111111}; 


  byte I[5]={B10000001,
             B10000001,
             B11111111,
             B10000001,
             B10000001}; 
                       
  byte J[5]={B01000000,
             B01111111,
             B01000001,
             B01000001,
             B00000111};  


byte K[5]=  {B00000000,
             B00100010,
             B00010100,
             B00001000,
             B01111111};


byte L[5]=  {B00000001,
             B00000001,
             B00000001,
             B00000001,
             B11111111};

byte M[5]=  {B01111110,
             B00100000,
             B00010000,
             B00100000,
             B01111110};   

 byte N[5]= {B01111110,
             B00001000,
             B00010000,
             B00100000,
             B01111110};   


             

byte O[5]=  {B00111000,
             B01000100,
             B01000100,
             B01000100,
             B00111000};
 
byte P[5]=  {B00110000,
             B01001000,
             B01001000,
             B01001000,
             B01111111};

byte Q[5]=  {B00000010,
             B00111100,
             B01001100,
             B01000100,
             B00111000};          

byte R[5]=  {B00000000,
             B00110001,
             B01001010,
             B01001100,
             B01111111};



byte S[5]=  {B00000000,
             B01100110,
             B10001001,
             B10010001,
             B01100110};


byte T[5]=  {B00100000,
             B00100000,
             B00111111,
             B00100000,
             B00100000};


byte U[5]=  {B01111100,
             B00000010,
             B00000010,
             B00000010,
             B01111100}; 
                   
byte V[5]=  {B00010000,
             B00001000,
             B00000100,
             B00001000,
             B00010000};  

                               

byte W[5]=  {B01111110,
             B00000100,
             B00001000,
             B00000100,
             B01111110};

byte X[5]=  {B00100010,
             B00010100,
             B00001000,
             B00010100,
             B00100010};
             

byte Y[5]=  {B01110000,
             B00001000,
             B00000111,
             B00001000,
             B01110000}; 
             
byte Z[5]=  {B01000100,
             B01100100,
             B01010100,
             B01001100,
             B01000100};
                                         
  lc.setRow(0,0,A[0]);
  lc.setRow(0,1,A[1]);
  lc.setRow(0,2,A[2]);
  lc.setRow(0,3,A[3]);
  lc.setRow(0,4,A[4]);
  delay(delaytime4);            

  lc.setRow(0,0,B[0]);
  lc.setRow(0,1,B[1]);
  lc.setRow(0,2,B[2]);
  lc.setRow(0,3,B[3]);
  lc.setRow(0,4,B[4]);
  delay(delaytime4);    

  lc.setRow(0,0,C[0]);
  lc.setRow(0,1,C[1]);
  lc.setRow(0,2,C[2]);
  lc.setRow(0,3,C[3]);
  lc.setRow(0,4,C[4]);
  delay(delaytime4);    

  lc.setRow(0,0,D[0]);
  lc.setRow(0,1,D[1]);
  lc.setRow(0,2,D[2]);
  lc.setRow(0,3,D[3]);
  lc.setRow(0,4,D[4]);
  delay(delaytime4);    


  lc.setRow(0,0,E[0]);
  lc.setRow(0,1,E[1]);
  lc.setRow(0,2,E[2]);
  lc.setRow(0,3,E[3]);
  lc.setRow(0,4,E[4]);
  delay(delaytime4);    

  lc.setRow(0,0,F[0]);
  lc.setRow(0,1,F[1]);
  lc.setRow(0,2,F[2]);
  lc.setRow(0,3,F[3]);
  lc.setRow(0,4,F[4]);
  delay(delaytime4);    

  lc.setRow(0,0,G[0]);
  lc.setRow(0,1,G[1]);
  lc.setRow(0,2,G[2]);
  lc.setRow(0,3,G[3]);
  lc.setRow(0,4,G[4]);
  delay(delaytime4);    


  lc.setRow(0,0,H[0]);
  lc.setRow(0,1,H[1]);
  lc.setRow(0,2,H[2]);
  lc.setRow(0,3,H[3]);
  lc.setRow(0,4,H[4]);
  delay(delaytime4);    

  lc.setRow(0,0,I[0]);
  lc.setRow(0,1,I[1]);
  lc.setRow(0,2,I[2]);
  lc.setRow(0,3,I[3]);
  lc.setRow(0,4,I[4]);
  delay(delaytime4);    

  lc.setRow(0,0,J[0]);
  lc.setRow(0,1,J[1]);
  lc.setRow(0,2,J[2]);
  lc.setRow(0,3,J[3]);
  lc.setRow(0,4,J[4]);
  delay(delaytime4);  

  lc.setRow(0,0,K[0]);
  lc.setRow(0,1,K[1]);
  lc.setRow(0,2,K[2]);
  lc.setRow(0,3,K[3]);
  lc.setRow(0,4,K[4]);
  delay(delaytime4);    

  lc.setRow(0,0,L[0]);
  lc.setRow(0,1,L[1]);
  lc.setRow(0,2,L[2]);
  lc.setRow(0,3,L[3]);
  lc.setRow(0,4,L[4]);
  delay(delaytime4);

  lc.setRow(0,0,M[0]);
  lc.setRow(0,1,M[1]);
  lc.setRow(0,2,M[2]);
  lc.setRow(0,3,M[3]);
  lc.setRow(0,4,M[4]);
  delay(delaytime4); 
     
  lc.setRow(0,0,N[0]);
  lc.setRow(0,1,N[1]);
  lc.setRow(0,2,N[2]);
  lc.setRow(0,3,N[3]);
  lc.setRow(0,4,N[4]);
  delay(delaytime4);  


  lc.setRow(0,0,O[0]);
  lc.setRow(0,1,O[1]);
  lc.setRow(0,2,O[2]);
  lc.setRow(0,3,O[3]);
  lc.setRow(0,4,O[4]);
  delay(delaytime4);    


  lc.setRow(0,0,P[0]);
  lc.setRow(0,1,P[1]);
  lc.setRow(0,2,P[2]);
  lc.setRow(0,3,P[3]);
  lc.setRow(0,4,P[4]);
  delay(delaytime4);    


  lc.setRow(0,0,Q[0]);
  lc.setRow(0,1,Q[1]);
  lc.setRow(0,2,Q[2]);
  lc.setRow(0,3,Q[3]);
  lc.setRow(0,4,Q[4]);
  delay(delaytime4);    

  lc.setRow(0,0,R[0]);
  lc.setRow(0,1,R[1]);
  lc.setRow(0,2,R[2]);
  lc.setRow(0,3,R[3]);
  lc.setRow(0,4,R[4]);
  delay(delaytime4);    


  lc.setRow(0,0,S[0]);
  lc.setRow(0,1,S[1]);
  lc.setRow(0,2,S[2]);
  lc.setRow(0,3,S[3]);
  lc.setRow(0,4,S[4]);
  delay(delaytime4); 
  
  lc.setRow(0,0,T[0]);
  lc.setRow(0,1,T[1]);
  lc.setRow(0,2,T[2]);
  lc.setRow(0,3,T[3]);
  lc.setRow(0,4,T[4]);
  delay(delaytime4);    

  lc.setRow(0,0,U[0]);
  lc.setRow(0,1,U[1]);
  lc.setRow(0,2,U[2]);
  lc.setRow(0,3,U[3]);
  lc.setRow(0,4,U[4]);
  delay(delaytime4);    

  lc.setRow(0,0,V[0]);
  lc.setRow(0,1,V[1]);
  lc.setRow(0,2,V[2]);
  lc.setRow(0,3,V[3]);
  lc.setRow(0,4,V[4]);
 


  delay(delaytime4);    

  lc.setRow(0,0,W[0]);
  lc.setRow(0,1,W[1]);
  lc.setRow(0,2,W[2]);
  lc.setRow(0,3,W[3]);
  lc.setRow(0,4,W[4]);
  delay(delaytime4);    

  lc.setRow(0,0,X[0]);
  lc.setRow(0,1,X[1]);
  lc.setRow(0,2,X[2]);
  lc.setRow(0,3,X[3]);
  lc.setRow(0,4,X[4]);
  delay(delaytime4);    


  lc.setRow(0,0,Y[0]);
  lc.setRow(0,1,Y[1]);
  lc.setRow(0,2,Y[2]);
  lc.setRow(0,3,Y[3]);
  lc.setRow(0,4,Y[4]);
  delay(delaytime4);   

  lc.setRow(0,0,Z[0]);
  lc.setRow(0,1,Z[1]);
  lc.setRow(0,2,Z[2]);
  lc.setRow(0,3,Z[3]);
  lc.setRow(0,4,Z[4]);
  delay(delaytime4);                                                                    
  }

void ALL_LOWER_CASE_LETTERS(){
  
byte a[5] = { B00000100,
              B00111000,
              B01001000,
              B01001000,
              B00110000};

 
byte b[5] = {  B00000000,
               B00001100,
               B00010010,
               B00010010,
               B11111110};


byte c[5] = { B00000000,
              B00100100,
              B01000010,
              B01000010,
              B00111100};

byte d[5] = { B01111110,
              B00001001,
              B00001001,
              B00001001,
              B00000110};

byte e[5] = {  B00000000,
               B00110010,
               B01001001,
               B01001001,
               B00111110};


byte f[5] = { B01100000,
              B10000000,
              B10010000,
              B01111111,
              B00010000};

byte g[5] = { B00000000,
              B00111110,
              B01001001,
              B01001001,
              B00110010};

byte h[5] = { B00001111,
              B00010000,
              B00010000,
              B00001000,
              B11111111};

byte i[5] = { B00000010,
              B00000010,
              B01011110,
              B00010010,
              B00000010};

byte j[5] = { B00000000,
              B10111110,
              B00100001,
              B00000001,
              B00000110};

byte k[5] = { B00000000,
              B00000000,
              B00010100,
              B00001000,
              B00111110};

byte l[5] = { B00000000,
              B00000000,
              B01111110,
              B00000000,
              B00000000};

byte m[5] = { B00011100,
              B00100000,
              B00010000,
              B00100000,
              B00011100};

byte n[5] = { B00011110,
              B00100000,
              B00100000,
              B00011110,
              B00100000};

byte o[5] = {  B00000000,
               B00011100,
               B00100010,
               B00100010,
               B00011100};

byte p[5] = { B00011000,
              B00100100,
              B00100100,
              B00011111,
              B00000000};

byte q[5] = { B00000001,
              B00111111,
              B00100100,
              B00100100,
              B00011000};

byte r[5] = { B01000000,
              B01000000,
              B01000000,
              B01111100,
              B00000000};


byte s[5] = { B00100100,
              B01001010,
              B01010010,
              B00100100,
              B00000000};

byte t[5] = { B00000100,
              B00100010,
              B01111100,
              B00100000,
              B00000000};

byte u[5] = {B00000010,
             B00111100,
             B00000010,
             B00000010,
             B00111100};


byte v[5] = { B00100000,
              B00010000,
              B00001000,
              B00010000,
              B00100000};

byte w[5] = { B01111000,
              B00000100,
              B00011000,
              B00000100,
              B01111000};

byte x[5]=  {B00100010,
             B00010100,
             B00001000,
             B00010100,
             B00100010};


byte y[5] = { B00100010,
              B00010100,
              B00001000,
              B00010100,
              B00100010};

byte z[5] = { B01000100,
              B01100100,
              B01010100,
              B01001100,
              B01000100};



              
                
  lc.setRow(0,0,a[0]);
  lc.setRow(0,1,a[1]);
  lc.setRow(0,2,a[2]);
  lc.setRow(0,3,a[3]);
  lc.setRow(0,4,a[4]);
  delay(delaytime4);    

                  
  lc.setRow(0,0,b[0]);
  lc.setRow(0,1,b[1]);
  lc.setRow(0,2,b[2]);
  lc.setRow(0,3,b[3]);
  lc.setRow(0,4,b[4]);
  delay(delaytime4);    
  
  lc.setRow(0,0,c[0]);
  lc.setRow(0,1,c[1]);
  lc.setRow(0,2,c[2]);
  lc.setRow(0,3,c[3]);
  lc.setRow(0,4,c[4]);
  delay(delaytime4);  
  
  lc.setRow(0,0,d[0]);
  lc.setRow(0,1,d[1]);
  lc.setRow(0,2,d[2]);
  lc.setRow(0,3,d[3]);
  lc.setRow(0,4,d[4]);
  delay(delaytime4);   

  lc.setRow(0,0,e[0]);
  lc.setRow(0,1,e[1]);
  lc.setRow(0,2,e[2]);
  lc.setRow(0,3,e[3]);
  lc.setRow(0,4,e[4]);
  delay(delaytime4);  
  
  lc.setRow(0,0,f[0]);
  lc.setRow(0,1,f[1]);
  lc.setRow(0,2,f[2]);
  lc.setRow(0,3,f[3]);
  lc.setRow(0,4,f[4]);
  delay(delaytime4); 


  lc.setRow(0,0,g[0]);
  lc.setRow(0,1,g[1]);
  lc.setRow(0,2,g[2]);
  lc.setRow(0,3,g[3]);
  lc.setRow(0,4,g[4]);
  delay(delaytime4); 


  lc.setRow(0,0,h[0]);
  lc.setRow(0,1,h[1]);
  lc.setRow(0,2,h[2]);
  lc.setRow(0,3,h[3]);
  lc.setRow(0,4,h[4]);
  delay(delaytime4);

  lc.setRow(0,0,i[0]);
  lc.setRow(0,1,i[1]);
  lc.setRow(0,2,i[2]);
  lc.setRow(0,3,i[3]);
  lc.setRow(0,4,i[4]);
  delay(delaytime4);

  lc.setRow(0,0,j[0]);
  lc.setRow(0,1,j[1]);
  lc.setRow(0,2,j[2]);
  lc.setRow(0,3,j[3]);
  lc.setRow(0,4,j[4]);
  delay(delaytime4);

  lc.setRow(0,0,k[0]);
  lc.setRow(0,1,k[1]);
  lc.setRow(0,2,k[2]);
  lc.setRow(0,3,k[3]);
  lc.setRow(0,4,k[4]);
  delay(delaytime4);

  lc.setRow(0,0,l[0]);
  lc.setRow(0,1,l[1]);
  lc.setRow(0,2,l[2]);
  lc.setRow(0,3,l[3]);
  lc.setRow(0,4,l[4]);
  delay(delaytime4);

  lc.setRow(0,0,m[0]);
  lc.setRow(0,1,m[1]);
  lc.setRow(0,2,m[2]);
  lc.setRow(0,3,m[3]);
  lc.setRow(0,4,m[4]);
  delay(delaytime4);

  lc.setRow(0,0,n[0]);
  lc.setRow(0,1,n[1]);
  lc.setRow(0,2,n[2]);
  lc.setRow(0,3,n[3]);
  lc.setRow(0,4,n[4]);
  delay(delaytime4);

  lc.setRow(0,0,o[0]);
  lc.setRow(0,1,o[1]);
  lc.setRow(0,2,o[2]);
  lc.setRow(0,3,o[3]);
  lc.setRow(0,4,o[4]);
  delay(delaytime4);   
 
  lc.setRow(0,0,p[0]);
  lc.setRow(0,1,p[1]);
  lc.setRow(0,2,p[2]);
  lc.setRow(0,3,p[3]);
  lc.setRow(0,4,p[4]);
  delay(delaytime4);  
  
  lc.setRow(0,0,q[0]);
  lc.setRow(0,1,q[1]);
  lc.setRow(0,2,q[2]);
  lc.setRow(0,3,q[3]);
  lc.setRow(0,4,q[4]);
  delay(delaytime4);  
  
   
  lc.setRow(0,0,r[0]);
  lc.setRow(0,1,r[1]);
  lc.setRow(0,2,r[2]);
  lc.setRow(0,3,r[3]);
  lc.setRow(0,4,r[4]);
  delay(delaytime4);  


  
  lc.setRow(0,0,s[0]);
  lc.setRow(0,1,s[1]);
  lc.setRow(0,2,s[2]);
  lc.setRow(0,3,s[3]);
  lc.setRow(0,4,s[4]);
  delay(delaytime4);  
  
  
  lc.setRow(0,0,t[0]);
  lc.setRow(0,1,t[1]);
  lc.setRow(0,2,t[2]);
  lc.setRow(0,3,t[3]);
  lc.setRow(0,4,t[4]);
  delay(delaytime4);  
  
  
  lc.setRow(0,0,u[0]);
  lc.setRow(0,1,u[1]);
  lc.setRow(0,2,u[2]);
  lc.setRow(0,3,u[3]);
  lc.setRow(0,4,u[4]);
  delay(delaytime4);  

  lc.setRow(0,0,v[0]);
  lc.setRow(0,1,v[1]);
  lc.setRow(0,2,v[2]);
  lc.setRow(0,3,v[3]);
  lc.setRow(0,4,v[4]);
  delay(delaytime4);  

  lc.setRow(0,0,w[0]);
  lc.setRow(0,1,w[1]);
  lc.setRow(0,2,w[2]);
  lc.setRow(0,3,w[3]);
  lc.setRow(0,4,w[4]);
  delay(delaytime4);  


  lc.setRow(0,0,y[0]);
  lc.setRow(0,1,y[1]);
  lc.setRow(0,2,y[2]);
  lc.setRow(0,3,y[3]);
  lc.setRow(0,4,y[4]);
  delay(delaytime4);  

  lc.setRow(0,0,x[0]);
  lc.setRow(0,1,x[1]);
  lc.setRow(0,2,x[2]);
  lc.setRow(0,3,x[3]);
  lc.setRow(0,4,x[4]);
  delay(delaytime4);  



  lc.setRow(0,0,z[0]);
  lc.setRow(0,1,z[1]);
  lc.setRow(0,2,z[2]);
  lc.setRow(0,3,z[3]);
  lc.setRow(0,4,z[4]);
  delay(delaytime4);  


   
  
  }
void NUMBERS(){


byte zero[5] = { B01111100,
                 B10001010,
                 B10010010,
                 B10100010,
                 B01111100};


byte one[5] ={B00000010,
              B00000010,
              B01111110,
              B01000010,
              B00100010};

byte two[5] ={B00000000,
              B01100110,
              B10010010,
              B10001010,
              B01000110};

byte three[5]={B01101100,
               B10010010,
               B10010010,
               B10000010,
               B01000100};


byte four[5] = { B00001000,
                 B11111110,
                 B01001000,
                 B00101000,
                 B00011000};

byte five[5] = { B00000000,
                 B01001100,
                 B01010010,
                 B01010010,
                 B01110010};

byte six[5]=  {B00000110,
               B10001001,
               B10001001,
               B10001001,
               B01111110};


byte seven[5] = { B00000000,
                  B11100000,
                  B10010000,
                  B10001110,
                  B10000000};

byte eight[5] = { B01101100,
                  B10010010,
                  B10010010,
                  B10010010,
                  B01101100};



byte nine[5] = { B01111111,
                 B10010000,
                 B10010000,
                 B10010000,
                 B01100000};


  
   
  lc.setRow(0,0,zero[0]);
  lc.setRow(0,1,zero[1]);
  lc.setRow(0,2,zero[2]);
  lc.setRow(0,3,zero[3]);
  lc.setRow(0,4,zero[4]);
  delay(delaytime4);  


  
  lc.setRow(0,0,one[0]);
  lc.setRow(0,1,one[1]);
  lc.setRow(0,2,one[2]);
  lc.setRow(0,3,one[3]);
  lc.setRow(0,4,one[4]);
  delay(delaytime4);  
  
  
  lc.setRow(0,0,two[0]);
  lc.setRow(0,1,two[1]);
  lc.setRow(0,2,two[2]);
  lc.setRow(0,3,two[3]);
  lc.setRow(0,4,two[4]);
  delay(delaytime4);  
  
  
  lc.setRow(0,0,three[0]);
  lc.setRow(0,1,three[1]);
  lc.setRow(0,2,three[2]);
  lc.setRow(0,3,three[3]);
  lc.setRow(0,4,three[4]);
  delay(delaytime4);  

  lc.setRow(0,0,four[0]);
  lc.setRow(0,1,four[1]);
  lc.setRow(0,2,four[2]);
  lc.setRow(0,3,four[3]);
  lc.setRow(0,4,four[4]);
  delay(delaytime4);  

  lc.setRow(0,0,five[0]);
  lc.setRow(0,1,five[1]);
  lc.setRow(0,2,five[2]);
  lc.setRow(0,3,five[3]);
  lc.setRow(0,4,five[4]);
  delay(delaytime4);  


  lc.setRow(0,0,six[0]);
  lc.setRow(0,1,six[1]);
  lc.setRow(0,2,six[2]);
  lc.setRow(0,3,six[3]);
  lc.setRow(0,4,six[4]);
  delay(delaytime4);  

  lc.setRow(0,0,seven[0]);
  lc.setRow(0,1,seven[1]);
  lc.setRow(0,2,seven[2]);
  lc.setRow(0,3,seven[3]);
  lc.setRow(0,4,seven[4]);
  delay(delaytime4);  



  lc.setRow(0,0,eight[0]);
  lc.setRow(0,1,eight[1]);
  lc.setRow(0,2,eight[2]);
  lc.setRow(0,3,eight[3]);
  lc.setRow(0,4,eight[4]);
  delay(delaytime4);  

  lc.setRow(0,0,nine[0]);
  lc.setRow(0,1,nine[1]);
  lc.setRow(0,2,nine[2]);
  lc.setRow(0,3,nine[3]);
  lc.setRow(0,4,nine[4]);
  delay(delaytime4);  

 
  }

void Hi(){

  byte H[5]={B01111111,
             B00001000,
             B00001000,
             B00001000,
             B01111111}; 
             
  byte i[5] = { B00000010,
              B00000010,
              B01011110,
              B00010010,
              B00000010};
              
  lc.setRow(0,0,H[0]);
  lc.setRow(0,1,H[1]);
  lc.setRow(0,2,H[2]);
  lc.setRow(0,3,H[3]);
  lc.setRow(0,4,H[4]);
  delay(delaytime4);  

  lc.setRow(0,0,i[0]);
  lc.setRow(0,1,i[1]);
  lc.setRow(0,2,i[2]);
  lc.setRow(0,3,i[3]);
  lc.setRow(0,4,i[4]);
  delay(delaytime4);  
  }

void loop() { 
 /*Uncomment the functions to see the value.  */
 
 //All_UPPER_CASE_LETTERS();
 //ALL_LOWER_CASE_LETTERS();
 //NUMBERS();
 
 Hi();
}
