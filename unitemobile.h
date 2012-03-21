#ifndef UNITEMOBILE_H
#define UNITEMOBILE_H

#include <vector>
#include <QPoint>
#include <QImage>
#include <QPainter>

#define TAILLE_UNITEMOBILE 32
#define PAS 30

class UniteMobile
{
private:
    QImage sonImage;
    QPointF saPosition;
    QPointF sonIncrement;
    std::vector<QPoint>* sonChemin;
    int sonPas;
    int sonEtapeChemin;

    void calcul(QPointF unePositionArrivee);
    void deplace();

public:
    UniteMobile(std::vector<QPoint>* unChemin);
    void logique();
    void affiche(QPainter* painter);
    QPoint getPositionEcran();
};

#endif // UNITEMOBILE_H
