
#ifndef TEMPERATURA_H
  #define TEMPERATURA_H


class temperatura
{
  public:
    temperatura(int pin, int sensorNumber);
    float analog2temp();
  private:
    int _pin;
    int _sensorNumber;
};



#endif
