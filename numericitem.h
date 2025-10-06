#ifndef NUMERICITEM_H
#define NUMERICITEM_H

#include <QTableWidgetItem>

class NumericItem : public QTableWidgetItem
{
public:
    NumericItem(const QString &text = QString()) : QTableWidgetItem(text) {}

    // Compare numerically when both items contain numbers, fallback to default otherwise
    bool operator<(const QTableWidgetItem &other) const override
    {
        bool ok1 = false, ok2 = false;
        double v1 = text().toDouble(&ok1);
        double v2 = other.text().toDouble(&ok2);
        if (ok1 && ok2)
            return v1 < v2;
        if (ok1)
            return true; // numbers come before non-numbers
        if (ok2)
            return false;
        return QTableWidgetItem::operator<(other);
    }
};

#endif // NUMERICITEM_H
