#include <gtest/gtest.h>
#include "FacadePatternExample.h"

TEST(FacadeTest, SimpleOperation) {
    ConceptualExample::Facade facade;
    std::string expectedResult = "Facade initializes subsystems:\nSubsystem1: Initialized!\nSubsystem2: Initialized!\nFacade orders subsystems to perform actions:\nSubsystem1: Works!\nSubsystem2: Works too!\n";
    ASSERT_EQ(facade.simpleOperation(), expectedResult);
}

TEST(Subsystem1Test, ComplexOperation1) {
    ConceptualExample::Subsystem1 subsystem1;
    std::string expectedResult = "Subsystem1: Initialized!\n";
    ASSERT_EQ(subsystem1.complexOperation1(), expectedResult);
}

TEST(Subsystem2Test, ComplexOperation2) {
    ConceptualExample::Subsystem2 subsystem2;
    std::string expectedResult = "Subsystem2: Works too!\n";
    ASSERT_EQ(subsystem2.complexOperation2(), expectedResult);
}

