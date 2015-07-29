int segment=0;
int val=0;
char x;
const int potpin=A0;   // Potumuzu bağlayacağımız analog giriş.,
int led=2; // Ledimizi bağlayacağımız çıkış.
int potdurum=0;     
int pos = 0;    
int duzhesap=0;
//alt kısımdaki pinler
const int LED1 = 4; 
const int LED2 = 5;  
const int LED3 = 6;   
const int LED4 = 7;  

// üst kısımdaki pinler

const int LED5 = 8; 
const int LED6 = 9;   
const int LED7 = 10;  
const int LED8 = 11;    

void setup() 
{
  Serial.begin(9600);
  
  pinMode(OUTPUT,led); // Led pininini çıkış olarak ayarlıyoruz.
    pinMode(2,OUTPUT);
  pinMode(LED1, OUTPUT);   
  pinMode(LED2, OUTPUT); 
  pinMode(LED3, OUTPUT); 
  pinMode(LED4, OUTPUT);   
  pinMode(LED5, OUTPUT);   
  pinMode(LED6, OUTPUT);   
  pinMode(LED7, OUTPUT);   
  pinMode(LED8, OUTPUT);   
  pinMode(potpin, INPUT);

} 

void loop()
{

   if(Serial.available()>0)
  x=Serial.read();
  if(x=='a')
  {
    val = analogRead(potpin); 
Serial.println(val);
    
    delay(100);
  } 
  
  segment=analogRead(potpin);
pos=map(segment,0,1023,0,10);

switch(pos)
{
  case 0:
  segment=0;
  break;
  case 1:
  segment=1;
  break;
  case 2:
  segment=2;
  break;
  case 3:
  segment=3;
  break;
  case 4:
  segment=4;
  break;
   case 5:
  segment=5;
  break;
   case 6:
  segment=6;
  break;
   case 7:
  segment=7;
  break;
   case 8:
  segment=8;
  break;
   case 9:
  segment=9;
  break;
  
  
}
  
  
  


  potdurum=analogRead(potpin);
  pos= map(potdurum,0,1023,0,255);//Girişi çıkışa oranlıyoruz. bu satır iptal.
  

analogWrite(2,pos);

duzhesap = analogRead(potpin);
duzhesap = map(duzhesap,0,1023,0,10);

switch (duzhesap) {
  case 0:
  // 0 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH);  
  analogWrite(led,potdurum);
  break;
  case 1:
  // 1 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  analogWrite(led,potdurum);
  break;
  case 2:
  // 2 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, LOW);
  analogWrite(led,potdurum);
  break;
  case 3:
  // 3 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, LOW);
  analogWrite(led,potdurum);
  break;
  case 4:
  // 4 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  analogWrite(led,potdurum);
  break;
  case 5:
  // 5 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  
  analogWrite(led,potdurum);
  break;
  case 6:
  // 6 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  analogWrite(led,potdurum);
  break;
  case 7:
  // 7 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH);
  analogWrite(led,potdurum);
  break;
  case 8:
  // 8 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  analogWrite(led,potdurum);
  break;
  case 9:
  // 9 yazdırıyoruz.
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(2,HIGH);
  analogWrite(led,potdurum);
  break;


   

}}
