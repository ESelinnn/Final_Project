#include <main.h>
#define LCD_ENABLE_PIN PIN_E2
#define LCD_RS_PIN PIN_E0
#define LCD_RW_PIN PIN_E1
#define LCD_DATA4 PIN_D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7

#include <lcd.c>

//B0,B1,B2,B3,B4,B5 = SERVO CIKIS PINLERI
//A0,A1= SENSÖR GIRISLERI
//CO= BUZZER CIKIS

unsigned int i; //for döngüleri için

int topmavikupsayisi =0; // kutulara giren kup sayýsýný belirlemek için 
int topsarikupsayisi =0;
int topkirmizikupsayisi =0;
int topsiyahkupsayisi =0;
//int button;

void mavi(); //renklere göre yapýlacak hareketleri ayýrmak için açýlan ...
void sari();
void kirmizi();
void siyah();
void basangic();

void mavi()
{
         delay_ms(500);
         for( i=0;i<30;i++) //b3 2. cisim alma
         {
            output_high(pin_b3);
            delay_us(900);
            output_low(pin_b3);
            delay_us(19100);
         }
      
        delay_ms(1000);
        
            for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(800);
            output_low(pin_b2);
            delay_us(19200);
         }
      
        delay_ms(1000);
          for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1700);
            output_low(pin_b1);
            delay_us(18300);
         }
         delay_ms(50);
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }
      
        delay_ms(50);
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1900);
            output_low(pin_b1);
            delay_us(18100);
         }
       
       
        delay_ms(1000);
      
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }
      
        delay_ms(1000);
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }
      
        delay_ms(1000);
           for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }
      
        delay_ms(1000);
           for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }
      
        delay_ms(1000);
        
         for( i=0;i<50;i++) //b0 2.
         {
            output_high(pin_b0);
            delay_us(1500);
            output_low(pin_b0);
            delay_us(18500);
         }
      
        delay_ms(1000);
        for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }
      
        delay_ms(1000);
          for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }
      
        delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(1000);
            output_low(pin_b3);
            delay_us(19000);
         }
      
        
          delay_ms(1000);
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(500);
            output_low(pin_b2);
            delay_us(19500);
         }
      
        delay_ms(1000);
  
        for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }
      
        delay_ms(1000);
        topmavikupsayisi=topmavikupsayisi+1;
        printf(lcd_putc,"\fmavikupadeti:%u",topmavikupsayisi);
        delay_ms(2000);
        if(topmavikupsayisi>=2)
        
         {
             lcd_putc("\fmavi kutu doldu");
             printf(lcd_putc,"\nLutfen bosaltin! ");
           
             for(i = 0; i < 20; i++) //kaç kez bipleyeceðini belirliyor
              {
             
                 output_high(pin_c0);
                 delay_ms(100);     //biplerin uzunluðunu belli ediyor deðer azaldýkca tek ses elde edebiliriz.
                 output_low(pin_c0);
                 delay_ms(100);
                 
              }
             
             topmavikupsayisi =0;
             delay_ms(2000);
             
          }
       
}

void sari()
{
      delay_ms(500);
      for( i=0;i<30;i++) //b3 2. cisim alma
         {
            output_high(pin_b3);
            delay_us(900);
            output_low(pin_b3);
            delay_us(19100);
         }
      
        delay_ms(1000);
        
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(800);
            output_low(pin_b2);
            delay_us(19200);
         }
      
        delay_ms(1000);
           for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1700);
            output_low(pin_b1);
            delay_us(18300);
         }
         delay_ms(50);
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }
      
        delay_ms(50);
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1900);
            output_low(pin_b1);
            delay_us(18100);
         }
       
        delay_ms(1000);
      
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }
     
        delay_ms(1000);
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }
      
        delay_ms(1000);
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }
      
        delay_ms(1000);
           for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }
      
        delay_ms(1000);
        
         for( i=0;i<50;i++) //b0 2.
         {
            output_high(pin_b0);
            delay_us(1200);
            output_low(pin_b0);
            delay_us(18300);
         }
      
        delay_ms(1000);
        for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }
      
        delay_ms(1000);
        
          for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }
      
        delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(1000);
            output_low(pin_b3);
            delay_us(19000);
         }
      
        
          delay_ms(1000);
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(500);
            output_low(pin_b2);
            delay_us(19500);
         }
      
        delay_ms(1000);
  
        for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }
      
       delay_ms(1000);
       topsarikupsayisi=topsarikupsayisi+1;
       printf(lcd_putc,"\fsarikupadeti:%u",topsarikupsayisi);
       delay_ms(2000);
       
         if(topsarikupsayisi==2)
          {
              lcd_putc("\fsari kutu doldu");
              printf(lcd_putc,"\nLutfen bosaltin! ");
               for(i = 0; i < 20; i++) //kaç kez bipleyeceðini belirliyor
              {
             
                 output_high(pin_c0);
                 delay_ms(100);     //biplerin uzunluðunu belli ediyor deðer azaldýkca tek ses elde edebiliriz.
                 output_low(pin_c0);
                 delay_ms(100);
                 
              }

              topsarikupsayisi =0;
              delay_ms(2000);
              
          }      
}

void kirmizi()
{       
delay_ms(500);
for( i=0;i<30;i++) //b3 2. cisim alma
         {
            output_high(pin_b3);
            delay_us(900);
            output_low(pin_b3);
            delay_us(19100);
         }     
        delay_ms(1000);
        
        for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(800);
            output_low(pin_b2);
            delay_us(19200);
         }     
        delay_ms(1000);
        
           for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1700);
            output_low(pin_b1);
            delay_us(18300);
         }
         delay_ms(50);
         
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }     
        delay_ms(50);
        
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1900);
            output_low(pin_b1);
            delay_us(18100);
         }   
        delay_ms(1000);
      
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }      
        delay_ms(1000);
        
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }     
        delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }     
        delay_ms(1000);
        
           for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }     
        delay_ms(1000);
        
         for( i=0;i<50;i++) //b0 2.
         {
            output_high(pin_b0);
            delay_us(1900);
            output_low(pin_b0);
            delay_us(18100);
         }     
        delay_ms(1000);
        
        for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }     
        delay_ms(1000);
        
          for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }      
        delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(1000);
            output_low(pin_b3);
            delay_us(19000);
         }     
          delay_ms(1000);
          
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(500);
            output_low(pin_b2);
            delay_us(19500);
         }      
        delay_ms(1000);
  
        for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }      
        delay_ms(1000);
  
        topkirmizikupsayisi=topkirmizikupsayisi+1;
        printf(lcd_putc,"\fkirm.kupadeti:%u",topkirmizikupsayisi);
        delay_ms(2000);
        
        if(topkirmizikupsayisi>=2)  
         {
             lcd_putc("\fkirmizikutudoldu");
             printf(lcd_putc,"\nLutfen bosaltin! ");
              
             for(i = 0; i < 20; i++) //kaç kez bipleyeceðini belirliyor
              {
             
                 output_high(pin_c0);
                 delay_ms(100);     //biplerin uzunluðunu belli ediyor deðer azaldýkca tek ses elde edebiliriz.
                 output_low(pin_c0);
                 delay_ms(100);
                 
              }
              
              topkirmizikupsayisi =0;
              delay_ms(2000);
          }     
}

void siyah()
{
      delay_ms(500);
      for( i=0;i<30;i++) //b3 2. cisim alma
         {
            output_high(pin_b3);
            delay_us(900);
            output_low(pin_b3);
            delay_us(19100);
         } 
        delay_ms(1000);
        
        for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(800);
            output_low(pin_b2);
            delay_us(19200);
         } 
        delay_ms(1000);
        
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1700);
            output_low(pin_b1);
            delay_us(18300);
         }
         delay_ms(50);
         
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }
        delay_ms(50);
        
         for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1900);
            output_low(pin_b1);
            delay_us(18100);
         }
         delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }
         delay_ms(1000);
         
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }
        delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
         }
        delay_ms(1000);
        
           for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }
        delay_ms(1000);
        
         for( i=0;i<50;i++) //b0 2.
         {
            output_high(pin_b0);
            delay_us(900);
            output_low(pin_b0);
            delay_us(19100);
         }
        delay_ms(1000);
        
        for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(700);
            output_low(pin_b2);
            delay_us(19300);
         }
        delay_ms(1000);
        
          for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1800);
            output_low(pin_b1);
            delay_us(18200);
         }
        delay_ms(1000);
        
         for( i=0;i<30;i++) //b3 2.
         {
            output_high(pin_b3);
            delay_us(1000);
            output_low(pin_b3);
            delay_us(19000);
         }
         delay_ms(1000);
          
           for( i=0;i<50;i++) //b2 2.
         {
            output_high(pin_b2);
            delay_us(500);
            output_low(pin_b2);
            delay_us(19500);
         }
         delay_ms(1000);
  
        for( i=0;i<50;i++)  // b1 2.
         {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
         }
      
        delay_ms(1000);  

        topsiyahkupsayisi=topsiyahkupsayisi+1;
        printf(lcd_putc,"\fSiyahkupadeti:%u",topsiyahkupsayisi);
        delay_ms(2000);
       
        if(topsiyahkupsayisi==2)
        {      
             lcd_putc("\fsiyah kutu doldu");
             printf(lcd_putc,"\nLutfen bosaltin! ");
             for(i = 0; i < 20; i++) //kaç kez bipleyeceðini belirliyor
              {
                 output_high(pin_c0);
                 delay_ms(100);     //biplerin uzunluðunu belli ediyor deðer azaldýkca tek ses elde edebiliriz.
                 output_low(pin_c0);
                 delay_ms(100); 
              }
              
            /* for(i = 0; i < 30; i++) /tek bip sesi
              {
             
                 output_high(pin_c0);
                 delay_ms(10);     
                 output_low(pin_c0);
                 delay_ms(10);
                 
              }
              */
              topsiyahkupsayisi =0;
              delay_ms(2000);           
          }   
}

void baslangic()
{
      lcd_putc("\fbaslangic Konumu");
      for( i=0;i<50;i++) //b0 1.
       {
            output_high(pin_b0);
            delay_us(2650);
            output_low(pin_b0);
            delay_us(17350);
       }
       delay_ms(1000);
       
       for( i=0;i<50;i++)  // b1 1.
       {
            output_high(pin_b1);
            delay_us(1500);
            output_low(pin_b1);
            delay_us(18500);
        }
        delay_ms(1000);
        
        for( i=0;i<50;i++) //b2 1.
        {
            output_high(pin_b2);
            delay_us(500);
            output_low(pin_b2);
            delay_us(19500);
         }
        delay_ms(1000);
        
        for( i=0;i<30;i++) //b3 2.
        {
            output_high(pin_b3);
            delay_us(500);
            output_low(pin_b3);
            delay_us(19500);
        }
        delay_ms(1000);
  
}

void main()
 { 
   set_tris_a(0b11111111);
   set_tris_b(0b00000000);
   set_tris_c(0b00000000);
   int16 dijitalbilgi,dijitalbilgi1;
   float voltaj,voltaj1;
   setup_adc(ADC_CLOCK_DIV_32);
   SETUP_ADC_PORTS(AN0_AN1_AN3); //sAN0 =RENK ALGILAYAN SENSOR sAN1= CÝSÝM ALIGLAYAN SENSÖR
   
   lcd_init();
   baslangic();

   while(TRUE)
    {    
         set_adc_channel(0);  //sAN0CÝSÝM ALIGLAYAN SENSÖR
         delay_us(20);
         dijitalbilgi1=read_adc();
         delay_ms(100);
         voltaj1=dijitalbilgi1*0.0048875855;
         delay_ms(100);
      
         if((0.30<voltaj1) && (voltaj1<2.30))
         { 
            delay_ms(100);
            printf(LCD_PUTC,"\fCisim Algilandi");
            printf(lcd_putc,"\nvoltaj: %f",voltaj);
            delay_ms(50);
         
            set_adc_channel(1);  //sAN1= =RENK ALGILAYAN SENSOR
            delay_us(20);
            dijitalbilgi=read_adc();
            delay_ms(100);
            voltaj=dijitalbilgi*0.0048875855;
            delay_ms(1000);

            if((1.86<voltaj) && (voltaj<1.94))
            {
                lcd_putc("\fKup:kirmizi");
                printf(lcd_putc,"\nvoltaj: %f",voltaj);
                delay_ms(500);
                
                kirmizi();
                baslangic();     
            }    
            delay_ms(100); 
            if((1.95<voltaj) && (voltaj<2.15))
            {
                 lcd_putc("\fKup:mavi");
                 printf(lcd_putc,"\nvoltaj: %f",voltaj);
                 delay_ms(500);
                 
                 mavi();    
                 baslangic();
            }
            delay_ms(100);
        
            if((2.30<voltaj)&& (voltaj<2.50))
            {
                 lcd_putc("\fKup:sari");
                 printf(lcd_putc,"\nvoltaj: %f",voltaj);
                 delay_ms(500);
                 
                 sari();
                 baslangic();
            }     
            delay_ms(100);
       
            if((1.40<voltaj)&& (voltaj<1.70))
            { 
                 lcd_putc("\fKup:siyah");
                 printf(lcd_putc,"\nvoltaj: %f",voltaj);
                 delay_ms(500);
                 
                 siyah();
                 baslangic();        
            }
            delay_ms(100);
        
            if((1.45>voltaj) || (voltaj>2.57))
            {
                 lcd_putc("\fBilinmeyen Cisim");
                 printf(lcd_putc,"\nvoltaj: %f",voltaj);
                 delay_ms(1000);
            }
         }
      
         else
         {
            lcd_putc("\fCisim Yok");
            printf(lcd_putc,"\nvoltaj1: %f",voltaj1);
            delay_ms(100);
         }

    }
   
 }
  
