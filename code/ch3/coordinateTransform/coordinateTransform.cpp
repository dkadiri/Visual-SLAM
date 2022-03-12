#include <iostream>
#include <cmath>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace Eigen;

int main(int argc, char **argv) {

	Quaterniond q1(0.35, 0.2, 0.3, 0.1), q2(-0.5, 0.4, -0.1, 0.2);
	q1.normalize();
	q2.normalize();
	Vector3d P1(0.5, 0, 0.2);

	Vector3d t1(0.3, 0.1, 0.1), t2(-0.1, 0.5, 0.3);

	Isometry3d T1(q1), T2(q2);
	T1.pretranslate(t1);
	T2.pretranslate(t2);

	cout << "Coordinates w.r.t to robot 2's coordinate system is : \n" << T2 * T1.inverse() * P1 << endl;

	return 0;

} 