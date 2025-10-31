#include <Arduino.h>
void ligar();
void desligar();

// Classe para controle dos leds
class Led {
 private:
  int _pino;
 public:
  Led(int pino) {
   _pino = pino;
   pinMode(_pino, OUTPUT);
  }

  //Função para ligar os leds
  void ligar() {
   digitalWrite(_pino, HIGH);
  }

  //Função para desligar os leds
  void desligar() {
   digitalWrite(_pino, LOW);
  }
};

//Define os Leds
Led led_verde(13);
Led led_amarelo(12);
Led led_vermelho(8);

//Define variáveis iniciais
int estado = 0;  
unsigned long tempoAnterior = 0;

void setup() {
  //Define o estado inicial dos Leds
  led_verde.ligar();
  led_amarelo.desligar();
  led_vermelho.desligar();
  tempoAnterior = millis();
}

void loop() {
  unsigned long tempoAtual = millis();

  switch (estado) {
    case 0:
      // Primeiro caso (verde)
      if (tempoAtual - tempoAnterior >= 4000) {
        led_verde.desligar();
        led_amarelo.ligar();
        estado = 1;
        tempoAnterior = tempoAtual;
      }
    break;

    case 1:
      // Segundo caso (amarelo)
      if (tempoAtual - tempoAnterior >= 2000) {
        led_amarelo.desligar();
        led_vermelho.ligar();
        estado = 2;
        tempoAnterior = tempoAtual;
      }
    break;

    case 2: 
      // Terceiro caso (vermelho)
      if (tempoAtual - tempoAnterior >= 6000) {
        led_vermelho.desligar();
        led_verde.ligar();
        estado = 0;
        tempoAnterior = tempoAtual;
      }
    break;
 }
}
