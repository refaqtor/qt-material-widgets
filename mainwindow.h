#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class About;
class FlatButtonExamples;
class RaisedButtonExamples;
class IconButtonExamples;
class AppBarExamples;
class TabsExamples;
class TableExamples;
class SliderExamples;
class ToggleExamples;
class RadioButtonExamples;
class CheckboxExamples;
class TextFieldExamples;
class ListExamples;
class AvatarExamples;
class QStackedLayout;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void showWidget(QAction *action);

private:
    void _initWidget();
    void _initMenu() const;

    QStackedLayout       *const _layout;
    FlatButtonExamples   *const _flatButtonExamples;
    RaisedButtonExamples *const _raisedButtonExamples;
    IconButtonExamples   *const _iconButtonExamples;
    AppBarExamples       *const _appBarExamples;
    TabsExamples         *const _tabsExamples;
    TableExamples        *const _tableExamples;
    SliderExamples       *const _sliderExamples;
    ToggleExamples       *const _toggleExamples;
    RadioButtonExamples  *const _radioButtonExamples;
    CheckboxExamples     *const _checkboxExamples;
    TextFieldExamples    *const _textFieldExamples;
    ListExamples         *const _listExamples;
    AvatarExamples       *const _avatarExamples;
    About                *const _about;
};

#endif // MAINWINDOW_H
