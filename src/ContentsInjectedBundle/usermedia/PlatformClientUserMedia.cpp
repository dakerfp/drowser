#include "PlatformClient.h"
#include "UserMediaClient.h"
#include "MediaStreamCenter.h"

Nix::UserMediaClient* PlatformClient::createUserMediaClient()
{
    return new UserMediaClient();
}

Nix::MediaStreamCenter* PlatformClient::createMediaStreamCenter()
{
	return new MediaStreamCenter();
}