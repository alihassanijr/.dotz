/* vifm
 * Copyright (C) 2001 Ken Steen.
 * Copyright (C) 2011 xaizek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef VIFM__MODES__FILE_INFO_H__
#define VIFM__MODES__FILE_INFO_H__

struct view_t;

/* Initializes file information dialog mode. */
void modfinfo_init(void);

/* Enters file information dialog mode. */
void modfinfo_enter(struct view_t *view);

/* Aborts file information dialog mode. */
void modfinfo_abort(void);

/* Redraws file information dialog mode. */
void modfinfo_redraw(void);

#endif /* VIFM__MODES__FILE_INFO_H__ */

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 filetype=c : */