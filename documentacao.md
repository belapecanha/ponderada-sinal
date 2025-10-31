# Tutorial
&nbsp;&nbsp;&nbsp;&nbsp;Nesse projeto, queremos fazer um sinal de trânsito funcional com LEDs que, em loop, deixe o LED verde 4 segundos ligado, desligue, ligue o LED amarelo, o deixe ligado por 2 segundos, o desligue e, em seguida, ligue o vermelho por somente 6 segundos antes de iniciar esse ciclo novamente. 

### Componentes
&nbsp;&nbsp;&nbsp;&nbsp;Para esse resultado ser atingido, serão precisos alguns componentes:
|**Componente**|**Quantidade**|
|-------------|-----------|
|Cabo jumper macho-femea|6|
|Resistor 220V|3|
|Cabo jumper macho-macho|1|
|Arduino uno|1|
|Cabo usb|1|
|Porta led de MDF que imita um sinal de trânsito (opcional)|1|

### Montagem
&nbsp;&nbsp;&nbsp;&nbsp;Começando pela montagem dos fios, é preciso encaixar os LEDs no porta-led de MDF, garantindo que os LEDs estejam alinhados quanto aos lados positivos e negativos para que a montagem seja mais simples e que erros de polaridade sejam evitados. Essa montagem não é estritamente necessária para o funcionamento do sinal, porém o deixa mais parecido com sua aparência real.
<img src="assets/led-vermelho.jpg" width="400">


&nbsp;&nbsp;&nbsp;&nbsp;Em seguida, é necessário conectar 3 fios macho-fêmea aos LEDs e ao Arduino. Conecte a perna positiva dos LEDs no lado fêmea do fio e o lado macho à porta que quer usar em seu código, no meu caso, optei pelas portas 13, 12 e 8 para os LEDs, verde, amarelo e vermelho, respectivamente. Você pode optar pela porta que desejar, porém cheque a pinagem da placa para garantir que o pino que escolheu seja compatível com os LEDs. Isso permitirá que os LEDs sejam controlados pelo código posteriormente. Lá, os LEDs serão referenciados pelos pinos escolhidos, então essa parte é essencial. 

<img src="assets/arduino.jpg" width="400">

&nbsp;&nbsp;&nbsp;&nbsp;Depois, os 3 resistores de 220V devem ser colocados com uma perna na linha (escolha 3 diferentes, uma para cada resistor) que deseja e a outra na coluna azul que indica negativo. O uso desses resistores é necessário para evitar que algum LED queime devido a receber uma corrente mais alta do que ele aguenta. Para que a coluna negativa funcione, será necessário que seja usado um cabo jumper macho-macho, com um lado colocado em qualquer buraco da respectiva coluna da protoboard e o outro no pino GND no Arduino Uno. 
<img src="assets/protoboard.jpg" width="400">

&nbsp;&nbsp;&nbsp;&nbsp;Para fechar o circuito, falta somente usar 3 cabos macho-fêmea (um para cada led) e plugar a parte feminina dos fios nos respectivos leds e a parte masculina nas mesmas linhas que foram colocados os resistores, garantindo que cada led tenha a perna negativa conectada ao seu respectivo resistor por uma coluna exclusiva e a positiva ligada ao pino correspondente.

**Cheque novamente as imagens acima para completo entendimento**

&nbsp;&nbsp;&nbsp;&nbsp;Por fim, é necessário conectar o Arduino Uno ao computador por meio do cabo USB. Assim, será possível rodar o código presente no seu arquivo. 

&nbsp;&nbsp;&nbsp;&nbsp;No fim, o sistema completo deve ter essa cara:

<img src="assets/sistema-completo.jpg" width="500">

### Vídeo do funcionamento geral do projeto
Link para o vídeo de funcionamento do projeto: https://youtube.com/shorts/dDCer6qn1JE?feature=share 
<br>
*O código do projeto está dentro da pasta src, o nome do arquivo é proj.h*

### Avaliação em pares
#### Avaliação Luana Lima
|**Critério**|**Avaliação**|**Observação**|
|-------------|-----------|-------------|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores|3||
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo|3||
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários)|2,8|Adicionar comentários|
|Ir além: Implementou um componente extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código|1||
#### Avaliação Mariana Pereira
|**Critério**|**Avaliação**|**Observação**|
|-------------|-----------|-------------|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores|3||
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo|3||
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários)|2,9|Adicionar comentários|
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código|1||
