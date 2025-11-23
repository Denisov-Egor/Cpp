/*
Часы показывают h часов, m минут и s секунд после полуночи.
Ваша задача — написать функцию, которая возвращает время, прошедшее с полуночи, в миллисекундах.
*/

int past(int h, int m, int s) 
{
  int hours_in_ms = h * 3600000;  
    int minutes_in_ms = m * 60000;   
    int seconds_in_ms = s * 1000;     
    
    return hours_in_ms + minutes_in_ms + seconds_in_ms;
}