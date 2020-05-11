#ifndef TEXTBUBBLE_H
#define TEXTBUBBLE_H

#include <QtWidgets/QLabel>
#include "common.h"


namespace netanim {

class TextBubble : public QLabel
{
public:
    TextBubble(QString title, QString content);
    ~TextBubble();

private:
signals:

public slots:
    
};

} // namespace netanim
#endif // TEXTBUBBLE_H
