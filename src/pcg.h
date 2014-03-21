/*
2014, the dachshund authors.
*/

#ifndef __DS_PCG_H__
#define __DS_PCG_H__

void
ds_lum_init(const double * const skewer_x, const double * const skewer_y,
    const double * const pixel_weights);

void
ds_lum_free();

void
ds_compute_map(const double * const d, double * const m);

void
ds_smp_w_spm(double * const m);

void
ds_map_covar_diag(double * const M_diag);

#endif
