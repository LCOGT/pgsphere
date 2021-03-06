#ifndef __PGS_CIRCLE_H__
#define __PGS_CIRCLE_H__

#include "euler.h"

/*
 * Spherical circle declarations
 */

/*
 * Spherical circle data structure: center and radius.
 */
typedef struct
{
	SPoint		center; /* the center of circle */
	float8		radius; /* the circle radius in radians */
} SCIRCLE;

/*
 * Checks whether two circles are equal.
 */
bool		scircle_eq(const SCIRCLE *c1, const SCIRCLE *c2);

/*
 * Checks whether circle contains point.
 */
bool		spoint_in_circle(const SPoint *p, const SCIRCLE *c);

/*
 * Transforms a circle using Euler transformation.
 */
void		euler_scircle_trans(SCIRCLE *out, const SCIRCLE *in, const SEuler *se);

/*
 * Takes the input and stores it as spherical circle.
 */
Datum		spherecircle_in(PG_FUNCTION_ARGS);

/*
 * Checks whether two circles are equal.
 */
Datum		spherecircle_equal(PG_FUNCTION_ARGS);

/*
 * Checks whether two circles are not equal.
 */
Datum		spherecircle_equal_neg(PG_FUNCTION_ARGS);

/*
 * Calculate the distance of two circles. If overlapping, this function
 * returns 0.0.
 */
Datum		spherecircle_distance(PG_FUNCTION_ARGS);

/*
 * Calculate the distance of circle and point. If circle contains point,
 * this function returns 0.0.
 */
Datum		spherecircle_point_distance(PG_FUNCTION_ARGS);

/*
 * Calculate the distance of point and circle. If circle contains point,
 * this function returns 0.0.
 */
Datum		spherecircle_point_distance_com(PG_FUNCTION_ARGS);

/*
 * Checks whether circle contains point.
 */
Datum		spherepoint_in_circle(PG_FUNCTION_ARGS);

/*
 * Checks whether circle doesn't contain point.
 */
Datum		spherepoint_in_circle_neg(PG_FUNCTION_ARGS);

/*
 * Checks whether circle contains point.
 */
Datum		spherepoint_in_circle_com(PG_FUNCTION_ARGS);

/*
 * Checks whether circle doesn't contain point.
 */
Datum		spherepoint_in_circle_com_neg(PG_FUNCTION_ARGS);

/*
 * Checks whether circle is contained by other circle.
 */
Datum		spherecircle_in_circle(PG_FUNCTION_ARGS);

/*
 * Checks whether circle is not contained by other circle.
 */
Datum		spherecircle_in_circle_neg(PG_FUNCTION_ARGS);

/*
 * Checks whether circle contains other circle.
 */
Datum		spherecircle_in_circle_com(PG_FUNCTION_ARGS);

/*
 * Checks whether circle does not contain other circle.
 */
Datum		spherecircle_in_circle_com_neg(PG_FUNCTION_ARGS);

/*
 * Checks whether two circle overlap.
 */
Datum		spherecircle_overlap(PG_FUNCTION_ARGS);

/*
 * Checks whether two circle overlap.
 */
Datum		spherecircle_overlap_neg(PG_FUNCTION_ARGS);

/*
 * Returns the center of circle.
 */
Datum		spherecircle_center(PG_FUNCTION_ARGS);

/*
 * Returns the radius of circle.
 */
Datum		spherecircle_radius(PG_FUNCTION_ARGS);

/*
 * Converts a point to a circle.
 */
Datum		spherepoint_to_circle(PG_FUNCTION_ARGS);

/*
 * Creates a circle from center and radius.
 */
Datum		spherecircle_by_center(PG_FUNCTION_ARGS);

/*
 * Calculates the area of a circle in square radians.
 */
Datum		spherecircle_area(PG_FUNCTION_ARGS);

/*
 * Calculates the circumference of a circle in radians.
 */
Datum		spherecircle_circ(PG_FUNCTION_ARGS);

/*
 * Transforms a circle using Euler transformation.
 */
Datum		spheretrans_circle(PG_FUNCTION_ARGS);

/*
 * Inverse transformation of a circle using Euler transformation.
 */
Datum		spheretrans_circle_inverse(PG_FUNCTION_ARGS);

#endif
