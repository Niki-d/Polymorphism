//#pragma once
#ifndef SHOT_H
#define SHOT_H

class GUN
{
public:
    virtual void shot() = 0;   // абстрактный класс. Наследники должны переопределять данный метод, ибо тоже будут считаться абстрактными. Для абстрактного класса нельзя создать объект 
};

class pistol : public GUN
{
public:
    void shot(); 
};

class pulemet : public GUN
{
public:
    void shot();
};

class player
{
public:
    void go_to(GUN* weapon);       // здесь наглядно видно, насколько удобен полиморфизм. Если бы не было virtual, то пришлось бы перегружать функци go _to 
};

#endif