#include <SPI.h>
#include <Adafruit_GFX.h>
#include "GC9A01A_AVR.h"

#define SCR_WD 240
#define SCR_HT 240

#define TFT_CS  -1 // Si no se usa, define CS_ALWAYS_LOW en GC9A01A_AVR.h
#define TFT_DC   9
#define TFT_RST  10
GC9A01A_AVR lcd(TFT_CS, TFT_DC, TFT_RST);

// Definición de VARIABLES para colores diferentes a los básicos

uint16_t GRAY;
uint16_t ORANGE;
uint16_t PIEL;

void setup() {
  lcd.init(SCR_WD, SCR_HT);
  lcd.fillScreen(BLACK);

// Inicializar los colores personalizados
  GRAY = lcd.color565(192, 192, 192); // Gris
  ORANGE = lcd.color565(255, 128, 0); // Naranja
  PIEL=lcd.color565(255, 219, 172); // Piel claro

// Gato
  
  lcd.fillTriangle(120, 56, 50, 218, 190, 218, RED);
  lcd.fillTriangle(87, 8, 107, 22, 98, 36, GREEN);
  lcd.fillTriangle(153, 8, 133, 22, 143, 36, GREEN);
  lcd.fillTriangle(120, 3, 74, 71, 166, 71, YELLOW);
  lcd.fillTriangle(117, 50, 123, 50, 120, 55, RED);
  lcd.fillTriangle(110, 33, 102, 49, 117, 49, BLUE);
  lcd.fillTriangle(131, 33, 123, 49, 138, 49, BLUE);
  lcd.fillTriangle(120, 56, 114, 71, 127, 71, MAGENTA);
  lcd.fillTriangle(19, 182, 60, 194, 50, 218, CYAN);
  lcd.fillCircle(86, 204, 10, ORANGE);

// Pulso cardiaco con un rectángulo y lineas dobles

  lcd.fillRect(13, 117, 15, 3, RED);
  lcd.drawLine(27, 122, 31, 112, RED);
  lcd.drawLine(26, 122, 30, 112, RED);
  lcd.drawLine(28, 122, 32, 112, RED);
  lcd.drawLine(31, 112, 34, 127, RED);
  lcd.drawLine(32, 112, 35, 127, RED);
  lcd.drawLine(35, 127, 43, 79, RED);
  lcd.drawLine(36, 127, 44, 79, RED);
  lcd.drawLine(44, 79, 44, 145, RED);
  lcd.drawLine(45, 79, 45, 145, RED);
  lcd.drawLine(45, 145, 51, 118, RED);
  lcd.drawLine(46, 145, 52, 118, RED);
  lcd.drawLine(52, 118, 58, 118, RED);
  lcd.drawLine(52, 119, 58, 119, RED);
  lcd.drawLine(59, 118, 61, 107, RED); 
  lcd.drawLine(60, 118, 62, 107, RED);
  lcd.drawLine(62, 107, 65, 118, RED);     
  lcd.drawLine(63, 107, 66, 118, RED);     
  lcd.drawLine(66, 118, 77, 118, RED);  
  lcd.drawLine(66, 119, 77, 119, RED); 

  lcd.fillRoundRect(18, 146, 50, 20, 4, PIEL);

// Texto con el nombre del autor
  
  lcd.setTextColor(BLUE, YELLOW);
  lcd.setTextSize(2);
  lcd.setCursor(155, 100);
  lcd.println("WILSON");
}

void loop() {
  // No se requiere código en el loop
}

// los posible comandos son los siguientes : 
//drawLine(x0, y0, x1, y1, color)
//drawRect(x, y, w, h, color)
//fillRect(x, y, w, h, color)
//drawCircle(x, y, r, color)
//fillCircle(x, y, r, color)
//drawTriangle(x0, y0, x1, y1, x2, y2, color)
//fillTriangle(x0, y0, x1, y1, x2, y2, color)
//drawRoundRect(x, y, w, h, r, color)
//fillRoundRect(x, y, w, h, r, color)
