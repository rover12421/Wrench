#ifndef FILTERINGEDIT_H
#define FILTERINGEDIT_H

#include <QPlainTextEdit>

class FilteringEdit : public QTextEdit
{
    Q_OBJECT
public:
    explicit FilteringEdit(QWidget *parent = 0);

signals:
    void nextEntry();
    void prevEntry();
    void nextPageOfEntries();
    void prevPageOfEntries();
    void firstEntry();
    void lastEntry();
    void selectedCurrentEntryWithText(QString);
    void getCurrentEntryForEdit();
    void selectedCurrentText(QString);
    void selectAllEntries();
public slots:
    void changeCurrentText(const QString&);
private:
    void keyPressEvent(QKeyEvent *);
};

#endif // FILTERINGEDIT_H
