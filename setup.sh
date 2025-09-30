#!/bin/bash
# Setup do ambiente ESP-IDF para Franzininho WiFi LAB01 (Ubuntu)

echo "Atualizando pacotes..."
sudo apt update && sudo apt upgrade -y

echo "Instalando dependências..."
sudo apt install -y git wget flex bison gperf python3 python3-pip \
     cmake ninja-build ccache libffi-dev libssl-dev dfu-util \
     libusb-1.0-0 unzip build-essential

echo "Clonando ESP-IDF..."
mkdir -p ~/esp
cd ~/esp
if [ ! -d "esp-idf" ]; then
    git clone --recursive https://github.com/espressif/esp-idf.git
fi
cd esp-idf
git fetch --all
git checkout v5.1.2

echo "Instalando ferramentas ESP-IDF..."
./install.sh esp32

echo "Exportando variáveis do ESP-IDF..."
echo ". ~/esp/esp-idf/export.sh" >> ~/.bashrc
. ~/esp/esp-idf/export.sh

echo "Setup concluído! Reinicie o terminal ou rode '. ~/esp/esp-idf/export.sh' para ativar o ambiente."
