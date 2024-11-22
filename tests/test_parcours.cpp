#include "point2D.h"
#include "point3D.h"
#include "parcours2D.h"
#include "parcours3D.h"
#include <gtest/gtest.h>

// Test de CLpoint2D
TEST(Point2DTest, DistanceCalculation) {
    CLpoint2D p1(0.0, 0.0);
    CLpoint2D p2(3.0, 4.0);

    EXPECT_DOUBLE_EQ(p1.distance(p2), 5.0);
}

TEST(Point2DTest, DisplayCoordinates) {
    CLpoint2D p1(1.0, 2.0);
    testing::internal::CaptureStdout();
    p1.afficherCoordo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Point2D(1, 2)\n");
}

// Test de CLpoint3D
TEST(Point3DTest, DistanceCalculation) {
    CLpoint3D p1(0.0, 0.0, 0.0);
    CLpoint3D p2(1.0, 1.0, 1.0);

    EXPECT_NEAR(p1.distance(p2), 1.732, 1e-3);
}

TEST(Point3DTest, DisplayCoordinates) {
    CLpoint3D p1(3.0, 4.0, 5.0);
    testing::internal::CaptureStdout();
    p1.afficherCoordo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Point3D(3, 4, 5)\n");
}

// Test de CLparcours2D
TEST(Parcours2DTest, TotalDistance) {
    CLparcours2D parcours;
    parcours.ajouterPoint(new CLpoint2D(0.0, 0.0));
    parcours.ajouterPoint(new CLpoint2D(3.0, 4.0));

    EXPECT_DOUBLE_EQ(parcours.calculDistance(), 5.0);
}

// Test de CLparcours3D
TEST(Parcours3DTest, TotalDistance) {
    CLparcours3D parcours;
    parcours.ajouterPoint(new CLpoint3D(0.0, 0.0, 0.0));
    parcours.ajouterPoint(new CLpoint3D(1.0, 1.0, 1.0));

    EXPECT_NEAR(parcours.calculDistance(), 1.732, 1e-3);
}
