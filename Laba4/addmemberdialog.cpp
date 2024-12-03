#include "addmemberdialog.h"
#include "ui_addmemberdialog.h"

AddMemberDialog::AddMemberDialog(QWidget *parent)
    : QDialog(parent)
    , allowClose(false)
    , ui(new Ui::AddMemberDialog)
{
    ui->setupUi(this);

    on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
}

AddMemberDialog::AddMemberDialog(const shared_ptr<SmirnovHuman> obj, QWidget *parent)
    : QDialog(parent)
    , allowClose(false)
    , ui(new Ui::AddMemberDialog)
{
    ui->setupUi(this);

    ui->comboBox->setCurrentIndex((obj->getType() == "Human") ? 0 : 1);
    ui->comboBox->setEnabled(false);
    ui->name->insert(obj->getName());
    ui->age->insert(obj->getAge());
    ui->height->insert(obj->getHeight());
    ui->weight->insert(obj->getWeight());
    ui->university->insert(obj->getUniversity());
    ui->pass->insert(obj->getPass());
    on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
}

AddMemberDialog::~AddMemberDialog()
{
    delete ui;
}

void AddMemberDialog::accept() {
    if (!allowClose) {
        return;
    } else {
        QDialog::accept();
    }

}

// void AddMemberDialog::closeEvent(QCloseEvent *event) {
//     if (allowClose) {
//         event->accept();
//     } else {
//         event->ignore();
//     }
// }

void AddMemberDialog::on_buttonBox_accepted()
{
    QString name = ui->name->text();
    bool ageOk = false, heightOk = false, weightOk = false, passOk = false;

    int age = ui->age->text().toInt(&ageOk);
    int height = ui->height->text().toFloat(&heightOk);
    int weight = ui->weight->text().toFloat(&weightOk);

    int pass = ui->pass->text().toInt(&passOk);
    QString university = ui->university->text();


    QString errorMessage;
    if (name.isEmpty()) {
        errorMessage += "Поле имени не может быть пустым.\n";
        ui->name->clear();
    }
    if (!ageOk) {
        errorMessage += "Введите числовое значение для возраста.\n";
        ui->age->clear();
    }
    if (!heightOk) {
        errorMessage += "Введите числовое значение для роста.\n";
        ui->height->clear();
    }
    if (!weightOk) {
        errorMessage += "Введите числовое значение для веса.\n";
        ui->weight->clear();
    }
    if (ui->comboBox->currentIndex() == 1) {  // Проверяем дополнительные поля для студента
        if (!passOk) {
            errorMessage += "Введите числовое значение для пропуска.\n";
            ui->pass->clear();
        }
        if (university.isEmpty()) {
            errorMessage += "Поле университета не может быть пустым.\n";
            ui->university->clear();
        }
    }


    if (!errorMessage.isEmpty()) {
        QMessageBox::warning(this, "Ошибка ввода", errorMessage);
        setAllowClose(false);
        return;
    }

    // Создаём объект
    if (ui->comboBox->currentIndex() == 1) {
        createdObject = std::make_unique<SmirnovStudent>(name, age, height, weight, university, pass);
    } else {
        createdObject = std::make_unique<SmirnovHuman>(name, age, height, weight);
    }

    setAllowClose(true);
    accept();  // Закрываем окно
}

std::shared_ptr<SmirnovHuman> AddMemberDialog::getCreatedObject() const {
    return std::move(createdObject);
}

void AddMemberDialog::on_comboBox_currentIndexChanged(int index)
{
    bool isDerived = (index == 1);
    ui->university->setEnabled(isDerived);
    ui->pass->setEnabled(isDerived);
}

