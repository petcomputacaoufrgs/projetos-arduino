void setup() {
  // Onde colocamos o código que vai ser executado apenas uma vez.
  // Na prática, aqui vamos definir quais pinos serão utilizados.

  pinMode(<numero_pino>, <tipo_sinal>); // <numero_pino> é o número do pino que vamos utilizar.
                                        // <tipo_sinal> pode ser INPUT (entrada) ou OUTPUT (saída).
                                        // Na prática, sempre usaremos os pinos como sinais de saída.

}

void loop() {
  // Onde colocamos o código que vai ser executado repetidamente.
  // Na prática, aqui vamos controlar os pinos utilizados.

  digitalWrite(<numero_pino>, <estado>); // <numero_pino> é o número do pino que vamos utilizar.
                                         // <estado> pode ser HIGH (ligado) ou LOW (desligado).

  delay(<tempo>); // <tempo> é o tempo em milissegundos que o programa 
                  // vai esperar antes de executar a próxima linha de código.
}





