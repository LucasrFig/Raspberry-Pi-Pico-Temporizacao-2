#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define led_red 13
#define led_blue 12
#define led_green 11
#define BUTTON 5

uint callback_active = 0;
uint time = 1;//Define fases dos leds
int64_t turn_off_callback(alarm_id_t id, void *userdata){
    if(time==3){
        printf("desligar vermelho\n");
        gpio_put(led_red,0);
        callback_active = 0;
        time=1;
    }else if(time==2){
        printf("desligar azul\n");
        gpio_put(led_blue,0);
        time++;
    }else if(time==1){
        printf("desligar verde\n");
        gpio_put(led_green,0);
        time++;
    }
    return 0;
}
int main()
{
    //Inicializar LEDs
    gpio_init(led_red);
    gpio_set_dir(led_red,GPIO_OUT);
    gpio_init(led_blue);
    gpio_set_dir(led_blue,GPIO_OUT);
    gpio_init(led_green);
    gpio_set_dir(led_green,GPIO_OUT);
    
    //inicializar botão
    gpio_init(BUTTON);
    gpio_set_dir(BUTTON,GPIO_IN);
    gpio_pull_up(BUTTON);

    //Iniciando funções stdio
    stdio_init_all();

    while (true) {
        
        //Se o Botão for pressionado e a minha função "turn_off_callback()"não estiver ativa
        //printf("callback_active:%d\n",callback_active);
        if(!gpio_get(BUTTON) && !callback_active){
            printf("Botão Pressionado\n");
            sleep_ms(50);
            if(!gpio_get(BUTTON)){
                gpio_put(led_red,1);
                gpio_put(led_green,1);
                gpio_put(led_blue,1);

                //Sinalizar que o alarme foi acionado
                callback_active = 1;
                //Aciona o alarme
                add_alarm_in_ms(3000,turn_off_callback,NULL,false);
                add_alarm_in_ms(6000,turn_off_callback,NULL,false);
                add_alarm_in_ms(9000,turn_off_callback,NULL,false);
            }
        }
        sleep_ms(10);
    }
}
