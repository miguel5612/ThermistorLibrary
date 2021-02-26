/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

const short temptable_148[][2] PROGMEM = {
// These values have been calculated and tested over many days.  See https://docs.google.com/spreadsheets/d/1MJXa6feEe0mGVCT2TrBwLxVOMoLDkJlvfQ4JXhAdV_E
// Values that are missing from the 5C gap are missing due to resolution limits.
{19.00000 * OVERSAMPLENR,  0},
{19.25000 * OVERSAMPLENR,  5},
{19.50000 * OVERSAMPLENR, 10},
{19.87500 * OVERSAMPLENR, 15},
{20.25000 * OVERSAMPLENR, 20},
{21.00000 * OVERSAMPLENR, 25},
{21.75000 * OVERSAMPLENR, 35},
{22.00000 * OVERSAMPLENR, 40},
{23.00000 * OVERSAMPLENR, 50},  // 55C is more commonly used.
{23.75000 * OVERSAMPLENR, 60},
{24.00000 * OVERSAMPLENR, 65},
{24.06250 * OVERSAMPLENR, 70},
{25.00000 * OVERSAMPLENR, 75},
{25.50000 * OVERSAMPLENR, 85},
{26.00000 * OVERSAMPLENR, 90},
{26.93750 * OVERSAMPLENR,100},
{27.00000 * OVERSAMPLENR,105},
{27.37500 * OVERSAMPLENR,110},
{28.00000 * OVERSAMPLENR,115},
{29.00000 * OVERSAMPLENR,125},
{29.25000 * OVERSAMPLENR,135},
{30.00000 * OVERSAMPLENR,140},
{35.50000 * OVERSAMPLENR,150},
{31.00000 * OVERSAMPLENR,155},
{32.00000 * OVERSAMPLENR,165},
{32.18750 * OVERSAMPLENR,175},
{33.00000 * OVERSAMPLENR,180},
{33.62500 * OVERSAMPLENR,190},
{34.00000 * OVERSAMPLENR,195},
{35.00000 * OVERSAMPLENR,205},
{35.50000 * OVERSAMPLENR,215},
{36.00000 * OVERSAMPLENR,220},
{36.75000 * OVERSAMPLENR,230},
{37.00000 * OVERSAMPLENR,235},
{37.75000 * OVERSAMPLENR,245},
{38.00000 * OVERSAMPLENR,250},
{38.12500 * OVERSAMPLENR,255},
{39.00000 * OVERSAMPLENR,260},
{40.00000 * OVERSAMPLENR,275},
{40.25000 * OVERSAMPLENR,285},
{41.00000 * OVERSAMPLENR,290},
{41.25000 * OVERSAMPLENR,300},
{42.00000 * OVERSAMPLENR,305},
{43.00000 * OVERSAMPLENR,315},
{43.25000 * OVERSAMPLENR,325},
{44.00000 * OVERSAMPLENR,330},
{44.18750 * OVERSAMPLENR,340},
{45.00000 * OVERSAMPLENR,345},
{45.25000 * OVERSAMPLENR,355},
{46.00000 * OVERSAMPLENR,360},
{46.62500 * OVERSAMPLENR,370},
{47.00000 * OVERSAMPLENR,375},
{47.25000 * OVERSAMPLENR,385},
{48.00000 * OVERSAMPLENR,390},
{48.75000 * OVERSAMPLENR,400},
{49.00000 * OVERSAMPLENR,405},
};