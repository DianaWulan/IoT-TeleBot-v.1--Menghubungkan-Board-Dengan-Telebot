//library 
#include "CTBot.h"

//var
CTBot myBot;
String token = "";
const int id = ;

//koneksi ke wifi
String ssid = "";
String pass = "";

void setup() {
  Serial.begin(9600);
  Serial.println("Memulai Telegram Bot");
  Serial.println("Menghubungkan ke WiFi");

  //koneksi ke wifi
  myBot.wifiConnect(ssid, pass);
  //set token tele
  myBot.setTelegramToken(token);

  //cek koneksi wifi
  if(myBot.testConnection()){
    Serial.println("Koneksi Berhasil");
  }else{
    Serial.println("Koneksi Gagal");
  }

  myBot.sendMessage(id, "Welcome Villains!"); //XdinaryHeroes fanbase name
  Serial.println("pesan terkirim");


}

void loop() {
}
