#include <gtest/gtest.h>
#include "FacadePatternExample.h"

TEST(SubsystemTest, ComplexOperation1) {
  ConceptualExample::Subsystem1 subsystem;
  EXPECT_EQ(subsystem.complexOperation1(), "Expected result for complexOperation1");
}

TEST(SubsystemTest, ComplexOperation2) {
  ConceptualExample::Subsystem2 subsystem;
  EXPECT_EQ(subsystem.complexOperation2(), "Expected result for complexOperation2");
}

TEST(FacadeTest, SimpleOperation) {
  ConceptualExample::Facade facade;
  EXPECT_EQ(facade.simpleOperation(), "Expected result for simpleOperation");
}

