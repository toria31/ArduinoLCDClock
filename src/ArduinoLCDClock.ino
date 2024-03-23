/*
  Created by toria31 on 3/23/2024.
  A simple Arduino LCD clock project with a time-setting function.
  Source: https://github.com/toria31/ArduinoLCDClock
*/ 

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

// variables
int hr=12;
int min;
int sec;
int flag=12;
int TIME;

// buttons
const int sethr=0; 
const int setmin=1;

// states
int statehr;
int statemin;

void setup() {
  lcd.begin(16,2);
  pinMode(sethr,INPUT_PULLUP);
  pinMode(setmin,INPUT_PULLUP);
}

void loop() {
  lcd.setCursor(0,0);

  sec=sec+1; // start loop with incrementing seconds by one

  // printing time on lcd
  lcd.print("time:");
  lcd.print(hr);
  lcd.print(":");
  lcd.print(min);
  lcd.print(":");
  lcd.print(sec);
  
  // time logic
  if(flag<12)lcd.print(" AM");
  if(flag>=12)lcd.print(" PM");
  if(flag==24)flag=0;

  // refreshing screen buffer
  delay(1000);
  lcd.clear();
  
  // counting time
  if(sec==60) {
    sec=0;
    min=min+1;
  }

  if(min==60) {
    min=0;
    hr=hr+1;
    flag=flag+1;
  }

  if(hr==25) {
    hr=1;
    flag=1;
  }

/* 
 -================-
  printing comment
 -================-
*/

  lcd.setCursor(0,1);
  lcd.print(""); // <--- include comment you want to display

/*
 -============-
  setting time
 -============-
*/

  statehr = digitalRead(sethr); // read input from sethr button
  if(statehr==0) {
    sec=0; 
    hr=hr+1;
    flag=flag+1;
  }

  statemin=digitalRead(setmin); // read input from setmin button
  if(statemin==0) {
    sec=0;
    min=min+1;
  }
  
}