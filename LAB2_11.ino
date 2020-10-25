int segmentA = 2;
int segmentB = 3;
int segmentC = 4;
int segmentD = 5;
int segmentE = 6;
int segmentF = 7;
int segmentG = 8;
int segmentDP = 13;
int digit = 1;
int num[8] ={6,3,0,1,0,1,8,5};
void displaySegment(int numberToDisplay);
int j =0;
void setup()
{
 pinMode(segmentA, OUTPUT);
 pinMode(segmentB, OUTPUT);
 pinMode(segmentC, OUTPUT);
 pinMode(segmentD, OUTPUT);
 pinMode(segmentE, OUTPUT);
 pinMode(segmentF, OUTPUT);
 pinMode(segmentG, OUTPUT);
 pinMode(segmentDP, OUTPUT);
 pinMode(12,INPUT_PULLUP);
 pinMode(A0,OUTPUT);
 pinMode(A1,OUTPUT);
 pinMode(A2,OUTPUT);
 pinMode(A3,OUTPUT);
}
void loop()
{
  //digitalWrite(A0,LOW);
 displayNumber();
}
void displayNumber()
{
  //for(int i =0;i<=8;i++){
    while(j < 500){
      digitalWrite(A0,LOW);
      digitalWrite(A3,HIGH);
      displaySegment(num[0]);
      delay(2);
      j++;
    }
    while(j < 1000){
      digitalWrite(A3,LOW);
      digitalWrite(A2,HIGH);
      displaySegment(num[0]);
      delay(2);
      digitalWrite(A3,HIGH);
      digitalWrite(A2,LOW);
      displaySegment(num[1]);
      j++;
    }
    while(j <1500){
      digitalWrite(A2,LOW);
      digitalWrite(A1,HIGH);
      displaySegment(num[1]);
      delay(1);
      digitalWrite(A3,LOW);
      digitalWrite(A2,HIGH);
      displaySegment(num[2]);
      delay(1);
      digitalWrite(A2,LOW);
      digitalWrite(A1,HIGH);
      displaySegment(num[0]);
      j++;
    }
    while(j<2000){
      digitalWrite(A1,LOW);
      digitalWrite(A0,HIGH);
      displaySegment(num[0]);
      delay(1);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH);
      displaySegment(num[1]);
      delay(1);
      digitalWrite(A1,LOW);
      digitalWrite(A2,HIGH);
      displaySegment(num[2]);
      delay(1);
      digitalWrite(A2,LOW);
      digitalWrite(A3,HIGH);
      displaySegment(num[3]);
      j++;
    }
  //}
    
}
void displaySegment(int numberToDisplay)
{
 switch (numberToDisplay)
 {
  case 0: ; 
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, HIGH);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, LOW);
 break;
 case 1: ; //แสดงผลเลข 1
 digitalWrite(segmentA, LOW);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, LOW);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, LOW);
 digitalWrite(segmentG, LOW);
 break;

 case 2: ; //แสดงผลเลข 2
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, LOW);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, HIGH);
 digitalWrite(segmentF, LOW);
 digitalWrite(segmentG, HIGH);
 break;

 case 3: ; //แสดงผลเลข 3
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, LOW);
 digitalWrite(segmentG, HIGH);
 break;
 
 case 4: ;
 digitalWrite(segmentA, LOW);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, LOW);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, HIGH);
 break;
 case 5: ;
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, LOW);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, HIGH);
 break;
 
 case 6: ;
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, LOW);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, HIGH);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, HIGH);
 break;
 
 case 7: ;
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, LOW);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, LOW);
 break;

 case 8: ;
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, HIGH);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, HIGH);
 break;
 
 case 9: ;
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, HIGH);
 break;
 
 }

 
}
