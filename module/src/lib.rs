use mlua::prelude::*;

fn start(lua: &Lua, (): ()) -> LuaResult<()> {
    let table = lua.create_table()?;
    // table.set("test", "test")?;

    Ok(())
}

#[mlua_derive::lua_module]
pub fn testmodule(lua: &Lua) -> LuaResult<LuaTable> {
    let exports = lua.create_table()?;
    exports.set("start", lua.create_function(start)?)?;
    Ok(exports)
}
