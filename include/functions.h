#ifndef __FUNCTIONS_H
#define __FUNCTIONS_H
#include <Arduino.h>
extern const int STEPS_PER_TURN; // Количество шагов для одного оборота двигателя.
extern const int ONE_SECOND;   //Одна секунда в млсек.
extern const int RPM_TO_SMOOTH;  //RPM при котором будет плавный разгон двигателя.
extern const int MAX_RPM;
extern const int LCD_ADDR;
extern uint8_t TURNS; //Количество оборотов для калибровки насоса.

extern bool toggle_dir;                // Направление вращения
extern float ml_per_Nturns;            //Производительность насоса в мл. за TURNS оборотов.
extern byte ml_per_Nturns_EEPROM; //Для записи в EEPROM.
extern int hours;                             // Переменные для
extern int minutes;                           //обратного отсчета
extern int secundes;                          // в режиме Углевания.
extern int steps_per_sec;                         //скорость мотора в шагах/сек.
extern int Minutes;                           //Для хранения времени в минутах в режиме Углевания (с обратным отсчетом).
extern int turns_to_dose;                     //Количество необходимых оборотов в режиме Розлив.
extern float ml_per_turn; //Производительность насоса в мл. за один оборот.
extern float liters_per_hour;                //Требуемая производительность в литрах за час.
extern float fl_turns_to_dose;
extern int rpm;                   //Обороты в минуту.
extern int ml_to_dose;   // Объём для режима ДОЗИРОВКА
extern bool carbonize_running;    //Процесс  углевания.
extern bool start_pressed;        //Фиксация события нажатой кнопки СТАРТ
extern bool stop_pressed;  //Фиксация события нажатой кнопки СТОП
extern bool double_click;         //Фиксация события двойного нажатия на кнопку энкодера.
extern bool regim_changed;        //Фиксация смены режима.
extern bool smooth_start;     //Фиксация режима разгона.
extern bool change_TURNS;         //Флаг разрешения изменения переменной TURNS.
extern long step_pulse;           //Период импульсов STEP в микросекундах. Только для интереса.
extern long step_frequency;       //Частота импульсов SIEP в Герцах.Только для интереса.
extern long move_to_position;     //Установка целевой позиции в шагах
extern uint8_t regim;             //Режимы работы ("Непрерывно", "Дозатор", "Углевание", "Калибровка").
extern const char dir_cw[]; // Символ вращения по часовой стрелке.
extern const char dir_ccw[]; // Символ вращения против часовой стрелки.
extern const char colon[];
//**************** Прототипы функций ************************************************************
int8_t readEncoder();               // Чтение показаний энкодера.
void checkEvents();                 // Проверка разных событий.
void staticDataOnLcd();             // Выполняется одно из: "Непрерывно", "Дозатор", "По времени", "Калибровка".
void dynamicDataOnLcd();            //Динамичеки меняющиеся данные на LCD.
void startButtonHandler();          //Обработка нажатия кнопки СТАРТ
void stopButtonHandle();            //Обработка нажатия кнопки СТОП
void holdingEncoderButtonHandler(); //Обработка удержания кнопки энкодера
void blinkLcd(byte count, bool change_TURNS);
bool countdownTime();               //Обратный отсчет установленного времени углевания.
void startMotor();                  //Запуск двигателя в зависимости от требуемой скорости.
void verifyEndOfRunningModes();     //Проверка окончания дозировки, калибровки, углевания.
void verifyButtonsPress();          //Проверка нажатия кнопок СТАРТ, СТОП и кнопки энкодера.
void intToString(int x, char *str); //Преобразование целого числа в строку
void invertString(char *str, int len);
void intToString(int x, char *str, int d);
//****************Конец прототипов функций*******************************************************

#endif