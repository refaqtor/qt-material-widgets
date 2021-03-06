#ifndef CIRCULAR_PROGRESS_H
#define CIRCULAR_PROGRESS_H

#include <QProgressBar>
#include "lib/theme.h"

class CircularProgressPrivate;

class CircularProgress : public QProgressBar
{
    Q_OBJECT

    Q_PROPERTY(qreal lineWidth WRITE setLineWidth READ lineWidth)
    Q_PROPERTY(qreal size WRITE setSize READ size)
    Q_PROPERTY(QColor color WRITE setColor READ color)

public:
    explicit CircularProgress(QWidget *parent = 0);
    ~CircularProgress();

    void setProgressType(Material::ProgressType type);
    Material::ProgressType progressType() const;

    void setUseThemeColors(bool state);
    bool useThemeColors() const;

    void setLineWidth(qreal width);
    qreal lineWidth() const;

    void setSize(int size);
    int size() const;

    void setColor(const QColor &color);
    QColor color() const;

    QSize sizeHint() const;

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

    const QScopedPointer<CircularProgressPrivate> d_ptr;

private:
    Q_DISABLE_COPY(CircularProgress)
    Q_DECLARE_PRIVATE(CircularProgress)
};

#endif // CIRCULAR_PROGRESS_H
