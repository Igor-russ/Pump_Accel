#ifndef INIT_H
#define INIT_H
//******************* Распределение пинов и определение констант ********************************
enum
{
    BUTTON_PIN    = 3,
    PLUS_PIN      = 4,
    MINUS_PIN     = 5,
    STEP_PIN      = 6,
    DIR_PIN       = 7,
    ENABLE_PIN    = 8,
    START_PIN     = 9,
    STOP_PIN      = 12,
    BACKLIGHT_PIN = 10
};
enum
{
    MOTOR_STEPS         = 200, //Количество шагов двигателя за один оборот.
    MICROSTEPS          = 16,  //Количество микрошагов на один шаг.
    MAX_LITERS_PER_HOUR = 30
};
//Режимы работы насоса.
enum
{
    ENDLESS,
    DOSATOR,
    CARBONIZE,
    CALIBRATE
};
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