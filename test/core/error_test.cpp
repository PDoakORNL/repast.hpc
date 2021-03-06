#include <gtest/gtest.h>

#include "repast_hpc/RepastProcess.h"
#include "repast_hpc/RepastErrors.h"

using namespace repast;
using namespace std;

class Errors: public testing::Test {

public:
  Errors() {
    repast::RepastProcess::init("./config.props");
  }

};

// tests are generated by create_error_tests_code.py script
// in scripts.

TEST_F(Errors, Repast_Error_1) {
  Repast_Error_1 r_error(0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_2) {
  Repast_Error_2<int> r_error(1, "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_3) {
  Repast_Error_3 r_error(0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_4) {
  Repast_Error_4 r_error(0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_5) {
  Repast_Error_5 r_error(0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_6) {
  Repast_Error_6<int> r_error(1, "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_7) {
  Repast_Error_7 r_error(0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_8) {
  Repast_Error_8 r_error(0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_9) {
  Repast_Error_9 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_10) {
  Repast_Error_10 r_error(0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_11) {
  Repast_Error_11<int> r_error(std::vector<int> { 0 }, 1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_12) {
  Repast_Error_12<int> r_error(std::vector<int> { 0 }, 1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_13) {
  Repast_Error_13 r_error(std::vector<double> { 0.0 }, std::vector<double> { 0.0 }, std::vector<double> { 0.0 });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_14) {
  Repast_Error_14 r_error(std::vector<int> { 0 }, std::vector<int> { 0 }, std::vector<int> { 0 });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_15) {
  Repast_Error_15 r_error(std::vector<double> { 0.0 }, std::vector<double> { 0.0 }, std::vector<double> { 0.0 });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_16) {
  Repast_Error_16 r_error(std::vector<int> { 0 }, std::vector<int> { 0 }, std::vector<int> { 0 });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_17) {
  Repast_Error_17 r_error(std::vector<double> { 0.0 }, std::vector<double> { 0.0 }, std::vector<double> { 0.0 });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_18) {
  Repast_Error_18 r_error(std::vector<int> { 0 }, std::vector<int> { 0 }, std::vector<int> { 0 });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_19) {
  Repast_Error_19 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_20) {
  Repast_Error_20 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_21) {
  Repast_Error_21 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_22) {
  Repast_Error_22 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_23) {
  Repast_Error_23 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_24) {
  Repast_Error_24 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_25) {
  Repast_Error_25 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_26) {
  Repast_Error_26 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_27) {
  Repast_Error_27 r_error("foo", std::vector<string> { "foo" });
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_28) {
  Repast_Error_28 r_error;
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_29) {
  Repast_Error_29 r_error;
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_30) {
  Repast_Error_30 r_error(0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_31) {
  Repast_Error_31<int> r_error(1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_32) {
  Repast_Error_32<int> r_error(1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_33) {
  Repast_Error_33 r_error;
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_34) {
  Repast_Error_34 r_error;
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_35) {
  Repast_Error_35<int> r_error(1, 1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_36) {
  Repast_Error_36<int> r_error(1, 1, 0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_37) {
  Repast_Error_37 r_error(std::vector<int> { 0 }, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_38) {
  Repast_Error_38 r_error(std::vector<double> { 0.0 }, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_39) {
  Repast_Error_39 r_error;
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_40) {
  Repast_Error_40<int> r_error(1, 0, 0, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_41) {
  Repast_Error_41 r_error(0, 0, "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_42) {
  Repast_Error_42 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_43) {
  Repast_Error_43 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_44) {
  Repast_Error_44 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_45) {
  Repast_Error_45 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_46) {
  Repast_Error_46 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_47) {
  Repast_Error_47<int> r_error(0, 0, 1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_48) {
  Repast_Error_48<int> r_error(0, 0, 1, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_49) {
  Repast_Error_49<int> r_error(0, 1);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_50) {
  Repast_Error_50<int> r_error(0, 1, 0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_51) {
  Repast_Error_51 r_error(0, 0, 0.0);
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_52) {
  Repast_Error_52 r_error(0, 0, "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_53) {
  Repast_Error_53 r_error("foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_54) {
  Repast_Error_54 r_error("foo", "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_55) {
  Repast_Error_55 r_error("foo", "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_56) {
  Repast_Error_56 r_error("foo", "foo");
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}
TEST_F(Errors, Repast_Error_57) {
  Repast_Error_57 r_error;
  ASSERT_TRUE(string(r_error.what()).size() > 0);
  try {
    throw r_error;
    FAIL();
  } catch (std::exception& e) {
    ASSERT_TRUE(string(e.what()).size() > 0);
  }
}

