// Compatibility shims for D3DRM vector math functions.
// The real D3DRM library was removed from DirectX 8.0 (2001).
// These inline implementations replace the D3DRM math functions
// used throughout the VWorlds property code.
//
// Reference: property/vwgeomsp/d3dmath.cpp (original VWorlds math helpers)

#ifndef __D3DRMMATH_H__
#define __D3DRMMATH_H__

#include "d3drmdef.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

// D3DRMVectorNormalize - normalizes vector in place, returns pointer to v
// Edge case: zero-length vector is left unchanged
inline D3DVECTOR* D3DRMVectorNormalize(D3DVECTOR* v)
{
    float vx = v->x, vy = v->y, vz = v->z;
    float mod_sq = vx * vx + vy * vy + vz * vz;
    if (mod_sq == 0.0f)
        return v;
    float inv_mod = 1.0f / (float)sqrt(mod_sq);
    v->x = vx * inv_mod;
    v->y = vy * inv_mod;
    v->z = vz * inv_mod;
    return v;
}

// D3DRMVectorDotProduct - returns dot product of a and b
inline D3DVALUE D3DRMVectorDotProduct(D3DVECTOR* a, D3DVECTOR* b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

// D3DRMVectorCrossProduct - out = a x b (out may alias a or b)
inline D3DVECTOR* D3DRMVectorCrossProduct(D3DVECTOR* out, D3DVECTOR* a, D3DVECTOR* b)
{
    float ax = a->x, ay = a->y, az = a->z;
    float bx = b->x, by = b->y, bz = b->z;
    out->x = ay * bz - az * by;
    out->y = az * bx - ax * bz;
    out->z = ax * by - ay * bx;
    return out;
}

// D3DRMVectorModulus - returns length of vector
inline D3DVALUE D3DRMVectorModulus(D3DVECTOR* v)
{
    return (D3DVALUE)sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
}

// D3DRMVectorScale - out = v * s (out may alias v)
inline D3DVECTOR* D3DRMVectorScale(D3DVECTOR* out, D3DVECTOR* v, D3DVALUE s)
{
    out->x = v->x * s;
    out->y = v->y * s;
    out->z = v->z * s;
    return out;
}

// D3DRMVectorRotate - rotates v around axis by angle (radians) using Rodrigues' formula
// out = v*cos(a) + (axis x v)*sin(a) + axis*(axis . v)*(1 - cos(a))
// out may alias v. Zero-length axis returns v unchanged.
inline D3DVECTOR* D3DRMVectorRotate(D3DVECTOR* out, D3DVECTOR* v, D3DVECTOR* axis, D3DVALUE angle)
{
    // Normalize the axis
    float ax = axis->x, ay = axis->y, az = axis->z;
    float axis_len_sq = ax * ax + ay * ay + az * az;
    if (axis_len_sq == 0.0f) {
        out->x = v->x; out->y = v->y; out->z = v->z;
        return out;
    }
    float inv_len = 1.0f / (float)sqrt(axis_len_sq);
    ax *= inv_len; ay *= inv_len; az *= inv_len;

    float vx = v->x, vy = v->y, vz = v->z;
    float cos_a = (float)cos(angle);
    float sin_a = (float)sin(angle);
    float dot = ax * vx + ay * vy + az * vz;
    float one_minus_cos = 1.0f - cos_a;

    // Rodrigues' rotation formula
    out->x = vx * cos_a + (ay * vz - az * vy) * sin_a + ax * dot * one_minus_cos;
    out->y = vy * cos_a + (az * vx - ax * vz) * sin_a + ay * dot * one_minus_cos;
    out->z = vz * cos_a + (ax * vy - ay * vx) * sin_a + az * dot * one_minus_cos;
    return out;
}

#ifdef __cplusplus
}
#endif

#endif // __D3DRMMATH_H__
