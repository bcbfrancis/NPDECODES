/**
 * @file
 * @brief NPDE homework SimpleLinearFiniteElements
 * @author Amélie Loher
 * @date 11/12/2019
 * @copyright Developed at ETH Zurich
 */

#include <string>

#include <Eigen/Core>

namespace SimpleLinearFiniteElements {

/**
 * @brief simple mesh data structure used for this problem
 */
struct TriaMesh2D {
  // Constructor: reads mesh data from file
  TriaMesh2D(std::string filename);

  Eigen::Matrix<double, 2, 3> operator[] (int i) const;

  static void addZComponent(std::string input_file, std::string output_file, const Eigen::VectorXd &z);

  // Data members describing geometry and topolgy
  Eigen::Matrix<double, Eigen::Dynamic, 2> Coordinates;
  Eigen::Matrix<int, Eigen::Dynamic, 3> Elements;
};

} // namespace SimpleLinearFiniteElements
