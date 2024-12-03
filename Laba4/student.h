#ifndef STUDENT_H
#define STUDENT_H

#include "pch.h"
#include "human.h"

class SmirnovStudent: public SmirnovHuman
{
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version);

protected:
    QString university;
    int pass;

public:

    QString getUniversity() const override { return university; }
    QString getPass() const override { return QString::fromStdString(std::to_string(pass)); }

    void setUniversity(QString university) override { this->university = university; }
    void setPass(int pass) override { this->pass = pass; }

    SmirnovStudent() = default;
    SmirnovStudent(const QString& name, int age, int height, int weight, const QString& university, int pass);

    QString getType() const override { return "Student"; }
};

#endif // STUDENT_H
