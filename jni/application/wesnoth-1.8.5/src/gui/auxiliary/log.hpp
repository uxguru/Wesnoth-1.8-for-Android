/* $Id: log.hpp 48450 2011-02-08 20:55:18Z mordante $ */
/*
   Copyright (C) 2009 - 2011 by Mark de Wever <koraq@xs4all.nl>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 2
   or at your option any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/** @file gui/auxiliary/log.hpp */

#ifndef GUI_AUXILIRY_LOG_HPP_INCLUDED
#define GUI_AUXILIRY_LOG_HPP_INCLUDED

#include "../../log.hpp"

namespace gui2 {

extern lg::log_domain log_gui_draw;
#define DBG_GUI_D LOG_STREAM_INDENT(debug, gui2::log_gui_draw)
#define LOG_GUI_D LOG_STREAM_INDENT(info,  gui2::log_gui_draw)
#define WRN_GUI_D LOG_STREAM_INDENT(warn,  gui2::log_gui_draw)
#define ERR_GUI_D LOG_STREAM_INDENT(err,   gui2::log_gui_draw)

extern lg::log_domain log_gui_event;
#define DBG_GUI_E LOG_STREAM_INDENT(debug, gui2::log_gui_event)
#define LOG_GUI_E LOG_STREAM_INDENT(info,  gui2::log_gui_event)
#define WRN_GUI_E LOG_STREAM_INDENT(warn,  gui2::log_gui_event)
#define ERR_GUI_E LOG_STREAM_INDENT(err,   gui2::log_gui_event)

extern lg::log_domain log_gui_general;
#define DBG_GUI_G LOG_STREAM_INDENT(debug, gui2::log_gui_general)
#define LOG_GUI_G LOG_STREAM_INDENT(info,  gui2::log_gui_general)
#define WRN_GUI_G LOG_STREAM_INDENT(warn,  gui2::log_gui_general)
#define ERR_GUI_G LOG_STREAM_INDENT(err,   gui2::log_gui_general)

extern lg::log_domain log_gui_layout;
#define DBG_GUI_L LOG_STREAM_INDENT(debug, gui2::log_gui_layout)
#define LOG_GUI_L LOG_STREAM_INDENT(info,  gui2::log_gui_layout)
#define WRN_GUI_L LOG_STREAM_INDENT(warn,  gui2::log_gui_layout)
#define ERR_GUI_L LOG_STREAM_INDENT(err,   gui2::log_gui_layout)

extern lg::log_domain log_gui_lifetime;
//lifetime logging only makes sense in debug level anyway
#define DBG_GUI_LF LOG_STREAM_INDENT(debug, gui2::log_gui_lifetime)


extern lg::log_domain log_gui_parse;
#define DBG_GUI_P LOG_STREAM_INDENT(debug, gui2::log_gui_parse)
#define LOG_GUI_P LOG_STREAM_INDENT(info,  gui2::log_gui_parse)
#define WRN_GUI_P LOG_STREAM_INDENT(warn,  gui2::log_gui_parse)
#define ERR_GUI_P LOG_STREAM_INDENT(err,   gui2::log_gui_parse)

} // namespace gui2

#endif
