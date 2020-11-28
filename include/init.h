

//**************** Прототипы функций ************************************************************
int8_t readEncoder();  // Чтение показаний энкодера.
void checkEvents();// Проверка разных событий.
void staticDataOnLcd();// Выполняется одно из: "Непрерывно", "Дозатор", "По времени", "Калибровка".
void dynamicDataOnLcd();//Динамичеки меняющиеся данные на LCD.
void startButtonHandler();//Обработка нажатия кнопки СТАРТ
void stopButtonHandle();//Обработка нажатия кнопки СТОП
void holdingEncoderButtonHandler();//Обработка удержания кнопки энкодера
void blinkLcd(byte count, bool change_TURNS);
bool countdownTime();//Обратный отсчет установленного времени углевания.
void startMotor();//Запуск двигателя в зависимости от требуемой скорости.
void verifyEndOfRunningModes();//Проверка окончания дозировки, калибровки, углевания.
void verifyButtonsPress();//Проверка нажатия кнопок СТАРТ, СТОП и кнопки энкодера.
void intToString (int x, char *str); //Преобразование целого числа в строку
void invertString (char *str, int len);
void intToString (int x, char *str, int d);
//****************Конец прототипов функций*******************************************************

