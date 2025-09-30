# 🌱 Projeto Final: Sistema de Monitoramento e Controle de uma Estufa

## 📌 Objetivo

Desenvolver um sistema embarcado utilizando a **Franzininho WiFi LAB01** para monitorar e controlar os parâmetros de uma estufa.
O projeto integra sensores, exibição em display OLED, armazenamento em memória interna e comunicação via serial, consolidando os principais conceitos de sistemas embarcados com ESP-IDF.

---

## 📝 Descrição do Projeto

O sistema é capaz de:

* Monitorar **temperatura, umidade e luminosidade** em tempo real.
* Exibir os valores no **display OLED**.
* Permitir ajuste de **set point de temperatura** por meio de um **menu interativo**.
* Armazenar dados monitorados em **arquivo log.txt** na memória interna (SPIFFS ou LittleFS).
* Possibilitar acesso aos dados via **comunicação serial**.
* Oferecer controle manual para ligar/desligar o sistema e ativar/desativar o registro de dados.

---

## 🛠️ Recursos Necessários

### Hardware

* Franzininho WiFi LAB01
* Sensor **DHT11**
* Sensor **LDR**
* Display **OLED**
* Resistores, LEDs e relé (opcional)

### Software

* **ESP-IDF**
* Bibliotecas para display OLED e sensores
* Ferramentas seriais

---

## ⚙️ Requisitos do Projeto

### 🔎 Monitoramento

* **DHT11** → leitura de temperatura e umidade.
* **LDR** → leitura da luminosidade ambiente.

### 📺 Controle e Exibição

* **Display OLED** para mostrar informações em tempo real.
* Menu interativo para ajuste de parâmetros (set point de temperatura e configurações extras).

### 🗄️ Registro de Dados

* Uso de **SPIFFS ou LittleFS** para salvar os valores monitorados em `log.txt`.
* Opção de ativar/desativar registro via menu.
* Comando serial para leitura e exibição dos registros.

### ⚙️ Configuração

* **menuconfig** para definir pinos, parâmetros padrão e outras opções de pré-compilação.
* Habilitar/desabilitar funções sem necessidade de alterar o código principal.

---

## 🧩 Estrutura do Projeto

* **/components** → bibliotecas modulares (sensores, display, armazenamento, menu, etc.).
* **/main** → código principal de inicialização e loop do sistema.
* **CMakeLists.txt** → configuração de build.

---

## 📊 Diagrama de Blocos (Hardware)

```
+-------------------------+
| Franzininho WiFi LAB01 |
+-----------+-------------+
            |
   --------------------
   |        |         |
[DHT11]   [LDR]   [Display OLED]
   |                  |
   -----------+--------
               |
          [Controle/Relé]
```

---

## 🚀 Como Executar

```bash
# Clone o repositório
git clone https://github.com/laiscoutinho/Sistema-Embarcado-Monitoramento-Controle-Estufa-Franzininho-WiFi-LAB01-ESP-IDF.git
cd Sistema-Embarcado-Monitoramento-Controle-Estufa-Franzininho-WiFi-LAB01-ESP-IDF

# Rode o script de setup:
./setup.sh

# Abra um novo terminal (ou rode source ~/esp/esp-idf/export.sh) para ativar o ESP-IDF.
# Compile e rode:
idf.py set-target esp32
idf.py build
idf.py -p /dev/ttyUSB0 flash monitor

# No terminal no diretorio do seu projeto, rode:
idf.py set-target esp32

```

---

## 📖 Referências

* [Franzininho WiFi LAB01 no GitHub](https://github.com/Franzininho/Franzininho-WiFi-LAB01-ESP-IDF)
* [Documentação ESP-IDF](https://docs.espressif.com/projects/esp-idf/)
* [Artigo no Embarcados sobre Franzininho WiFi LAB01](https://embarcados.com.br/franzininho-wifi-lab01-um-laboratorio-completo-para-aprender-sobre-esp32/)
