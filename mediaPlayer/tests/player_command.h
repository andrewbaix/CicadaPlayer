//
// Created by pingkai on 2020/1/13.
//

#ifndef CICADAMEDIA_PLAYER_COMMAND_H
#define CICADAMEDIA_PLAYER_COMMAND_H


#include <MediaPlayer.h>

class player_command {
public:
    enum command {
        player_command_null,
        player_command_seek,
        player_command_loop,
        player_command_speed,
        player_command_volume,
    };

    player_command()= default;

    player_command(command cmd, int ts) : mID(cmd), timestamp(ts)
    {

    }

    command mID{player_command_null};
    int timestamp{0};
    int arg0{};

};

int command_loop(Cicada::MediaPlayer *player, void *arg);


#endif //CICADAMEDIA_PLAYER_COMMAND_H
