#include <string>
#include <vector>
#include <hiredis/hiredis.h>>

enum REPLY
{
    REPLY_OK = 0,
    REPLY_NULL,
    REPLY_ELEMENT_NULL,
    REPLY_ELEMENTCOUNT_ERROR,
    REPLY_KEY_ERROR,
    REPLY_KEY_TYPEERROR,
    REPLY_COMMAND_ERROR,
    REPLY_TYPE_ERROR,
    REPLY_TYPE_STR_EXCEED_LEN,
    REPLY_ERROR,
};

class CRedisServer
{
    
};