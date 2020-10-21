/* 
Arduino Mega Board is used to run the charliplexed LED's.
Charliplexed LED's was in Numerical form not as 4x7 pattern.
*/

// initializing the 6 pins and required variables.
int p1=32,p2=33,p3=34,p4=35,p5=36,p6=37;
int i,j,k;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
// used for loops and conditions to blink the required LED's.
for(i=0;i<10;i++)
 {
  if(i==0)
  {
   for(k=0;k<30;k++)
   {
   t0();o0();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o1();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o2();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o3();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o4();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o5();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o6();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o7();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o8();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t0();o9(); //delay(5);
   }
  } 

  if(i==1)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t1();o0();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o1();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o2();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o3();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o4();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o5();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o6();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o7();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o8();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t1();o9();//delay(5);
   }  
  }

  if(i==2)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t2();o0();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o1();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o2();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o3();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o4();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o5();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o6();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o7();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o8();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t2();o9();//delay(5);
   }  
  }

  if(i==3)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t3();o0();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o1();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o2();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o3();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o4();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o5();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o6();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o7();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o8();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t3();o9(); //delay(5);
   }  
  }

  if(i==4)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t4();o0();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o1();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o2();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o3();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o4();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o5();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o6();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o7();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o8();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t4();o9();//delay(5);
   }  
  }

  if(i==5)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t5();o0();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o1();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o2();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o3();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o4();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o5();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o6();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o7();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o8();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t5();o9();//delay(5);
   }  
  }
  
  if(i==6)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t6();o0();//delay(5);
   }
   for(k=0;k<30;k++)
   {
   t6();o1();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o2();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o3();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o4();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o5();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o6();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o7();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o8();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t6();o9();//delay(5);
   }
  }

  if(i==7)
  {
   //pinclear();
    for(k=0;k<30;k++)
   {
   t7();o0();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o1();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o2();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o3();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o4();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o5();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o6();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o7();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o8();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t7();o9();//delay(5);
   }
  }

  if(i==8)
  {
   //pinclear();
   for(k=0;k<30;k++)
   {
   t8();o0();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o1();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o2();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o3();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o4();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o5();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o6();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o7();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o8();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t8();o9();//delay(5);
   }
  }
  

  if(i==9)
  {
   //pinclear();
    for(k=0;k<30;k++)
   {
   t9();o0();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o1();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o2();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o3();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o4();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o5();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o6();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o7();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o8();//delay(5);
   }
    for(k=0;k<30;k++)
   {
   t9();o9();//delay(5);
   }
  }
 }
}

//Tens Side LED Program

void t0()
{
 //for(j=0;j<1;j++)
  {
    p78();
    delay(1);
    p2324();
    delay(1);
    p3940();
    delay(1);
    p2930();
    delay(1);
    p1516();
    delay(1);
    p910();
    delay(1);
  }
}

void t1()
{
  //for(j=0;j<1;j++)
    {
    p2324();
    delay(1);
    p910();
    delay(1);
    }
}

void t2()
{
  //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p2324();
    delay(1);
    p3940();
    delay(1);
    p2930();
    delay(1);
    p3132();
    delay(1);
    }
}

void t3()
{
   //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p2324();
    delay(1);
    p2930();
    delay(1);
    p910();
    delay(1);
    p3132();
    delay(1);
    }
}

void t4()
{
 //for(j=0;j<1;j++)
    {
    p2324();
    delay(1);
    p1516();
    delay(1);
    p910();
    delay(1);
    p3132();
    delay(1);
    }
}

void t5()
{
  //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p2930();
    delay(1);
    p1516();
    delay(1);
    p910();
    delay(1);
    p3132();
    delay(1);
    }
}

void t6()
{
   //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p3940();
    delay(1);
    p2930();
    delay(1);
    p1516();
    delay(1);
    p910();
    delay(1);
    p3132();
    delay(1);
    }
}

void t7()
{
  //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p2324();
    delay(1);
    p910();
    delay(1);
    }
}

void t8()
{
 //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p2324();
    delay(1);
    p3132();
    delay(1);
    p3940();
    delay(1);
    p2930();
    delay(1);
    p1516();
    delay(1);
    p910();
    delay(1);
    }
}

void t9()
{
  //for(j=0;j<1;j++)
    {
    p78();
    delay(1);
    p2324();
    delay(1);
    p3132();
    delay(1);
    p1516();
    delay(1);
    p910();
    delay(1);
    p2930();
    delay(1);
    }
}

//Ones Side LED Program

void o0()
{
  //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p1314();
    delay(1);
    p3738();
    delay(1);
    p4344();
    delay(1);
    p1920();
    delay(1);
    p3334();
    delay(1);
    }
}

void o1()
{
 //for(j=0;j<1;j++)
    {
    p1314();
    delay(1);
    p3738();
    delay(1);
    }
}

void o2()
{
 //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p1314();
    delay(1);
    p4344();
    delay(1);
    p1920();
    delay(1);
    p1112();
    delay(1);
    }
}

void o3()
{
   //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p1314();
    delay(1);
    p3738();
    delay(1);
    p4344();
    delay(1);
    p1112();
    delay(1);
    }
}

void o4()
{
  //for(j=0;j<1;j++)
    {
    p1314();
    delay(1);
    p3738();
    delay(1);
    p3334();
    delay(1);
    p1112();
    delay(1);
    }
}

void o5()
{
 //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p3738();
    delay(1);
    p4344();
    delay(1);
    p3334();
    delay(1);
    p1112();
    delay(1);
    }
}

void o6()
{
 //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p3738();
    delay(1);
    p4344();
    delay(1);
    p1920();
    delay(1);
    p3334();
    delay(1);
    p1112();
    delay(1);
    }  
}

void o7()
{
   //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p1314();
    delay(1);
    p3738();
    delay(1);
    }
}

void o8()
{
//for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p1314();
    delay(1);
    p3738();
    delay(1);
    p4344();
    delay(1);
    p1920();
    delay(1);
    p3334();
    delay(1);
    p1112();
    delay(1);
    }
}

void o9()
{
 //for(j=0;j<1;j++)
    {
    p2526();
    delay(1);
    p1314();
    delay(1);
    p3738();
    delay(1);
    p4344();
    delay(1);
    p3334();
    delay(1);
    p1112();
    delay(1);
    }
}



//pins definations. LED's connections are made between the Ports which are output in both the directions.

void p78()
{
pinMode(p1,OUTPUT);  // LED's connected b/w P1 and P2 in both the directions. similarly to other pins too. 
pinMode(p2,OUTPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,INPUT);  

digitalWrite(p1,HIGH);
digitalWrite(p2,LOW);
delay(1);
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
delay(1);
}

void p2324()
{
pinMode(p1,INPUT);
pinMode(p2,OUTPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,OUTPUT);
pinMode(p6,INPUT);  

digitalWrite(p2,HIGH);
digitalWrite(p5,LOW);
delay(1);
digitalWrite(p2,LOW);
digitalWrite(p5,HIGH);
delay(1);
}

void p3132()
{
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,OUTPUT);
pinMode(p4,INPUT);
pinMode(p5,OUTPUT);
pinMode(p6,INPUT);  

digitalWrite(p3,HIGH);
digitalWrite(p5,LOW);
delay(1);
digitalWrite(p3,LOW);
digitalWrite(p5,HIGH);
delay(1);
}

void p3940()
{
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,OUTPUT);
pinMode(p5,INPUT);
pinMode(p6,OUTPUT);  

digitalWrite(p4,HIGH);
digitalWrite(p6,LOW);
delay(1);
digitalWrite(p4,LOW);
digitalWrite(p6,HIGH);
delay(1);
}

void p2930()
{
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,OUTPUT);
pinMode(p4,OUTPUT);
pinMode(p5,INPUT);
pinMode(p6,INPUT);  
 
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
delay(1);
digitalWrite(p3,LOW);
digitalWrite(p4,HIGH);
delay(1);
}

void p1516()
{
pinMode(p1,OUTPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,OUTPUT);  
 
digitalWrite(p1,HIGH);
digitalWrite(p6,LOW);
delay(1);
digitalWrite(p1,LOW);
digitalWrite(p6,HIGH);  
delay(1);
}

void p910()
{
pinMode(p1,OUTPUT);
pinMode(p2,INPUT);
pinMode(p3,OUTPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,INPUT);  
 
digitalWrite(p1,HIGH);
digitalWrite(p3,LOW);
delay(1);
digitalWrite(p1,LOW);
digitalWrite(p3,HIGH);    
delay(1);
}

void p2526()
{
pinMode(p1,INPUT);
pinMode(p2,OUTPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,OUTPUT);  

digitalWrite(p2,HIGH);
digitalWrite(p6,LOW);
delay(1);
digitalWrite(p2,LOW);
digitalWrite(p6,HIGH);
delay(1);
}

void p1314()
{
pinMode(p1,OUTPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,OUTPUT);
pinMode(p6,INPUT);  

digitalWrite(p1,HIGH);
digitalWrite(p5,LOW);
delay(1);
digitalWrite(p1,LOW);
digitalWrite(p5,HIGH);
delay(1);
}

void p3738()
{
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,OUTPUT);
pinMode(p5,OUTPUT);
pinMode(p6,INPUT);  

digitalWrite(p4,HIGH);
digitalWrite(p5,LOW);
delay(1);
digitalWrite(p4,LOW);
digitalWrite(p5,HIGH);
delay(1);
}

void p4344()
{
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,OUTPUT);
pinMode(p6,OUTPUT);  

digitalWrite(p5,HIGH);
digitalWrite(p6,LOW);
delay(1);
digitalWrite(p5,LOW);
digitalWrite(p6,HIGH);
delay(1);
}

void p1920()
{
pinMode(p1,INPUT);
pinMode(p2,OUTPUT);
pinMode(p3,OUTPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,INPUT);  

digitalWrite(p2,HIGH);
digitalWrite(p3,LOW);
delay(1);
digitalWrite(p2,LOW);
digitalWrite(p3,HIGH);
delay(1);
}

void p3334()
{
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,OUTPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,OUTPUT);  

digitalWrite(p3,HIGH);
digitalWrite(p6,LOW);
delay(1);
digitalWrite(p3,LOW);
digitalWrite(p6,HIGH);
delay(1);
}

void p1112()
{
pinMode(p1,OUTPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,OUTPUT);
pinMode(p5,INPUT);
pinMode(p6,INPUT);  

digitalWrite(p1,HIGH);
digitalWrite(p4,LOW);
delay(1);
digitalWrite(p1,LOW);
digitalWrite(p4,HIGH);
delay(1);
}
