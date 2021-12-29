#include "discord.h"

int main()
{
    struct Application
    {
        struct IDiscordCore *core;
        struct IDiscordUsers *users;
    };

    struct Application app;
    // Don't forget to memset or otherwise initialize your classes!
    memset(&app, 0, sizeof(app));

    struct IDiscordCoreEvents *events;
    memset(&events, 0, sizeof(events));

    struct DiscordCreateParams params;
    params.client_id = 805024053382873088;
    params.flags = DiscordCreateFlags_Default;
    params.events = &events;
    params.event_data = &app;

    DiscordCreate(DISCORD_VERSION, &params, &app.core);
}