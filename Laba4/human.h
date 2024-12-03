#ifndef HUMAN_H
#define HUMAN_H

#include "pch.h"


class SmirnovHuman
{
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version);

protected:
    QString name;     // Имя
    int age;          // Возраст
    float height;     // Рост
    float weight;     // Вес


public:

    virtual QString getName() const { return name; }
    virtual QString getAge() const { return QString::fromStdString(std::to_string(age)); }
    virtual QString getHeight() const { return QString::fromStdString(std::to_string(height)); }
    virtual QString getWeight() const { return QString::fromStdString(std::to_string(weight)); }
    virtual QString getUniversity() const { return ""; }
    virtual QString getPass() const { return ""; }

    virtual void setName(QString name) { this->name = name; }
    virtual void setAge(int age) { this->age = age; }
    virtual void setHeight(float height) { this->height = height; }
    virtual void setWeight(float weight) { this->weight = weight; }
    virtual void setUniversity(QString university) {};
    virtual void setPass(int pass) {};


    SmirnovHuman() = default;
    SmirnovHuman(const QString& name, int age, int height, int weight);

    virtual ~SmirnovHuman() = default;

    virtual QString getType() const { return "Human"; }
};

#endif // HUMAN_H
