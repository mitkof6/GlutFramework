/*
 * Vector3D.h
 *
 *  Created on: Oct 22, 2013
 *      Author: crow
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_

class Vector3D {
public:
	float x, y, z;

	Vector3D();
	Vector3D(const Vector3D &other);
	Vector3D(float xx, float yy, float zz);
	virtual ~Vector3D();

	Vector3D operator +(Vector3D other);
	Vector3D operator -(Vector3D other);
	Vector3D operator *(float c);

	void normalize();

	void toString();

};

#endif /* VECTOR3D_H_ */
