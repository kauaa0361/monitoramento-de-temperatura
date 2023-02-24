# Monitoramento de temperatura

O projeto consiste em utilizar um sensor de temperatura conectado ao Arduino para monitorar a temperatura ambiente em tempo real e controlar um motor de ventilador e um buzzer, dependendo da temperatura medida. O projeto pode ser utilizado em ambientes onde a temperatura é crítica, como em data centers, salas de servidores, entre outros.

# Funcionamento
O sensor de temperatura é conectado ao pino analógico A0 do Arduino e é capaz de medir a temperatura ambiente em graus Celsius. O código do Arduino lê o valor analógico do sensor, converte esse valor em graus Celsius e realiza o controle do motor de ventilador e do buzzer de acordo com a temperatura medida. Se a temperatura for igual ou maior a 30°C, o motor do ventilador é acionado para reduzir a temperatura ambiente. Se a temperatura ultrapassar os 50°C, a buzina é acionada para alertar sobre uma situação de emergência. 
