/*
 * Linkdead base object.
 */
#pragma no_clone, no_shadow

#include <obj.h>
#include <base_object.h>

virtual inherit LIGHT;

private string name = 0;
private string* aliases = ({ });
private string|closure short_desc = 0;
private string|closure long_desc = 0;
private int weight = 1;
private int value = 0;

public void create() {

}

public int id(string str) {
  return str == name || str in aliases;
}

protected void set_name(string n) {
  name = n;
}

protected void set_aliases(string* names) {
  aliases = names;
}

private varargs string apply_string(string|closure var, string defaultVal) {
  if(stringp(var)) {
    return var;
  }
  if(closurep(var)) {
    return funcall(var, this_object());
  }
  return defaultVal || "";
}

protected void set_short(string|closure arg) {
  short_desc = arg;
}

public string short() {
  return apply_string(short_desc, "An object");
}

protected void set_long(string|closure arg) {
  long_desc = arg;
}

public string long() {
  return apply_string(long_desc, "A featureless object");
}

protected void set_weight(int w) {
  weight = w;
}

public int get_weight() {
  return weight;
}

protected void set_value(int v) {
  value = v;
}

public int get_value() {
  return value;
}
