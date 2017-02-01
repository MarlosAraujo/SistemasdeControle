#include <QString>
#include <QtTest>
#define testPolynom
#define testModel
#include "../../../headers/modelLibs/integrativemodel.h"

class IntegrativeModelDoubleTest : public QObject
{
    Q_OBJECT

public:
    IntegrativeModelDoubleTest(){}

private Q_SLOTS:
    void voidConstructorCase1 ();
    void voidConstructorCase2 ();
};

void IntegrativeModelDoubleTest::voidConstructorCase1()
{

}

void IntegrativeModelDoubleTest::voidConstructorCase2()
{

}

QTEST_APPLESS_MAIN(IntegrativeModelDoubleTest)

#include "tst_integrativemodeldoubletest.moc"
