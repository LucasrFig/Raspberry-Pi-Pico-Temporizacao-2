──────────────────────────────────────────────────────────────────────  
# PROJETO - Temporização 2 - Rotina de temporização One Shot
(SUB GRUPO 6)  
**Aluno: Lucas Ricardo de Lima Figueiredo** 

──────────────────────────────────────────────────────────────────────  
## OBJETIVO DO PROJETO  
──────────────────────────────────────────────────────────────────────  

O objetivo deste projeto é criar uma rotina de temporização One Shot que só ative quando um botão for pressionado e que não possa ser interrompida;

──────────────────────────────────────────────────────────────────────  
## FUNCIONALIDADES DO PROJETO  
──────────────────────────────────────────────────────────────────────  

Ao apertar o botão A, acontece o seguinte:

**Momento 1:** Os três LEDs: Verde, Azul e Vermelho são acesos;

**Momento 2:** após 3 segundos o LED Verde apaga;

**Momento 3:** após 3 segundos o LED Azul apaga;

**Momento 4:** após 3 segundos o LED vermelho apaga;

**Obs:** Você só pode iniciar o ciclo novamente quando todos os LEDs apagarem, até lá, apertar o botão A novamente não vai resultar em nada.


──────────────────────────────────────────────────────────────────────  
## TECNOLOGIAS UTILIZADAS  
──────────────────────────────────────────────────────────────────────  
- Linguagem: C;
- Microcontrolador: Raspberry Pi Pico (RP2040);
- Plataforma de simulação Wokwi.

──────────────────────────────────────────────────────────────────────  
## COMO EXECUTAR O PROJETO
──────────────────────────────────────────────────────────────────────  
- **Clone o Repositório:**
  git clone [https://github.com/LucasrFig/Raspberry-Pi-Pico-Temporizacao-2.git](https://github.com/LucasrFig/Raspberry-Pi-Pico-Temporizacao-2.git)
  
- **Compile o Código:**
  Utilize o ambiente de desenvolvimento VS Code. 
  Instalar extensão: Raspberry Pi Pico.

- **Carregue na Raspberry Pi Pico:**
  Conecte a Raspberry Pi Pico em modo de boot.
  Copie o arquivo .uf2 gerado para a unidade de armazenamento da Pico.
