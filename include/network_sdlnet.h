/*
 * Seven Kingdoms: Ancient Adversaries
 *
 * Copyright 2011 Jesse Allen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

// Filename    : network_sdlnet.h
// Description : SDLNet implementation for Network

#ifndef _NETWORK_SDLNET_H
#define _NETWORK_SDLNET_H

#include <SDL_net.h>

class NetworkSDLNet
{
private:
	int initialized;

public:
	NetworkSDLNet();
	~NetworkSDLNet();

	int init();
	void deinit();

	int resolve_host(struct inet_address *ip, const char *name, uint16_t port);
};

#endif // _NETWORK_SDLNET_H
