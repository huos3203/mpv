/*
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_ASPECT_H
#define MPLAYER_ASPECT_H
/* Stuff for correct aspect scaling. */

struct vo;
void panscan_init(struct vo *vo);
void panscan_calc_windowed(struct vo *vo);

void aspect_save_orig(struct vo *vo, int orgw, int orgh);

void aspect_save_prescale(struct vo *vo, int prew, int preh);

void aspect_save_screenres(struct vo *vo, int scrw, int scrh);

#define A_WINZOOM 2 ///< zoom to fill window size
#define A_ZOOM 1
#define A_NOZOOM 0

void aspect(struct vo *vo, int *srcw, int *srch, int zoom);
void aspect_fit(struct vo *vo, int *srcw, int *srch, int fitw, int fith);

#endif /* MPLAYER_ASPECT_H */
