// This is a private header subject to change.

#define AR_WRITE "archive{write}"

#define ar_write_check(L, narg) \
    ((struct archive**)luaL_checkudata((L), (narg), AR_WRITE))

int lua_archive_write(lua_State *L);
