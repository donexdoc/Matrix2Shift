#define DATA_PIN 2  //DATA_PIN 1-го регистра
#define ST_PIN 3    //latch_pin общий
#define SH_PIN 4    //clock_pin 1-го регистра
#define DATA_PIN_2 5 //DATA_PIN 2-го регистра
#define SH_PIN_2 6   //clock_pin 2-го регистра

// матрицы для отключения логических единиц на строках
// первая матрица по какой-то причине не сработала, поэтому просто оставил для ознакомления и будущих экспериментов
byte pic0[8]{
    0b01111111,
    0b10111111,
    0b11011111,
    0b11101111,
    0b11110111,
    0b11111011,
    0b11111101,
    0b11111110};

// а вот эта матрица - инверсия первой, вполне подошла в моем случае
byte pic00[8]{
    0b10000000,
    0b01000000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000001};

// следующие две были сделаны только для эксперимента и в целом могут быть убраны
byte pic000[8]{
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b01000000,
    0b10000000};
byte pic0000[8]{
    0b11111110,
    0b11111101,
    0b11111011,
    0b11110111,
    0b11101111,
    0b11011111,
    0b10111111,
    0b01111111};

// остальные картинки были сделаны в виде битмапов в программе ImageProcessor, на него будет ссылка 

// шахматы
const uint8_t chess_1[] = {
    0x55,
    0xAA,
    0x55,
    0xAA,
    0x55,
    0xAA,
    0x55,
    0xAA,
};

const uint8_t chess_2[] = {
    0xAA,
    0x55,
    0xAA,
    0x55,
    0xAA,
    0x55,
    0xAA,
    0x55,
};

// собраны в один массив для удобства вывода анимации
const uint8_t *chess[] = {
    chess_1,
    chess_2};

// новый год картинки (картинка будет выводиться перевернутой, так как изначально были перепутаны x и y)
// переделывать лень, а выбросить жалко, решил оставить

const uint8_t bitmap_ny_1[] = {
    0x81,
    0x5A,
    0x24,
    0x5A,
    0x5A,
    0x24,
    0x5A,
    0x81,
};

const uint8_t bitmap_ny_2[] = {
    0x00,
    0x10,
    0x62,
    0xC8,
    0xC8,
    0x62,
    0x10,
    0x00,
};

const uint8_t bitmap_ny_3[] = {
    0x99,
    0x5A,
    0x3C,
    0xFF,
    0xFF,
    0x3C,
    0x5A,
    0x99,
};

const uint8_t bitmap_ny_4[] = {
    0x40,
    0xD0,
    0x28,
    0x54,
    0x2A,
    0x14,
    0x0B,
    0x02,
};

const uint8_t bitmap_ny_5[] = {
    0x3C,
    0x42,
    0xA5,
    0x99,
    0x99,
    0xA5,
    0x42,
    0x3C,
};

const uint8_t bitmap_ny_6[] = {
    0x99,
    0x66,
    0x18,
    0xA5,
    0xA5,
    0x18,
    0x66,
    0x99,
};

const uint8_t bitmap_empty[] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

// каждый кадр был размещен в массиве посследовательно, для функции анимации
const uint8_t *ny_pic[] = {
    bitmap_ny_1,
    bitmap_ny_2,
    bitmap_ny_3,
    bitmap_ny_4,
    bitmap_ny_5,
    bitmap_ny_6,
    bitmap_empty,
    bitmap_empty};

// новый год, надпись (тоже перевернута)

const uint8_t bitmap_s[] = {
    0x00,
    0x00,
    0x3C,
    0x42,
    0x42,
    0x42,
    0x00,
    0x00,
};

const uint8_t bitmap_n[] = {
    0x00,
    0x00,
    0x7C,
    0x10,
    0x10,
    0x7C,
    0x00,
    0x00,
};

const uint8_t bitmap_o[] = {
    0x00,
    0x00,
    0x7C,
    0x44,
    0x44,
    0x7C,
    0x00,
    0x00,
};

const uint8_t bitmap_v[] = {
    0x00,
    0x00,
    0x7C,
    0x54,
    0x54,
    0x38,
    0x00,
    0x00,
};

const uint8_t bitmap_i[] = {
    0x00,
    0x7C,
    0x50,
    0x70,
    0x00,
    0x7C,
    0x00,
    0x00,
};

const uint8_t bitmap_m[] = {
    0x00,
    0x7C,
    0x08,
    0x10,
    0x08,
    0x7C,
    0x00,
    0x00,
};

const uint8_t bitmap_g[] = {
    0x00,
    0x00,
    0x7C,
    0x04,
    0x04,
    0x00,
    0x00,
    0x00,
};

const uint8_t bitmap_d[] = {
    0x00,
    0x20,
    0x78,
    0x24,
    0x24,
    0x78,
    0x20,
    0x00,
};

const uint8_t bitmap_2[] = {
    0x00,
    0x00,
    0x72,
    0x52,
    0x52,
    0x5E,
    0x00,
    0x00,
};

const uint8_t bitmap_0[] = {
    0x00,
    0x00,
    0x7E,
    0x42,
    0x42,
    0x7E,
    0x00,
    0x00,
};

const uint8_t bitmap_1[] = {
    0x00,
    0x00,
    0x08,
    0x0C,
    0x7E,
    0x7E,
    0x00,
    0x00,
};

const uint8_t bitmap_sign[] = {
    0x00,
    0x00,
    0x00,
    0x5E,
    0x5E,
    0x00,
    0x00,
    0x00,
};

// пакуем в один массив
const uint8_t *ny_txt[] = {
    bitmap_s,
    bitmap_empty,
    bitmap_n,
    bitmap_o,
    bitmap_v,
    bitmap_i,
    bitmap_m,
    bitmap_empty,
    bitmap_g,
    bitmap_o,
    bitmap_d,
    bitmap_o,
    bitmap_m,
    bitmap_empty,
    bitmap_2,
    bitmap_0,
    bitmap_2,
    bitmap_1,
    bitmap_sign,
    bitmap_empty,
    bitmap_empty};

// надпись Pikabu, для демонстрации бегущей строки и анимаций

const uint8_t pikabu_p[8] = {
    0xFF,
    0xFF,
    0x83,
    0xED,
    0xED,
    0xF3,
    0xFF,
    0xFF,
};

const uint8_t pikabu_i[] = {
    0xFF,
    0xFF,
    0xFF,
    0x8B,
    0x8B,
    0xFF,
    0xFF,
    0xFF,
};

const uint8_t pikabu_k[] = {
    0xFF,
    0xFF,
    0x83,
    0xEF,
    0xD7,
    0xBB,
    0xFF,
    0xFF,
};

const uint8_t pikabu_a[] = {
    0xFF,
    0xFF,
    0x87,
    0xEB,
    0xEB,
    0x87,
    0xFF,
    0xFF,
};

const uint8_t pikabu_b[] = {
    0xFF,
    0xFF,
    0x83,
    0xAF,
    0xAF,
    0xDF,
    0xFF,
    0xFF,
};

const uint8_t pikabu_u[] = {
    0xFF,
    0xFF,
    0xC7,
    0xBF,
    0xBF,
    0xC7,
    0xFF,
    0xFF,
};

const uint8_t bitmap_test[] = {
    0xFE,
    0xFE,
    0xFE,
    0xFE,
    0xFE,
    0xFE,
    0xFE,
    0xFF,
};

// пакуем в один массив
const uint8_t *pikabu_line[] = {
    pikabu_p,
    pikabu_i,
    pikabu_k,
    pikabu_a,
    pikabu_b,
    pikabu_u};

// гасим всю матрицу по необходимости (оставлено от предыдущего автора)
void clr()
{
  digitalWrite(ST_PIN, 0);
  shiftOut(DATA_PIN, SH_PIN, LSBFIRST, 0b00000000);
  shiftOut(DATA_PIN_2, SH_PIN_2, LSBFIRST, 0b11111111);
  digitalWrite(ST_PIN, 1);
}

// рисуем картинку (оставлено от предыдущего автора, только с небольшими доработками)
// добавлен animation_delay для регулировки задержки в зваисимости от типа вывода
void printBitmap(uint8_t picture[8], int animation_delay = 500)
{
  //в этом блоке осуществляется вывод изображения на экран длительностью в 1 секунду (125*8мс)
  for (int frame = 0; frame < animation_delay / 8; frame++)
  {
    for (int i = 0; i < 8; i++)
    {
      //в этом цикле осуществляется вывод изображения, хранящегося в массиве ( выводится в обратном порядке чтобы изображение было в нормальной ориентации, при необходимости поменять на for (int i=0; i<8; i++))
      digitalWrite(ST_PIN, 0);
      shiftOut(DATA_PIN, SH_PIN, LSBFIRST, pic00[i]);
      shiftOut(DATA_PIN_2, SH_PIN_2, LSBFIRST, picture[i]);
      digitalWrite(ST_PIN, 1);
      delay(1);
    }
  }
}

// покадровый вывод изображений собранных в массив
void printAnimation(const uint8_t *animation_layers[], int frames, int animation_delay = 700)
{
  // выделяем свой собственный фрейм для функции, чтобы она в нем рисовала и не трогала основной массив
  uint8_t animation_frame[8];
  for (int frame = 0; frame < frames; frame++)
  { 
    // просто перебираем кадр за кадром
    // копируем в рабочий фрейм кадр из массива и рисуем его
    memcpy(animation_frame, animation_layers[frame], sizeof(animation_frame));
    printBitmap(animation_frame, animation_delay);
  }
}

// сдвигаем столбцы и заполняем последний
void bitmap_shift(uint8_t bitmap[8], uint8_t substitute = 0xFF)
{
  uint8_t *base_bitmap = bitmap;
  for (int index = 0; index < 8; index++) // проходимся по очереди по всем столбцам
  {
    if (index == 7) // если доходим до последнего столбца, то заменяем его на заданное значение
    {
      bitmap[index] = substitute;
    }
    else // в противном случае просто переносим содержимое столбцов влево на 1 
    {
      bitmap[index] = base_bitmap[index + 1];
    }
  }
}

// функция для отображения в виде бегущей строки
void creeping_line(const uint8_t *line[], int frames, int animation_delay = 200)
{
  // тут пройдемсмя подробнее
  // берем на чтение массив битмапов (массив массивов байтов) - line
  // получаем количество фреймов (битмапов), которые из него будем показывать - frames
  // указваем задержку при выводе битмапов


  // индекс текущей буквы/фрейма/битмапа
  int line_index = 0; 

  // индекс колонки, которую необходимо взять 
  // будет варьироваться от 0 до 7б т.к. битмап размером 8x8
  int line_shift_index = 0;

  // по сути мы генерируем каждый раз новый битмап
  // который наполняется данными из массива битмапов, 
  // поэтому считаем кол-во будущих фреймов с учетом сдвига в 1 колонку
  // количество показываемых фреймов из массива битмапов умноженное на кол-во столбцов в одном битмапе  - 8
  // плюс еще 4 пустых столбца, которые будут просто для красоты анимации. 
  int final_frames_count = frames * 8 + 4; 

  // выделяем для нашей функции свой битмап, который она сможет изменять
  uint8_t main_bitmap_frame[8];
  // скопируем начальный фрейм из массива, чтобы оперировать с переменной и не портить основное изображение
  memcpy(main_bitmap_frame, line[0], sizeof(main_bitmap_frame));

  // проходимся по всем заранее просчитанным кадрам бегущей строки
  for (int all_frame_index = 0; all_frame_index < final_frames_count; all_frame_index++)
  {

    if (line_index == frames - 1) // отлавливаем последний отображаемый битмап
    {
      bitmap_shift(main_bitmap_frame); // сдвигаем битмап влево, добавляя пустые столбцы (те самые 4 дополнительные столбцы)
      printBitmap(main_bitmap_frame, animation_delay); // выводим результат наших манипуляций
    }
    else
    {
      bitmap_shift(main_bitmap_frame, line[line_index + 1][line_shift_index]); // сдвигаем битмап влево, заполняя его данными столбцов из следующего
      printBitmap(main_bitmap_frame, animation_delay); // выводим результат наших манипуляций

      if (line_shift_index < 8) // следим за тем, чтобы забираемый столбец из след. битмапа не был больше 7
      {
        line_shift_index++;
      }
      else // как только дошли до последнего столбца, 
      {
        line_shift_index = 0; // возвращаемся на нулевой столбец
        line_index++; // делаем переход на следующий битмап из массива
      }
    }
  }
}

void setup()
{
  //задаем режим вывода на управляющих пинах
  for (int i = 2; i < 7; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{

  // мои знания в указателях не сильны, прошу не пинать

  creeping_line(pikabu_line, sizeof(pikabu_line) / 2, 100); // выводим массив битмапов в бегущей строке
  printAnimation(pikabu_line, sizeof(pikabu_line) / 2);     // теперь выведем тот же массив но с покадровой анимацией
  clr(); // гасим матрицу
}
