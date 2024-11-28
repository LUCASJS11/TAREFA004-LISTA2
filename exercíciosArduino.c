//ex 1 - int cameraData[10]

//ex 2 - o código cameraData[3] = analogRead(A1) tem como finalidade atribuir ao quarto vetor do cameraData o valor lido no pino A1.

//ex 3 - float temperatura[] = {25.5, 26.0, 24.8, 27.3, 26.5};

//ex 4 - esse código tem como função acessar o Inessimo valor do vetor ledpins e mostrar o valor no monitor

//ex 5 -

/*int ledPins[] = {2, 4, 7, 8};

void setup() {
    Serial.begin(9600);
}

void loop() {
    for (int i = 0; i < 4; i++) {
        Serial.println(ledPins[i]);
    }

    delay(1000);
}

*/

// ex 6 - primeiro devemos definir os 5 vetores que serão "abastecidos" pelos numeros aleatorios gerados com o random(), após isso definir os valores maximos e minimos.

//ex 7 = o código percorre o vetor sensorReadings até encontrar o vetor de valor 150.

//ex 8 = esta função é utilizada para determinar o numero de elementos em um vetor.

// 4 problemas

/* a. a primeira linha mostra as medições da temperatura em 5 momentos diferentes.

   b. a media é de 40,4%

   c. a concentração de CO2 atingiu sua máxima no momento 3 (420);

   d. int ambientData[3][5] = {
    {22, 25, 23, 21, 24},
    {45, 38, 42, 40, 37},
    {400, 380, 420, 410, 390}
};

int totalLocais = 1;
int totalLeituras = 5;
int somaTemperaturas = 0;

void setup() {
    Serial.begin(9600);


    for (int j = 0; j < totalLeituras; j++) {
        somaTemperaturas += ambientData[0][j];
    }


    float mediaTemperatura = (float)somaTemperaturas / totalLeituras;


    Serial.print("A média da temperatura é: ");
    Serial.println(mediaTemperatura, 2);

void loop() {

}

